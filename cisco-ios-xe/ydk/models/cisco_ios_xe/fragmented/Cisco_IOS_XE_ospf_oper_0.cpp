
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_ospf_oper_0.hpp"
#include "Cisco_IOS_XE_ospf_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_ospf_oper {

OspfOperData::OspfOperData()
    :
    ospf_state(nullptr) // presence node
    , ospfv2_instance(this, {"instance_id"})
{

    yang_name = "ospf-oper-data"; yang_parent_name = "Cisco-IOS-XE-ospf-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

OspfOperData::~OspfOperData()
{
}

bool OspfOperData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfv2_instance.len(); index++)
    {
        if(ospfv2_instance[index]->has_data())
            return true;
    }
    return (ospf_state !=  nullptr && ospf_state->has_data());
}

bool OspfOperData::has_operation() const
{
    for (std::size_t index=0; index<ospfv2_instance.len(); index++)
    {
        if(ospfv2_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ospf_state !=  nullptr && ospf_state->has_operation());
}

std::string OspfOperData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ospf-oper:ospf-oper-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf-state")
    {
        if(ospf_state == nullptr)
        {
            ospf_state = std::make_shared<OspfOperData::OspfState>();
        }
        return ospf_state;
    }

    if(child_yang_name == "ospfv2-instance")
    {
        auto c = std::make_shared<OspfOperData::Ospfv2Instance>();
        c->parent = this;
        ospfv2_instance.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ospf_state != nullptr)
    {
        children["ospf-state"] = ospf_state;
    }

    count = 0;
    for (auto c : ospfv2_instance.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OspfOperData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OspfOperData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> OspfOperData::clone_ptr() const
{
    return std::make_shared<OspfOperData>();
}

std::string OspfOperData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string OspfOperData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function OspfOperData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> OspfOperData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool OspfOperData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospf-state" || name == "ospfv2-instance")
        return true;
    return false;
}

OspfOperData::OspfState::OspfState()
    :
    op_mode{YType::enumeration, "op-mode"}
        ,
    ospf_instance(this, {"af", "router_id"})
{

    yang_name = "ospf-state"; yang_parent_name = "ospf-oper-data"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

OspfOperData::OspfState::~OspfState()
{
}

bool OspfOperData::OspfState::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospf_instance.len(); index++)
    {
        if(ospf_instance[index]->has_data())
            return true;
    }
    return op_mode.is_set;
}

bool OspfOperData::OspfState::has_operation() const
{
    for (std::size_t index=0; index<ospf_instance.len(); index++)
    {
        if(ospf_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(op_mode.yfilter);
}

std::string OspfOperData::OspfState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ospf-oper:ospf-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string OspfOperData::OspfState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (op_mode.is_set || is_set(op_mode.yfilter)) leaf_name_data.push_back(op_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf-instance")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance>();
        c->parent = this;
        ospf_instance.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospf_instance.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OspfOperData::OspfState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "op-mode")
    {
        op_mode = value;
        op_mode.value_namespace = name_space;
        op_mode.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "op-mode")
    {
        op_mode.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospf-instance" || name == "op-mode")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfInstance()
    :
    af{YType::enumeration, "af"},
    router_id{YType::uint32, "router-id"},
    process_id{YType::uint16, "process-id"}
        ,
    ospf_area(this, {"area_id"})
    , link_scope_lsas(this, {"lsa_type"})
    , multi_topology(this, {"name"})
{

    yang_name = "ospf-instance"; yang_parent_name = "ospf-state"; is_top_level_class = false; has_list_ancestor = false; 
}

OspfOperData::OspfState::OspfInstance::~OspfInstance()
{
}

bool OspfOperData::OspfState::OspfInstance::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospf_area.len(); index++)
    {
        if(ospf_area[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<link_scope_lsas.len(); index++)
    {
        if(link_scope_lsas[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multi_topology.len(); index++)
    {
        if(multi_topology[index]->has_data())
            return true;
    }
    return af.is_set
	|| router_id.is_set
	|| process_id.is_set;
}

bool OspfOperData::OspfState::OspfInstance::has_operation() const
{
    for (std::size_t index=0; index<ospf_area.len(); index++)
    {
        if(ospf_area[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<link_scope_lsas.len(); index++)
    {
        if(link_scope_lsas[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multi_topology.len(); index++)
    {
        if(multi_topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(process_id.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ospf-oper:ospf-oper-data/ospf-state/" << get_segment_path();
    return path_buffer.str();
}

std::string OspfOperData::OspfState::OspfInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-instance";
    ADD_KEY_TOKEN(af, "af");
    ADD_KEY_TOKEN(router_id, "router-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf-area")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea>();
        c->parent = this;
        ospf_area.append(c);
        return c;
    }

    if(child_yang_name == "link-scope-lsas")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas>();
        c->parent = this;
        link_scope_lsas.append(c);
        return c;
    }

    if(child_yang_name == "multi-topology")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::MultiTopology>();
        c->parent = this;
        multi_topology.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospf_area.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : link_scope_lsas.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : multi_topology.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospf-area" || name == "link-scope-lsas" || name == "multi-topology" || name == "af" || name == "router-id" || name == "process-id")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfArea()
    :
    area_id{YType::uint32, "area-id"}
        ,
    ospf_interface(this, {"name"})
    , area_scope_lsa(this, {"lsa_type"})
{

    yang_name = "ospf-area"; yang_parent_name = "ospf-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::~OspfArea()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospf_interface.len(); index++)
    {
        if(ospf_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<area_scope_lsa.len(); index++)
    {
        if(area_scope_lsa[index]->has_data())
            return true;
    }
    return area_id.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::has_operation() const
{
    for (std::size_t index=0; index<ospf_interface.len(); index++)
    {
        if(ospf_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<area_scope_lsa.len(); index++)
    {
        if(area_scope_lsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-area";
    ADD_KEY_TOKEN(area_id, "area-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospf-interface")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface>();
        c->parent = this;
        ospf_interface.append(c);
        return c;
    }

    if(child_yang_name == "area-scope-lsa")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa>();
        c->parent = this;
        area_scope_lsa.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospf_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : area_scope_lsa.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospf-interface" || name == "area-scope-lsa" || name == "area-id")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfInterface()
    :
    name{YType::str, "name"},
    network_type{YType::enumeration, "network-type"},
    passive{YType::boolean, "passive"},
    demand_circuit{YType::boolean, "demand-circuit"},
    node_flag{YType::boolean, "node-flag"},
    cost{YType::uint16, "cost"},
    hello_interval{YType::uint16, "hello-interval"},
    dead_interval{YType::uint16, "dead-interval"},
    retransmit_interval{YType::uint16, "retransmit-interval"},
    transmit_delay{YType::uint16, "transmit-delay"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    lls{YType::boolean, "lls"},
    prefix_suppression{YType::boolean, "prefix-suppression"},
    bfd{YType::boolean, "bfd"},
    enable{YType::boolean, "enable"},
    state{YType::str, "state"},
    hello_timer{YType::uint32, "hello-timer"},
    wait_timer{YType::uint32, "wait-timer"},
    dr{YType::str, "dr"},
    bdr{YType::str, "bdr"},
    priority{YType::uint8, "priority"}
        ,
    multi_area(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::MultiArea>())
    , static_neighbor(this, {"address"})
    , fast_reroute(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::FastReroute>())
    , ttl_security(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::TtlSecurity>())
    , authentication(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication>())
    , ospf_neighbor(this, {"neighbor_id"})
    , intf_link_scope_lsas(this, {"lsa_type"})
    , intf_multi_topology(this, {"name"})
{
    multi_area->parent = this;
    fast_reroute->parent = this;
    ttl_security->parent = this;
    authentication->parent = this;

    yang_name = "ospf-interface"; yang_parent_name = "ospf-area"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::~OspfInterface()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<static_neighbor.len(); index++)
    {
        if(static_neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf_neighbor.len(); index++)
    {
        if(ospf_neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<intf_link_scope_lsas.len(); index++)
    {
        if(intf_link_scope_lsas[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<intf_multi_topology.len(); index++)
    {
        if(intf_multi_topology[index]->has_data())
            return true;
    }
    return name.is_set
	|| network_type.is_set
	|| passive.is_set
	|| demand_circuit.is_set
	|| node_flag.is_set
	|| cost.is_set
	|| hello_interval.is_set
	|| dead_interval.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| mtu_ignore.is_set
	|| lls.is_set
	|| prefix_suppression.is_set
	|| bfd.is_set
	|| enable.is_set
	|| state.is_set
	|| hello_timer.is_set
	|| wait_timer.is_set
	|| dr.is_set
	|| bdr.is_set
	|| priority.is_set
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data())
	|| (authentication !=  nullptr && authentication->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::has_operation() const
{
    for (std::size_t index=0; index<static_neighbor.len(); index++)
    {
        if(static_neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf_neighbor.len(); index++)
    {
        if(ospf_neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<intf_link_scope_lsas.len(); index++)
    {
        if(intf_link_scope_lsas[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<intf_multi_topology.len(); index++)
    {
        if(intf_multi_topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(network_type.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| ydk::is_set(node_flag.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(lls.yfilter)
	|| ydk::is_set(prefix_suppression.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(hello_timer.yfilter)
	|| ydk::is_set(wait_timer.yfilter)
	|| ydk::is_set(dr.yfilter)
	|| ydk::is_set(bdr.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (network_type.is_set || is_set(network_type.yfilter)) leaf_name_data.push_back(network_type.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (node_flag.is_set || is_set(node_flag.yfilter)) leaf_name_data.push_back(node_flag.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (lls.is_set || is_set(lls.yfilter)) leaf_name_data.push_back(lls.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.yfilter)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (hello_timer.is_set || is_set(hello_timer.yfilter)) leaf_name_data.push_back(hello_timer.get_name_leafdata());
    if (wait_timer.is_set || is_set(wait_timer.yfilter)) leaf_name_data.push_back(wait_timer.get_name_leafdata());
    if (dr.is_set || is_set(dr.yfilter)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (bdr.is_set || is_set(bdr.yfilter)) leaf_name_data.push_back(bdr.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "static-neighbor")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::StaticNeighbor>();
        c->parent = this;
        static_neighbor.append(c);
        return c;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::TtlSecurity>();
        }
        return ttl_security;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "ospf-neighbor")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor>();
        c->parent = this;
        ospf_neighbor.append(c);
        return c;
    }

    if(child_yang_name == "intf-link-scope-lsas")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas>();
        c->parent = this;
        intf_link_scope_lsas.append(c);
        return c;
    }

    if(child_yang_name == "intf-multi-topology")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfMultiTopology>();
        c->parent = this;
        intf_multi_topology.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(multi_area != nullptr)
    {
        children["multi-area"] = multi_area;
    }

    count = 0;
    for (auto c : static_neighbor.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    count = 0;
    for (auto c : ospf_neighbor.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : intf_link_scope_lsas.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : intf_multi_topology.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-type")
    {
        network_type = value;
        network_type.value_namespace = name_space;
        network_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
        demand_circuit.value_namespace = name_space;
        demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-flag")
    {
        node_flag = value;
        node_flag.value_namespace = name_space;
        node_flag.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lls")
    {
        lls = value;
        lls.value_namespace = name_space;
        lls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
        prefix_suppression.value_namespace = name_space;
        prefix_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-timer")
    {
        hello_timer = value;
        hello_timer.value_namespace = name_space;
        hello_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-timer")
    {
        wait_timer = value;
        wait_timer.value_namespace = name_space;
        wait_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr")
    {
        dr = value;
        dr.value_namespace = name_space;
        dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdr")
    {
        bdr = value;
        bdr.value_namespace = name_space;
        bdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "network-type")
    {
        network_type.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit.yfilter = yfilter;
    }
    if(value_path == "node-flag")
    {
        node_flag.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "lls")
    {
        lls.yfilter = yfilter;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "hello-timer")
    {
        hello_timer.yfilter = yfilter;
    }
    if(value_path == "wait-timer")
    {
        wait_timer.yfilter = yfilter;
    }
    if(value_path == "dr")
    {
        dr.yfilter = yfilter;
    }
    if(value_path == "bdr")
    {
        bdr.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multi-area" || name == "static-neighbor" || name == "fast-reroute" || name == "ttl-security" || name == "authentication" || name == "ospf-neighbor" || name == "intf-link-scope-lsas" || name == "intf-multi-topology" || name == "name" || name == "network-type" || name == "passive" || name == "demand-circuit" || name == "node-flag" || name == "cost" || name == "hello-interval" || name == "dead-interval" || name == "retransmit-interval" || name == "transmit-delay" || name == "mtu-ignore" || name == "lls" || name == "prefix-suppression" || name == "bfd" || name == "enable" || name == "state" || name == "hello-timer" || name == "wait-timer" || name == "dr" || name == "bdr" || name == "priority")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::MultiArea::MultiArea()
    :
    multi_area_id{YType::uint32, "multi-area-id"},
    cost{YType::uint16, "cost"}
{

    yang_name = "multi-area"; yang_parent_name = "ospf-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::MultiArea::~MultiArea()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::MultiArea::has_data() const
{
    if (is_presence_container) return true;
    return multi_area_id.is_set
	|| cost.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::MultiArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multi_area_id.yfilter)
	|| ydk::is_set(cost.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::MultiArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multi_area_id.is_set || is_set(multi_area_id.yfilter)) leaf_name_data.push_back(multi_area_id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::MultiArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multi-area-id")
    {
        multi_area_id = value;
        multi_area_id.value_namespace = name_space;
        multi_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::MultiArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multi-area-id")
    {
        multi_area_id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::MultiArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multi-area-id" || name == "cost")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::StaticNeighbor::StaticNeighbor()
    :
    address{YType::str, "address"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint16, "poll-interval"}
{

    yang_name = "static-neighbor"; yang_parent_name = "ospf-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::StaticNeighbor::~StaticNeighbor()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::StaticNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| cost.is_set
	|| poll_interval.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::StaticNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(poll_interval.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::StaticNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-neighbor";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::StaticNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::StaticNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::StaticNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::StaticNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::StaticNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::StaticNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "cost" || name == "poll-interval")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::FastReroute::FastReroute()
    :
    candidate_disabled{YType::boolean, "candidate-disabled"},
    enabled{YType::boolean, "enabled"},
    remote_lfa_enabled{YType::boolean, "remote-lfa-enabled"}
{

    yang_name = "fast-reroute"; yang_parent_name = "ospf-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::FastReroute::~FastReroute()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::FastReroute::has_data() const
{
    if (is_presence_container) return true;
    return candidate_disabled.is_set
	|| enabled.is_set
	|| remote_lfa_enabled.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(candidate_disabled.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(remote_lfa_enabled.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate_disabled.is_set || is_set(candidate_disabled.yfilter)) leaf_name_data.push_back(candidate_disabled.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (remote_lfa_enabled.is_set || is_set(remote_lfa_enabled.yfilter)) leaf_name_data.push_back(remote_lfa_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "candidate-disabled")
    {
        candidate_disabled = value;
        candidate_disabled.value_namespace = name_space;
        candidate_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-enabled")
    {
        remote_lfa_enabled = value;
        remote_lfa_enabled.value_namespace = name_space;
        remote_lfa_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "candidate-disabled")
    {
        candidate_disabled.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-enabled")
    {
        remote_lfa_enabled.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-disabled" || name == "enabled" || name == "remote-lfa-enabled")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::TtlSecurity::TtlSecurity()
    :
    enabled{YType::boolean, "enabled"},
    hops{YType::uint8, "hops"}
{

    yang_name = "ttl-security"; yang_parent_name = "ospf-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::TtlSecurity::~TtlSecurity()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::TtlSecurity::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| hops.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::TtlSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(hops.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::TtlSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::TtlSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::TtlSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::TtlSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "hops")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::Authentication()
    :
    sa{YType::str, "sa"},
    key_chain{YType::str, "key-chain"},
    key_string{YType::str, "key-string"},
    no_auth{YType::uint32, "no-auth"}
        ,
    crypto_algorithm_val(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::CryptoAlgorithmVal>())
{
    crypto_algorithm_val->parent = this;

    yang_name = "authentication"; yang_parent_name = "ospf-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::~Authentication()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return sa.is_set
	|| key_chain.is_set
	|| key_string.is_set
	|| no_auth.is_set
	|| (crypto_algorithm_val !=  nullptr && crypto_algorithm_val->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(key_string.yfilter)
	|| ydk::is_set(no_auth.yfilter)
	|| (crypto_algorithm_val !=  nullptr && crypto_algorithm_val->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa.is_set || is_set(sa.yfilter)) leaf_name_data.push_back(sa.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (key_string.is_set || is_set(key_string.yfilter)) leaf_name_data.push_back(key_string.get_name_leafdata());
    if (no_auth.is_set || is_set(no_auth.yfilter)) leaf_name_data.push_back(no_auth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crypto-algorithm-val")
    {
        if(crypto_algorithm_val == nullptr)
        {
            crypto_algorithm_val = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::CryptoAlgorithmVal>();
        }
        return crypto_algorithm_val;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(crypto_algorithm_val != nullptr)
    {
        children["crypto-algorithm-val"] = crypto_algorithm_val;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa")
    {
        sa = value;
        sa.value_namespace = name_space;
        sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-string")
    {
        key_string = value;
        key_string.value_namespace = name_space;
        key_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-auth")
    {
        no_auth = value;
        no_auth.value_namespace = name_space;
        no_auth.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa")
    {
        sa.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "key-string")
    {
        key_string.yfilter = yfilter;
    }
    if(value_path == "no-auth")
    {
        no_auth.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crypto-algorithm-val" || name == "sa" || name == "key-chain" || name == "key-string" || name == "no-auth")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::CryptoAlgorithmVal::CryptoAlgorithmVal()
    :
    hmac_sha1_12{YType::empty, "hmac-sha1-12"},
    hmac_sha1_20{YType::empty, "hmac-sha1-20"},
    md5{YType::empty, "md5"},
    sha_1{YType::empty, "sha-1"},
    hmac_sha_1{YType::empty, "hmac-sha-1"},
    hmac_sha_256{YType::empty, "hmac-sha-256"},
    hmac_sha_384{YType::empty, "hmac-sha-384"},
    hmac_sha_512{YType::empty, "hmac-sha-512"}
{

    yang_name = "crypto-algorithm-val"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::CryptoAlgorithmVal::~CryptoAlgorithmVal()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::CryptoAlgorithmVal::has_data() const
{
    if (is_presence_container) return true;
    return hmac_sha1_12.is_set
	|| hmac_sha1_20.is_set
	|| md5.is_set
	|| sha_1.is_set
	|| hmac_sha_1.is_set
	|| hmac_sha_256.is_set
	|| hmac_sha_384.is_set
	|| hmac_sha_512.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::CryptoAlgorithmVal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hmac_sha1_12.yfilter)
	|| ydk::is_set(hmac_sha1_20.yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(sha_1.yfilter)
	|| ydk::is_set(hmac_sha_1.yfilter)
	|| ydk::is_set(hmac_sha_256.yfilter)
	|| ydk::is_set(hmac_sha_384.yfilter)
	|| ydk::is_set(hmac_sha_512.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::CryptoAlgorithmVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crypto-algorithm-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::CryptoAlgorithmVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hmac_sha1_12.is_set || is_set(hmac_sha1_12.yfilter)) leaf_name_data.push_back(hmac_sha1_12.get_name_leafdata());
    if (hmac_sha1_20.is_set || is_set(hmac_sha1_20.yfilter)) leaf_name_data.push_back(hmac_sha1_20.get_name_leafdata());
    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha_1.is_set || is_set(sha_1.yfilter)) leaf_name_data.push_back(sha_1.get_name_leafdata());
    if (hmac_sha_1.is_set || is_set(hmac_sha_1.yfilter)) leaf_name_data.push_back(hmac_sha_1.get_name_leafdata());
    if (hmac_sha_256.is_set || is_set(hmac_sha_256.yfilter)) leaf_name_data.push_back(hmac_sha_256.get_name_leafdata());
    if (hmac_sha_384.is_set || is_set(hmac_sha_384.yfilter)) leaf_name_data.push_back(hmac_sha_384.get_name_leafdata());
    if (hmac_sha_512.is_set || is_set(hmac_sha_512.yfilter)) leaf_name_data.push_back(hmac_sha_512.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::CryptoAlgorithmVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::CryptoAlgorithmVal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::CryptoAlgorithmVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hmac-sha1-12")
    {
        hmac_sha1_12 = value;
        hmac_sha1_12.value_namespace = name_space;
        hmac_sha1_12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha1-20")
    {
        hmac_sha1_20 = value;
        hmac_sha1_20.value_namespace = name_space;
        hmac_sha1_20.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha-1")
    {
        sha_1 = value;
        sha_1.value_namespace = name_space;
        sha_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha-1")
    {
        hmac_sha_1 = value;
        hmac_sha_1.value_namespace = name_space;
        hmac_sha_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha-256")
    {
        hmac_sha_256 = value;
        hmac_sha_256.value_namespace = name_space;
        hmac_sha_256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha-384")
    {
        hmac_sha_384 = value;
        hmac_sha_384.value_namespace = name_space;
        hmac_sha_384.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hmac-sha-512")
    {
        hmac_sha_512 = value;
        hmac_sha_512.value_namespace = name_space;
        hmac_sha_512.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::CryptoAlgorithmVal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hmac-sha1-12")
    {
        hmac_sha1_12.yfilter = yfilter;
    }
    if(value_path == "hmac-sha1-20")
    {
        hmac_sha1_20.yfilter = yfilter;
    }
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "sha-1")
    {
        sha_1.yfilter = yfilter;
    }
    if(value_path == "hmac-sha-1")
    {
        hmac_sha_1.yfilter = yfilter;
    }
    if(value_path == "hmac-sha-256")
    {
        hmac_sha_256.yfilter = yfilter;
    }
    if(value_path == "hmac-sha-384")
    {
        hmac_sha_384.yfilter = yfilter;
    }
    if(value_path == "hmac-sha-512")
    {
        hmac_sha_512.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::Authentication::CryptoAlgorithmVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hmac-sha1-12" || name == "hmac-sha1-20" || name == "md5" || name == "sha-1" || name == "hmac-sha-1" || name == "hmac-sha-256" || name == "hmac-sha-384" || name == "hmac-sha-512")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::OspfNeighbor()
    :
    neighbor_id{YType::str, "neighbor-id"},
    address{YType::str, "address"},
    dr{YType::str, "dr"},
    bdr{YType::str, "bdr"},
    state{YType::enumeration, "state"}
        ,
    stats(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::Stats>())
{
    stats->parent = this;

    yang_name = "ospf-neighbor"; yang_parent_name = "ospf-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::~OspfNeighbor()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_id.is_set
	|| address.is_set
	|| dr.is_set
	|| bdr.is_set
	|| state.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(dr.yfilter)
	|| ydk::is_set(bdr.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf-neighbor";
    ADD_KEY_TOKEN(neighbor_id, "neighbor-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (dr.is_set || is_set(dr.yfilter)) leaf_name_data.push_back(dr.get_name_leafdata());
    if (bdr.is_set || is_set(bdr.yfilter)) leaf_name_data.push_back(bdr.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr")
    {
        dr = value;
        dr.value_namespace = name_space;
        dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdr")
    {
        bdr = value;
        bdr.value_namespace = name_space;
        bdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "dr")
    {
        dr.yfilter = yfilter;
    }
    if(value_path == "bdr")
    {
        bdr.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats" || name == "neighbor-id" || name == "address" || name == "dr" || name == "bdr" || name == "state")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::Stats::Stats()
    :
    nbr_event_count{YType::uint32, "nbr-event-count"},
    nbr_retrans_qlen{YType::uint32, "nbr-retrans-qlen"}
{

    yang_name = "stats"; yang_parent_name = "ospf-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::Stats::~Stats()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::Stats::has_data() const
{
    if (is_presence_container) return true;
    return nbr_event_count.is_set
	|| nbr_retrans_qlen.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nbr_event_count.yfilter)
	|| ydk::is_set(nbr_retrans_qlen.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbr_event_count.is_set || is_set(nbr_event_count.yfilter)) leaf_name_data.push_back(nbr_event_count.get_name_leafdata());
    if (nbr_retrans_qlen.is_set || is_set(nbr_retrans_qlen.yfilter)) leaf_name_data.push_back(nbr_retrans_qlen.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nbr-event-count")
    {
        nbr_event_count = value;
        nbr_event_count.value_namespace = name_space;
        nbr_event_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-retrans-qlen")
    {
        nbr_retrans_qlen = value;
        nbr_retrans_qlen.value_namespace = name_space;
        nbr_retrans_qlen.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nbr-event-count")
    {
        nbr_event_count.yfilter = yfilter;
    }
    if(value_path == "nbr-retrans-qlen")
    {
        nbr_retrans_qlen.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::OspfNeighbor::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbr-event-count" || name == "nbr-retrans-qlen")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::IntfLinkScopeLsas()
    :
    lsa_type{YType::uint32, "lsa-type"}
        ,
    link_scope_lsa(this, {"lsa_id", "adv_router"})
    , area_scope_lsa(this, {"lsa_type", "adv_router"})
{

    yang_name = "intf-link-scope-lsas"; yang_parent_name = "ospf-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::~IntfLinkScopeLsas()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<link_scope_lsa.len(); index++)
    {
        if(link_scope_lsa[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<area_scope_lsa.len(); index++)
    {
        if(area_scope_lsa[index]->has_data())
            return true;
    }
    return lsa_type.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::has_operation() const
{
    for (std::size_t index=0; index<link_scope_lsa.len(); index++)
    {
        if(link_scope_lsa[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<area_scope_lsa.len(); index++)
    {
        if(area_scope_lsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-link-scope-lsas";
    ADD_KEY_TOKEN(lsa_type, "lsa-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-scope-lsa")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa>();
        c->parent = this;
        link_scope_lsa.append(c);
        return c;
    }

    if(child_yang_name == "area-scope-lsa")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa>();
        c->parent = this;
        area_scope_lsa.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : link_scope_lsa.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : area_scope_lsa.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-scope-lsa" || name == "area-scope-lsa" || name == "lsa-type")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::LinkScopeLsa()
    :
    lsa_id{YType::uint32, "lsa-id"},
    adv_router{YType::str, "adv-router"},
    decoded_completed{YType::boolean, "decoded-completed"},
    raw_data{YType::uint8, "raw-data"},
    version{YType::uint32, "version"},
    router_address{YType::str, "router-address"}
        ,
    ospfv2_lsa(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa>())
    , ospfv2_link(this, {"link_id", "link_data"})
    , ospfv2_topology(this, {"mt_id"})
    , ospfv2_external(this, {"mt_id"})
    , ospfv2_unknown_tlv(this, {"type"})
    , ospfv3_lsa_val(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal>())
    , ospfv3_link(this, {"interface_id", "neighbor_interface_id", "neighbor_router_id"})
    , ospfv3_prefix_list(this, {"prefix"})
    , ospfv3_ia_prefix(this, {"prefix"})
    , multi_topology(this, {"name"})
    , tlv(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Tlv>())
    , unknown_sub_tlv(this, {"type"})
{
    ospfv2_lsa->parent = this;
    ospfv3_lsa_val->parent = this;
    tlv->parent = this;

    yang_name = "link-scope-lsa"; yang_parent_name = "intf-link-scope-lsas"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::~LinkScopeLsa()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfv2_link.len(); index++)
    {
        if(ospfv2_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_topology.len(); index++)
    {
        if(ospfv2_topology[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_external.len(); index++)
    {
        if(ospfv2_external[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_unknown_tlv.len(); index++)
    {
        if(ospfv2_unknown_tlv[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_link.len(); index++)
    {
        if(ospfv3_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_prefix_list.len(); index++)
    {
        if(ospfv3_prefix_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_ia_prefix.len(); index++)
    {
        if(ospfv3_ia_prefix[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multi_topology.len(); index++)
    {
        if(multi_topology[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_sub_tlv.len(); index++)
    {
        if(unknown_sub_tlv[index]->has_data())
            return true;
    }
    for (auto const & leaf : raw_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return lsa_id.is_set
	|| adv_router.is_set
	|| decoded_completed.is_set
	|| version.is_set
	|| router_address.is_set
	|| (ospfv2_lsa !=  nullptr && ospfv2_lsa->has_data())
	|| (ospfv3_lsa_val !=  nullptr && ospfv3_lsa_val->has_data())
	|| (tlv !=  nullptr && tlv->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::has_operation() const
{
    for (std::size_t index=0; index<ospfv2_link.len(); index++)
    {
        if(ospfv2_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_topology.len(); index++)
    {
        if(ospfv2_topology[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_external.len(); index++)
    {
        if(ospfv2_external[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_unknown_tlv.len(); index++)
    {
        if(ospfv2_unknown_tlv[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_link.len(); index++)
    {
        if(ospfv3_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_prefix_list.len(); index++)
    {
        if(ospfv3_prefix_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_ia_prefix.len(); index++)
    {
        if(ospfv3_ia_prefix[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multi_topology.len(); index++)
    {
        if(multi_topology[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_sub_tlv.len(); index++)
    {
        if(unknown_sub_tlv[index]->has_operation())
            return true;
    }
    for (auto const & leaf : raw_data.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(adv_router.yfilter)
	|| ydk::is_set(decoded_completed.yfilter)
	|| ydk::is_set(raw_data.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(router_address.yfilter)
	|| (ospfv2_lsa !=  nullptr && ospfv2_lsa->has_operation())
	|| (ospfv3_lsa_val !=  nullptr && ospfv3_lsa_val->has_operation())
	|| (tlv !=  nullptr && tlv->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-scope-lsa";
    ADD_KEY_TOKEN(lsa_id, "lsa-id");
    ADD_KEY_TOKEN(adv_router, "adv-router");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.yfilter)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (decoded_completed.is_set || is_set(decoded_completed.yfilter)) leaf_name_data.push_back(decoded_completed.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (router_address.is_set || is_set(router_address.yfilter)) leaf_name_data.push_back(router_address.get_name_leafdata());

    auto raw_data_name_datas = raw_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), raw_data_name_datas.begin(), raw_data_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2-lsa")
    {
        if(ospfv2_lsa == nullptr)
        {
            ospfv2_lsa = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa>();
        }
        return ospfv2_lsa;
    }

    if(child_yang_name == "ospfv2-link")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link>();
        c->parent = this;
        ospfv2_link.append(c);
        return c;
    }

    if(child_yang_name == "ospfv2-topology")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Topology>();
        c->parent = this;
        ospfv2_topology.append(c);
        return c;
    }

    if(child_yang_name == "ospfv2-external")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2External>();
        c->parent = this;
        ospfv2_external.append(c);
        return c;
    }

    if(child_yang_name == "ospfv2-unknown-tlv")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv>();
        c->parent = this;
        ospfv2_unknown_tlv.append(c);
        return c;
    }

    if(child_yang_name == "ospfv3-lsa-val")
    {
        if(ospfv3_lsa_val == nullptr)
        {
            ospfv3_lsa_val = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal>();
        }
        return ospfv3_lsa_val;
    }

    if(child_yang_name == "ospfv3-link")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3Link>();
        c->parent = this;
        ospfv3_link.append(c);
        return c;
    }

    if(child_yang_name == "ospfv3-prefix-list")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList>();
        c->parent = this;
        ospfv3_prefix_list.append(c);
        return c;
    }

    if(child_yang_name == "ospfv3-ia-prefix")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix>();
        c->parent = this;
        ospfv3_ia_prefix.append(c);
        return c;
    }

    if(child_yang_name == "multi-topology")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::MultiTopology>();
        c->parent = this;
        multi_topology.append(c);
        return c;
    }

    if(child_yang_name == "tlv")
    {
        if(tlv == nullptr)
        {
            tlv = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Tlv>();
        }
        return tlv;
    }

    if(child_yang_name == "unknown-sub-tlv")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::UnknownSubTlv>();
        c->parent = this;
        unknown_sub_tlv.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ospfv2_lsa != nullptr)
    {
        children["ospfv2-lsa"] = ospfv2_lsa;
    }

    count = 0;
    for (auto c : ospfv2_link.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv2_topology.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv2_external.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv2_unknown_tlv.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(ospfv3_lsa_val != nullptr)
    {
        children["ospfv3-lsa-val"] = ospfv3_lsa_val;
    }

    count = 0;
    for (auto c : ospfv3_link.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv3_prefix_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv3_ia_prefix.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : multi_topology.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(tlv != nullptr)
    {
        children["tlv"] = tlv;
    }

    count = 0;
    for (auto c : unknown_sub_tlv.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
        adv_router.value_namespace = name_space;
        adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decoded-completed")
    {
        decoded_completed = value;
        decoded_completed.value_namespace = name_space;
        decoded_completed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raw-data")
    {
        raw_data.append(value);
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-address")
    {
        router_address = value;
        router_address.value_namespace = name_space;
        router_address.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "adv-router")
    {
        adv_router.yfilter = yfilter;
    }
    if(value_path == "decoded-completed")
    {
        decoded_completed.yfilter = yfilter;
    }
    if(value_path == "raw-data")
    {
        raw_data.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "router-address")
    {
        router_address.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv2-lsa" || name == "ospfv2-link" || name == "ospfv2-topology" || name == "ospfv2-external" || name == "ospfv2-unknown-tlv" || name == "ospfv3-lsa-val" || name == "ospfv3-link" || name == "ospfv3-prefix-list" || name == "ospfv3-ia-prefix" || name == "multi-topology" || name == "tlv" || name == "unknown-sub-tlv" || name == "lsa-id" || name == "adv-router" || name == "decoded-completed" || name == "raw-data" || name == "version" || name == "router-address")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Ospfv2Lsa()
    :
    header(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header>())
    , lsa_body(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody>())
{
    header->parent = this;
    lsa_body->parent = this;

    yang_name = "ospfv2-lsa"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::~Ospfv2Lsa()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::has_data() const
{
    if (is_presence_container) return true;
    return (header !=  nullptr && header->has_data())
	|| (lsa_body !=  nullptr && lsa_body->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (lsa_body !=  nullptr && lsa_body->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header>();
        }
        return header;
    }

    if(child_yang_name == "lsa-body")
    {
        if(lsa_body == nullptr)
        {
            lsa_body = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody>();
        }
        return lsa_body;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(lsa_body != nullptr)
    {
        children["lsa-body"] = lsa_body;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "lsa-body")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header::Header()
    :
    lsa_id{YType::str, "lsa-id"},
    opaque_type{YType::uint8, "opaque-type"},
    opaque_id{YType::uint32, "opaque-id"},
    age{YType::uint16, "age"},
    type{YType::uint16, "type"},
    adv_router{YType::uint32, "adv-router"},
    seq_num{YType::str, "seq-num"},
    checksum{YType::str, "checksum"},
    length{YType::uint16, "length"},
    flag_options{YType::bits, "flag-options"}
{

    yang_name = "header"; yang_parent_name = "ospfv2-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header::~Header()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| opaque_type.is_set
	|| opaque_id.is_set
	|| age.is_set
	|| type.is_set
	|| adv_router.is_set
	|| seq_num.is_set
	|| checksum.is_set
	|| length.is_set
	|| flag_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(opaque_type.yfilter)
	|| ydk::is_set(opaque_id.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(adv_router.yfilter)
	|| ydk::is_set(seq_num.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(flag_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (opaque_type.is_set || is_set(opaque_type.yfilter)) leaf_name_data.push_back(opaque_type.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.yfilter)) leaf_name_data.push_back(opaque_id.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.yfilter)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (seq_num.is_set || is_set(seq_num.yfilter)) leaf_name_data.push_back(seq_num.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (flag_options.is_set || is_set(flag_options.yfilter)) leaf_name_data.push_back(flag_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-type")
    {
        opaque_type = value;
        opaque_type.value_namespace = name_space;
        opaque_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
        opaque_id.value_namespace = name_space;
        opaque_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
        adv_router.value_namespace = name_space;
        adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-num")
    {
        seq_num = value;
        seq_num.value_namespace = name_space;
        seq_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-options")
    {
        flag_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "opaque-type")
    {
        opaque_type.yfilter = yfilter;
    }
    if(value_path == "opaque-id")
    {
        opaque_id.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "adv-router")
    {
        adv_router.yfilter = yfilter;
    }
    if(value_path == "seq-num")
    {
        seq_num.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "flag-options")
    {
        flag_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-id" || name == "opaque-type" || name == "opaque-id" || name == "age" || name == "type" || name == "adv-router" || name == "seq-num" || name == "checksum" || name == "length" || name == "flag-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::LsaBody()
    :
    num_of_links{YType::uint16, "num-of-links"},
    summary_mask{YType::str, "summary-mask"},
    external_mask{YType::str, "external-mask"},
    body_flag_options{YType::bits, "body-flag-options"}
        ,
    network(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network>())
{
    network->parent = this;

    yang_name = "lsa-body"; yang_parent_name = "ospfv2-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::~LsaBody()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::has_data() const
{
    if (is_presence_container) return true;
    return num_of_links.is_set
	|| summary_mask.is_set
	|| external_mask.is_set
	|| body_flag_options.is_set
	|| (network !=  nullptr && network->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_of_links.yfilter)
	|| ydk::is_set(summary_mask.yfilter)
	|| ydk::is_set(external_mask.yfilter)
	|| ydk::is_set(body_flag_options.yfilter)
	|| (network !=  nullptr && network->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-body";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_of_links.is_set || is_set(num_of_links.yfilter)) leaf_name_data.push_back(num_of_links.get_name_leafdata());
    if (summary_mask.is_set || is_set(summary_mask.yfilter)) leaf_name_data.push_back(summary_mask.get_name_leafdata());
    if (external_mask.is_set || is_set(external_mask.yfilter)) leaf_name_data.push_back(external_mask.get_name_leafdata());
    if (body_flag_options.is_set || is_set(body_flag_options.yfilter)) leaf_name_data.push_back(body_flag_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network>();
        }
        return network;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(network != nullptr)
    {
        children["network"] = network;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-of-links")
    {
        num_of_links = value;
        num_of_links.value_namespace = name_space;
        num_of_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-mask")
    {
        summary_mask = value;
        summary_mask.value_namespace = name_space;
        summary_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-mask")
    {
        external_mask = value;
        external_mask.value_namespace = name_space;
        external_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "body-flag-options")
    {
        body_flag_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-of-links")
    {
        num_of_links.yfilter = yfilter;
    }
    if(value_path == "summary-mask")
    {
        summary_mask.yfilter = yfilter;
    }
    if(value_path == "external-mask")
    {
        external_mask.yfilter = yfilter;
    }
    if(value_path == "body-flag-options")
    {
        body_flag_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network" || name == "num-of-links" || name == "summary-mask" || name == "external-mask" || name == "body-flag-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network::Network()
    :
    network_mask{YType::str, "network-mask"},
    attached_router{YType::uint32, "attached-router"}
{

    yang_name = "network"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network::~Network()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return network_mask.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network::has_operation() const
{
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network_mask.yfilter)
	|| ydk::is_set(attached_router.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_mask.is_set || is_set(network_mask.yfilter)) leaf_name_data.push_back(network_mask.get_name_leafdata());

    auto attached_router_name_datas = attached_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attached_router_name_datas.begin(), attached_router_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-mask")
    {
        network_mask = value;
        network_mask.value_namespace = name_space;
        network_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-router")
    {
        attached_router.append(value);
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-mask")
    {
        network_mask.yfilter = yfilter;
    }
    if(value_path == "attached-router")
    {
        attached_router.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-mask" || name == "attached-router")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Link()
    :
    link_id{YType::uint32, "link-id"},
    link_data{YType::uint32, "link-data"},
    type{YType::uint8, "type"}
        ,
    ospfv2_topology(this, {"mt_id"})
{

    yang_name = "ospfv2-link"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::~Ospfv2Link()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfv2_topology.len(); index++)
    {
        if(ospfv2_topology[index]->has_data())
            return true;
    }
    return link_id.is_set
	|| link_data.is_set
	|| type.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::has_operation() const
{
    for (std::size_t index=0; index<ospfv2_topology.len(); index++)
    {
        if(ospfv2_topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_data.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-link";
    ADD_KEY_TOKEN(link_id, "link-id");
    ADD_KEY_TOKEN(link_data, "link-data");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_data.is_set || is_set(link_data.yfilter)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2-topology")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology>();
        c->parent = this;
        ospfv2_topology.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospfv2_topology.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-data")
    {
        link_data.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv2-topology" || name == "link-id" || name == "link-data" || name == "type")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology::Ospfv2Topology()
    :
    mt_id{YType::uint32, "mt-id"},
    metric{YType::uint16, "metric"}
{

    yang_name = "ospfv2-topology"; yang_parent_name = "ospfv2-link"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology::~Ospfv2Topology()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| metric.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-topology";
    ADD_KEY_TOKEN(mt_id, "mt-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "metric")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Topology::Ospfv2Topology()
    :
    mt_id{YType::uint32, "mt-id"},
    metric{YType::uint16, "metric"}
{

    yang_name = "ospfv2-topology"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Topology::~Ospfv2Topology()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Topology::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| metric.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-topology";
    ADD_KEY_TOKEN(mt_id, "mt-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "metric")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2External::Ospfv2External()
    :
    mt_id{YType::uint32, "mt-id"},
    metric{YType::uint32, "metric"},
    forwarding_address{YType::str, "forwarding-address"},
    external_route_tag{YType::uint32, "external-route-tag"}
{

    yang_name = "ospfv2-external"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2External::~Ospfv2External()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2External::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| metric.is_set
	|| forwarding_address.is_set
	|| external_route_tag.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_route_tag.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-external";
    ADD_KEY_TOKEN(mt_id, "mt-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.yfilter)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
        external_route_tag.value_namespace = name_space;
        external_route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "metric" || name == "forwarding-address" || name == "external-route-tag")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv::Ospfv2UnknownTlv()
    :
    type{YType::uint16, "type"},
    length{YType::uint16, "length"},
    value_{YType::uint8, "value"}
{

    yang_name = "ospfv2-unknown-tlv"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv::~Ospfv2UnknownTlv()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return type.is_set
	|| length.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-unknown-tlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());

    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
        value_.append(value);
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "length" || name == "value")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Ospfv3LsaVal()
    :
    header(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header>())
    , lsa_body(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody>())
{
    header->parent = this;
    lsa_body->parent = this;

    yang_name = "ospfv3-lsa-val"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::~Ospfv3LsaVal()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::has_data() const
{
    if (is_presence_container) return true;
    return (header !=  nullptr && header->has_data())
	|| (lsa_body !=  nullptr && lsa_body->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (lsa_body !=  nullptr && lsa_body->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-lsa-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header>();
        }
        return header;
    }

    if(child_yang_name == "lsa-body")
    {
        if(lsa_body == nullptr)
        {
            lsa_body = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody>();
        }
        return lsa_body;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(lsa_body != nullptr)
    {
        children["lsa-body"] = lsa_body;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "lsa-body")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::Header()
    :
    lsa_id{YType::str, "lsa-id"},
    lsa_hdr_options{YType::bits, "lsa-hdr-options"}
        ,
    lsa_header(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader>())
{
    lsa_header->parent = this;

    yang_name = "header"; yang_parent_name = "ospfv3-lsa-val"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::~Header()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| lsa_hdr_options.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(lsa_hdr_options.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (lsa_hdr_options.is_set || is_set(lsa_hdr_options.yfilter)) leaf_name_data.push_back(lsa_hdr_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader>();
        }
        return lsa_header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-hdr-options")
    {
        lsa_hdr_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "lsa-hdr-options")
    {
        lsa_hdr_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "lsa-id" || name == "lsa-hdr-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader::LsaHeader()
    :
    age{YType::uint16, "age"},
    type{YType::uint16, "type"},
    adv_router{YType::uint32, "adv-router"},
    seq_num{YType::str, "seq-num"},
    checksum{YType::str, "checksum"},
    length{YType::uint16, "length"}
{

    yang_name = "lsa-header"; yang_parent_name = "header"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader::~LsaHeader()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader::has_data() const
{
    if (is_presence_container) return true;
    return age.is_set
	|| type.is_set
	|| adv_router.is_set
	|| seq_num.is_set
	|| checksum.is_set
	|| length.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(adv_router.yfilter)
	|| ydk::is_set(seq_num.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(length.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.yfilter)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (seq_num.is_set || is_set(seq_num.yfilter)) leaf_name_data.push_back(seq_num.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
        adv_router.value_namespace = name_space;
        adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-num")
    {
        seq_num = value;
        seq_num.value_namespace = name_space;
        seq_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "adv-router")
    {
        adv_router.yfilter = yfilter;
    }
    if(value_path == "seq-num")
    {
        seq_num.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "age" || name == "type" || name == "adv-router" || name == "seq-num" || name == "checksum" || name == "length")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaBody()
    :
    lsa_flag_options{YType::bits, "lsa-flag-options"},
    lsa_body_flags{YType::bits, "lsa-body-flags"}
        ,
    network(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network>())
    , prefix(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix>())
    , ia_router(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter>())
    , lsa_external(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal>())
    , nssa(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa>())
    , link_data(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData>())
    , ia_prefix(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix>())
{
    network->parent = this;
    prefix->parent = this;
    ia_router->parent = this;
    lsa_external->parent = this;
    nssa->parent = this;
    link_data->parent = this;
    ia_prefix->parent = this;

    yang_name = "lsa-body"; yang_parent_name = "ospfv3-lsa-val"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::~LsaBody()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::has_data() const
{
    if (is_presence_container) return true;
    return lsa_flag_options.is_set
	|| lsa_body_flags.is_set
	|| (network !=  nullptr && network->has_data())
	|| (prefix !=  nullptr && prefix->has_data())
	|| (ia_router !=  nullptr && ia_router->has_data())
	|| (lsa_external !=  nullptr && lsa_external->has_data())
	|| (nssa !=  nullptr && nssa->has_data())
	|| (link_data !=  nullptr && link_data->has_data())
	|| (ia_prefix !=  nullptr && ia_prefix->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_flag_options.yfilter)
	|| ydk::is_set(lsa_body_flags.yfilter)
	|| (network !=  nullptr && network->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (ia_router !=  nullptr && ia_router->has_operation())
	|| (lsa_external !=  nullptr && lsa_external->has_operation())
	|| (nssa !=  nullptr && nssa->has_operation())
	|| (link_data !=  nullptr && link_data->has_operation())
	|| (ia_prefix !=  nullptr && ia_prefix->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-body";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_flag_options.is_set || is_set(lsa_flag_options.yfilter)) leaf_name_data.push_back(lsa_flag_options.get_name_leafdata());
    if (lsa_body_flags.is_set || is_set(lsa_body_flags.yfilter)) leaf_name_data.push_back(lsa_body_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "ia-router")
    {
        if(ia_router == nullptr)
        {
            ia_router = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter>();
        }
        return ia_router;
    }

    if(child_yang_name == "lsa-external")
    {
        if(lsa_external == nullptr)
        {
            lsa_external = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal>();
        }
        return lsa_external;
    }

    if(child_yang_name == "nssa")
    {
        if(nssa == nullptr)
        {
            nssa = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa>();
        }
        return nssa;
    }

    if(child_yang_name == "link-data")
    {
        if(link_data == nullptr)
        {
            link_data = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData>();
        }
        return link_data;
    }

    if(child_yang_name == "ia-prefix")
    {
        if(ia_prefix == nullptr)
        {
            ia_prefix = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix>();
        }
        return ia_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(ia_router != nullptr)
    {
        children["ia-router"] = ia_router;
    }

    if(lsa_external != nullptr)
    {
        children["lsa-external"] = lsa_external;
    }

    if(nssa != nullptr)
    {
        children["nssa"] = nssa;
    }

    if(link_data != nullptr)
    {
        children["link-data"] = link_data;
    }

    if(ia_prefix != nullptr)
    {
        children["ia-prefix"] = ia_prefix;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-flag-options")
    {
        lsa_flag_options[value] = true;
    }
    if(value_path == "lsa-body-flags")
    {
        lsa_body_flags[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-flag-options")
    {
        lsa_flag_options.yfilter = yfilter;
    }
    if(value_path == "lsa-body-flags")
    {
        lsa_body_flags.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network" || name == "prefix" || name == "ia-router" || name == "lsa-external" || name == "nssa" || name == "link-data" || name == "ia-prefix" || name == "lsa-flag-options" || name == "lsa-body-flags")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network::Network()
    :
    attached_router{YType::uint32, "attached-router"},
    lsa_net_options{YType::bits, "lsa-net-options"}
{

    yang_name = "network"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network::~Network()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return lsa_net_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network::has_operation() const
{
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(attached_router.yfilter)
	|| ydk::is_set(lsa_net_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_net_options.is_set || is_set(lsa_net_options.yfilter)) leaf_name_data.push_back(lsa_net_options.get_name_leafdata());

    auto attached_router_name_datas = attached_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attached_router_name_datas.begin(), attached_router_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attached-router")
    {
        attached_router.append(value);
    }
    if(value_path == "lsa-net-options")
    {
        lsa_net_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attached-router")
    {
        attached_router.yfilter = yfilter;
    }
    if(value_path == "lsa-net-options")
    {
        lsa_net_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attached-router" || name == "lsa-net-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix::Prefix()
    :
    metric{YType::uint32, "metric"},
    ia_prefix{YType::str, "ia-prefix"},
    ia_prefix_options{YType::str, "ia-prefix-options"}
{

    yang_name = "prefix"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix::~Prefix()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| ia_prefix.is_set
	|| ia_prefix_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(ia_prefix.yfilter)
	|| ydk::is_set(ia_prefix_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (ia_prefix.is_set || is_set(ia_prefix.yfilter)) leaf_name_data.push_back(ia_prefix.get_name_leafdata());
    if (ia_prefix_options.is_set || is_set(ia_prefix_options.yfilter)) leaf_name_data.push_back(ia_prefix_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ia-prefix")
    {
        ia_prefix = value;
        ia_prefix.value_namespace = name_space;
        ia_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ia-prefix-options")
    {
        ia_prefix_options = value;
        ia_prefix_options.value_namespace = name_space;
        ia_prefix_options.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "ia-prefix")
    {
        ia_prefix.yfilter = yfilter;
    }
    if(value_path == "ia-prefix-options")
    {
        ia_prefix_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "ia-prefix" || name == "ia-prefix-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter::IaRouter()
    :
    metric{YType::uint32, "metric"},
    destination_router_id{YType::uint32, "destination-router-id"},
    lsa_ia_options{YType::bits, "lsa-ia-options"}
{

    yang_name = "ia-router"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter::~IaRouter()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| destination_router_id.is_set
	|| lsa_ia_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(destination_router_id.yfilter)
	|| ydk::is_set(lsa_ia_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ia-router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (destination_router_id.is_set || is_set(destination_router_id.yfilter)) leaf_name_data.push_back(destination_router_id.get_name_leafdata());
    if (lsa_ia_options.is_set || is_set(lsa_ia_options.yfilter)) leaf_name_data.push_back(lsa_ia_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-router-id")
    {
        destination_router_id = value;
        destination_router_id.value_namespace = name_space;
        destination_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-ia-options")
    {
        lsa_ia_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "destination-router-id")
    {
        destination_router_id.yfilter = yfilter;
    }
    if(value_path == "lsa-ia-options")
    {
        lsa_ia_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "destination-router-id" || name == "lsa-ia-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::LsaExternal()
    :
    metric{YType::uint32, "metric"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"},
    external_prefix{YType::str, "external-prefix"},
    external_prefix_options{YType::str, "external-prefix-options"},
    forwarding_address{YType::str, "forwarding-address"},
    external_route_tag{YType::uint32, "external-route-tag"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"}
        ,
    flags(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags>())
{
    flags->parent = this;

    yang_name = "lsa-external"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::~LsaExternal()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| referenced_ls_type.is_set
	|| external_prefix.is_set
	|| external_prefix_options.is_set
	|| forwarding_address.is_set
	|| external_route_tag.is_set
	|| referenced_link_state_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(referenced_ls_type.yfilter)
	|| ydk::is_set(external_prefix.yfilter)
	|| ydk::is_set(external_prefix_options.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_route_tag.yfilter)
	|| ydk::is_set(referenced_link_state_id.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.yfilter)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());
    if (external_prefix.is_set || is_set(external_prefix.yfilter)) leaf_name_data.push_back(external_prefix.get_name_leafdata());
    if (external_prefix_options.is_set || is_set(external_prefix_options.yfilter)) leaf_name_data.push_back(external_prefix_options.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.yfilter)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.yfilter)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
        referenced_ls_type.value_namespace = name_space;
        referenced_ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-prefix")
    {
        external_prefix = value;
        external_prefix.value_namespace = name_space;
        external_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-prefix-options")
    {
        external_prefix_options = value;
        external_prefix_options.value_namespace = name_space;
        external_prefix_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
        external_route_tag.value_namespace = name_space;
        external_route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
        referenced_link_state_id.value_namespace = name_space;
        referenced_link_state_id.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type.yfilter = yfilter;
    }
    if(value_path == "external-prefix")
    {
        external_prefix.yfilter = yfilter;
    }
    if(value_path == "external-prefix-options")
    {
        external_prefix_options.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag.yfilter = yfilter;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "metric" || name == "referenced-ls-type" || name == "external-prefix" || name == "external-prefix-options" || name == "forwarding-address" || name == "external-route-tag" || name == "referenced-link-state-id")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags::Flags()
    :
    e_flag{YType::boolean, "e-flag"}
{

    yang_name = "flags"; yang_parent_name = "lsa-external"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags::~Flags()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags::has_data() const
{
    if (is_presence_container) return true;
    return e_flag.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(e_flag.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (e_flag.is_set || is_set(e_flag.yfilter)) leaf_name_data.push_back(e_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "e-flag")
    {
        e_flag = value;
        e_flag.value_namespace = name_space;
        e_flag.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "e-flag")
    {
        e_flag.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "e-flag")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::Nssa()
    :
    lsa_nssa_external(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal>())
{
    lsa_nssa_external->parent = this;

    yang_name = "nssa"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::~Nssa()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::has_data() const
{
    if (is_presence_container) return true;
    return (lsa_nssa_external !=  nullptr && lsa_nssa_external->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::has_operation() const
{
    return is_set(yfilter)
	|| (lsa_nssa_external !=  nullptr && lsa_nssa_external->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-nssa-external")
    {
        if(lsa_nssa_external == nullptr)
        {
            lsa_nssa_external = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal>();
        }
        return lsa_nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_nssa_external != nullptr)
    {
        children["lsa-nssa-external"] = lsa_nssa_external;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-nssa-external")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::LsaNssaExternal()
    :
    metric{YType::uint32, "metric"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"},
    external_prefix{YType::str, "external-prefix"},
    external_prefix_options{YType::str, "external-prefix-options"},
    forwarding_address{YType::str, "forwarding-address"},
    external_route_tag{YType::uint32, "external-route-tag"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"}
        ,
    flags(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags>())
{
    flags->parent = this;

    yang_name = "lsa-nssa-external"; yang_parent_name = "nssa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::~LsaNssaExternal()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| referenced_ls_type.is_set
	|| external_prefix.is_set
	|| external_prefix_options.is_set
	|| forwarding_address.is_set
	|| external_route_tag.is_set
	|| referenced_link_state_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(referenced_ls_type.yfilter)
	|| ydk::is_set(external_prefix.yfilter)
	|| ydk::is_set(external_prefix_options.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_route_tag.yfilter)
	|| ydk::is_set(referenced_link_state_id.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.yfilter)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());
    if (external_prefix.is_set || is_set(external_prefix.yfilter)) leaf_name_data.push_back(external_prefix.get_name_leafdata());
    if (external_prefix_options.is_set || is_set(external_prefix_options.yfilter)) leaf_name_data.push_back(external_prefix_options.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.yfilter)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.yfilter)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
        referenced_ls_type.value_namespace = name_space;
        referenced_ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-prefix")
    {
        external_prefix = value;
        external_prefix.value_namespace = name_space;
        external_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-prefix-options")
    {
        external_prefix_options = value;
        external_prefix_options.value_namespace = name_space;
        external_prefix_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
        external_route_tag.value_namespace = name_space;
        external_route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
        referenced_link_state_id.value_namespace = name_space;
        referenced_link_state_id.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type.yfilter = yfilter;
    }
    if(value_path == "external-prefix")
    {
        external_prefix.yfilter = yfilter;
    }
    if(value_path == "external-prefix-options")
    {
        external_prefix_options.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag.yfilter = yfilter;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "metric" || name == "referenced-ls-type" || name == "external-prefix" || name == "external-prefix-options" || name == "forwarding-address" || name == "external-route-tag" || name == "referenced-link-state-id")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags::Flags()
    :
    e_flag{YType::boolean, "e-flag"}
{

    yang_name = "flags"; yang_parent_name = "lsa-nssa-external"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags::~Flags()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags::has_data() const
{
    if (is_presence_container) return true;
    return e_flag.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(e_flag.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (e_flag.is_set || is_set(e_flag.yfilter)) leaf_name_data.push_back(e_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "e-flag")
    {
        e_flag = value;
        e_flag.value_namespace = name_space;
        e_flag.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "e-flag")
    {
        e_flag.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "e-flag")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData::LinkData()
    :
    rtr_priority{YType::uint8, "rtr-priority"},
    link_local_interface_address{YType::str, "link-local-interface-address"},
    num_of_prefixes{YType::uint32, "num-of-prefixes"},
    lsa_id_options{YType::bits, "lsa-id-options"}
{

    yang_name = "link-data"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData::~LinkData()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData::has_data() const
{
    if (is_presence_container) return true;
    return rtr_priority.is_set
	|| link_local_interface_address.is_set
	|| num_of_prefixes.is_set
	|| lsa_id_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr_priority.yfilter)
	|| ydk::is_set(link_local_interface_address.yfilter)
	|| ydk::is_set(num_of_prefixes.yfilter)
	|| ydk::is_set(lsa_id_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_priority.is_set || is_set(rtr_priority.yfilter)) leaf_name_data.push_back(rtr_priority.get_name_leafdata());
    if (link_local_interface_address.is_set || is_set(link_local_interface_address.yfilter)) leaf_name_data.push_back(link_local_interface_address.get_name_leafdata());
    if (num_of_prefixes.is_set || is_set(num_of_prefixes.yfilter)) leaf_name_data.push_back(num_of_prefixes.get_name_leafdata());
    if (lsa_id_options.is_set || is_set(lsa_id_options.yfilter)) leaf_name_data.push_back(lsa_id_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-priority")
    {
        rtr_priority = value;
        rtr_priority.value_namespace = name_space;
        rtr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-local-interface-address")
    {
        link_local_interface_address = value;
        link_local_interface_address.value_namespace = name_space;
        link_local_interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes = value;
        num_of_prefixes.value_namespace = name_space;
        num_of_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-id-options")
    {
        lsa_id_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-priority")
    {
        rtr_priority.yfilter = yfilter;
    }
    if(value_path == "link-local-interface-address")
    {
        link_local_interface_address.yfilter = yfilter;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes.yfilter = yfilter;
    }
    if(value_path == "lsa-id-options")
    {
        lsa_id_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr-priority" || name == "link-local-interface-address" || name == "num-of-prefixes" || name == "lsa-id-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix::IaPrefix()
    :
    referenced_ls_type{YType::uint16, "referenced-ls-type"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"},
    referenced_adv_router{YType::str, "referenced-adv-router"},
    num_of_prefixes{YType::uint16, "num-of-prefixes"}
{

    yang_name = "ia-prefix"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix::~IaPrefix()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix::has_data() const
{
    if (is_presence_container) return true;
    return referenced_ls_type.is_set
	|| referenced_link_state_id.is_set
	|| referenced_adv_router.is_set
	|| num_of_prefixes.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(referenced_ls_type.yfilter)
	|| ydk::is_set(referenced_link_state_id.yfilter)
	|| ydk::is_set(referenced_adv_router.yfilter)
	|| ydk::is_set(num_of_prefixes.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ia-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (referenced_ls_type.is_set || is_set(referenced_ls_type.yfilter)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.yfilter)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());
    if (referenced_adv_router.is_set || is_set(referenced_adv_router.yfilter)) leaf_name_data.push_back(referenced_adv_router.get_name_leafdata());
    if (num_of_prefixes.is_set || is_set(num_of_prefixes.yfilter)) leaf_name_data.push_back(num_of_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
        referenced_ls_type.value_namespace = name_space;
        referenced_ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
        referenced_link_state_id.value_namespace = name_space;
        referenced_link_state_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-adv-router")
    {
        referenced_adv_router = value;
        referenced_adv_router.value_namespace = name_space;
        referenced_adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes = value;
        num_of_prefixes.value_namespace = name_space;
        num_of_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type.yfilter = yfilter;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id.yfilter = yfilter;
    }
    if(value_path == "referenced-adv-router")
    {
        referenced_adv_router.yfilter = yfilter;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "referenced-ls-type" || name == "referenced-link-state-id" || name == "referenced-adv-router" || name == "num-of-prefixes")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3Link::Ospfv3Link()
    :
    interface_id{YType::uint32, "interface-id"},
    neighbor_interface_id{YType::uint32, "neighbor-interface-id"},
    neighbor_router_id{YType::uint32, "neighbor-router-id"},
    type{YType::uint8, "type"},
    metric{YType::uint16, "metric"}
{

    yang_name = "ospfv3-link"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3Link::~Ospfv3Link()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3Link::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set
	|| neighbor_interface_id.is_set
	|| neighbor_router_id.is_set
	|| type.is_set
	|| metric.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3Link::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(neighbor_interface_id.yfilter)
	|| ydk::is_set(neighbor_router_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-link";
    ADD_KEY_TOKEN(interface_id, "interface-id");
    ADD_KEY_TOKEN(neighbor_interface_id, "neighbor-interface-id");
    ADD_KEY_TOKEN(neighbor_router_id, "neighbor-router-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (neighbor_interface_id.is_set || is_set(neighbor_interface_id.yfilter)) leaf_name_data.push_back(neighbor_interface_id.get_name_leafdata());
    if (neighbor_router_id.is_set || is_set(neighbor_router_id.yfilter)) leaf_name_data.push_back(neighbor_router_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id = value;
        neighbor_interface_id.value_namespace = name_space;
        neighbor_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id = value;
        neighbor_router_id.value_namespace = name_space;
        neighbor_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id" || name == "neighbor-interface-id" || name == "neighbor-router-id" || name == "type" || name == "metric")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList::Ospfv3PrefixList()
    :
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"}
{

    yang_name = "ospfv3-prefix-list"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList::~Ospfv3PrefixList()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-prefix-list";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix::Ospfv3IaPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"}
{

    yang_name = "ospfv3-ia-prefix"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix::~Ospfv3IaPrefix()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-ia-prefix";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::MultiTopology::MultiTopology()
    :
    name{YType::str, "name"}
{

    yang_name = "multi-topology"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::MultiTopology::~MultiTopology()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::MultiTopology::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::MultiTopology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::MultiTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-topology";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::MultiTopology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::MultiTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::MultiTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::MultiTopology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::MultiTopology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::MultiTopology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Tlv::Tlv()
    :
    link_type{YType::uint8, "link-type"},
    link_id{YType::uint32, "link-id"},
    local_if_ipv4_addr{YType::str, "local-if-ipv4-addr"},
    local_remote_ipv4_addr{YType::str, "local-remote-ipv4-addr"},
    te_metric{YType::uint32, "te-metric"},
    max_bandwidth{YType::str, "max-bandwidth"},
    max_reservable_bandwidth{YType::str, "max-reservable-bandwidth"},
    unreserved_bandwidth{YType::str, "unreserved-bandwidth"},
    admin_group{YType::uint32, "admin-group"}
{

    yang_name = "tlv"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Tlv::~Tlv()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Tlv::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : local_if_ipv4_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : local_remote_ipv4_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return link_type.is_set
	|| link_id.is_set
	|| te_metric.is_set
	|| max_bandwidth.is_set
	|| max_reservable_bandwidth.is_set
	|| unreserved_bandwidth.is_set
	|| admin_group.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Tlv::has_operation() const
{
    for (auto const & leaf : local_if_ipv4_addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : local_remote_ipv4_addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(local_if_ipv4_addr.yfilter)
	|| ydk::is_set(local_remote_ipv4_addr.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_reservable_bandwidth.yfilter)
	|| ydk::is_set(unreserved_bandwidth.yfilter)
	|| ydk::is_set(admin_group.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_reservable_bandwidth.is_set || is_set(max_reservable_bandwidth.yfilter)) leaf_name_data.push_back(max_reservable_bandwidth.get_name_leafdata());
    if (unreserved_bandwidth.is_set || is_set(unreserved_bandwidth.yfilter)) leaf_name_data.push_back(unreserved_bandwidth.get_name_leafdata());
    if (admin_group.is_set || is_set(admin_group.yfilter)) leaf_name_data.push_back(admin_group.get_name_leafdata());

    auto local_if_ipv4_addr_name_datas = local_if_ipv4_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_if_ipv4_addr_name_datas.begin(), local_if_ipv4_addr_name_datas.end());
    auto local_remote_ipv4_addr_name_datas = local_remote_ipv4_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_remote_ipv4_addr_name_datas.begin(), local_remote_ipv4_addr_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-if-ipv4-addr")
    {
        local_if_ipv4_addr.append(value);
    }
    if(value_path == "local-remote-ipv4-addr")
    {
        local_remote_ipv4_addr.append(value);
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth = value;
        max_reservable_bandwidth.value_namespace = name_space;
        max_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth = value;
        unreserved_bandwidth.value_namespace = name_space;
        unreserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-group")
    {
        admin_group = value;
        admin_group.value_namespace = name_space;
        admin_group.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "local-if-ipv4-addr")
    {
        local_if_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "local-remote-ipv4-addr")
    {
        local_remote_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "admin-group")
    {
        admin_group.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-type" || name == "link-id" || name == "local-if-ipv4-addr" || name == "local-remote-ipv4-addr" || name == "te-metric" || name == "max-bandwidth" || name == "max-reservable-bandwidth" || name == "unreserved-bandwidth" || name == "admin-group")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::UnknownSubTlv::UnknownSubTlv()
    :
    type{YType::uint16, "type"},
    length{YType::uint16, "length"},
    value_{YType::uint8, "value"}
{

    yang_name = "unknown-sub-tlv"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::UnknownSubTlv::~UnknownSubTlv()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::UnknownSubTlv::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return type.is_set
	|| length.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::UnknownSubTlv::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::UnknownSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-sub-tlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::UnknownSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());

    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::UnknownSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::UnknownSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::UnknownSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
        value_.append(value);
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::UnknownSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::LinkScopeLsa::UnknownSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "length" || name == "value")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::AreaScopeLsa()
    :
    lsa_type{YType::uint32, "lsa-type"},
    adv_router{YType::str, "adv-router"},
    decoded_completed{YType::boolean, "decoded-completed"},
    raw_data{YType::uint8, "raw-data"}
        ,
    ospfv2_lsa(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa>())
    , ospfv2_link(this, {"link_id", "link_data"})
    , ospfv2_topology(this, {"mt_id"})
    , ospfv2_external(this, {"mt_id"})
    , ospfv3_lsa(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa>())
    , ospfv3_link(this, {"interface_id", "neighbor_interface_id", "neighbor_router_id"})
    , ospfv3_prefix(this, {"prefix"})
    , ospfv3_ia_prefix(this, {"prefix"})
{
    ospfv2_lsa->parent = this;
    ospfv3_lsa->parent = this;

    yang_name = "area-scope-lsa"; yang_parent_name = "intf-link-scope-lsas"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::~AreaScopeLsa()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfv2_link.len(); index++)
    {
        if(ospfv2_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_topology.len(); index++)
    {
        if(ospfv2_topology[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_external.len(); index++)
    {
        if(ospfv2_external[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_link.len(); index++)
    {
        if(ospfv3_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_prefix.len(); index++)
    {
        if(ospfv3_prefix[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_ia_prefix.len(); index++)
    {
        if(ospfv3_ia_prefix[index]->has_data())
            return true;
    }
    for (auto const & leaf : raw_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return lsa_type.is_set
	|| adv_router.is_set
	|| decoded_completed.is_set
	|| (ospfv2_lsa !=  nullptr && ospfv2_lsa->has_data())
	|| (ospfv3_lsa !=  nullptr && ospfv3_lsa->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::has_operation() const
{
    for (std::size_t index=0; index<ospfv2_link.len(); index++)
    {
        if(ospfv2_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_topology.len(); index++)
    {
        if(ospfv2_topology[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_external.len(); index++)
    {
        if(ospfv2_external[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_link.len(); index++)
    {
        if(ospfv3_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_prefix.len(); index++)
    {
        if(ospfv3_prefix[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_ia_prefix.len(); index++)
    {
        if(ospfv3_ia_prefix[index]->has_operation())
            return true;
    }
    for (auto const & leaf : raw_data.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(adv_router.yfilter)
	|| ydk::is_set(decoded_completed.yfilter)
	|| ydk::is_set(raw_data.yfilter)
	|| (ospfv2_lsa !=  nullptr && ospfv2_lsa->has_operation())
	|| (ospfv3_lsa !=  nullptr && ospfv3_lsa->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-scope-lsa";
    ADD_KEY_TOKEN(lsa_type, "lsa-type");
    ADD_KEY_TOKEN(adv_router, "adv-router");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.yfilter)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (decoded_completed.is_set || is_set(decoded_completed.yfilter)) leaf_name_data.push_back(decoded_completed.get_name_leafdata());

    auto raw_data_name_datas = raw_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), raw_data_name_datas.begin(), raw_data_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2-lsa")
    {
        if(ospfv2_lsa == nullptr)
        {
            ospfv2_lsa = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa>();
        }
        return ospfv2_lsa;
    }

    if(child_yang_name == "ospfv2-link")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link>();
        c->parent = this;
        ospfv2_link.append(c);
        return c;
    }

    if(child_yang_name == "ospfv2-topology")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Topology>();
        c->parent = this;
        ospfv2_topology.append(c);
        return c;
    }

    if(child_yang_name == "ospfv2-external")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2External>();
        c->parent = this;
        ospfv2_external.append(c);
        return c;
    }

    if(child_yang_name == "ospfv3-lsa")
    {
        if(ospfv3_lsa == nullptr)
        {
            ospfv3_lsa = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa>();
        }
        return ospfv3_lsa;
    }

    if(child_yang_name == "ospfv3-link")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Link>();
        c->parent = this;
        ospfv3_link.append(c);
        return c;
    }

    if(child_yang_name == "ospfv3-prefix")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Prefix>();
        c->parent = this;
        ospfv3_prefix.append(c);
        return c;
    }

    if(child_yang_name == "ospfv3-ia-prefix")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix>();
        c->parent = this;
        ospfv3_ia_prefix.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ospfv2_lsa != nullptr)
    {
        children["ospfv2-lsa"] = ospfv2_lsa;
    }

    count = 0;
    for (auto c : ospfv2_link.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv2_topology.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv2_external.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(ospfv3_lsa != nullptr)
    {
        children["ospfv3-lsa"] = ospfv3_lsa;
    }

    count = 0;
    for (auto c : ospfv3_link.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv3_prefix.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv3_ia_prefix.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
        adv_router.value_namespace = name_space;
        adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decoded-completed")
    {
        decoded_completed = value;
        decoded_completed.value_namespace = name_space;
        decoded_completed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raw-data")
    {
        raw_data.append(value);
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "adv-router")
    {
        adv_router.yfilter = yfilter;
    }
    if(value_path == "decoded-completed")
    {
        decoded_completed.yfilter = yfilter;
    }
    if(value_path == "raw-data")
    {
        raw_data.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv2-lsa" || name == "ospfv2-link" || name == "ospfv2-topology" || name == "ospfv2-external" || name == "ospfv3-lsa" || name == "ospfv3-link" || name == "ospfv3-prefix" || name == "ospfv3-ia-prefix" || name == "lsa-type" || name == "adv-router" || name == "decoded-completed" || name == "raw-data")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Ospfv2Lsa()
    :
    header(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header>())
    , lsa_body(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody>())
{
    header->parent = this;
    lsa_body->parent = this;

    yang_name = "ospfv2-lsa"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::~Ospfv2Lsa()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::has_data() const
{
    if (is_presence_container) return true;
    return (header !=  nullptr && header->has_data())
	|| (lsa_body !=  nullptr && lsa_body->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (lsa_body !=  nullptr && lsa_body->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header>();
        }
        return header;
    }

    if(child_yang_name == "lsa-body")
    {
        if(lsa_body == nullptr)
        {
            lsa_body = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody>();
        }
        return lsa_body;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(lsa_body != nullptr)
    {
        children["lsa-body"] = lsa_body;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "lsa-body")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header::Header()
    :
    lsa_id{YType::str, "lsa-id"},
    opaque_type{YType::uint8, "opaque-type"},
    opaque_id{YType::uint32, "opaque-id"},
    age{YType::uint16, "age"},
    type{YType::uint16, "type"},
    adv_router{YType::uint32, "adv-router"},
    seq_num{YType::str, "seq-num"},
    checksum{YType::str, "checksum"},
    length{YType::uint16, "length"},
    flag_options{YType::bits, "flag-options"}
{

    yang_name = "header"; yang_parent_name = "ospfv2-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header::~Header()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| opaque_type.is_set
	|| opaque_id.is_set
	|| age.is_set
	|| type.is_set
	|| adv_router.is_set
	|| seq_num.is_set
	|| checksum.is_set
	|| length.is_set
	|| flag_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(opaque_type.yfilter)
	|| ydk::is_set(opaque_id.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(adv_router.yfilter)
	|| ydk::is_set(seq_num.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(flag_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (opaque_type.is_set || is_set(opaque_type.yfilter)) leaf_name_data.push_back(opaque_type.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.yfilter)) leaf_name_data.push_back(opaque_id.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.yfilter)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (seq_num.is_set || is_set(seq_num.yfilter)) leaf_name_data.push_back(seq_num.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (flag_options.is_set || is_set(flag_options.yfilter)) leaf_name_data.push_back(flag_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-type")
    {
        opaque_type = value;
        opaque_type.value_namespace = name_space;
        opaque_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
        opaque_id.value_namespace = name_space;
        opaque_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
        adv_router.value_namespace = name_space;
        adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-num")
    {
        seq_num = value;
        seq_num.value_namespace = name_space;
        seq_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-options")
    {
        flag_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "opaque-type")
    {
        opaque_type.yfilter = yfilter;
    }
    if(value_path == "opaque-id")
    {
        opaque_id.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "adv-router")
    {
        adv_router.yfilter = yfilter;
    }
    if(value_path == "seq-num")
    {
        seq_num.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "flag-options")
    {
        flag_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-id" || name == "opaque-type" || name == "opaque-id" || name == "age" || name == "type" || name == "adv-router" || name == "seq-num" || name == "checksum" || name == "length" || name == "flag-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::LsaBody()
    :
    num_of_links{YType::uint16, "num-of-links"},
    summary_mask{YType::str, "summary-mask"},
    external_mask{YType::str, "external-mask"},
    body_flag_options{YType::bits, "body-flag-options"}
        ,
    network(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network>())
{
    network->parent = this;

    yang_name = "lsa-body"; yang_parent_name = "ospfv2-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::~LsaBody()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::has_data() const
{
    if (is_presence_container) return true;
    return num_of_links.is_set
	|| summary_mask.is_set
	|| external_mask.is_set
	|| body_flag_options.is_set
	|| (network !=  nullptr && network->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_of_links.yfilter)
	|| ydk::is_set(summary_mask.yfilter)
	|| ydk::is_set(external_mask.yfilter)
	|| ydk::is_set(body_flag_options.yfilter)
	|| (network !=  nullptr && network->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-body";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_of_links.is_set || is_set(num_of_links.yfilter)) leaf_name_data.push_back(num_of_links.get_name_leafdata());
    if (summary_mask.is_set || is_set(summary_mask.yfilter)) leaf_name_data.push_back(summary_mask.get_name_leafdata());
    if (external_mask.is_set || is_set(external_mask.yfilter)) leaf_name_data.push_back(external_mask.get_name_leafdata());
    if (body_flag_options.is_set || is_set(body_flag_options.yfilter)) leaf_name_data.push_back(body_flag_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network>();
        }
        return network;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(network != nullptr)
    {
        children["network"] = network;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-of-links")
    {
        num_of_links = value;
        num_of_links.value_namespace = name_space;
        num_of_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-mask")
    {
        summary_mask = value;
        summary_mask.value_namespace = name_space;
        summary_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-mask")
    {
        external_mask = value;
        external_mask.value_namespace = name_space;
        external_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "body-flag-options")
    {
        body_flag_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-of-links")
    {
        num_of_links.yfilter = yfilter;
    }
    if(value_path == "summary-mask")
    {
        summary_mask.yfilter = yfilter;
    }
    if(value_path == "external-mask")
    {
        external_mask.yfilter = yfilter;
    }
    if(value_path == "body-flag-options")
    {
        body_flag_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network" || name == "num-of-links" || name == "summary-mask" || name == "external-mask" || name == "body-flag-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network::Network()
    :
    network_mask{YType::str, "network-mask"},
    attached_router{YType::uint32, "attached-router"}
{

    yang_name = "network"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network::~Network()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return network_mask.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network::has_operation() const
{
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network_mask.yfilter)
	|| ydk::is_set(attached_router.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_mask.is_set || is_set(network_mask.yfilter)) leaf_name_data.push_back(network_mask.get_name_leafdata());

    auto attached_router_name_datas = attached_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attached_router_name_datas.begin(), attached_router_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-mask")
    {
        network_mask = value;
        network_mask.value_namespace = name_space;
        network_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-router")
    {
        attached_router.append(value);
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-mask")
    {
        network_mask.yfilter = yfilter;
    }
    if(value_path == "attached-router")
    {
        attached_router.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-mask" || name == "attached-router")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Link()
    :
    link_id{YType::uint32, "link-id"},
    link_data{YType::uint32, "link-data"},
    type{YType::uint8, "type"}
        ,
    ospfv2_topology(this, {"mt_id"})
{

    yang_name = "ospfv2-link"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::~Ospfv2Link()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfv2_topology.len(); index++)
    {
        if(ospfv2_topology[index]->has_data())
            return true;
    }
    return link_id.is_set
	|| link_data.is_set
	|| type.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::has_operation() const
{
    for (std::size_t index=0; index<ospfv2_topology.len(); index++)
    {
        if(ospfv2_topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_data.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-link";
    ADD_KEY_TOKEN(link_id, "link-id");
    ADD_KEY_TOKEN(link_data, "link-data");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_data.is_set || is_set(link_data.yfilter)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2-topology")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology>();
        c->parent = this;
        ospfv2_topology.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospfv2_topology.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-data")
    {
        link_data.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv2-topology" || name == "link-id" || name == "link-data" || name == "type")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology::Ospfv2Topology()
    :
    mt_id{YType::uint32, "mt-id"},
    metric{YType::uint16, "metric"}
{

    yang_name = "ospfv2-topology"; yang_parent_name = "ospfv2-link"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology::~Ospfv2Topology()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| metric.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-topology";
    ADD_KEY_TOKEN(mt_id, "mt-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "metric")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Topology::Ospfv2Topology()
    :
    mt_id{YType::uint32, "mt-id"},
    metric{YType::uint16, "metric"}
{

    yang_name = "ospfv2-topology"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Topology::~Ospfv2Topology()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Topology::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| metric.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-topology";
    ADD_KEY_TOKEN(mt_id, "mt-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "metric")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2External::Ospfv2External()
    :
    mt_id{YType::uint32, "mt-id"},
    metric{YType::uint32, "metric"},
    forwarding_address{YType::str, "forwarding-address"},
    external_route_tag{YType::uint32, "external-route-tag"}
{

    yang_name = "ospfv2-external"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2External::~Ospfv2External()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2External::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| metric.is_set
	|| forwarding_address.is_set
	|| external_route_tag.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_route_tag.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-external";
    ADD_KEY_TOKEN(mt_id, "mt-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.yfilter)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
        external_route_tag.value_namespace = name_space;
        external_route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv2External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "metric" || name == "forwarding-address" || name == "external-route-tag")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Ospfv3Lsa()
    :
    header(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header>())
    , lsa_body(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody>())
{
    header->parent = this;
    lsa_body->parent = this;

    yang_name = "ospfv3-lsa"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::~Ospfv3Lsa()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::has_data() const
{
    if (is_presence_container) return true;
    return (header !=  nullptr && header->has_data())
	|| (lsa_body !=  nullptr && lsa_body->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (lsa_body !=  nullptr && lsa_body->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header>();
        }
        return header;
    }

    if(child_yang_name == "lsa-body")
    {
        if(lsa_body == nullptr)
        {
            lsa_body = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody>();
        }
        return lsa_body;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(lsa_body != nullptr)
    {
        children["lsa-body"] = lsa_body;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "lsa-body")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::Header()
    :
    lsa_id{YType::str, "lsa-id"},
    lsa_hdr_options{YType::bits, "lsa-hdr-options"}
        ,
    lsa_header(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader>())
{
    lsa_header->parent = this;

    yang_name = "header"; yang_parent_name = "ospfv3-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::~Header()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| lsa_hdr_options.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(lsa_hdr_options.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (lsa_hdr_options.is_set || is_set(lsa_hdr_options.yfilter)) leaf_name_data.push_back(lsa_hdr_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader>();
        }
        return lsa_header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-hdr-options")
    {
        lsa_hdr_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "lsa-hdr-options")
    {
        lsa_hdr_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "lsa-id" || name == "lsa-hdr-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader::LsaHeader()
    :
    age{YType::uint16, "age"},
    type{YType::uint16, "type"},
    adv_router{YType::uint32, "adv-router"},
    seq_num{YType::str, "seq-num"},
    checksum{YType::str, "checksum"},
    length{YType::uint16, "length"}
{

    yang_name = "lsa-header"; yang_parent_name = "header"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader::~LsaHeader()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader::has_data() const
{
    if (is_presence_container) return true;
    return age.is_set
	|| type.is_set
	|| adv_router.is_set
	|| seq_num.is_set
	|| checksum.is_set
	|| length.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(adv_router.yfilter)
	|| ydk::is_set(seq_num.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(length.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.yfilter)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (seq_num.is_set || is_set(seq_num.yfilter)) leaf_name_data.push_back(seq_num.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
        adv_router.value_namespace = name_space;
        adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-num")
    {
        seq_num = value;
        seq_num.value_namespace = name_space;
        seq_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "adv-router")
    {
        adv_router.yfilter = yfilter;
    }
    if(value_path == "seq-num")
    {
        seq_num.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "age" || name == "type" || name == "adv-router" || name == "seq-num" || name == "checksum" || name == "length")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaBody()
    :
    lsa_flag_options{YType::bits, "lsa-flag-options"},
    lsa_body_flags{YType::bits, "lsa-body-flags"}
        ,
    network(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network>())
    , prefix(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix>())
    , ia_router(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter>())
    , lsa_external(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal>())
    , nssa(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa>())
    , link_data(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData>())
    , ia_prefix(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix>())
{
    network->parent = this;
    prefix->parent = this;
    ia_router->parent = this;
    lsa_external->parent = this;
    nssa->parent = this;
    link_data->parent = this;
    ia_prefix->parent = this;

    yang_name = "lsa-body"; yang_parent_name = "ospfv3-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::~LsaBody()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::has_data() const
{
    if (is_presence_container) return true;
    return lsa_flag_options.is_set
	|| lsa_body_flags.is_set
	|| (network !=  nullptr && network->has_data())
	|| (prefix !=  nullptr && prefix->has_data())
	|| (ia_router !=  nullptr && ia_router->has_data())
	|| (lsa_external !=  nullptr && lsa_external->has_data())
	|| (nssa !=  nullptr && nssa->has_data())
	|| (link_data !=  nullptr && link_data->has_data())
	|| (ia_prefix !=  nullptr && ia_prefix->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_flag_options.yfilter)
	|| ydk::is_set(lsa_body_flags.yfilter)
	|| (network !=  nullptr && network->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (ia_router !=  nullptr && ia_router->has_operation())
	|| (lsa_external !=  nullptr && lsa_external->has_operation())
	|| (nssa !=  nullptr && nssa->has_operation())
	|| (link_data !=  nullptr && link_data->has_operation())
	|| (ia_prefix !=  nullptr && ia_prefix->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-body";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_flag_options.is_set || is_set(lsa_flag_options.yfilter)) leaf_name_data.push_back(lsa_flag_options.get_name_leafdata());
    if (lsa_body_flags.is_set || is_set(lsa_body_flags.yfilter)) leaf_name_data.push_back(lsa_body_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "ia-router")
    {
        if(ia_router == nullptr)
        {
            ia_router = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter>();
        }
        return ia_router;
    }

    if(child_yang_name == "lsa-external")
    {
        if(lsa_external == nullptr)
        {
            lsa_external = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal>();
        }
        return lsa_external;
    }

    if(child_yang_name == "nssa")
    {
        if(nssa == nullptr)
        {
            nssa = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa>();
        }
        return nssa;
    }

    if(child_yang_name == "link-data")
    {
        if(link_data == nullptr)
        {
            link_data = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData>();
        }
        return link_data;
    }

    if(child_yang_name == "ia-prefix")
    {
        if(ia_prefix == nullptr)
        {
            ia_prefix = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix>();
        }
        return ia_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(ia_router != nullptr)
    {
        children["ia-router"] = ia_router;
    }

    if(lsa_external != nullptr)
    {
        children["lsa-external"] = lsa_external;
    }

    if(nssa != nullptr)
    {
        children["nssa"] = nssa;
    }

    if(link_data != nullptr)
    {
        children["link-data"] = link_data;
    }

    if(ia_prefix != nullptr)
    {
        children["ia-prefix"] = ia_prefix;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-flag-options")
    {
        lsa_flag_options[value] = true;
    }
    if(value_path == "lsa-body-flags")
    {
        lsa_body_flags[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-flag-options")
    {
        lsa_flag_options.yfilter = yfilter;
    }
    if(value_path == "lsa-body-flags")
    {
        lsa_body_flags.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network" || name == "prefix" || name == "ia-router" || name == "lsa-external" || name == "nssa" || name == "link-data" || name == "ia-prefix" || name == "lsa-flag-options" || name == "lsa-body-flags")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network::Network()
    :
    attached_router{YType::uint32, "attached-router"},
    lsa_net_options{YType::bits, "lsa-net-options"}
{

    yang_name = "network"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network::~Network()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return lsa_net_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network::has_operation() const
{
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(attached_router.yfilter)
	|| ydk::is_set(lsa_net_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_net_options.is_set || is_set(lsa_net_options.yfilter)) leaf_name_data.push_back(lsa_net_options.get_name_leafdata());

    auto attached_router_name_datas = attached_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attached_router_name_datas.begin(), attached_router_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attached-router")
    {
        attached_router.append(value);
    }
    if(value_path == "lsa-net-options")
    {
        lsa_net_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attached-router")
    {
        attached_router.yfilter = yfilter;
    }
    if(value_path == "lsa-net-options")
    {
        lsa_net_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attached-router" || name == "lsa-net-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix::Prefix()
    :
    metric{YType::uint32, "metric"},
    ia_prefix{YType::str, "ia-prefix"},
    ia_prefix_options{YType::str, "ia-prefix-options"}
{

    yang_name = "prefix"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix::~Prefix()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| ia_prefix.is_set
	|| ia_prefix_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(ia_prefix.yfilter)
	|| ydk::is_set(ia_prefix_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (ia_prefix.is_set || is_set(ia_prefix.yfilter)) leaf_name_data.push_back(ia_prefix.get_name_leafdata());
    if (ia_prefix_options.is_set || is_set(ia_prefix_options.yfilter)) leaf_name_data.push_back(ia_prefix_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ia-prefix")
    {
        ia_prefix = value;
        ia_prefix.value_namespace = name_space;
        ia_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ia-prefix-options")
    {
        ia_prefix_options = value;
        ia_prefix_options.value_namespace = name_space;
        ia_prefix_options.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "ia-prefix")
    {
        ia_prefix.yfilter = yfilter;
    }
    if(value_path == "ia-prefix-options")
    {
        ia_prefix_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "ia-prefix" || name == "ia-prefix-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter::IaRouter()
    :
    metric{YType::uint32, "metric"},
    destination_router_id{YType::uint32, "destination-router-id"},
    lsa_ia_options{YType::bits, "lsa-ia-options"}
{

    yang_name = "ia-router"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter::~IaRouter()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| destination_router_id.is_set
	|| lsa_ia_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(destination_router_id.yfilter)
	|| ydk::is_set(lsa_ia_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ia-router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (destination_router_id.is_set || is_set(destination_router_id.yfilter)) leaf_name_data.push_back(destination_router_id.get_name_leafdata());
    if (lsa_ia_options.is_set || is_set(lsa_ia_options.yfilter)) leaf_name_data.push_back(lsa_ia_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-router-id")
    {
        destination_router_id = value;
        destination_router_id.value_namespace = name_space;
        destination_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-ia-options")
    {
        lsa_ia_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "destination-router-id")
    {
        destination_router_id.yfilter = yfilter;
    }
    if(value_path == "lsa-ia-options")
    {
        lsa_ia_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "destination-router-id" || name == "lsa-ia-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::LsaExternal()
    :
    metric{YType::uint32, "metric"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"},
    external_prefix{YType::str, "external-prefix"},
    external_prefix_options{YType::str, "external-prefix-options"},
    forwarding_address{YType::str, "forwarding-address"},
    external_route_tag{YType::uint32, "external-route-tag"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"}
        ,
    flags(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags>())
{
    flags->parent = this;

    yang_name = "lsa-external"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::~LsaExternal()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| referenced_ls_type.is_set
	|| external_prefix.is_set
	|| external_prefix_options.is_set
	|| forwarding_address.is_set
	|| external_route_tag.is_set
	|| referenced_link_state_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(referenced_ls_type.yfilter)
	|| ydk::is_set(external_prefix.yfilter)
	|| ydk::is_set(external_prefix_options.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_route_tag.yfilter)
	|| ydk::is_set(referenced_link_state_id.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.yfilter)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());
    if (external_prefix.is_set || is_set(external_prefix.yfilter)) leaf_name_data.push_back(external_prefix.get_name_leafdata());
    if (external_prefix_options.is_set || is_set(external_prefix_options.yfilter)) leaf_name_data.push_back(external_prefix_options.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.yfilter)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.yfilter)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
        referenced_ls_type.value_namespace = name_space;
        referenced_ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-prefix")
    {
        external_prefix = value;
        external_prefix.value_namespace = name_space;
        external_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-prefix-options")
    {
        external_prefix_options = value;
        external_prefix_options.value_namespace = name_space;
        external_prefix_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
        external_route_tag.value_namespace = name_space;
        external_route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
        referenced_link_state_id.value_namespace = name_space;
        referenced_link_state_id.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type.yfilter = yfilter;
    }
    if(value_path == "external-prefix")
    {
        external_prefix.yfilter = yfilter;
    }
    if(value_path == "external-prefix-options")
    {
        external_prefix_options.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag.yfilter = yfilter;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "metric" || name == "referenced-ls-type" || name == "external-prefix" || name == "external-prefix-options" || name == "forwarding-address" || name == "external-route-tag" || name == "referenced-link-state-id")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags::Flags()
    :
    e_flag{YType::boolean, "e-flag"}
{

    yang_name = "flags"; yang_parent_name = "lsa-external"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags::~Flags()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags::has_data() const
{
    if (is_presence_container) return true;
    return e_flag.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(e_flag.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (e_flag.is_set || is_set(e_flag.yfilter)) leaf_name_data.push_back(e_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "e-flag")
    {
        e_flag = value;
        e_flag.value_namespace = name_space;
        e_flag.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "e-flag")
    {
        e_flag.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "e-flag")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::Nssa()
    :
    lsa_nssa_external(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal>())
{
    lsa_nssa_external->parent = this;

    yang_name = "nssa"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::~Nssa()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::has_data() const
{
    if (is_presence_container) return true;
    return (lsa_nssa_external !=  nullptr && lsa_nssa_external->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::has_operation() const
{
    return is_set(yfilter)
	|| (lsa_nssa_external !=  nullptr && lsa_nssa_external->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-nssa-external")
    {
        if(lsa_nssa_external == nullptr)
        {
            lsa_nssa_external = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal>();
        }
        return lsa_nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_nssa_external != nullptr)
    {
        children["lsa-nssa-external"] = lsa_nssa_external;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-nssa-external")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::LsaNssaExternal()
    :
    metric{YType::uint32, "metric"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"},
    external_prefix{YType::str, "external-prefix"},
    external_prefix_options{YType::str, "external-prefix-options"},
    forwarding_address{YType::str, "forwarding-address"},
    external_route_tag{YType::uint32, "external-route-tag"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"}
        ,
    flags(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags>())
{
    flags->parent = this;

    yang_name = "lsa-nssa-external"; yang_parent_name = "nssa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::~LsaNssaExternal()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| referenced_ls_type.is_set
	|| external_prefix.is_set
	|| external_prefix_options.is_set
	|| forwarding_address.is_set
	|| external_route_tag.is_set
	|| referenced_link_state_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(referenced_ls_type.yfilter)
	|| ydk::is_set(external_prefix.yfilter)
	|| ydk::is_set(external_prefix_options.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_route_tag.yfilter)
	|| ydk::is_set(referenced_link_state_id.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.yfilter)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());
    if (external_prefix.is_set || is_set(external_prefix.yfilter)) leaf_name_data.push_back(external_prefix.get_name_leafdata());
    if (external_prefix_options.is_set || is_set(external_prefix_options.yfilter)) leaf_name_data.push_back(external_prefix_options.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.yfilter)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.yfilter)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
        referenced_ls_type.value_namespace = name_space;
        referenced_ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-prefix")
    {
        external_prefix = value;
        external_prefix.value_namespace = name_space;
        external_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-prefix-options")
    {
        external_prefix_options = value;
        external_prefix_options.value_namespace = name_space;
        external_prefix_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
        external_route_tag.value_namespace = name_space;
        external_route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
        referenced_link_state_id.value_namespace = name_space;
        referenced_link_state_id.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type.yfilter = yfilter;
    }
    if(value_path == "external-prefix")
    {
        external_prefix.yfilter = yfilter;
    }
    if(value_path == "external-prefix-options")
    {
        external_prefix_options.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag.yfilter = yfilter;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "metric" || name == "referenced-ls-type" || name == "external-prefix" || name == "external-prefix-options" || name == "forwarding-address" || name == "external-route-tag" || name == "referenced-link-state-id")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::Flags()
    :
    e_flag{YType::boolean, "e-flag"}
{

    yang_name = "flags"; yang_parent_name = "lsa-nssa-external"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::~Flags()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::has_data() const
{
    if (is_presence_container) return true;
    return e_flag.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(e_flag.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (e_flag.is_set || is_set(e_flag.yfilter)) leaf_name_data.push_back(e_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "e-flag")
    {
        e_flag = value;
        e_flag.value_namespace = name_space;
        e_flag.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "e-flag")
    {
        e_flag.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "e-flag")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData::LinkData()
    :
    rtr_priority{YType::uint8, "rtr-priority"},
    link_local_interface_address{YType::str, "link-local-interface-address"},
    num_of_prefixes{YType::uint32, "num-of-prefixes"},
    lsa_id_options{YType::bits, "lsa-id-options"}
{

    yang_name = "link-data"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData::~LinkData()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData::has_data() const
{
    if (is_presence_container) return true;
    return rtr_priority.is_set
	|| link_local_interface_address.is_set
	|| num_of_prefixes.is_set
	|| lsa_id_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr_priority.yfilter)
	|| ydk::is_set(link_local_interface_address.yfilter)
	|| ydk::is_set(num_of_prefixes.yfilter)
	|| ydk::is_set(lsa_id_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_priority.is_set || is_set(rtr_priority.yfilter)) leaf_name_data.push_back(rtr_priority.get_name_leafdata());
    if (link_local_interface_address.is_set || is_set(link_local_interface_address.yfilter)) leaf_name_data.push_back(link_local_interface_address.get_name_leafdata());
    if (num_of_prefixes.is_set || is_set(num_of_prefixes.yfilter)) leaf_name_data.push_back(num_of_prefixes.get_name_leafdata());
    if (lsa_id_options.is_set || is_set(lsa_id_options.yfilter)) leaf_name_data.push_back(lsa_id_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-priority")
    {
        rtr_priority = value;
        rtr_priority.value_namespace = name_space;
        rtr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-local-interface-address")
    {
        link_local_interface_address = value;
        link_local_interface_address.value_namespace = name_space;
        link_local_interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes = value;
        num_of_prefixes.value_namespace = name_space;
        num_of_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-id-options")
    {
        lsa_id_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-priority")
    {
        rtr_priority.yfilter = yfilter;
    }
    if(value_path == "link-local-interface-address")
    {
        link_local_interface_address.yfilter = yfilter;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes.yfilter = yfilter;
    }
    if(value_path == "lsa-id-options")
    {
        lsa_id_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr-priority" || name == "link-local-interface-address" || name == "num-of-prefixes" || name == "lsa-id-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix::IaPrefix()
    :
    referenced_ls_type{YType::uint16, "referenced-ls-type"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"},
    referenced_adv_router{YType::str, "referenced-adv-router"},
    num_of_prefixes{YType::uint16, "num-of-prefixes"}
{

    yang_name = "ia-prefix"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix::~IaPrefix()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix::has_data() const
{
    if (is_presence_container) return true;
    return referenced_ls_type.is_set
	|| referenced_link_state_id.is_set
	|| referenced_adv_router.is_set
	|| num_of_prefixes.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(referenced_ls_type.yfilter)
	|| ydk::is_set(referenced_link_state_id.yfilter)
	|| ydk::is_set(referenced_adv_router.yfilter)
	|| ydk::is_set(num_of_prefixes.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ia-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (referenced_ls_type.is_set || is_set(referenced_ls_type.yfilter)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.yfilter)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());
    if (referenced_adv_router.is_set || is_set(referenced_adv_router.yfilter)) leaf_name_data.push_back(referenced_adv_router.get_name_leafdata());
    if (num_of_prefixes.is_set || is_set(num_of_prefixes.yfilter)) leaf_name_data.push_back(num_of_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
        referenced_ls_type.value_namespace = name_space;
        referenced_ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
        referenced_link_state_id.value_namespace = name_space;
        referenced_link_state_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-adv-router")
    {
        referenced_adv_router = value;
        referenced_adv_router.value_namespace = name_space;
        referenced_adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes = value;
        num_of_prefixes.value_namespace = name_space;
        num_of_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type.yfilter = yfilter;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id.yfilter = yfilter;
    }
    if(value_path == "referenced-adv-router")
    {
        referenced_adv_router.yfilter = yfilter;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "referenced-ls-type" || name == "referenced-link-state-id" || name == "referenced-adv-router" || name == "num-of-prefixes")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Link::Ospfv3Link()
    :
    interface_id{YType::uint32, "interface-id"},
    neighbor_interface_id{YType::uint32, "neighbor-interface-id"},
    neighbor_router_id{YType::uint32, "neighbor-router-id"},
    type{YType::uint8, "type"},
    metric{YType::uint16, "metric"}
{

    yang_name = "ospfv3-link"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Link::~Ospfv3Link()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Link::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set
	|| neighbor_interface_id.is_set
	|| neighbor_router_id.is_set
	|| type.is_set
	|| metric.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Link::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(neighbor_interface_id.yfilter)
	|| ydk::is_set(neighbor_router_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-link";
    ADD_KEY_TOKEN(interface_id, "interface-id");
    ADD_KEY_TOKEN(neighbor_interface_id, "neighbor-interface-id");
    ADD_KEY_TOKEN(neighbor_router_id, "neighbor-router-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (neighbor_interface_id.is_set || is_set(neighbor_interface_id.yfilter)) leaf_name_data.push_back(neighbor_interface_id.get_name_leafdata());
    if (neighbor_router_id.is_set || is_set(neighbor_router_id.yfilter)) leaf_name_data.push_back(neighbor_router_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id = value;
        neighbor_interface_id.value_namespace = name_space;
        neighbor_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id = value;
        neighbor_router_id.value_namespace = name_space;
        neighbor_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id" || name == "neighbor-interface-id" || name == "neighbor-router-id" || name == "type" || name == "metric")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Prefix::Ospfv3Prefix()
    :
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"}
{

    yang_name = "ospfv3-prefix"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Prefix::~Ospfv3Prefix()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Prefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-prefix";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix::Ospfv3IaPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"}
{

    yang_name = "ospfv3-ia-prefix"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix::~Ospfv3IaPrefix()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-ia-prefix";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfLinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfMultiTopology::IntfMultiTopology()
    :
    name{YType::str, "name"}
{

    yang_name = "intf-multi-topology"; yang_parent_name = "ospf-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfMultiTopology::~IntfMultiTopology()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfMultiTopology::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfMultiTopology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfMultiTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-multi-topology";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfMultiTopology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfMultiTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfMultiTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfMultiTopology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfMultiTopology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::OspfInterface::IntfMultiTopology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa()
    :
    lsa_type{YType::uint32, "lsa-type"}
        ,
    area_scope_lsa(this, {"lsa_type", "adv_router"})
{

    yang_name = "area-scope-lsa"; yang_parent_name = "ospf-area"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::~AreaScopeLsa()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<area_scope_lsa.len(); index++)
    {
        if(area_scope_lsa[index]->has_data())
            return true;
    }
    return lsa_type.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::has_operation() const
{
    for (std::size_t index=0; index<area_scope_lsa.len(); index++)
    {
        if(area_scope_lsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-scope-lsa";
    ADD_KEY_TOKEN(lsa_type, "lsa-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-scope-lsa")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_>();
        c->parent = this;
        area_scope_lsa.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : area_scope_lsa.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-scope-lsa" || name == "lsa-type")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::AreaScopeLsa_()
    :
    lsa_type{YType::uint32, "lsa-type"},
    adv_router{YType::str, "adv-router"},
    decoded_completed{YType::boolean, "decoded-completed"},
    raw_data{YType::uint8, "raw-data"}
        ,
    ospfv2_lsa(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa>())
    , ospfv2_link(this, {"link_id", "link_data"})
    , ospfv2_topology(this, {"mt_id"})
    , ospfv2_external(this, {"mt_id"})
    , ospfv3_lsa(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa>())
    , ospfv3_link(this, {"interface_id", "neighbor_interface_id", "neighbor_router_id"})
    , ospfv3_prefix(this, {"prefix"})
    , ospfv3_ia_prefix(this, {"prefix"})
{
    ospfv2_lsa->parent = this;
    ospfv3_lsa->parent = this;

    yang_name = "area-scope-lsa"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::~AreaScopeLsa_()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfv2_link.len(); index++)
    {
        if(ospfv2_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_topology.len(); index++)
    {
        if(ospfv2_topology[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_external.len(); index++)
    {
        if(ospfv2_external[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_link.len(); index++)
    {
        if(ospfv3_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_prefix.len(); index++)
    {
        if(ospfv3_prefix[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_ia_prefix.len(); index++)
    {
        if(ospfv3_ia_prefix[index]->has_data())
            return true;
    }
    for (auto const & leaf : raw_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return lsa_type.is_set
	|| adv_router.is_set
	|| decoded_completed.is_set
	|| (ospfv2_lsa !=  nullptr && ospfv2_lsa->has_data())
	|| (ospfv3_lsa !=  nullptr && ospfv3_lsa->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::has_operation() const
{
    for (std::size_t index=0; index<ospfv2_link.len(); index++)
    {
        if(ospfv2_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_topology.len(); index++)
    {
        if(ospfv2_topology[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_external.len(); index++)
    {
        if(ospfv2_external[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_link.len(); index++)
    {
        if(ospfv3_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_prefix.len(); index++)
    {
        if(ospfv3_prefix[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_ia_prefix.len(); index++)
    {
        if(ospfv3_ia_prefix[index]->has_operation())
            return true;
    }
    for (auto const & leaf : raw_data.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(adv_router.yfilter)
	|| ydk::is_set(decoded_completed.yfilter)
	|| ydk::is_set(raw_data.yfilter)
	|| (ospfv2_lsa !=  nullptr && ospfv2_lsa->has_operation())
	|| (ospfv3_lsa !=  nullptr && ospfv3_lsa->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-scope-lsa";
    ADD_KEY_TOKEN(lsa_type, "lsa-type");
    ADD_KEY_TOKEN(adv_router, "adv-router");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.yfilter)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (decoded_completed.is_set || is_set(decoded_completed.yfilter)) leaf_name_data.push_back(decoded_completed.get_name_leafdata());

    auto raw_data_name_datas = raw_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), raw_data_name_datas.begin(), raw_data_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2-lsa")
    {
        if(ospfv2_lsa == nullptr)
        {
            ospfv2_lsa = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa>();
        }
        return ospfv2_lsa;
    }

    if(child_yang_name == "ospfv2-link")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link>();
        c->parent = this;
        ospfv2_link.append(c);
        return c;
    }

    if(child_yang_name == "ospfv2-topology")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Topology>();
        c->parent = this;
        ospfv2_topology.append(c);
        return c;
    }

    if(child_yang_name == "ospfv2-external")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2External>();
        c->parent = this;
        ospfv2_external.append(c);
        return c;
    }

    if(child_yang_name == "ospfv3-lsa")
    {
        if(ospfv3_lsa == nullptr)
        {
            ospfv3_lsa = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa>();
        }
        return ospfv3_lsa;
    }

    if(child_yang_name == "ospfv3-link")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Link>();
        c->parent = this;
        ospfv3_link.append(c);
        return c;
    }

    if(child_yang_name == "ospfv3-prefix")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Prefix>();
        c->parent = this;
        ospfv3_prefix.append(c);
        return c;
    }

    if(child_yang_name == "ospfv3-ia-prefix")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3IaPrefix>();
        c->parent = this;
        ospfv3_ia_prefix.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ospfv2_lsa != nullptr)
    {
        children["ospfv2-lsa"] = ospfv2_lsa;
    }

    count = 0;
    for (auto c : ospfv2_link.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv2_topology.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv2_external.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(ospfv3_lsa != nullptr)
    {
        children["ospfv3-lsa"] = ospfv3_lsa;
    }

    count = 0;
    for (auto c : ospfv3_link.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv3_prefix.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv3_ia_prefix.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
        adv_router.value_namespace = name_space;
        adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decoded-completed")
    {
        decoded_completed = value;
        decoded_completed.value_namespace = name_space;
        decoded_completed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raw-data")
    {
        raw_data.append(value);
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "adv-router")
    {
        adv_router.yfilter = yfilter;
    }
    if(value_path == "decoded-completed")
    {
        decoded_completed.yfilter = yfilter;
    }
    if(value_path == "raw-data")
    {
        raw_data.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv2-lsa" || name == "ospfv2-link" || name == "ospfv2-topology" || name == "ospfv2-external" || name == "ospfv3-lsa" || name == "ospfv3-link" || name == "ospfv3-prefix" || name == "ospfv3-ia-prefix" || name == "lsa-type" || name == "adv-router" || name == "decoded-completed" || name == "raw-data")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::Ospfv2Lsa()
    :
    header(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::Header>())
    , lsa_body(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody>())
{
    header->parent = this;
    lsa_body->parent = this;

    yang_name = "ospfv2-lsa"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::~Ospfv2Lsa()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::has_data() const
{
    if (is_presence_container) return true;
    return (header !=  nullptr && header->has_data())
	|| (lsa_body !=  nullptr && lsa_body->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (lsa_body !=  nullptr && lsa_body->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::Header>();
        }
        return header;
    }

    if(child_yang_name == "lsa-body")
    {
        if(lsa_body == nullptr)
        {
            lsa_body = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody>();
        }
        return lsa_body;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(lsa_body != nullptr)
    {
        children["lsa-body"] = lsa_body;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "lsa-body")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::Header::Header()
    :
    lsa_id{YType::str, "lsa-id"},
    opaque_type{YType::uint8, "opaque-type"},
    opaque_id{YType::uint32, "opaque-id"},
    age{YType::uint16, "age"},
    type{YType::uint16, "type"},
    adv_router{YType::uint32, "adv-router"},
    seq_num{YType::str, "seq-num"},
    checksum{YType::str, "checksum"},
    length{YType::uint16, "length"},
    flag_options{YType::bits, "flag-options"}
{

    yang_name = "header"; yang_parent_name = "ospfv2-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::Header::~Header()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::Header::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| opaque_type.is_set
	|| opaque_id.is_set
	|| age.is_set
	|| type.is_set
	|| adv_router.is_set
	|| seq_num.is_set
	|| checksum.is_set
	|| length.is_set
	|| flag_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(opaque_type.yfilter)
	|| ydk::is_set(opaque_id.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(adv_router.yfilter)
	|| ydk::is_set(seq_num.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(flag_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (opaque_type.is_set || is_set(opaque_type.yfilter)) leaf_name_data.push_back(opaque_type.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.yfilter)) leaf_name_data.push_back(opaque_id.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.yfilter)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (seq_num.is_set || is_set(seq_num.yfilter)) leaf_name_data.push_back(seq_num.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (flag_options.is_set || is_set(flag_options.yfilter)) leaf_name_data.push_back(flag_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-type")
    {
        opaque_type = value;
        opaque_type.value_namespace = name_space;
        opaque_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
        opaque_id.value_namespace = name_space;
        opaque_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
        adv_router.value_namespace = name_space;
        adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-num")
    {
        seq_num = value;
        seq_num.value_namespace = name_space;
        seq_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-options")
    {
        flag_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "opaque-type")
    {
        opaque_type.yfilter = yfilter;
    }
    if(value_path == "opaque-id")
    {
        opaque_id.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "adv-router")
    {
        adv_router.yfilter = yfilter;
    }
    if(value_path == "seq-num")
    {
        seq_num.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "flag-options")
    {
        flag_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-id" || name == "opaque-type" || name == "opaque-id" || name == "age" || name == "type" || name == "adv-router" || name == "seq-num" || name == "checksum" || name == "length" || name == "flag-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::LsaBody()
    :
    num_of_links{YType::uint16, "num-of-links"},
    summary_mask{YType::str, "summary-mask"},
    external_mask{YType::str, "external-mask"},
    body_flag_options{YType::bits, "body-flag-options"}
        ,
    network(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::Network>())
{
    network->parent = this;

    yang_name = "lsa-body"; yang_parent_name = "ospfv2-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::~LsaBody()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::has_data() const
{
    if (is_presence_container) return true;
    return num_of_links.is_set
	|| summary_mask.is_set
	|| external_mask.is_set
	|| body_flag_options.is_set
	|| (network !=  nullptr && network->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_of_links.yfilter)
	|| ydk::is_set(summary_mask.yfilter)
	|| ydk::is_set(external_mask.yfilter)
	|| ydk::is_set(body_flag_options.yfilter)
	|| (network !=  nullptr && network->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-body";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_of_links.is_set || is_set(num_of_links.yfilter)) leaf_name_data.push_back(num_of_links.get_name_leafdata());
    if (summary_mask.is_set || is_set(summary_mask.yfilter)) leaf_name_data.push_back(summary_mask.get_name_leafdata());
    if (external_mask.is_set || is_set(external_mask.yfilter)) leaf_name_data.push_back(external_mask.get_name_leafdata());
    if (body_flag_options.is_set || is_set(body_flag_options.yfilter)) leaf_name_data.push_back(body_flag_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::Network>();
        }
        return network;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(network != nullptr)
    {
        children["network"] = network;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-of-links")
    {
        num_of_links = value;
        num_of_links.value_namespace = name_space;
        num_of_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-mask")
    {
        summary_mask = value;
        summary_mask.value_namespace = name_space;
        summary_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-mask")
    {
        external_mask = value;
        external_mask.value_namespace = name_space;
        external_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "body-flag-options")
    {
        body_flag_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-of-links")
    {
        num_of_links.yfilter = yfilter;
    }
    if(value_path == "summary-mask")
    {
        summary_mask.yfilter = yfilter;
    }
    if(value_path == "external-mask")
    {
        external_mask.yfilter = yfilter;
    }
    if(value_path == "body-flag-options")
    {
        body_flag_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network" || name == "num-of-links" || name == "summary-mask" || name == "external-mask" || name == "body-flag-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::Network::Network()
    :
    network_mask{YType::str, "network-mask"},
    attached_router{YType::uint32, "attached-router"}
{

    yang_name = "network"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::Network::~Network()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::Network::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return network_mask.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::Network::has_operation() const
{
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network_mask.yfilter)
	|| ydk::is_set(attached_router.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_mask.is_set || is_set(network_mask.yfilter)) leaf_name_data.push_back(network_mask.get_name_leafdata());

    auto attached_router_name_datas = attached_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attached_router_name_datas.begin(), attached_router_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-mask")
    {
        network_mask = value;
        network_mask.value_namespace = name_space;
        network_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-router")
    {
        attached_router.append(value);
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-mask")
    {
        network_mask.yfilter = yfilter;
    }
    if(value_path == "attached-router")
    {
        attached_router.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Lsa::LsaBody::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-mask" || name == "attached-router")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::Ospfv2Link()
    :
    link_id{YType::uint32, "link-id"},
    link_data{YType::uint32, "link-data"},
    type{YType::uint8, "type"}
        ,
    ospfv2_topology(this, {"mt_id"})
{

    yang_name = "ospfv2-link"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::~Ospfv2Link()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfv2_topology.len(); index++)
    {
        if(ospfv2_topology[index]->has_data())
            return true;
    }
    return link_id.is_set
	|| link_data.is_set
	|| type.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::has_operation() const
{
    for (std::size_t index=0; index<ospfv2_topology.len(); index++)
    {
        if(ospfv2_topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_data.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-link";
    ADD_KEY_TOKEN(link_id, "link-id");
    ADD_KEY_TOKEN(link_data, "link-data");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_data.is_set || is_set(link_data.yfilter)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2-topology")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::Ospfv2Topology>();
        c->parent = this;
        ospfv2_topology.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospfv2_topology.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-data")
    {
        link_data.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv2-topology" || name == "link-id" || name == "link-data" || name == "type")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::Ospfv2Topology::Ospfv2Topology()
    :
    mt_id{YType::uint32, "mt-id"},
    metric{YType::uint16, "metric"}
{

    yang_name = "ospfv2-topology"; yang_parent_name = "ospfv2-link"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::Ospfv2Topology::~Ospfv2Topology()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::Ospfv2Topology::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| metric.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::Ospfv2Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::Ospfv2Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-topology";
    ADD_KEY_TOKEN(mt_id, "mt-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::Ospfv2Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::Ospfv2Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::Ospfv2Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::Ospfv2Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::Ospfv2Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Link::Ospfv2Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "metric")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Topology::Ospfv2Topology()
    :
    mt_id{YType::uint32, "mt-id"},
    metric{YType::uint16, "metric"}
{

    yang_name = "ospfv2-topology"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Topology::~Ospfv2Topology()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Topology::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| metric.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-topology";
    ADD_KEY_TOKEN(mt_id, "mt-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "metric")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2External::Ospfv2External()
    :
    mt_id{YType::uint32, "mt-id"},
    metric{YType::uint32, "metric"},
    forwarding_address{YType::str, "forwarding-address"},
    external_route_tag{YType::uint32, "external-route-tag"}
{

    yang_name = "ospfv2-external"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2External::~Ospfv2External()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2External::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| metric.is_set
	|| forwarding_address.is_set
	|| external_route_tag.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_route_tag.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-external";
    ADD_KEY_TOKEN(mt_id, "mt-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.yfilter)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
        external_route_tag.value_namespace = name_space;
        external_route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv2External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "metric" || name == "forwarding-address" || name == "external-route-tag")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Ospfv3Lsa()
    :
    header(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header>())
    , lsa_body(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody>())
{
    header->parent = this;
    lsa_body->parent = this;

    yang_name = "ospfv3-lsa"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::~Ospfv3Lsa()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::has_data() const
{
    if (is_presence_container) return true;
    return (header !=  nullptr && header->has_data())
	|| (lsa_body !=  nullptr && lsa_body->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (lsa_body !=  nullptr && lsa_body->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header>();
        }
        return header;
    }

    if(child_yang_name == "lsa-body")
    {
        if(lsa_body == nullptr)
        {
            lsa_body = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody>();
        }
        return lsa_body;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(lsa_body != nullptr)
    {
        children["lsa-body"] = lsa_body;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "lsa-body")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::Header()
    :
    lsa_id{YType::str, "lsa-id"},
    lsa_hdr_options{YType::bits, "lsa-hdr-options"}
        ,
    lsa_header(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::LsaHeader>())
{
    lsa_header->parent = this;

    yang_name = "header"; yang_parent_name = "ospfv3-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::~Header()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| lsa_hdr_options.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(lsa_hdr_options.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (lsa_hdr_options.is_set || is_set(lsa_hdr_options.yfilter)) leaf_name_data.push_back(lsa_hdr_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::LsaHeader>();
        }
        return lsa_header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-hdr-options")
    {
        lsa_hdr_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "lsa-hdr-options")
    {
        lsa_hdr_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "lsa-id" || name == "lsa-hdr-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::LsaHeader::LsaHeader()
    :
    age{YType::uint16, "age"},
    type{YType::uint16, "type"},
    adv_router{YType::uint32, "adv-router"},
    seq_num{YType::str, "seq-num"},
    checksum{YType::str, "checksum"},
    length{YType::uint16, "length"}
{

    yang_name = "lsa-header"; yang_parent_name = "header"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::LsaHeader::~LsaHeader()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::LsaHeader::has_data() const
{
    if (is_presence_container) return true;
    return age.is_set
	|| type.is_set
	|| adv_router.is_set
	|| seq_num.is_set
	|| checksum.is_set
	|| length.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(adv_router.yfilter)
	|| ydk::is_set(seq_num.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(length.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.yfilter)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (seq_num.is_set || is_set(seq_num.yfilter)) leaf_name_data.push_back(seq_num.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
        adv_router.value_namespace = name_space;
        adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-num")
    {
        seq_num = value;
        seq_num.value_namespace = name_space;
        seq_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "adv-router")
    {
        adv_router.yfilter = yfilter;
    }
    if(value_path == "seq-num")
    {
        seq_num.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::Header::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "age" || name == "type" || name == "adv-router" || name == "seq-num" || name == "checksum" || name == "length")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaBody()
    :
    lsa_flag_options{YType::bits, "lsa-flag-options"},
    lsa_body_flags{YType::bits, "lsa-body-flags"}
        ,
    network(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Network>())
    , prefix(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Prefix>())
    , ia_router(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaRouter>())
    , lsa_external(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal>())
    , nssa(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa>())
    , link_data(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LinkData>())
    , ia_prefix(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaPrefix>())
{
    network->parent = this;
    prefix->parent = this;
    ia_router->parent = this;
    lsa_external->parent = this;
    nssa->parent = this;
    link_data->parent = this;
    ia_prefix->parent = this;

    yang_name = "lsa-body"; yang_parent_name = "ospfv3-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::~LsaBody()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::has_data() const
{
    if (is_presence_container) return true;
    return lsa_flag_options.is_set
	|| lsa_body_flags.is_set
	|| (network !=  nullptr && network->has_data())
	|| (prefix !=  nullptr && prefix->has_data())
	|| (ia_router !=  nullptr && ia_router->has_data())
	|| (lsa_external !=  nullptr && lsa_external->has_data())
	|| (nssa !=  nullptr && nssa->has_data())
	|| (link_data !=  nullptr && link_data->has_data())
	|| (ia_prefix !=  nullptr && ia_prefix->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_flag_options.yfilter)
	|| ydk::is_set(lsa_body_flags.yfilter)
	|| (network !=  nullptr && network->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (ia_router !=  nullptr && ia_router->has_operation())
	|| (lsa_external !=  nullptr && lsa_external->has_operation())
	|| (nssa !=  nullptr && nssa->has_operation())
	|| (link_data !=  nullptr && link_data->has_operation())
	|| (ia_prefix !=  nullptr && ia_prefix->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-body";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_flag_options.is_set || is_set(lsa_flag_options.yfilter)) leaf_name_data.push_back(lsa_flag_options.get_name_leafdata());
    if (lsa_body_flags.is_set || is_set(lsa_body_flags.yfilter)) leaf_name_data.push_back(lsa_body_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "ia-router")
    {
        if(ia_router == nullptr)
        {
            ia_router = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaRouter>();
        }
        return ia_router;
    }

    if(child_yang_name == "lsa-external")
    {
        if(lsa_external == nullptr)
        {
            lsa_external = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal>();
        }
        return lsa_external;
    }

    if(child_yang_name == "nssa")
    {
        if(nssa == nullptr)
        {
            nssa = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa>();
        }
        return nssa;
    }

    if(child_yang_name == "link-data")
    {
        if(link_data == nullptr)
        {
            link_data = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LinkData>();
        }
        return link_data;
    }

    if(child_yang_name == "ia-prefix")
    {
        if(ia_prefix == nullptr)
        {
            ia_prefix = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaPrefix>();
        }
        return ia_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(ia_router != nullptr)
    {
        children["ia-router"] = ia_router;
    }

    if(lsa_external != nullptr)
    {
        children["lsa-external"] = lsa_external;
    }

    if(nssa != nullptr)
    {
        children["nssa"] = nssa;
    }

    if(link_data != nullptr)
    {
        children["link-data"] = link_data;
    }

    if(ia_prefix != nullptr)
    {
        children["ia-prefix"] = ia_prefix;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-flag-options")
    {
        lsa_flag_options[value] = true;
    }
    if(value_path == "lsa-body-flags")
    {
        lsa_body_flags[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-flag-options")
    {
        lsa_flag_options.yfilter = yfilter;
    }
    if(value_path == "lsa-body-flags")
    {
        lsa_body_flags.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network" || name == "prefix" || name == "ia-router" || name == "lsa-external" || name == "nssa" || name == "link-data" || name == "ia-prefix" || name == "lsa-flag-options" || name == "lsa-body-flags")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Network::Network()
    :
    attached_router{YType::uint32, "attached-router"},
    lsa_net_options{YType::bits, "lsa-net-options"}
{

    yang_name = "network"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Network::~Network()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Network::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return lsa_net_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Network::has_operation() const
{
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(attached_router.yfilter)
	|| ydk::is_set(lsa_net_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_net_options.is_set || is_set(lsa_net_options.yfilter)) leaf_name_data.push_back(lsa_net_options.get_name_leafdata());

    auto attached_router_name_datas = attached_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attached_router_name_datas.begin(), attached_router_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attached-router")
    {
        attached_router.append(value);
    }
    if(value_path == "lsa-net-options")
    {
        lsa_net_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attached-router")
    {
        attached_router.yfilter = yfilter;
    }
    if(value_path == "lsa-net-options")
    {
        lsa_net_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attached-router" || name == "lsa-net-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Prefix::Prefix()
    :
    metric{YType::uint32, "metric"},
    ia_prefix{YType::str, "ia-prefix"},
    ia_prefix_options{YType::str, "ia-prefix-options"}
{

    yang_name = "prefix"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Prefix::~Prefix()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| ia_prefix.is_set
	|| ia_prefix_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(ia_prefix.yfilter)
	|| ydk::is_set(ia_prefix_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (ia_prefix.is_set || is_set(ia_prefix.yfilter)) leaf_name_data.push_back(ia_prefix.get_name_leafdata());
    if (ia_prefix_options.is_set || is_set(ia_prefix_options.yfilter)) leaf_name_data.push_back(ia_prefix_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ia-prefix")
    {
        ia_prefix = value;
        ia_prefix.value_namespace = name_space;
        ia_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ia-prefix-options")
    {
        ia_prefix_options = value;
        ia_prefix_options.value_namespace = name_space;
        ia_prefix_options.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "ia-prefix")
    {
        ia_prefix.yfilter = yfilter;
    }
    if(value_path == "ia-prefix-options")
    {
        ia_prefix_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "ia-prefix" || name == "ia-prefix-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaRouter::IaRouter()
    :
    metric{YType::uint32, "metric"},
    destination_router_id{YType::uint32, "destination-router-id"},
    lsa_ia_options{YType::bits, "lsa-ia-options"}
{

    yang_name = "ia-router"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaRouter::~IaRouter()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaRouter::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| destination_router_id.is_set
	|| lsa_ia_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaRouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(destination_router_id.yfilter)
	|| ydk::is_set(lsa_ia_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ia-router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (destination_router_id.is_set || is_set(destination_router_id.yfilter)) leaf_name_data.push_back(destination_router_id.get_name_leafdata());
    if (lsa_ia_options.is_set || is_set(lsa_ia_options.yfilter)) leaf_name_data.push_back(lsa_ia_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-router-id")
    {
        destination_router_id = value;
        destination_router_id.value_namespace = name_space;
        destination_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-ia-options")
    {
        lsa_ia_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "destination-router-id")
    {
        destination_router_id.yfilter = yfilter;
    }
    if(value_path == "lsa-ia-options")
    {
        lsa_ia_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "destination-router-id" || name == "lsa-ia-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::LsaExternal()
    :
    metric{YType::uint32, "metric"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"},
    external_prefix{YType::str, "external-prefix"},
    external_prefix_options{YType::str, "external-prefix-options"},
    forwarding_address{YType::str, "forwarding-address"},
    external_route_tag{YType::uint32, "external-route-tag"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"}
        ,
    flags(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::Flags>())
{
    flags->parent = this;

    yang_name = "lsa-external"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::~LsaExternal()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| referenced_ls_type.is_set
	|| external_prefix.is_set
	|| external_prefix_options.is_set
	|| forwarding_address.is_set
	|| external_route_tag.is_set
	|| referenced_link_state_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(referenced_ls_type.yfilter)
	|| ydk::is_set(external_prefix.yfilter)
	|| ydk::is_set(external_prefix_options.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_route_tag.yfilter)
	|| ydk::is_set(referenced_link_state_id.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.yfilter)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());
    if (external_prefix.is_set || is_set(external_prefix.yfilter)) leaf_name_data.push_back(external_prefix.get_name_leafdata());
    if (external_prefix_options.is_set || is_set(external_prefix_options.yfilter)) leaf_name_data.push_back(external_prefix_options.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.yfilter)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.yfilter)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
        referenced_ls_type.value_namespace = name_space;
        referenced_ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-prefix")
    {
        external_prefix = value;
        external_prefix.value_namespace = name_space;
        external_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-prefix-options")
    {
        external_prefix_options = value;
        external_prefix_options.value_namespace = name_space;
        external_prefix_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
        external_route_tag.value_namespace = name_space;
        external_route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
        referenced_link_state_id.value_namespace = name_space;
        referenced_link_state_id.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type.yfilter = yfilter;
    }
    if(value_path == "external-prefix")
    {
        external_prefix.yfilter = yfilter;
    }
    if(value_path == "external-prefix-options")
    {
        external_prefix_options.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag.yfilter = yfilter;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "metric" || name == "referenced-ls-type" || name == "external-prefix" || name == "external-prefix-options" || name == "forwarding-address" || name == "external-route-tag" || name == "referenced-link-state-id")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::Flags::Flags()
    :
    e_flag{YType::boolean, "e-flag"}
{

    yang_name = "flags"; yang_parent_name = "lsa-external"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::Flags::~Flags()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::Flags::has_data() const
{
    if (is_presence_container) return true;
    return e_flag.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(e_flag.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (e_flag.is_set || is_set(e_flag.yfilter)) leaf_name_data.push_back(e_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "e-flag")
    {
        e_flag = value;
        e_flag.value_namespace = name_space;
        e_flag.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "e-flag")
    {
        e_flag.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LsaExternal::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "e-flag")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::Nssa()
    :
    lsa_nssa_external(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal>())
{
    lsa_nssa_external->parent = this;

    yang_name = "nssa"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::~Nssa()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::has_data() const
{
    if (is_presence_container) return true;
    return (lsa_nssa_external !=  nullptr && lsa_nssa_external->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::has_operation() const
{
    return is_set(yfilter)
	|| (lsa_nssa_external !=  nullptr && lsa_nssa_external->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-nssa-external")
    {
        if(lsa_nssa_external == nullptr)
        {
            lsa_nssa_external = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal>();
        }
        return lsa_nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_nssa_external != nullptr)
    {
        children["lsa-nssa-external"] = lsa_nssa_external;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-nssa-external")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::LsaNssaExternal()
    :
    metric{YType::uint32, "metric"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"},
    external_prefix{YType::str, "external-prefix"},
    external_prefix_options{YType::str, "external-prefix-options"},
    forwarding_address{YType::str, "forwarding-address"},
    external_route_tag{YType::uint32, "external-route-tag"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"}
        ,
    flags(std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags>())
{
    flags->parent = this;

    yang_name = "lsa-nssa-external"; yang_parent_name = "nssa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::~LsaNssaExternal()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| referenced_ls_type.is_set
	|| external_prefix.is_set
	|| external_prefix_options.is_set
	|| forwarding_address.is_set
	|| external_route_tag.is_set
	|| referenced_link_state_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(referenced_ls_type.yfilter)
	|| ydk::is_set(external_prefix.yfilter)
	|| ydk::is_set(external_prefix_options.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_route_tag.yfilter)
	|| ydk::is_set(referenced_link_state_id.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.yfilter)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());
    if (external_prefix.is_set || is_set(external_prefix.yfilter)) leaf_name_data.push_back(external_prefix.get_name_leafdata());
    if (external_prefix_options.is_set || is_set(external_prefix_options.yfilter)) leaf_name_data.push_back(external_prefix_options.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.yfilter)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.yfilter)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
        referenced_ls_type.value_namespace = name_space;
        referenced_ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-prefix")
    {
        external_prefix = value;
        external_prefix.value_namespace = name_space;
        external_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-prefix-options")
    {
        external_prefix_options = value;
        external_prefix_options.value_namespace = name_space;
        external_prefix_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
        external_route_tag.value_namespace = name_space;
        external_route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
        referenced_link_state_id.value_namespace = name_space;
        referenced_link_state_id.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type.yfilter = yfilter;
    }
    if(value_path == "external-prefix")
    {
        external_prefix.yfilter = yfilter;
    }
    if(value_path == "external-prefix-options")
    {
        external_prefix_options.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag.yfilter = yfilter;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "metric" || name == "referenced-ls-type" || name == "external-prefix" || name == "external-prefix-options" || name == "forwarding-address" || name == "external-route-tag" || name == "referenced-link-state-id")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::Flags()
    :
    e_flag{YType::boolean, "e-flag"}
{

    yang_name = "flags"; yang_parent_name = "lsa-nssa-external"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::~Flags()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::has_data() const
{
    if (is_presence_container) return true;
    return e_flag.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(e_flag.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (e_flag.is_set || is_set(e_flag.yfilter)) leaf_name_data.push_back(e_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "e-flag")
    {
        e_flag = value;
        e_flag.value_namespace = name_space;
        e_flag.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "e-flag")
    {
        e_flag.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "e-flag")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LinkData::LinkData()
    :
    rtr_priority{YType::uint8, "rtr-priority"},
    link_local_interface_address{YType::str, "link-local-interface-address"},
    num_of_prefixes{YType::uint32, "num-of-prefixes"},
    lsa_id_options{YType::bits, "lsa-id-options"}
{

    yang_name = "link-data"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LinkData::~LinkData()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LinkData::has_data() const
{
    if (is_presence_container) return true;
    return rtr_priority.is_set
	|| link_local_interface_address.is_set
	|| num_of_prefixes.is_set
	|| lsa_id_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LinkData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr_priority.yfilter)
	|| ydk::is_set(link_local_interface_address.yfilter)
	|| ydk::is_set(num_of_prefixes.yfilter)
	|| ydk::is_set(lsa_id_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LinkData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LinkData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_priority.is_set || is_set(rtr_priority.yfilter)) leaf_name_data.push_back(rtr_priority.get_name_leafdata());
    if (link_local_interface_address.is_set || is_set(link_local_interface_address.yfilter)) leaf_name_data.push_back(link_local_interface_address.get_name_leafdata());
    if (num_of_prefixes.is_set || is_set(num_of_prefixes.yfilter)) leaf_name_data.push_back(num_of_prefixes.get_name_leafdata());
    if (lsa_id_options.is_set || is_set(lsa_id_options.yfilter)) leaf_name_data.push_back(lsa_id_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LinkData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LinkData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LinkData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-priority")
    {
        rtr_priority = value;
        rtr_priority.value_namespace = name_space;
        rtr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-local-interface-address")
    {
        link_local_interface_address = value;
        link_local_interface_address.value_namespace = name_space;
        link_local_interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes = value;
        num_of_prefixes.value_namespace = name_space;
        num_of_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-id-options")
    {
        lsa_id_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LinkData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-priority")
    {
        rtr_priority.yfilter = yfilter;
    }
    if(value_path == "link-local-interface-address")
    {
        link_local_interface_address.yfilter = yfilter;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes.yfilter = yfilter;
    }
    if(value_path == "lsa-id-options")
    {
        lsa_id_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::LinkData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr-priority" || name == "link-local-interface-address" || name == "num-of-prefixes" || name == "lsa-id-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaPrefix::IaPrefix()
    :
    referenced_ls_type{YType::uint16, "referenced-ls-type"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"},
    referenced_adv_router{YType::str, "referenced-adv-router"},
    num_of_prefixes{YType::uint16, "num-of-prefixes"}
{

    yang_name = "ia-prefix"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaPrefix::~IaPrefix()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaPrefix::has_data() const
{
    if (is_presence_container) return true;
    return referenced_ls_type.is_set
	|| referenced_link_state_id.is_set
	|| referenced_adv_router.is_set
	|| num_of_prefixes.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(referenced_ls_type.yfilter)
	|| ydk::is_set(referenced_link_state_id.yfilter)
	|| ydk::is_set(referenced_adv_router.yfilter)
	|| ydk::is_set(num_of_prefixes.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ia-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (referenced_ls_type.is_set || is_set(referenced_ls_type.yfilter)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.yfilter)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());
    if (referenced_adv_router.is_set || is_set(referenced_adv_router.yfilter)) leaf_name_data.push_back(referenced_adv_router.get_name_leafdata());
    if (num_of_prefixes.is_set || is_set(num_of_prefixes.yfilter)) leaf_name_data.push_back(num_of_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
        referenced_ls_type.value_namespace = name_space;
        referenced_ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
        referenced_link_state_id.value_namespace = name_space;
        referenced_link_state_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-adv-router")
    {
        referenced_adv_router = value;
        referenced_adv_router.value_namespace = name_space;
        referenced_adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes = value;
        num_of_prefixes.value_namespace = name_space;
        num_of_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type.yfilter = yfilter;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id.yfilter = yfilter;
    }
    if(value_path == "referenced-adv-router")
    {
        referenced_adv_router.yfilter = yfilter;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Lsa::LsaBody::IaPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "referenced-ls-type" || name == "referenced-link-state-id" || name == "referenced-adv-router" || name == "num-of-prefixes")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Link::Ospfv3Link()
    :
    interface_id{YType::uint32, "interface-id"},
    neighbor_interface_id{YType::uint32, "neighbor-interface-id"},
    neighbor_router_id{YType::uint32, "neighbor-router-id"},
    type{YType::uint8, "type"},
    metric{YType::uint16, "metric"}
{

    yang_name = "ospfv3-link"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Link::~Ospfv3Link()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Link::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set
	|| neighbor_interface_id.is_set
	|| neighbor_router_id.is_set
	|| type.is_set
	|| metric.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Link::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(neighbor_interface_id.yfilter)
	|| ydk::is_set(neighbor_router_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-link";
    ADD_KEY_TOKEN(interface_id, "interface-id");
    ADD_KEY_TOKEN(neighbor_interface_id, "neighbor-interface-id");
    ADD_KEY_TOKEN(neighbor_router_id, "neighbor-router-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (neighbor_interface_id.is_set || is_set(neighbor_interface_id.yfilter)) leaf_name_data.push_back(neighbor_interface_id.get_name_leafdata());
    if (neighbor_router_id.is_set || is_set(neighbor_router_id.yfilter)) leaf_name_data.push_back(neighbor_router_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id = value;
        neighbor_interface_id.value_namespace = name_space;
        neighbor_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id = value;
        neighbor_router_id.value_namespace = name_space;
        neighbor_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id" || name == "neighbor-interface-id" || name == "neighbor-router-id" || name == "type" || name == "metric")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Prefix::Ospfv3Prefix()
    :
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"}
{

    yang_name = "ospfv3-prefix"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Prefix::~Ospfv3Prefix()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Prefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-prefix";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3IaPrefix::Ospfv3IaPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"}
{

    yang_name = "ospfv3-ia-prefix"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3IaPrefix::~Ospfv3IaPrefix()
{
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3IaPrefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3IaPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3IaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-ia-prefix";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3IaPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3IaPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3IaPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3IaPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3IaPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::OspfArea::AreaScopeLsa::AreaScopeLsa_::Ospfv3IaPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsas()
    :
    lsa_type{YType::uint32, "lsa-type"}
        ,
    link_scope_lsa(this, {"lsa_id", "adv_router"})
    , area_scope_lsa(this, {"lsa_type", "adv_router"})
{

    yang_name = "link-scope-lsas"; yang_parent_name = "ospf-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::~LinkScopeLsas()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<link_scope_lsa.len(); index++)
    {
        if(link_scope_lsa[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<area_scope_lsa.len(); index++)
    {
        if(area_scope_lsa[index]->has_data())
            return true;
    }
    return lsa_type.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::has_operation() const
{
    for (std::size_t index=0; index<link_scope_lsa.len(); index++)
    {
        if(link_scope_lsa[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<area_scope_lsa.len(); index++)
    {
        if(area_scope_lsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-scope-lsas";
    ADD_KEY_TOKEN(lsa_type, "lsa-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-scope-lsa")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa>();
        c->parent = this;
        link_scope_lsa.append(c);
        return c;
    }

    if(child_yang_name == "area-scope-lsa")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa>();
        c->parent = this;
        area_scope_lsa.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : link_scope_lsa.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : area_scope_lsa.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-scope-lsa" || name == "area-scope-lsa" || name == "lsa-type")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::LinkScopeLsa()
    :
    lsa_id{YType::uint32, "lsa-id"},
    adv_router{YType::str, "adv-router"},
    decoded_completed{YType::boolean, "decoded-completed"},
    raw_data{YType::uint8, "raw-data"},
    version{YType::uint32, "version"},
    router_address{YType::str, "router-address"}
        ,
    ospfv2_lsa(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa>())
    , ospfv2_link(this, {"link_id", "link_data"})
    , ospfv2_topology(this, {"mt_id"})
    , ospfv2_external(this, {"mt_id"})
    , ospfv2_unknown_tlv(this, {"type"})
    , ospfv3_lsa_val(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal>())
    , ospfv3_link(this, {"interface_id", "neighbor_interface_id", "neighbor_router_id"})
    , ospfv3_prefix_list(this, {"prefix"})
    , ospfv3_ia_prefix(this, {"prefix"})
    , multi_topology(this, {"name"})
    , tlv(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Tlv>())
    , unknown_sub_tlv(this, {"type"})
{
    ospfv2_lsa->parent = this;
    ospfv3_lsa_val->parent = this;
    tlv->parent = this;

    yang_name = "link-scope-lsa"; yang_parent_name = "link-scope-lsas"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::~LinkScopeLsa()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfv2_link.len(); index++)
    {
        if(ospfv2_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_topology.len(); index++)
    {
        if(ospfv2_topology[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_external.len(); index++)
    {
        if(ospfv2_external[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_unknown_tlv.len(); index++)
    {
        if(ospfv2_unknown_tlv[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_link.len(); index++)
    {
        if(ospfv3_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_prefix_list.len(); index++)
    {
        if(ospfv3_prefix_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_ia_prefix.len(); index++)
    {
        if(ospfv3_ia_prefix[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multi_topology.len(); index++)
    {
        if(multi_topology[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_sub_tlv.len(); index++)
    {
        if(unknown_sub_tlv[index]->has_data())
            return true;
    }
    for (auto const & leaf : raw_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return lsa_id.is_set
	|| adv_router.is_set
	|| decoded_completed.is_set
	|| version.is_set
	|| router_address.is_set
	|| (ospfv2_lsa !=  nullptr && ospfv2_lsa->has_data())
	|| (ospfv3_lsa_val !=  nullptr && ospfv3_lsa_val->has_data())
	|| (tlv !=  nullptr && tlv->has_data());
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::has_operation() const
{
    for (std::size_t index=0; index<ospfv2_link.len(); index++)
    {
        if(ospfv2_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_topology.len(); index++)
    {
        if(ospfv2_topology[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_external.len(); index++)
    {
        if(ospfv2_external[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_unknown_tlv.len(); index++)
    {
        if(ospfv2_unknown_tlv[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_link.len(); index++)
    {
        if(ospfv3_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_prefix_list.len(); index++)
    {
        if(ospfv3_prefix_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_ia_prefix.len(); index++)
    {
        if(ospfv3_ia_prefix[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multi_topology.len(); index++)
    {
        if(multi_topology[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_sub_tlv.len(); index++)
    {
        if(unknown_sub_tlv[index]->has_operation())
            return true;
    }
    for (auto const & leaf : raw_data.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(adv_router.yfilter)
	|| ydk::is_set(decoded_completed.yfilter)
	|| ydk::is_set(raw_data.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(router_address.yfilter)
	|| (ospfv2_lsa !=  nullptr && ospfv2_lsa->has_operation())
	|| (ospfv3_lsa_val !=  nullptr && ospfv3_lsa_val->has_operation())
	|| (tlv !=  nullptr && tlv->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-scope-lsa";
    ADD_KEY_TOKEN(lsa_id, "lsa-id");
    ADD_KEY_TOKEN(adv_router, "adv-router");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.yfilter)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (decoded_completed.is_set || is_set(decoded_completed.yfilter)) leaf_name_data.push_back(decoded_completed.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (router_address.is_set || is_set(router_address.yfilter)) leaf_name_data.push_back(router_address.get_name_leafdata());

    auto raw_data_name_datas = raw_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), raw_data_name_datas.begin(), raw_data_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2-lsa")
    {
        if(ospfv2_lsa == nullptr)
        {
            ospfv2_lsa = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa>();
        }
        return ospfv2_lsa;
    }

    if(child_yang_name == "ospfv2-link")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link>();
        c->parent = this;
        ospfv2_link.append(c);
        return c;
    }

    if(child_yang_name == "ospfv2-topology")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Topology>();
        c->parent = this;
        ospfv2_topology.append(c);
        return c;
    }

    if(child_yang_name == "ospfv2-external")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2External>();
        c->parent = this;
        ospfv2_external.append(c);
        return c;
    }

    if(child_yang_name == "ospfv2-unknown-tlv")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv>();
        c->parent = this;
        ospfv2_unknown_tlv.append(c);
        return c;
    }

    if(child_yang_name == "ospfv3-lsa-val")
    {
        if(ospfv3_lsa_val == nullptr)
        {
            ospfv3_lsa_val = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal>();
        }
        return ospfv3_lsa_val;
    }

    if(child_yang_name == "ospfv3-link")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3Link>();
        c->parent = this;
        ospfv3_link.append(c);
        return c;
    }

    if(child_yang_name == "ospfv3-prefix-list")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList>();
        c->parent = this;
        ospfv3_prefix_list.append(c);
        return c;
    }

    if(child_yang_name == "ospfv3-ia-prefix")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix>();
        c->parent = this;
        ospfv3_ia_prefix.append(c);
        return c;
    }

    if(child_yang_name == "multi-topology")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::MultiTopology>();
        c->parent = this;
        multi_topology.append(c);
        return c;
    }

    if(child_yang_name == "tlv")
    {
        if(tlv == nullptr)
        {
            tlv = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Tlv>();
        }
        return tlv;
    }

    if(child_yang_name == "unknown-sub-tlv")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::UnknownSubTlv>();
        c->parent = this;
        unknown_sub_tlv.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ospfv2_lsa != nullptr)
    {
        children["ospfv2-lsa"] = ospfv2_lsa;
    }

    count = 0;
    for (auto c : ospfv2_link.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv2_topology.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv2_external.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv2_unknown_tlv.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(ospfv3_lsa_val != nullptr)
    {
        children["ospfv3-lsa-val"] = ospfv3_lsa_val;
    }

    count = 0;
    for (auto c : ospfv3_link.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv3_prefix_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv3_ia_prefix.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : multi_topology.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(tlv != nullptr)
    {
        children["tlv"] = tlv;
    }

    count = 0;
    for (auto c : unknown_sub_tlv.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
        adv_router.value_namespace = name_space;
        adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decoded-completed")
    {
        decoded_completed = value;
        decoded_completed.value_namespace = name_space;
        decoded_completed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raw-data")
    {
        raw_data.append(value);
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-address")
    {
        router_address = value;
        router_address.value_namespace = name_space;
        router_address.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "adv-router")
    {
        adv_router.yfilter = yfilter;
    }
    if(value_path == "decoded-completed")
    {
        decoded_completed.yfilter = yfilter;
    }
    if(value_path == "raw-data")
    {
        raw_data.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "router-address")
    {
        router_address.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv2-lsa" || name == "ospfv2-link" || name == "ospfv2-topology" || name == "ospfv2-external" || name == "ospfv2-unknown-tlv" || name == "ospfv3-lsa-val" || name == "ospfv3-link" || name == "ospfv3-prefix-list" || name == "ospfv3-ia-prefix" || name == "multi-topology" || name == "tlv" || name == "unknown-sub-tlv" || name == "lsa-id" || name == "adv-router" || name == "decoded-completed" || name == "raw-data" || name == "version" || name == "router-address")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Ospfv2Lsa()
    :
    header(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header>())
    , lsa_body(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody>())
{
    header->parent = this;
    lsa_body->parent = this;

    yang_name = "ospfv2-lsa"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::~Ospfv2Lsa()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::has_data() const
{
    if (is_presence_container) return true;
    return (header !=  nullptr && header->has_data())
	|| (lsa_body !=  nullptr && lsa_body->has_data());
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (lsa_body !=  nullptr && lsa_body->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header>();
        }
        return header;
    }

    if(child_yang_name == "lsa-body")
    {
        if(lsa_body == nullptr)
        {
            lsa_body = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody>();
        }
        return lsa_body;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(lsa_body != nullptr)
    {
        children["lsa-body"] = lsa_body;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "lsa-body")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header::Header()
    :
    lsa_id{YType::str, "lsa-id"},
    opaque_type{YType::uint8, "opaque-type"},
    opaque_id{YType::uint32, "opaque-id"},
    age{YType::uint16, "age"},
    type{YType::uint16, "type"},
    adv_router{YType::uint32, "adv-router"},
    seq_num{YType::str, "seq-num"},
    checksum{YType::str, "checksum"},
    length{YType::uint16, "length"},
    flag_options{YType::bits, "flag-options"}
{

    yang_name = "header"; yang_parent_name = "ospfv2-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header::~Header()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| opaque_type.is_set
	|| opaque_id.is_set
	|| age.is_set
	|| type.is_set
	|| adv_router.is_set
	|| seq_num.is_set
	|| checksum.is_set
	|| length.is_set
	|| flag_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(opaque_type.yfilter)
	|| ydk::is_set(opaque_id.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(adv_router.yfilter)
	|| ydk::is_set(seq_num.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(flag_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (opaque_type.is_set || is_set(opaque_type.yfilter)) leaf_name_data.push_back(opaque_type.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.yfilter)) leaf_name_data.push_back(opaque_id.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.yfilter)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (seq_num.is_set || is_set(seq_num.yfilter)) leaf_name_data.push_back(seq_num.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (flag_options.is_set || is_set(flag_options.yfilter)) leaf_name_data.push_back(flag_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-type")
    {
        opaque_type = value;
        opaque_type.value_namespace = name_space;
        opaque_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
        opaque_id.value_namespace = name_space;
        opaque_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
        adv_router.value_namespace = name_space;
        adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-num")
    {
        seq_num = value;
        seq_num.value_namespace = name_space;
        seq_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-options")
    {
        flag_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "opaque-type")
    {
        opaque_type.yfilter = yfilter;
    }
    if(value_path == "opaque-id")
    {
        opaque_id.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "adv-router")
    {
        adv_router.yfilter = yfilter;
    }
    if(value_path == "seq-num")
    {
        seq_num.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "flag-options")
    {
        flag_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-id" || name == "opaque-type" || name == "opaque-id" || name == "age" || name == "type" || name == "adv-router" || name == "seq-num" || name == "checksum" || name == "length" || name == "flag-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::LsaBody()
    :
    num_of_links{YType::uint16, "num-of-links"},
    summary_mask{YType::str, "summary-mask"},
    external_mask{YType::str, "external-mask"},
    body_flag_options{YType::bits, "body-flag-options"}
        ,
    network(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network>())
{
    network->parent = this;

    yang_name = "lsa-body"; yang_parent_name = "ospfv2-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::~LsaBody()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::has_data() const
{
    if (is_presence_container) return true;
    return num_of_links.is_set
	|| summary_mask.is_set
	|| external_mask.is_set
	|| body_flag_options.is_set
	|| (network !=  nullptr && network->has_data());
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_of_links.yfilter)
	|| ydk::is_set(summary_mask.yfilter)
	|| ydk::is_set(external_mask.yfilter)
	|| ydk::is_set(body_flag_options.yfilter)
	|| (network !=  nullptr && network->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-body";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_of_links.is_set || is_set(num_of_links.yfilter)) leaf_name_data.push_back(num_of_links.get_name_leafdata());
    if (summary_mask.is_set || is_set(summary_mask.yfilter)) leaf_name_data.push_back(summary_mask.get_name_leafdata());
    if (external_mask.is_set || is_set(external_mask.yfilter)) leaf_name_data.push_back(external_mask.get_name_leafdata());
    if (body_flag_options.is_set || is_set(body_flag_options.yfilter)) leaf_name_data.push_back(body_flag_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network>();
        }
        return network;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(network != nullptr)
    {
        children["network"] = network;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-of-links")
    {
        num_of_links = value;
        num_of_links.value_namespace = name_space;
        num_of_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-mask")
    {
        summary_mask = value;
        summary_mask.value_namespace = name_space;
        summary_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-mask")
    {
        external_mask = value;
        external_mask.value_namespace = name_space;
        external_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "body-flag-options")
    {
        body_flag_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-of-links")
    {
        num_of_links.yfilter = yfilter;
    }
    if(value_path == "summary-mask")
    {
        summary_mask.yfilter = yfilter;
    }
    if(value_path == "external-mask")
    {
        external_mask.yfilter = yfilter;
    }
    if(value_path == "body-flag-options")
    {
        body_flag_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network" || name == "num-of-links" || name == "summary-mask" || name == "external-mask" || name == "body-flag-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network::Network()
    :
    network_mask{YType::str, "network-mask"},
    attached_router{YType::uint32, "attached-router"}
{

    yang_name = "network"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network::~Network()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return network_mask.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network::has_operation() const
{
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network_mask.yfilter)
	|| ydk::is_set(attached_router.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_mask.is_set || is_set(network_mask.yfilter)) leaf_name_data.push_back(network_mask.get_name_leafdata());

    auto attached_router_name_datas = attached_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attached_router_name_datas.begin(), attached_router_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-mask")
    {
        network_mask = value;
        network_mask.value_namespace = name_space;
        network_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-router")
    {
        attached_router.append(value);
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-mask")
    {
        network_mask.yfilter = yfilter;
    }
    if(value_path == "attached-router")
    {
        attached_router.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Lsa::LsaBody::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-mask" || name == "attached-router")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Link()
    :
    link_id{YType::uint32, "link-id"},
    link_data{YType::uint32, "link-data"},
    type{YType::uint8, "type"}
        ,
    ospfv2_topology(this, {"mt_id"})
{

    yang_name = "ospfv2-link"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::~Ospfv2Link()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfv2_topology.len(); index++)
    {
        if(ospfv2_topology[index]->has_data())
            return true;
    }
    return link_id.is_set
	|| link_data.is_set
	|| type.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::has_operation() const
{
    for (std::size_t index=0; index<ospfv2_topology.len(); index++)
    {
        if(ospfv2_topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_data.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-link";
    ADD_KEY_TOKEN(link_id, "link-id");
    ADD_KEY_TOKEN(link_data, "link-data");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_data.is_set || is_set(link_data.yfilter)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2-topology")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology>();
        c->parent = this;
        ospfv2_topology.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospfv2_topology.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-data")
    {
        link_data.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv2-topology" || name == "link-id" || name == "link-data" || name == "type")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology::Ospfv2Topology()
    :
    mt_id{YType::uint32, "mt-id"},
    metric{YType::uint16, "metric"}
{

    yang_name = "ospfv2-topology"; yang_parent_name = "ospfv2-link"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology::~Ospfv2Topology()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| metric.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-topology";
    ADD_KEY_TOKEN(mt_id, "mt-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Link::Ospfv2Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "metric")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Topology::Ospfv2Topology()
    :
    mt_id{YType::uint32, "mt-id"},
    metric{YType::uint16, "metric"}
{

    yang_name = "ospfv2-topology"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Topology::~Ospfv2Topology()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Topology::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| metric.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-topology";
    ADD_KEY_TOKEN(mt_id, "mt-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "metric")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2External::Ospfv2External()
    :
    mt_id{YType::uint32, "mt-id"},
    metric{YType::uint32, "metric"},
    forwarding_address{YType::str, "forwarding-address"},
    external_route_tag{YType::uint32, "external-route-tag"}
{

    yang_name = "ospfv2-external"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2External::~Ospfv2External()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2External::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| metric.is_set
	|| forwarding_address.is_set
	|| external_route_tag.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_route_tag.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-external";
    ADD_KEY_TOKEN(mt_id, "mt-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.yfilter)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
        external_route_tag.value_namespace = name_space;
        external_route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "metric" || name == "forwarding-address" || name == "external-route-tag")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv::Ospfv2UnknownTlv()
    :
    type{YType::uint16, "type"},
    length{YType::uint16, "length"},
    value_{YType::uint8, "value"}
{

    yang_name = "ospfv2-unknown-tlv"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv::~Ospfv2UnknownTlv()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return type.is_set
	|| length.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-unknown-tlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());

    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
        value_.append(value);
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv2UnknownTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "length" || name == "value")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Ospfv3LsaVal()
    :
    header(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header>())
    , lsa_body(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody>())
{
    header->parent = this;
    lsa_body->parent = this;

    yang_name = "ospfv3-lsa-val"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::~Ospfv3LsaVal()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::has_data() const
{
    if (is_presence_container) return true;
    return (header !=  nullptr && header->has_data())
	|| (lsa_body !=  nullptr && lsa_body->has_data());
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (lsa_body !=  nullptr && lsa_body->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-lsa-val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header>();
        }
        return header;
    }

    if(child_yang_name == "lsa-body")
    {
        if(lsa_body == nullptr)
        {
            lsa_body = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody>();
        }
        return lsa_body;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(lsa_body != nullptr)
    {
        children["lsa-body"] = lsa_body;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "lsa-body")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::Header()
    :
    lsa_id{YType::str, "lsa-id"},
    lsa_hdr_options{YType::bits, "lsa-hdr-options"}
        ,
    lsa_header(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader>())
{
    lsa_header->parent = this;

    yang_name = "header"; yang_parent_name = "ospfv3-lsa-val"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::~Header()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| lsa_hdr_options.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(lsa_hdr_options.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (lsa_hdr_options.is_set || is_set(lsa_hdr_options.yfilter)) leaf_name_data.push_back(lsa_hdr_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader>();
        }
        return lsa_header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-hdr-options")
    {
        lsa_hdr_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "lsa-hdr-options")
    {
        lsa_hdr_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "lsa-id" || name == "lsa-hdr-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader::LsaHeader()
    :
    age{YType::uint16, "age"},
    type{YType::uint16, "type"},
    adv_router{YType::uint32, "adv-router"},
    seq_num{YType::str, "seq-num"},
    checksum{YType::str, "checksum"},
    length{YType::uint16, "length"}
{

    yang_name = "lsa-header"; yang_parent_name = "header"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader::~LsaHeader()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader::has_data() const
{
    if (is_presence_container) return true;
    return age.is_set
	|| type.is_set
	|| adv_router.is_set
	|| seq_num.is_set
	|| checksum.is_set
	|| length.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(adv_router.yfilter)
	|| ydk::is_set(seq_num.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(length.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.yfilter)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (seq_num.is_set || is_set(seq_num.yfilter)) leaf_name_data.push_back(seq_num.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
        adv_router.value_namespace = name_space;
        adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-num")
    {
        seq_num = value;
        seq_num.value_namespace = name_space;
        seq_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "adv-router")
    {
        adv_router.yfilter = yfilter;
    }
    if(value_path == "seq-num")
    {
        seq_num.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::Header::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "age" || name == "type" || name == "adv-router" || name == "seq-num" || name == "checksum" || name == "length")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaBody()
    :
    lsa_flag_options{YType::bits, "lsa-flag-options"},
    lsa_body_flags{YType::bits, "lsa-body-flags"}
        ,
    network(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network>())
    , prefix(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix>())
    , ia_router(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter>())
    , lsa_external(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal>())
    , nssa(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa>())
    , link_data(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData>())
    , ia_prefix(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix>())
{
    network->parent = this;
    prefix->parent = this;
    ia_router->parent = this;
    lsa_external->parent = this;
    nssa->parent = this;
    link_data->parent = this;
    ia_prefix->parent = this;

    yang_name = "lsa-body"; yang_parent_name = "ospfv3-lsa-val"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::~LsaBody()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::has_data() const
{
    if (is_presence_container) return true;
    return lsa_flag_options.is_set
	|| lsa_body_flags.is_set
	|| (network !=  nullptr && network->has_data())
	|| (prefix !=  nullptr && prefix->has_data())
	|| (ia_router !=  nullptr && ia_router->has_data())
	|| (lsa_external !=  nullptr && lsa_external->has_data())
	|| (nssa !=  nullptr && nssa->has_data())
	|| (link_data !=  nullptr && link_data->has_data())
	|| (ia_prefix !=  nullptr && ia_prefix->has_data());
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_flag_options.yfilter)
	|| ydk::is_set(lsa_body_flags.yfilter)
	|| (network !=  nullptr && network->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (ia_router !=  nullptr && ia_router->has_operation())
	|| (lsa_external !=  nullptr && lsa_external->has_operation())
	|| (nssa !=  nullptr && nssa->has_operation())
	|| (link_data !=  nullptr && link_data->has_operation())
	|| (ia_prefix !=  nullptr && ia_prefix->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-body";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_flag_options.is_set || is_set(lsa_flag_options.yfilter)) leaf_name_data.push_back(lsa_flag_options.get_name_leafdata());
    if (lsa_body_flags.is_set || is_set(lsa_body_flags.yfilter)) leaf_name_data.push_back(lsa_body_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "ia-router")
    {
        if(ia_router == nullptr)
        {
            ia_router = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter>();
        }
        return ia_router;
    }

    if(child_yang_name == "lsa-external")
    {
        if(lsa_external == nullptr)
        {
            lsa_external = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal>();
        }
        return lsa_external;
    }

    if(child_yang_name == "nssa")
    {
        if(nssa == nullptr)
        {
            nssa = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa>();
        }
        return nssa;
    }

    if(child_yang_name == "link-data")
    {
        if(link_data == nullptr)
        {
            link_data = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData>();
        }
        return link_data;
    }

    if(child_yang_name == "ia-prefix")
    {
        if(ia_prefix == nullptr)
        {
            ia_prefix = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix>();
        }
        return ia_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(ia_router != nullptr)
    {
        children["ia-router"] = ia_router;
    }

    if(lsa_external != nullptr)
    {
        children["lsa-external"] = lsa_external;
    }

    if(nssa != nullptr)
    {
        children["nssa"] = nssa;
    }

    if(link_data != nullptr)
    {
        children["link-data"] = link_data;
    }

    if(ia_prefix != nullptr)
    {
        children["ia-prefix"] = ia_prefix;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-flag-options")
    {
        lsa_flag_options[value] = true;
    }
    if(value_path == "lsa-body-flags")
    {
        lsa_body_flags[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-flag-options")
    {
        lsa_flag_options.yfilter = yfilter;
    }
    if(value_path == "lsa-body-flags")
    {
        lsa_body_flags.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network" || name == "prefix" || name == "ia-router" || name == "lsa-external" || name == "nssa" || name == "link-data" || name == "ia-prefix" || name == "lsa-flag-options" || name == "lsa-body-flags")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network::Network()
    :
    attached_router{YType::uint32, "attached-router"},
    lsa_net_options{YType::bits, "lsa-net-options"}
{

    yang_name = "network"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network::~Network()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return lsa_net_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network::has_operation() const
{
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(attached_router.yfilter)
	|| ydk::is_set(lsa_net_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_net_options.is_set || is_set(lsa_net_options.yfilter)) leaf_name_data.push_back(lsa_net_options.get_name_leafdata());

    auto attached_router_name_datas = attached_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attached_router_name_datas.begin(), attached_router_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attached-router")
    {
        attached_router.append(value);
    }
    if(value_path == "lsa-net-options")
    {
        lsa_net_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attached-router")
    {
        attached_router.yfilter = yfilter;
    }
    if(value_path == "lsa-net-options")
    {
        lsa_net_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attached-router" || name == "lsa-net-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix::Prefix()
    :
    metric{YType::uint32, "metric"},
    ia_prefix{YType::str, "ia-prefix"},
    ia_prefix_options{YType::str, "ia-prefix-options"}
{

    yang_name = "prefix"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix::~Prefix()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| ia_prefix.is_set
	|| ia_prefix_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(ia_prefix.yfilter)
	|| ydk::is_set(ia_prefix_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (ia_prefix.is_set || is_set(ia_prefix.yfilter)) leaf_name_data.push_back(ia_prefix.get_name_leafdata());
    if (ia_prefix_options.is_set || is_set(ia_prefix_options.yfilter)) leaf_name_data.push_back(ia_prefix_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ia-prefix")
    {
        ia_prefix = value;
        ia_prefix.value_namespace = name_space;
        ia_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ia-prefix-options")
    {
        ia_prefix_options = value;
        ia_prefix_options.value_namespace = name_space;
        ia_prefix_options.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "ia-prefix")
    {
        ia_prefix.yfilter = yfilter;
    }
    if(value_path == "ia-prefix-options")
    {
        ia_prefix_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "ia-prefix" || name == "ia-prefix-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter::IaRouter()
    :
    metric{YType::uint32, "metric"},
    destination_router_id{YType::uint32, "destination-router-id"},
    lsa_ia_options{YType::bits, "lsa-ia-options"}
{

    yang_name = "ia-router"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter::~IaRouter()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| destination_router_id.is_set
	|| lsa_ia_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(destination_router_id.yfilter)
	|| ydk::is_set(lsa_ia_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ia-router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (destination_router_id.is_set || is_set(destination_router_id.yfilter)) leaf_name_data.push_back(destination_router_id.get_name_leafdata());
    if (lsa_ia_options.is_set || is_set(lsa_ia_options.yfilter)) leaf_name_data.push_back(lsa_ia_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-router-id")
    {
        destination_router_id = value;
        destination_router_id.value_namespace = name_space;
        destination_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-ia-options")
    {
        lsa_ia_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "destination-router-id")
    {
        destination_router_id.yfilter = yfilter;
    }
    if(value_path == "lsa-ia-options")
    {
        lsa_ia_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "destination-router-id" || name == "lsa-ia-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::LsaExternal()
    :
    metric{YType::uint32, "metric"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"},
    external_prefix{YType::str, "external-prefix"},
    external_prefix_options{YType::str, "external-prefix-options"},
    forwarding_address{YType::str, "forwarding-address"},
    external_route_tag{YType::uint32, "external-route-tag"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"}
        ,
    flags(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags>())
{
    flags->parent = this;

    yang_name = "lsa-external"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::~LsaExternal()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| referenced_ls_type.is_set
	|| external_prefix.is_set
	|| external_prefix_options.is_set
	|| forwarding_address.is_set
	|| external_route_tag.is_set
	|| referenced_link_state_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(referenced_ls_type.yfilter)
	|| ydk::is_set(external_prefix.yfilter)
	|| ydk::is_set(external_prefix_options.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_route_tag.yfilter)
	|| ydk::is_set(referenced_link_state_id.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.yfilter)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());
    if (external_prefix.is_set || is_set(external_prefix.yfilter)) leaf_name_data.push_back(external_prefix.get_name_leafdata());
    if (external_prefix_options.is_set || is_set(external_prefix_options.yfilter)) leaf_name_data.push_back(external_prefix_options.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.yfilter)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.yfilter)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
        referenced_ls_type.value_namespace = name_space;
        referenced_ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-prefix")
    {
        external_prefix = value;
        external_prefix.value_namespace = name_space;
        external_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-prefix-options")
    {
        external_prefix_options = value;
        external_prefix_options.value_namespace = name_space;
        external_prefix_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
        external_route_tag.value_namespace = name_space;
        external_route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
        referenced_link_state_id.value_namespace = name_space;
        referenced_link_state_id.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type.yfilter = yfilter;
    }
    if(value_path == "external-prefix")
    {
        external_prefix.yfilter = yfilter;
    }
    if(value_path == "external-prefix-options")
    {
        external_prefix_options.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag.yfilter = yfilter;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "metric" || name == "referenced-ls-type" || name == "external-prefix" || name == "external-prefix-options" || name == "forwarding-address" || name == "external-route-tag" || name == "referenced-link-state-id")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags::Flags()
    :
    e_flag{YType::boolean, "e-flag"}
{

    yang_name = "flags"; yang_parent_name = "lsa-external"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags::~Flags()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags::has_data() const
{
    if (is_presence_container) return true;
    return e_flag.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(e_flag.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (e_flag.is_set || is_set(e_flag.yfilter)) leaf_name_data.push_back(e_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "e-flag")
    {
        e_flag = value;
        e_flag.value_namespace = name_space;
        e_flag.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "e-flag")
    {
        e_flag.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LsaExternal::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "e-flag")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::Nssa()
    :
    lsa_nssa_external(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal>())
{
    lsa_nssa_external->parent = this;

    yang_name = "nssa"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::~Nssa()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::has_data() const
{
    if (is_presence_container) return true;
    return (lsa_nssa_external !=  nullptr && lsa_nssa_external->has_data());
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::has_operation() const
{
    return is_set(yfilter)
	|| (lsa_nssa_external !=  nullptr && lsa_nssa_external->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-nssa-external")
    {
        if(lsa_nssa_external == nullptr)
        {
            lsa_nssa_external = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal>();
        }
        return lsa_nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_nssa_external != nullptr)
    {
        children["lsa-nssa-external"] = lsa_nssa_external;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-nssa-external")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::LsaNssaExternal()
    :
    metric{YType::uint32, "metric"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"},
    external_prefix{YType::str, "external-prefix"},
    external_prefix_options{YType::str, "external-prefix-options"},
    forwarding_address{YType::str, "forwarding-address"},
    external_route_tag{YType::uint32, "external-route-tag"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"}
        ,
    flags(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags>())
{
    flags->parent = this;

    yang_name = "lsa-nssa-external"; yang_parent_name = "nssa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::~LsaNssaExternal()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| referenced_ls_type.is_set
	|| external_prefix.is_set
	|| external_prefix_options.is_set
	|| forwarding_address.is_set
	|| external_route_tag.is_set
	|| referenced_link_state_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(referenced_ls_type.yfilter)
	|| ydk::is_set(external_prefix.yfilter)
	|| ydk::is_set(external_prefix_options.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_route_tag.yfilter)
	|| ydk::is_set(referenced_link_state_id.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.yfilter)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());
    if (external_prefix.is_set || is_set(external_prefix.yfilter)) leaf_name_data.push_back(external_prefix.get_name_leafdata());
    if (external_prefix_options.is_set || is_set(external_prefix_options.yfilter)) leaf_name_data.push_back(external_prefix_options.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.yfilter)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.yfilter)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
        referenced_ls_type.value_namespace = name_space;
        referenced_ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-prefix")
    {
        external_prefix = value;
        external_prefix.value_namespace = name_space;
        external_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-prefix-options")
    {
        external_prefix_options = value;
        external_prefix_options.value_namespace = name_space;
        external_prefix_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
        external_route_tag.value_namespace = name_space;
        external_route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
        referenced_link_state_id.value_namespace = name_space;
        referenced_link_state_id.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type.yfilter = yfilter;
    }
    if(value_path == "external-prefix")
    {
        external_prefix.yfilter = yfilter;
    }
    if(value_path == "external-prefix-options")
    {
        external_prefix_options.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag.yfilter = yfilter;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "metric" || name == "referenced-ls-type" || name == "external-prefix" || name == "external-prefix-options" || name == "forwarding-address" || name == "external-route-tag" || name == "referenced-link-state-id")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags::Flags()
    :
    e_flag{YType::boolean, "e-flag"}
{

    yang_name = "flags"; yang_parent_name = "lsa-nssa-external"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags::~Flags()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags::has_data() const
{
    if (is_presence_container) return true;
    return e_flag.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(e_flag.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (e_flag.is_set || is_set(e_flag.yfilter)) leaf_name_data.push_back(e_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "e-flag")
    {
        e_flag = value;
        e_flag.value_namespace = name_space;
        e_flag.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "e-flag")
    {
        e_flag.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::Nssa::LsaNssaExternal::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "e-flag")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData::LinkData()
    :
    rtr_priority{YType::uint8, "rtr-priority"},
    link_local_interface_address{YType::str, "link-local-interface-address"},
    num_of_prefixes{YType::uint32, "num-of-prefixes"},
    lsa_id_options{YType::bits, "lsa-id-options"}
{

    yang_name = "link-data"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData::~LinkData()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData::has_data() const
{
    if (is_presence_container) return true;
    return rtr_priority.is_set
	|| link_local_interface_address.is_set
	|| num_of_prefixes.is_set
	|| lsa_id_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr_priority.yfilter)
	|| ydk::is_set(link_local_interface_address.yfilter)
	|| ydk::is_set(num_of_prefixes.yfilter)
	|| ydk::is_set(lsa_id_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_priority.is_set || is_set(rtr_priority.yfilter)) leaf_name_data.push_back(rtr_priority.get_name_leafdata());
    if (link_local_interface_address.is_set || is_set(link_local_interface_address.yfilter)) leaf_name_data.push_back(link_local_interface_address.get_name_leafdata());
    if (num_of_prefixes.is_set || is_set(num_of_prefixes.yfilter)) leaf_name_data.push_back(num_of_prefixes.get_name_leafdata());
    if (lsa_id_options.is_set || is_set(lsa_id_options.yfilter)) leaf_name_data.push_back(lsa_id_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-priority")
    {
        rtr_priority = value;
        rtr_priority.value_namespace = name_space;
        rtr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-local-interface-address")
    {
        link_local_interface_address = value;
        link_local_interface_address.value_namespace = name_space;
        link_local_interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes = value;
        num_of_prefixes.value_namespace = name_space;
        num_of_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-id-options")
    {
        lsa_id_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-priority")
    {
        rtr_priority.yfilter = yfilter;
    }
    if(value_path == "link-local-interface-address")
    {
        link_local_interface_address.yfilter = yfilter;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes.yfilter = yfilter;
    }
    if(value_path == "lsa-id-options")
    {
        lsa_id_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::LinkData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr-priority" || name == "link-local-interface-address" || name == "num-of-prefixes" || name == "lsa-id-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix::IaPrefix()
    :
    referenced_ls_type{YType::uint16, "referenced-ls-type"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"},
    referenced_adv_router{YType::str, "referenced-adv-router"},
    num_of_prefixes{YType::uint16, "num-of-prefixes"}
{

    yang_name = "ia-prefix"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix::~IaPrefix()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix::has_data() const
{
    if (is_presence_container) return true;
    return referenced_ls_type.is_set
	|| referenced_link_state_id.is_set
	|| referenced_adv_router.is_set
	|| num_of_prefixes.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(referenced_ls_type.yfilter)
	|| ydk::is_set(referenced_link_state_id.yfilter)
	|| ydk::is_set(referenced_adv_router.yfilter)
	|| ydk::is_set(num_of_prefixes.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ia-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (referenced_ls_type.is_set || is_set(referenced_ls_type.yfilter)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.yfilter)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());
    if (referenced_adv_router.is_set || is_set(referenced_adv_router.yfilter)) leaf_name_data.push_back(referenced_adv_router.get_name_leafdata());
    if (num_of_prefixes.is_set || is_set(num_of_prefixes.yfilter)) leaf_name_data.push_back(num_of_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
        referenced_ls_type.value_namespace = name_space;
        referenced_ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
        referenced_link_state_id.value_namespace = name_space;
        referenced_link_state_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-adv-router")
    {
        referenced_adv_router = value;
        referenced_adv_router.value_namespace = name_space;
        referenced_adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes = value;
        num_of_prefixes.value_namespace = name_space;
        num_of_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type.yfilter = yfilter;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id.yfilter = yfilter;
    }
    if(value_path == "referenced-adv-router")
    {
        referenced_adv_router.yfilter = yfilter;
    }
    if(value_path == "num-of-prefixes")
    {
        num_of_prefixes.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3LsaVal::LsaBody::IaPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "referenced-ls-type" || name == "referenced-link-state-id" || name == "referenced-adv-router" || name == "num-of-prefixes")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3Link::Ospfv3Link()
    :
    interface_id{YType::uint32, "interface-id"},
    neighbor_interface_id{YType::uint32, "neighbor-interface-id"},
    neighbor_router_id{YType::uint32, "neighbor-router-id"},
    type{YType::uint8, "type"},
    metric{YType::uint16, "metric"}
{

    yang_name = "ospfv3-link"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3Link::~Ospfv3Link()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3Link::has_data() const
{
    if (is_presence_container) return true;
    return interface_id.is_set
	|| neighbor_interface_id.is_set
	|| neighbor_router_id.is_set
	|| type.is_set
	|| metric.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3Link::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(neighbor_interface_id.yfilter)
	|| ydk::is_set(neighbor_router_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-link";
    ADD_KEY_TOKEN(interface_id, "interface-id");
    ADD_KEY_TOKEN(neighbor_interface_id, "neighbor-interface-id");
    ADD_KEY_TOKEN(neighbor_router_id, "neighbor-router-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (neighbor_interface_id.is_set || is_set(neighbor_interface_id.yfilter)) leaf_name_data.push_back(neighbor_interface_id.get_name_leafdata());
    if (neighbor_router_id.is_set || is_set(neighbor_router_id.yfilter)) leaf_name_data.push_back(neighbor_router_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id = value;
        neighbor_interface_id.value_namespace = name_space;
        neighbor_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id = value;
        neighbor_router_id.value_namespace = name_space;
        neighbor_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id" || name == "neighbor-interface-id" || name == "neighbor-router-id" || name == "type" || name == "metric")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList::Ospfv3PrefixList()
    :
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"}
{

    yang_name = "ospfv3-prefix-list"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList::~Ospfv3PrefixList()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-prefix-list";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix::Ospfv3IaPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_options{YType::str, "prefix-options"}
{

    yang_name = "ospfv3-ia-prefix"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix::~Ospfv3IaPrefix()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-ia-prefix";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_options.is_set || is_set(prefix_options.yfilter)) leaf_name_data.push_back(prefix_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-options")
    {
        prefix_options = value;
        prefix_options.value_namespace = name_space;
        prefix_options.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-options")
    {
        prefix_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Ospfv3IaPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::MultiTopology::MultiTopology()
    :
    name{YType::str, "name"}
{

    yang_name = "multi-topology"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::MultiTopology::~MultiTopology()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::MultiTopology::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::MultiTopology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::MultiTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-topology";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::MultiTopology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::MultiTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::MultiTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::MultiTopology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::MultiTopology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::MultiTopology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Tlv::Tlv()
    :
    link_type{YType::uint8, "link-type"},
    link_id{YType::uint32, "link-id"},
    local_if_ipv4_addr{YType::str, "local-if-ipv4-addr"},
    local_remote_ipv4_addr{YType::str, "local-remote-ipv4-addr"},
    te_metric{YType::uint32, "te-metric"},
    max_bandwidth{YType::str, "max-bandwidth"},
    max_reservable_bandwidth{YType::str, "max-reservable-bandwidth"},
    unreserved_bandwidth{YType::str, "unreserved-bandwidth"},
    admin_group{YType::uint32, "admin-group"}
{

    yang_name = "tlv"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Tlv::~Tlv()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Tlv::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : local_if_ipv4_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : local_remote_ipv4_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return link_type.is_set
	|| link_id.is_set
	|| te_metric.is_set
	|| max_bandwidth.is_set
	|| max_reservable_bandwidth.is_set
	|| unreserved_bandwidth.is_set
	|| admin_group.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Tlv::has_operation() const
{
    for (auto const & leaf : local_if_ipv4_addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : local_remote_ipv4_addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(local_if_ipv4_addr.yfilter)
	|| ydk::is_set(local_remote_ipv4_addr.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(max_reservable_bandwidth.yfilter)
	|| ydk::is_set(unreserved_bandwidth.yfilter)
	|| ydk::is_set(admin_group.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_reservable_bandwidth.is_set || is_set(max_reservable_bandwidth.yfilter)) leaf_name_data.push_back(max_reservable_bandwidth.get_name_leafdata());
    if (unreserved_bandwidth.is_set || is_set(unreserved_bandwidth.yfilter)) leaf_name_data.push_back(unreserved_bandwidth.get_name_leafdata());
    if (admin_group.is_set || is_set(admin_group.yfilter)) leaf_name_data.push_back(admin_group.get_name_leafdata());

    auto local_if_ipv4_addr_name_datas = local_if_ipv4_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_if_ipv4_addr_name_datas.begin(), local_if_ipv4_addr_name_datas.end());
    auto local_remote_ipv4_addr_name_datas = local_remote_ipv4_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_remote_ipv4_addr_name_datas.begin(), local_remote_ipv4_addr_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-if-ipv4-addr")
    {
        local_if_ipv4_addr.append(value);
    }
    if(value_path == "local-remote-ipv4-addr")
    {
        local_remote_ipv4_addr.append(value);
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth = value;
        max_reservable_bandwidth.value_namespace = name_space;
        max_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth = value;
        unreserved_bandwidth.value_namespace = name_space;
        unreserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-group")
    {
        admin_group = value;
        admin_group.value_namespace = name_space;
        admin_group.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "local-if-ipv4-addr")
    {
        local_if_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "local-remote-ipv4-addr")
    {
        local_remote_ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "admin-group")
    {
        admin_group.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-type" || name == "link-id" || name == "local-if-ipv4-addr" || name == "local-remote-ipv4-addr" || name == "te-metric" || name == "max-bandwidth" || name == "max-reservable-bandwidth" || name == "unreserved-bandwidth" || name == "admin-group")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::UnknownSubTlv::UnknownSubTlv()
    :
    type{YType::uint16, "type"},
    length{YType::uint16, "length"},
    value_{YType::uint8, "value"}
{

    yang_name = "unknown-sub-tlv"; yang_parent_name = "link-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::UnknownSubTlv::~UnknownSubTlv()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::UnknownSubTlv::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return type.is_set
	|| length.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::UnknownSubTlv::has_operation() const
{
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::UnknownSubTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-sub-tlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::UnknownSubTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());

    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::UnknownSubTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::UnknownSubTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::UnknownSubTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
        value_.append(value);
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::UnknownSubTlv::set_filter(const std::string & value_path, YFilter yfilter)
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

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::LinkScopeLsa::UnknownSubTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "length" || name == "value")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::AreaScopeLsa()
    :
    lsa_type{YType::uint32, "lsa-type"},
    adv_router{YType::str, "adv-router"},
    decoded_completed{YType::boolean, "decoded-completed"},
    raw_data{YType::uint8, "raw-data"}
        ,
    ospfv2_lsa(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa>())
    , ospfv2_link(this, {"link_id", "link_data"})
    , ospfv2_topology(this, {"mt_id"})
    , ospfv2_external(this, {"mt_id"})
    , ospfv3_lsa(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa>())
    , ospfv3_link(this, {"interface_id", "neighbor_interface_id", "neighbor_router_id"})
    , ospfv3_prefix(this, {"prefix"})
    , ospfv3_ia_prefix(this, {"prefix"})
{
    ospfv2_lsa->parent = this;
    ospfv3_lsa->parent = this;

    yang_name = "area-scope-lsa"; yang_parent_name = "link-scope-lsas"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::~AreaScopeLsa()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfv2_link.len(); index++)
    {
        if(ospfv2_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_topology.len(); index++)
    {
        if(ospfv2_topology[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_external.len(); index++)
    {
        if(ospfv2_external[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_link.len(); index++)
    {
        if(ospfv3_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_prefix.len(); index++)
    {
        if(ospfv3_prefix[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_ia_prefix.len(); index++)
    {
        if(ospfv3_ia_prefix[index]->has_data())
            return true;
    }
    for (auto const & leaf : raw_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return lsa_type.is_set
	|| adv_router.is_set
	|| decoded_completed.is_set
	|| (ospfv2_lsa !=  nullptr && ospfv2_lsa->has_data())
	|| (ospfv3_lsa !=  nullptr && ospfv3_lsa->has_data());
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::has_operation() const
{
    for (std::size_t index=0; index<ospfv2_link.len(); index++)
    {
        if(ospfv2_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_topology.len(); index++)
    {
        if(ospfv2_topology[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv2_external.len(); index++)
    {
        if(ospfv2_external[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_link.len(); index++)
    {
        if(ospfv3_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_prefix.len(); index++)
    {
        if(ospfv3_prefix[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3_ia_prefix.len(); index++)
    {
        if(ospfv3_ia_prefix[index]->has_operation())
            return true;
    }
    for (auto const & leaf : raw_data.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(adv_router.yfilter)
	|| ydk::is_set(decoded_completed.yfilter)
	|| ydk::is_set(raw_data.yfilter)
	|| (ospfv2_lsa !=  nullptr && ospfv2_lsa->has_operation())
	|| (ospfv3_lsa !=  nullptr && ospfv3_lsa->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-scope-lsa";
    ADD_KEY_TOKEN(lsa_type, "lsa-type");
    ADD_KEY_TOKEN(adv_router, "adv-router");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.yfilter)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (decoded_completed.is_set || is_set(decoded_completed.yfilter)) leaf_name_data.push_back(decoded_completed.get_name_leafdata());

    auto raw_data_name_datas = raw_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), raw_data_name_datas.begin(), raw_data_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2-lsa")
    {
        if(ospfv2_lsa == nullptr)
        {
            ospfv2_lsa = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa>();
        }
        return ospfv2_lsa;
    }

    if(child_yang_name == "ospfv2-link")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link>();
        c->parent = this;
        ospfv2_link.append(c);
        return c;
    }

    if(child_yang_name == "ospfv2-topology")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Topology>();
        c->parent = this;
        ospfv2_topology.append(c);
        return c;
    }

    if(child_yang_name == "ospfv2-external")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2External>();
        c->parent = this;
        ospfv2_external.append(c);
        return c;
    }

    if(child_yang_name == "ospfv3-lsa")
    {
        if(ospfv3_lsa == nullptr)
        {
            ospfv3_lsa = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa>();
        }
        return ospfv3_lsa;
    }

    if(child_yang_name == "ospfv3-link")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Link>();
        c->parent = this;
        ospfv3_link.append(c);
        return c;
    }

    if(child_yang_name == "ospfv3-prefix")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Prefix>();
        c->parent = this;
        ospfv3_prefix.append(c);
        return c;
    }

    if(child_yang_name == "ospfv3-ia-prefix")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3IaPrefix>();
        c->parent = this;
        ospfv3_ia_prefix.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ospfv2_lsa != nullptr)
    {
        children["ospfv2-lsa"] = ospfv2_lsa;
    }

    count = 0;
    for (auto c : ospfv2_link.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv2_topology.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv2_external.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(ospfv3_lsa != nullptr)
    {
        children["ospfv3-lsa"] = ospfv3_lsa;
    }

    count = 0;
    for (auto c : ospfv3_link.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv3_prefix.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv3_ia_prefix.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
        adv_router.value_namespace = name_space;
        adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decoded-completed")
    {
        decoded_completed = value;
        decoded_completed.value_namespace = name_space;
        decoded_completed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raw-data")
    {
        raw_data.append(value);
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "adv-router")
    {
        adv_router.yfilter = yfilter;
    }
    if(value_path == "decoded-completed")
    {
        decoded_completed.yfilter = yfilter;
    }
    if(value_path == "raw-data")
    {
        raw_data.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv2-lsa" || name == "ospfv2-link" || name == "ospfv2-topology" || name == "ospfv2-external" || name == "ospfv3-lsa" || name == "ospfv3-link" || name == "ospfv3-prefix" || name == "ospfv3-ia-prefix" || name == "lsa-type" || name == "adv-router" || name == "decoded-completed" || name == "raw-data")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Ospfv2Lsa()
    :
    header(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header>())
    , lsa_body(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody>())
{
    header->parent = this;
    lsa_body->parent = this;

    yang_name = "ospfv2-lsa"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::~Ospfv2Lsa()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::has_data() const
{
    if (is_presence_container) return true;
    return (header !=  nullptr && header->has_data())
	|| (lsa_body !=  nullptr && lsa_body->has_data());
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (lsa_body !=  nullptr && lsa_body->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header>();
        }
        return header;
    }

    if(child_yang_name == "lsa-body")
    {
        if(lsa_body == nullptr)
        {
            lsa_body = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody>();
        }
        return lsa_body;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(lsa_body != nullptr)
    {
        children["lsa-body"] = lsa_body;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "lsa-body")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header::Header()
    :
    lsa_id{YType::str, "lsa-id"},
    opaque_type{YType::uint8, "opaque-type"},
    opaque_id{YType::uint32, "opaque-id"},
    age{YType::uint16, "age"},
    type{YType::uint16, "type"},
    adv_router{YType::uint32, "adv-router"},
    seq_num{YType::str, "seq-num"},
    checksum{YType::str, "checksum"},
    length{YType::uint16, "length"},
    flag_options{YType::bits, "flag-options"}
{

    yang_name = "header"; yang_parent_name = "ospfv2-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header::~Header()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| opaque_type.is_set
	|| opaque_id.is_set
	|| age.is_set
	|| type.is_set
	|| adv_router.is_set
	|| seq_num.is_set
	|| checksum.is_set
	|| length.is_set
	|| flag_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(opaque_type.yfilter)
	|| ydk::is_set(opaque_id.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(adv_router.yfilter)
	|| ydk::is_set(seq_num.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(flag_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (opaque_type.is_set || is_set(opaque_type.yfilter)) leaf_name_data.push_back(opaque_type.get_name_leafdata());
    if (opaque_id.is_set || is_set(opaque_id.yfilter)) leaf_name_data.push_back(opaque_id.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.yfilter)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (seq_num.is_set || is_set(seq_num.yfilter)) leaf_name_data.push_back(seq_num.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (flag_options.is_set || is_set(flag_options.yfilter)) leaf_name_data.push_back(flag_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-type")
    {
        opaque_type = value;
        opaque_type.value_namespace = name_space;
        opaque_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opaque-id")
    {
        opaque_id = value;
        opaque_id.value_namespace = name_space;
        opaque_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
        adv_router.value_namespace = name_space;
        adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-num")
    {
        seq_num = value;
        seq_num.value_namespace = name_space;
        seq_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-options")
    {
        flag_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "opaque-type")
    {
        opaque_type.yfilter = yfilter;
    }
    if(value_path == "opaque-id")
    {
        opaque_id.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "adv-router")
    {
        adv_router.yfilter = yfilter;
    }
    if(value_path == "seq-num")
    {
        seq_num.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "flag-options")
    {
        flag_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-id" || name == "opaque-type" || name == "opaque-id" || name == "age" || name == "type" || name == "adv-router" || name == "seq-num" || name == "checksum" || name == "length" || name == "flag-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::LsaBody()
    :
    num_of_links{YType::uint16, "num-of-links"},
    summary_mask{YType::str, "summary-mask"},
    external_mask{YType::str, "external-mask"},
    body_flag_options{YType::bits, "body-flag-options"}
        ,
    network(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network>())
{
    network->parent = this;

    yang_name = "lsa-body"; yang_parent_name = "ospfv2-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::~LsaBody()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::has_data() const
{
    if (is_presence_container) return true;
    return num_of_links.is_set
	|| summary_mask.is_set
	|| external_mask.is_set
	|| body_flag_options.is_set
	|| (network !=  nullptr && network->has_data());
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_of_links.yfilter)
	|| ydk::is_set(summary_mask.yfilter)
	|| ydk::is_set(external_mask.yfilter)
	|| ydk::is_set(body_flag_options.yfilter)
	|| (network !=  nullptr && network->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-body";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_of_links.is_set || is_set(num_of_links.yfilter)) leaf_name_data.push_back(num_of_links.get_name_leafdata());
    if (summary_mask.is_set || is_set(summary_mask.yfilter)) leaf_name_data.push_back(summary_mask.get_name_leafdata());
    if (external_mask.is_set || is_set(external_mask.yfilter)) leaf_name_data.push_back(external_mask.get_name_leafdata());
    if (body_flag_options.is_set || is_set(body_flag_options.yfilter)) leaf_name_data.push_back(body_flag_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network>();
        }
        return network;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(network != nullptr)
    {
        children["network"] = network;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-of-links")
    {
        num_of_links = value;
        num_of_links.value_namespace = name_space;
        num_of_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-mask")
    {
        summary_mask = value;
        summary_mask.value_namespace = name_space;
        summary_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-mask")
    {
        external_mask = value;
        external_mask.value_namespace = name_space;
        external_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "body-flag-options")
    {
        body_flag_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-of-links")
    {
        num_of_links.yfilter = yfilter;
    }
    if(value_path == "summary-mask")
    {
        summary_mask.yfilter = yfilter;
    }
    if(value_path == "external-mask")
    {
        external_mask.yfilter = yfilter;
    }
    if(value_path == "body-flag-options")
    {
        body_flag_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network" || name == "num-of-links" || name == "summary-mask" || name == "external-mask" || name == "body-flag-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network::Network()
    :
    network_mask{YType::str, "network-mask"},
    attached_router{YType::uint32, "attached-router"}
{

    yang_name = "network"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network::~Network()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return network_mask.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network::has_operation() const
{
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network_mask.yfilter)
	|| ydk::is_set(attached_router.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_mask.is_set || is_set(network_mask.yfilter)) leaf_name_data.push_back(network_mask.get_name_leafdata());

    auto attached_router_name_datas = attached_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attached_router_name_datas.begin(), attached_router_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-mask")
    {
        network_mask = value;
        network_mask.value_namespace = name_space;
        network_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-router")
    {
        attached_router.append(value);
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-mask")
    {
        network_mask.yfilter = yfilter;
    }
    if(value_path == "attached-router")
    {
        attached_router.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Lsa::LsaBody::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-mask" || name == "attached-router")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Link()
    :
    link_id{YType::uint32, "link-id"},
    link_data{YType::uint32, "link-data"},
    type{YType::uint8, "type"}
        ,
    ospfv2_topology(this, {"mt_id"})
{

    yang_name = "ospfv2-link"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::~Ospfv2Link()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospfv2_topology.len(); index++)
    {
        if(ospfv2_topology[index]->has_data())
            return true;
    }
    return link_id.is_set
	|| link_data.is_set
	|| type.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::has_operation() const
{
    for (std::size_t index=0; index<ospfv2_topology.len(); index++)
    {
        if(ospfv2_topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(link_data.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-link";
    ADD_KEY_TOKEN(link_id, "link-id");
    ADD_KEY_TOKEN(link_data, "link-data");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_data.is_set || is_set(link_data.yfilter)) leaf_name_data.push_back(link_data.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv2-topology")
    {
        auto c = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology>();
        c->parent = this;
        ospfv2_topology.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ospfv2_topology.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "link-data")
    {
        link_data.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv2-topology" || name == "link-id" || name == "link-data" || name == "type")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology::Ospfv2Topology()
    :
    mt_id{YType::uint32, "mt-id"},
    metric{YType::uint16, "metric"}
{

    yang_name = "ospfv2-topology"; yang_parent_name = "ospfv2-link"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology::~Ospfv2Topology()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| metric.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-topology";
    ADD_KEY_TOKEN(mt_id, "mt-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Link::Ospfv2Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "metric")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Topology::Ospfv2Topology()
    :
    mt_id{YType::uint32, "mt-id"},
    metric{YType::uint16, "metric"}
{

    yang_name = "ospfv2-topology"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Topology::~Ospfv2Topology()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Topology::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| metric.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-topology";
    ADD_KEY_TOKEN(mt_id, "mt-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "metric")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2External::Ospfv2External()
    :
    mt_id{YType::uint32, "mt-id"},
    metric{YType::uint32, "metric"},
    forwarding_address{YType::str, "forwarding-address"},
    external_route_tag{YType::uint32, "external-route-tag"}
{

    yang_name = "ospfv2-external"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2External::~Ospfv2External()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2External::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| metric.is_set
	|| forwarding_address.is_set
	|| external_route_tag.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_route_tag.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv2-external";
    ADD_KEY_TOKEN(mt_id, "mt-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.yfilter)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
        external_route_tag.value_namespace = name_space;
        external_route_tag.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv2External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "metric" || name == "forwarding-address" || name == "external-route-tag")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Ospfv3Lsa()
    :
    header(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header>())
    , lsa_body(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody>())
{
    header->parent = this;
    lsa_body->parent = this;

    yang_name = "ospfv3-lsa"; yang_parent_name = "area-scope-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::~Ospfv3Lsa()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::has_data() const
{
    if (is_presence_container) return true;
    return (header !=  nullptr && header->has_data())
	|| (lsa_body !=  nullptr && lsa_body->has_data());
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (lsa_body !=  nullptr && lsa_body->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header>();
        }
        return header;
    }

    if(child_yang_name == "lsa-body")
    {
        if(lsa_body == nullptr)
        {
            lsa_body = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody>();
        }
        return lsa_body;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(header != nullptr)
    {
        children["header"] = header;
    }

    if(lsa_body != nullptr)
    {
        children["lsa-body"] = lsa_body;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "lsa-body")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::Header()
    :
    lsa_id{YType::str, "lsa-id"},
    lsa_hdr_options{YType::bits, "lsa-hdr-options"}
        ,
    lsa_header(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader>())
{
    lsa_header->parent = this;

    yang_name = "header"; yang_parent_name = "ospfv3-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::~Header()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| lsa_hdr_options.is_set
	|| (lsa_header !=  nullptr && lsa_header->has_data());
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(lsa_hdr_options.yfilter)
	|| (lsa_header !=  nullptr && lsa_header->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (lsa_hdr_options.is_set || is_set(lsa_hdr_options.yfilter)) leaf_name_data.push_back(lsa_hdr_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-header")
    {
        if(lsa_header == nullptr)
        {
            lsa_header = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader>();
        }
        return lsa_header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_header != nullptr)
    {
        children["lsa-header"] = lsa_header;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-hdr-options")
    {
        lsa_hdr_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "lsa-hdr-options")
    {
        lsa_hdr_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-header" || name == "lsa-id" || name == "lsa-hdr-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader::LsaHeader()
    :
    age{YType::uint16, "age"},
    type{YType::uint16, "type"},
    adv_router{YType::uint32, "adv-router"},
    seq_num{YType::str, "seq-num"},
    checksum{YType::str, "checksum"},
    length{YType::uint16, "length"}
{

    yang_name = "lsa-header"; yang_parent_name = "header"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader::~LsaHeader()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader::has_data() const
{
    if (is_presence_container) return true;
    return age.is_set
	|| type.is_set
	|| adv_router.is_set
	|| seq_num.is_set
	|| checksum.is_set
	|| length.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(adv_router.yfilter)
	|| ydk::is_set(seq_num.yfilter)
	|| ydk::is_set(checksum.yfilter)
	|| ydk::is_set(length.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (adv_router.is_set || is_set(adv_router.yfilter)) leaf_name_data.push_back(adv_router.get_name_leafdata());
    if (seq_num.is_set || is_set(seq_num.yfilter)) leaf_name_data.push_back(seq_num.get_name_leafdata());
    if (checksum.is_set || is_set(checksum.yfilter)) leaf_name_data.push_back(checksum.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-router")
    {
        adv_router = value;
        adv_router.value_namespace = name_space;
        adv_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq-num")
    {
        seq_num = value;
        seq_num.value_namespace = name_space;
        seq_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum")
    {
        checksum = value;
        checksum.value_namespace = name_space;
        checksum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "adv-router")
    {
        adv_router.yfilter = yfilter;
    }
    if(value_path == "seq-num")
    {
        seq_num.yfilter = yfilter;
    }
    if(value_path == "checksum")
    {
        checksum.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::Header::LsaHeader::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "age" || name == "type" || name == "adv-router" || name == "seq-num" || name == "checksum" || name == "length")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaBody()
    :
    lsa_flag_options{YType::bits, "lsa-flag-options"},
    lsa_body_flags{YType::bits, "lsa-body-flags"}
        ,
    network(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network>())
    , prefix(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix>())
    , ia_router(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter>())
    , lsa_external(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal>())
    , nssa(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa>())
    , link_data(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData>())
    , ia_prefix(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix>())
{
    network->parent = this;
    prefix->parent = this;
    ia_router->parent = this;
    lsa_external->parent = this;
    nssa->parent = this;
    link_data->parent = this;
    ia_prefix->parent = this;

    yang_name = "lsa-body"; yang_parent_name = "ospfv3-lsa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::~LsaBody()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::has_data() const
{
    if (is_presence_container) return true;
    return lsa_flag_options.is_set
	|| lsa_body_flags.is_set
	|| (network !=  nullptr && network->has_data())
	|| (prefix !=  nullptr && prefix->has_data())
	|| (ia_router !=  nullptr && ia_router->has_data())
	|| (lsa_external !=  nullptr && lsa_external->has_data())
	|| (nssa !=  nullptr && nssa->has_data())
	|| (link_data !=  nullptr && link_data->has_data())
	|| (ia_prefix !=  nullptr && ia_prefix->has_data());
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_flag_options.yfilter)
	|| ydk::is_set(lsa_body_flags.yfilter)
	|| (network !=  nullptr && network->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (ia_router !=  nullptr && ia_router->has_operation())
	|| (lsa_external !=  nullptr && lsa_external->has_operation())
	|| (nssa !=  nullptr && nssa->has_operation())
	|| (link_data !=  nullptr && link_data->has_operation())
	|| (ia_prefix !=  nullptr && ia_prefix->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-body";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_flag_options.is_set || is_set(lsa_flag_options.yfilter)) leaf_name_data.push_back(lsa_flag_options.get_name_leafdata());
    if (lsa_body_flags.is_set || is_set(lsa_body_flags.yfilter)) leaf_name_data.push_back(lsa_body_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "ia-router")
    {
        if(ia_router == nullptr)
        {
            ia_router = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter>();
        }
        return ia_router;
    }

    if(child_yang_name == "lsa-external")
    {
        if(lsa_external == nullptr)
        {
            lsa_external = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal>();
        }
        return lsa_external;
    }

    if(child_yang_name == "nssa")
    {
        if(nssa == nullptr)
        {
            nssa = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa>();
        }
        return nssa;
    }

    if(child_yang_name == "link-data")
    {
        if(link_data == nullptr)
        {
            link_data = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LinkData>();
        }
        return link_data;
    }

    if(child_yang_name == "ia-prefix")
    {
        if(ia_prefix == nullptr)
        {
            ia_prefix = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaPrefix>();
        }
        return ia_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(ia_router != nullptr)
    {
        children["ia-router"] = ia_router;
    }

    if(lsa_external != nullptr)
    {
        children["lsa-external"] = lsa_external;
    }

    if(nssa != nullptr)
    {
        children["nssa"] = nssa;
    }

    if(link_data != nullptr)
    {
        children["link-data"] = link_data;
    }

    if(ia_prefix != nullptr)
    {
        children["ia-prefix"] = ia_prefix;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-flag-options")
    {
        lsa_flag_options[value] = true;
    }
    if(value_path == "lsa-body-flags")
    {
        lsa_body_flags[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-flag-options")
    {
        lsa_flag_options.yfilter = yfilter;
    }
    if(value_path == "lsa-body-flags")
    {
        lsa_body_flags.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network" || name == "prefix" || name == "ia-router" || name == "lsa-external" || name == "nssa" || name == "link-data" || name == "ia-prefix" || name == "lsa-flag-options" || name == "lsa-body-flags")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network::Network()
    :
    attached_router{YType::uint32, "attached-router"},
    lsa_net_options{YType::bits, "lsa-net-options"}
{

    yang_name = "network"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network::~Network()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return lsa_net_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network::has_operation() const
{
    for (auto const & leaf : attached_router.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(attached_router.yfilter)
	|| ydk::is_set(lsa_net_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_net_options.is_set || is_set(lsa_net_options.yfilter)) leaf_name_data.push_back(lsa_net_options.get_name_leafdata());

    auto attached_router_name_datas = attached_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), attached_router_name_datas.begin(), attached_router_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attached-router")
    {
        attached_router.append(value);
    }
    if(value_path == "lsa-net-options")
    {
        lsa_net_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attached-router")
    {
        attached_router.yfilter = yfilter;
    }
    if(value_path == "lsa-net-options")
    {
        lsa_net_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attached-router" || name == "lsa-net-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix::Prefix()
    :
    metric{YType::uint32, "metric"},
    ia_prefix{YType::str, "ia-prefix"},
    ia_prefix_options{YType::str, "ia-prefix-options"}
{

    yang_name = "prefix"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix::~Prefix()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| ia_prefix.is_set
	|| ia_prefix_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(ia_prefix.yfilter)
	|| ydk::is_set(ia_prefix_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (ia_prefix.is_set || is_set(ia_prefix.yfilter)) leaf_name_data.push_back(ia_prefix.get_name_leafdata());
    if (ia_prefix_options.is_set || is_set(ia_prefix_options.yfilter)) leaf_name_data.push_back(ia_prefix_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ia-prefix")
    {
        ia_prefix = value;
        ia_prefix.value_namespace = name_space;
        ia_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ia-prefix-options")
    {
        ia_prefix_options = value;
        ia_prefix_options.value_namespace = name_space;
        ia_prefix_options.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "ia-prefix")
    {
        ia_prefix.yfilter = yfilter;
    }
    if(value_path == "ia-prefix-options")
    {
        ia_prefix_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "ia-prefix" || name == "ia-prefix-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter::IaRouter()
    :
    metric{YType::uint32, "metric"},
    destination_router_id{YType::uint32, "destination-router-id"},
    lsa_ia_options{YType::bits, "lsa-ia-options"}
{

    yang_name = "ia-router"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter::~IaRouter()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| destination_router_id.is_set
	|| lsa_ia_options.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(destination_router_id.yfilter)
	|| ydk::is_set(lsa_ia_options.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ia-router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (destination_router_id.is_set || is_set(destination_router_id.yfilter)) leaf_name_data.push_back(destination_router_id.get_name_leafdata());
    if (lsa_ia_options.is_set || is_set(lsa_ia_options.yfilter)) leaf_name_data.push_back(lsa_ia_options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-router-id")
    {
        destination_router_id = value;
        destination_router_id.value_namespace = name_space;
        destination_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-ia-options")
    {
        lsa_ia_options[value] = true;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "destination-router-id")
    {
        destination_router_id.yfilter = yfilter;
    }
    if(value_path == "lsa-ia-options")
    {
        lsa_ia_options.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::IaRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "destination-router-id" || name == "lsa-ia-options")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::LsaExternal()
    :
    metric{YType::uint32, "metric"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"},
    external_prefix{YType::str, "external-prefix"},
    external_prefix_options{YType::str, "external-prefix-options"},
    forwarding_address{YType::str, "forwarding-address"},
    external_route_tag{YType::uint32, "external-route-tag"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"}
        ,
    flags(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags>())
{
    flags->parent = this;

    yang_name = "lsa-external"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::~LsaExternal()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| referenced_ls_type.is_set
	|| external_prefix.is_set
	|| external_prefix_options.is_set
	|| forwarding_address.is_set
	|| external_route_tag.is_set
	|| referenced_link_state_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(referenced_ls_type.yfilter)
	|| ydk::is_set(external_prefix.yfilter)
	|| ydk::is_set(external_prefix_options.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_route_tag.yfilter)
	|| ydk::is_set(referenced_link_state_id.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.yfilter)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());
    if (external_prefix.is_set || is_set(external_prefix.yfilter)) leaf_name_data.push_back(external_prefix.get_name_leafdata());
    if (external_prefix_options.is_set || is_set(external_prefix_options.yfilter)) leaf_name_data.push_back(external_prefix_options.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.yfilter)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.yfilter)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
        referenced_ls_type.value_namespace = name_space;
        referenced_ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-prefix")
    {
        external_prefix = value;
        external_prefix.value_namespace = name_space;
        external_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-prefix-options")
    {
        external_prefix_options = value;
        external_prefix_options.value_namespace = name_space;
        external_prefix_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
        external_route_tag.value_namespace = name_space;
        external_route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
        referenced_link_state_id.value_namespace = name_space;
        referenced_link_state_id.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type.yfilter = yfilter;
    }
    if(value_path == "external-prefix")
    {
        external_prefix.yfilter = yfilter;
    }
    if(value_path == "external-prefix-options")
    {
        external_prefix_options.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag.yfilter = yfilter;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "metric" || name == "referenced-ls-type" || name == "external-prefix" || name == "external-prefix-options" || name == "forwarding-address" || name == "external-route-tag" || name == "referenced-link-state-id")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags::Flags()
    :
    e_flag{YType::boolean, "e-flag"}
{

    yang_name = "flags"; yang_parent_name = "lsa-external"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags::~Flags()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags::has_data() const
{
    if (is_presence_container) return true;
    return e_flag.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(e_flag.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (e_flag.is_set || is_set(e_flag.yfilter)) leaf_name_data.push_back(e_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "e-flag")
    {
        e_flag = value;
        e_flag.value_namespace = name_space;
        e_flag.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "e-flag")
    {
        e_flag.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::LsaExternal::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "e-flag")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::Nssa()
    :
    lsa_nssa_external(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal>())
{
    lsa_nssa_external->parent = this;

    yang_name = "nssa"; yang_parent_name = "lsa-body"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::~Nssa()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::has_data() const
{
    if (is_presence_container) return true;
    return (lsa_nssa_external !=  nullptr && lsa_nssa_external->has_data());
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::has_operation() const
{
    return is_set(yfilter)
	|| (lsa_nssa_external !=  nullptr && lsa_nssa_external->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-nssa-external")
    {
        if(lsa_nssa_external == nullptr)
        {
            lsa_nssa_external = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal>();
        }
        return lsa_nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsa_nssa_external != nullptr)
    {
        children["lsa-nssa-external"] = lsa_nssa_external;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-nssa-external")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::LsaNssaExternal()
    :
    metric{YType::uint32, "metric"},
    referenced_ls_type{YType::uint16, "referenced-ls-type"},
    external_prefix{YType::str, "external-prefix"},
    external_prefix_options{YType::str, "external-prefix-options"},
    forwarding_address{YType::str, "forwarding-address"},
    external_route_tag{YType::uint32, "external-route-tag"},
    referenced_link_state_id{YType::uint32, "referenced-link-state-id"}
        ,
    flags(std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags>())
{
    flags->parent = this;

    yang_name = "lsa-nssa-external"; yang_parent_name = "nssa"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::~LsaNssaExternal()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| referenced_ls_type.is_set
	|| external_prefix.is_set
	|| external_prefix_options.is_set
	|| forwarding_address.is_set
	|| external_route_tag.is_set
	|| referenced_link_state_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(referenced_ls_type.yfilter)
	|| ydk::is_set(external_prefix.yfilter)
	|| ydk::is_set(external_prefix_options.yfilter)
	|| ydk::is_set(forwarding_address.yfilter)
	|| ydk::is_set(external_route_tag.yfilter)
	|| ydk::is_set(referenced_link_state_id.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (referenced_ls_type.is_set || is_set(referenced_ls_type.yfilter)) leaf_name_data.push_back(referenced_ls_type.get_name_leafdata());
    if (external_prefix.is_set || is_set(external_prefix.yfilter)) leaf_name_data.push_back(external_prefix.get_name_leafdata());
    if (external_prefix_options.is_set || is_set(external_prefix_options.yfilter)) leaf_name_data.push_back(external_prefix_options.get_name_leafdata());
    if (forwarding_address.is_set || is_set(forwarding_address.yfilter)) leaf_name_data.push_back(forwarding_address.get_name_leafdata());
    if (external_route_tag.is_set || is_set(external_route_tag.yfilter)) leaf_name_data.push_back(external_route_tag.get_name_leafdata());
    if (referenced_link_state_id.is_set || is_set(referenced_link_state_id.yfilter)) leaf_name_data.push_back(referenced_link_state_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type = value;
        referenced_ls_type.value_namespace = name_space;
        referenced_ls_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-prefix")
    {
        external_prefix = value;
        external_prefix.value_namespace = name_space;
        external_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-prefix-options")
    {
        external_prefix_options = value;
        external_prefix_options.value_namespace = name_space;
        external_prefix_options.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address = value;
        forwarding_address.value_namespace = name_space;
        forwarding_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag = value;
        external_route_tag.value_namespace = name_space;
        external_route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id = value;
        referenced_link_state_id.value_namespace = name_space;
        referenced_link_state_id.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "referenced-ls-type")
    {
        referenced_ls_type.yfilter = yfilter;
    }
    if(value_path == "external-prefix")
    {
        external_prefix.yfilter = yfilter;
    }
    if(value_path == "external-prefix-options")
    {
        external_prefix_options.yfilter = yfilter;
    }
    if(value_path == "forwarding-address")
    {
        forwarding_address.yfilter = yfilter;
    }
    if(value_path == "external-route-tag")
    {
        external_route_tag.yfilter = yfilter;
    }
    if(value_path == "referenced-link-state-id")
    {
        referenced_link_state_id.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "metric" || name == "referenced-ls-type" || name == "external-prefix" || name == "external-prefix-options" || name == "forwarding-address" || name == "external-route-tag" || name == "referenced-link-state-id")
        return true;
    return false;
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::Flags()
    :
    e_flag{YType::boolean, "e-flag"}
{

    yang_name = "flags"; yang_parent_name = "lsa-nssa-external"; is_top_level_class = false; has_list_ancestor = true; 
}

OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::~Flags()
{
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::has_data() const
{
    if (is_presence_container) return true;
    return e_flag.is_set;
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(e_flag.yfilter);
}

std::string OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (e_flag.is_set || is_set(e_flag.yfilter)) leaf_name_data.push_back(e_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "e-flag")
    {
        e_flag = value;
        e_flag.value_namespace = name_space;
        e_flag.value_namespace_prefix = name_space_prefix;
    }
}

void OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "e-flag")
    {
        e_flag.yfilter = yfilter;
    }
}

bool OspfOperData::OspfState::OspfInstance::LinkScopeLsas::AreaScopeLsa::Ospfv3Lsa::LsaBody::Nssa::LsaNssaExternal::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "e-flag")
        return true;
    return false;
}

const Enum::YLeaf NbrStateType::ospf_nbr_down {1, "ospf-nbr-down"};
const Enum::YLeaf NbrStateType::ospf_nbr_attempt {2, "ospf-nbr-attempt"};
const Enum::YLeaf NbrStateType::ospf_nbr_init {3, "ospf-nbr-init"};
const Enum::YLeaf NbrStateType::ospf_nbr_two_way {4, "ospf-nbr-two-way"};
const Enum::YLeaf NbrStateType::ospf_nbr_exchange_start {5, "ospf-nbr-exchange-start"};
const Enum::YLeaf NbrStateType::ospf_nbr_exchange {6, "ospf-nbr-exchange"};
const Enum::YLeaf NbrStateType::ospf_nbr_loading {7, "ospf-nbr-loading"};
const Enum::YLeaf NbrStateType::ospf_nbr_full {8, "ospf-nbr-full"};

const Enum::YLeaf Ospfv2IntfState::ospfv2_interface_state_down {0, "ospfv2-interface-state-down"};
const Enum::YLeaf Ospfv2IntfState::ospfv2_interface_state_loopback {1, "ospfv2-interface-state-loopback"};
const Enum::YLeaf Ospfv2IntfState::ospfv2_interface_state_waiting {2, "ospfv2-interface-state-waiting"};
const Enum::YLeaf Ospfv2IntfState::ospfv2_interface_state_point_to_mpoint {3, "ospfv2-interface-state-point-to-mpoint"};
const Enum::YLeaf Ospfv2IntfState::ospfv2_interface_state_point_to_point {4, "ospfv2-interface-state-point-to-point"};
const Enum::YLeaf Ospfv2IntfState::ospfv2_interface_state_dr {5, "ospfv2-interface-state-dr"};
const Enum::YLeaf Ospfv2IntfState::ospfv2_interface_state_backup {6, "ospfv2-interface-state-backup"};
const Enum::YLeaf Ospfv2IntfState::ospfv2_interface_state_other {7, "ospfv2-interface-state-other"};

const Enum::YLeaf Ospfv2LsaType::ospfv2_lsa_type_unsupported_lsa_type {0, "ospfv2-lsa-type-unsupported-lsa-type"};
const Enum::YLeaf Ospfv2LsaType::ospfv2_lsa_type_router {1, "ospfv2-lsa-type-router"};
const Enum::YLeaf Ospfv2LsaType::ospfv2_lsa_type_network {2, "ospfv2-lsa-type-network"};
const Enum::YLeaf Ospfv2LsaType::ospfv2_lsa_type_summary_net {3, "ospfv2-lsa-type-summary-net"};
const Enum::YLeaf Ospfv2LsaType::ospfv2_lsa_type_summary_router {4, "ospfv2-lsa-type-summary-router"};
const Enum::YLeaf Ospfv2LsaType::ospfv2_lsa_type_as_external {5, "ospfv2-lsa-type-as-external"};
const Enum::YLeaf Ospfv2LsaType::ospfv2_lsa_type_nssa {6, "ospfv2-lsa-type-nssa"};
const Enum::YLeaf Ospfv2LsaType::ospfv2_lsa_type_link_scope_opaque {7, "ospfv2-lsa-type-link-scope-opaque"};
const Enum::YLeaf Ospfv2LsaType::ospfv2_lsa_type_area_scope_opaque {8, "ospfv2-lsa-type-area-scope-opaque"};
const Enum::YLeaf Ospfv2LsaType::ospfv2_lsa_type_as_scope_opaque {9, "ospfv2-lsa-type-as-scope-opaque"};

const Enum::YLeaf OspfNetworkType::ospf_broadcast {0, "ospf-broadcast"};
const Enum::YLeaf OspfNetworkType::ospf_non_broadcast {1, "ospf-non-broadcast"};
const Enum::YLeaf OspfNetworkType::ospf_point_to_multipoint {2, "ospf-point-to-multipoint"};
const Enum::YLeaf OspfNetworkType::ospf_point_to_point {3, "ospf-point-to-point"};

const Enum::YLeaf Ospfv2CryptoAlgorithm::ospfv2_crypto_cleartest {0, "ospfv2-crypto-cleartest"};
const Enum::YLeaf Ospfv2CryptoAlgorithm::ospfv2_crypto_md5 {1, "ospfv2-crypto-md5"};

const Enum::YLeaf OspfAuthType::ospf_auth_ipsec {0, "ospf-auth-ipsec"};
const Enum::YLeaf OspfAuthType::ospf_auth_trailer_keychain {1, "ospf-auth-trailer-keychain"};
const Enum::YLeaf OspfAuthType::ospf_auth_trailer_key {2, "ospf-auth-trailer-key"};
const Enum::YLeaf OspfAuthType::ospf_auth_type_none {3, "ospf-auth-type-none"};

const Enum::YLeaf OspfExternalMetricType::ospf_ext_metric_type_1 {0, "ospf-ext-metric-type-1"};
const Enum::YLeaf OspfExternalMetricType::ospf_ext_metric_type_2 {1, "ospf-ext-metric-type-2"};

const Enum::YLeaf OspfOperationMode::ospf_ships_in_the_night {0, "ospf-ships-in-the-night"};

const Enum::YLeaf AddressFamily::address_family_ipv4 {0, "address-family-ipv4"};
const Enum::YLeaf AddressFamily::address_family_ipv6 {1, "address-family-ipv6"};

const Enum::YLeaf Ospfv2AuthTypeSelection::ospfv2_auth_none {0, "ospfv2-auth-none"};
const Enum::YLeaf Ospfv2AuthTypeSelection::ospfv2_auth_trailer_key {1, "ospfv2-auth-trailer-key"};
const Enum::YLeaf Ospfv2AuthTypeSelection::ospfv2_auth_trailer_key_chain {2, "ospfv2-auth-trailer-key-chain"};


}
}

