
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_lpts_pre_ifib_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lpts_pre_ifib_oper {

LptsPifib_::LptsPifib_()
    :
    nodes(std::make_shared<LptsPifib_::Nodes>())
{
    nodes->parent = this;

    yang_name = "lpts-pifib"; yang_parent_name = "Cisco-IOS-XR-lpts-pre-ifib-oper"; is_top_level_class = true; has_list_ancestor = false;
}

LptsPifib_::~LptsPifib_()
{
}

bool LptsPifib_::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool LptsPifib_::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string LptsPifib_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-pre-ifib-oper:lpts-pifib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPifib_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> LptsPifib_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<LptsPifib_::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void LptsPifib_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LptsPifib_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> LptsPifib_::clone_ptr() const
{
    return std::make_shared<LptsPifib_>();
}

std::string LptsPifib_::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string LptsPifib_::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function LptsPifib_::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> LptsPifib_::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool LptsPifib_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

LptsPifib_::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "lpts-pifib"; is_top_level_class = false; has_list_ancestor = false;
}

LptsPifib_::Nodes::~Nodes()
{
}

bool LptsPifib_::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool LptsPifib_::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LptsPifib_::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-pre-ifib-oper:lpts-pifib/" << get_segment_path();
    return path_buffer.str();
}

std::string LptsPifib_::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPifib_::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> LptsPifib_::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto c = std::make_shared<LptsPifib_::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib_::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void LptsPifib_::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LptsPifib_::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LptsPifib_::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

LptsPifib_::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    type_values(std::make_shared<LptsPifib_::Nodes::Node::TypeValues>())
	,dynamic_flows_stats(std::make_shared<LptsPifib_::Nodes::Node::DynamicFlowsStats>())
	,hardware(std::make_shared<LptsPifib_::Nodes::Node::Hardware>())
{
    type_values->parent = this;
    dynamic_flows_stats->parent = this;
    hardware->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

LptsPifib_::Nodes::Node::~Node()
{
}

bool LptsPifib_::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (type_values !=  nullptr && type_values->has_data())
	|| (dynamic_flows_stats !=  nullptr && dynamic_flows_stats->has_data())
	|| (hardware !=  nullptr && hardware->has_data());
}

bool LptsPifib_::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (type_values !=  nullptr && type_values->has_operation())
	|| (dynamic_flows_stats !=  nullptr && dynamic_flows_stats->has_operation())
	|| (hardware !=  nullptr && hardware->has_operation());
}

std::string LptsPifib_::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-pre-ifib-oper:lpts-pifib/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string LptsPifib_::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPifib_::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LptsPifib_::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type-values")
    {
        if(type_values == nullptr)
        {
            type_values = std::make_shared<LptsPifib_::Nodes::Node::TypeValues>();
        }
        return type_values;
    }

    if(child_yang_name == "dynamic-flows-stats")
    {
        if(dynamic_flows_stats == nullptr)
        {
            dynamic_flows_stats = std::make_shared<LptsPifib_::Nodes::Node::DynamicFlowsStats>();
        }
        return dynamic_flows_stats;
    }

    if(child_yang_name == "Cisco-IOS-XR-platform-pifib-oper:hardware")
    {
        if(hardware == nullptr)
        {
            hardware = std::make_shared<LptsPifib_::Nodes::Node::Hardware>();
        }
        return hardware;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib_::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(type_values != nullptr)
    {
        children["type-values"] = type_values;
    }

    if(dynamic_flows_stats != nullptr)
    {
        children["dynamic-flows-stats"] = dynamic_flows_stats;
    }

    if(hardware != nullptr)
    {
        children["Cisco-IOS-XR-platform-pifib-oper:hardware"] = hardware;
    }

    return children;
}

void LptsPifib_::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void LptsPifib_::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool LptsPifib_::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type-values" || name == "dynamic-flows-stats" || name == "hardware" || name == "node-name")
        return true;
    return false;
}

LptsPifib_::Nodes::Node::TypeValues::TypeValues()
{

    yang_name = "type-values"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

LptsPifib_::Nodes::Node::TypeValues::~TypeValues()
{
}

bool LptsPifib_::Nodes::Node::TypeValues::has_data() const
{
    for (std::size_t index=0; index<type_value.size(); index++)
    {
        if(type_value[index]->has_data())
            return true;
    }
    return false;
}

bool LptsPifib_::Nodes::Node::TypeValues::has_operation() const
{
    for (std::size_t index=0; index<type_value.size(); index++)
    {
        if(type_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LptsPifib_::Nodes::Node::TypeValues::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type-values";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPifib_::Nodes::Node::TypeValues::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> LptsPifib_::Nodes::Node::TypeValues::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type-value")
    {
        auto c = std::make_shared<LptsPifib_::Nodes::Node::TypeValues::TypeValue>();
        c->parent = this;
        type_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib_::Nodes::Node::TypeValues::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : type_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void LptsPifib_::Nodes::Node::TypeValues::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LptsPifib_::Nodes::Node::TypeValues::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LptsPifib_::Nodes::Node::TypeValues::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type-value")
        return true;
    return false;
}

LptsPifib_::Nodes::Node::TypeValues::TypeValue::TypeValue()
    :
    pifib_type{YType::enumeration, "pifib-type"}
{

    yang_name = "type-value"; yang_parent_name = "type-values"; is_top_level_class = false; has_list_ancestor = true;
}

LptsPifib_::Nodes::Node::TypeValues::TypeValue::~TypeValue()
{
}

bool LptsPifib_::Nodes::Node::TypeValues::TypeValue::has_data() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_data())
            return true;
    }
    return pifib_type.is_set;
}

bool LptsPifib_::Nodes::Node::TypeValues::TypeValue::has_operation() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pifib_type.yfilter);
}

std::string LptsPifib_::Nodes::Node::TypeValues::TypeValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type-value" <<"[pifib-type='" <<pifib_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPifib_::Nodes::Node::TypeValues::TypeValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pifib_type.is_set || is_set(pifib_type.yfilter)) leaf_name_data.push_back(pifib_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LptsPifib_::Nodes::Node::TypeValues::TypeValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entry")
    {
        auto c = std::make_shared<LptsPifib_::Nodes::Node::TypeValues::TypeValue::Entry>();
        c->parent = this;
        entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib_::Nodes::Node::TypeValues::TypeValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void LptsPifib_::Nodes::Node::TypeValues::TypeValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pifib-type")
    {
        pifib_type = value;
        pifib_type.value_namespace = name_space;
        pifib_type.value_namespace_prefix = name_space_prefix;
    }
}

void LptsPifib_::Nodes::Node::TypeValues::TypeValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pifib-type")
    {
        pifib_type.yfilter = yfilter;
    }
}

bool LptsPifib_::Nodes::Node::TypeValues::TypeValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry" || name == "pifib-type")
        return true;
    return false;
}

LptsPifib_::Nodes::Node::TypeValues::TypeValue::Entry::Entry()
    :
    entry{YType::str, "entry"},
    vrf_name{YType::str, "vrf-name"},
    vid{YType::uint32, "vid"},
    l3protocol{YType::uint32, "l3protocol"},
    l4protocol{YType::uint32, "l4protocol"},
    intf_name{YType::str, "intf-name"},
    intf_handle{YType::uint32, "intf-handle"},
    destination_addr{YType::str, "destination-addr"},
    source_addr{YType::str, "source-addr"},
    destination_type{YType::str, "destination-type"},
    destination_value{YType::str, "destination-value"},
    source_port{YType::str, "source-port"},
    is_frag{YType::uint8, "is-frag"},
    is_syn{YType::uint8, "is-syn"},
    opcode{YType::str, "opcode"},
    flow_type{YType::str, "flow-type"},
    listener_tag{YType::str, "listener-tag"},
    local_flag{YType::uint8, "local-flag"},
    is_fgid{YType::uint8, "is-fgid"},
    deliver_list_short{YType::str, "deliver-list-short"},
    deliver_list_long{YType::str, "deliver-list-long"},
    min_ttl{YType::uint8, "min-ttl"},
    accepts{YType::uint64, "accepts"},
    drops{YType::uint64, "drops"},
    stale{YType::uint8, "stale"},
    pifib_type{YType::uint8, "pifib-type"},
    pifib_program_time{YType::str, "pifib-program-time"}
{

    yang_name = "entry"; yang_parent_name = "type-value"; is_top_level_class = false; has_list_ancestor = true;
}

LptsPifib_::Nodes::Node::TypeValues::TypeValue::Entry::~Entry()
{
}

bool LptsPifib_::Nodes::Node::TypeValues::TypeValue::Entry::has_data() const
{
    return entry.is_set
	|| vrf_name.is_set
	|| vid.is_set
	|| l3protocol.is_set
	|| l4protocol.is_set
	|| intf_name.is_set
	|| intf_handle.is_set
	|| destination_addr.is_set
	|| source_addr.is_set
	|| destination_type.is_set
	|| destination_value.is_set
	|| source_port.is_set
	|| is_frag.is_set
	|| is_syn.is_set
	|| opcode.is_set
	|| flow_type.is_set
	|| listener_tag.is_set
	|| local_flag.is_set
	|| is_fgid.is_set
	|| deliver_list_short.is_set
	|| deliver_list_long.is_set
	|| min_ttl.is_set
	|| accepts.is_set
	|| drops.is_set
	|| stale.is_set
	|| pifib_type.is_set
	|| pifib_program_time.is_set;
}

bool LptsPifib_::Nodes::Node::TypeValues::TypeValue::Entry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(l3protocol.yfilter)
	|| ydk::is_set(l4protocol.yfilter)
	|| ydk::is_set(intf_name.yfilter)
	|| ydk::is_set(intf_handle.yfilter)
	|| ydk::is_set(destination_addr.yfilter)
	|| ydk::is_set(source_addr.yfilter)
	|| ydk::is_set(destination_type.yfilter)
	|| ydk::is_set(destination_value.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(is_frag.yfilter)
	|| ydk::is_set(is_syn.yfilter)
	|| ydk::is_set(opcode.yfilter)
	|| ydk::is_set(flow_type.yfilter)
	|| ydk::is_set(listener_tag.yfilter)
	|| ydk::is_set(local_flag.yfilter)
	|| ydk::is_set(is_fgid.yfilter)
	|| ydk::is_set(deliver_list_short.yfilter)
	|| ydk::is_set(deliver_list_long.yfilter)
	|| ydk::is_set(min_ttl.yfilter)
	|| ydk::is_set(accepts.yfilter)
	|| ydk::is_set(drops.yfilter)
	|| ydk::is_set(stale.yfilter)
	|| ydk::is_set(pifib_type.yfilter)
	|| ydk::is_set(pifib_program_time.yfilter);
}

std::string LptsPifib_::Nodes::Node::TypeValues::TypeValue::Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry" <<"[entry='" <<entry <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPifib_::Nodes::Node::TypeValues::TypeValue::Entry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (l3protocol.is_set || is_set(l3protocol.yfilter)) leaf_name_data.push_back(l3protocol.get_name_leafdata());
    if (l4protocol.is_set || is_set(l4protocol.yfilter)) leaf_name_data.push_back(l4protocol.get_name_leafdata());
    if (intf_name.is_set || is_set(intf_name.yfilter)) leaf_name_data.push_back(intf_name.get_name_leafdata());
    if (intf_handle.is_set || is_set(intf_handle.yfilter)) leaf_name_data.push_back(intf_handle.get_name_leafdata());
    if (destination_addr.is_set || is_set(destination_addr.yfilter)) leaf_name_data.push_back(destination_addr.get_name_leafdata());
    if (source_addr.is_set || is_set(source_addr.yfilter)) leaf_name_data.push_back(source_addr.get_name_leafdata());
    if (destination_type.is_set || is_set(destination_type.yfilter)) leaf_name_data.push_back(destination_type.get_name_leafdata());
    if (destination_value.is_set || is_set(destination_value.yfilter)) leaf_name_data.push_back(destination_value.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (is_frag.is_set || is_set(is_frag.yfilter)) leaf_name_data.push_back(is_frag.get_name_leafdata());
    if (is_syn.is_set || is_set(is_syn.yfilter)) leaf_name_data.push_back(is_syn.get_name_leafdata());
    if (opcode.is_set || is_set(opcode.yfilter)) leaf_name_data.push_back(opcode.get_name_leafdata());
    if (flow_type.is_set || is_set(flow_type.yfilter)) leaf_name_data.push_back(flow_type.get_name_leafdata());
    if (listener_tag.is_set || is_set(listener_tag.yfilter)) leaf_name_data.push_back(listener_tag.get_name_leafdata());
    if (local_flag.is_set || is_set(local_flag.yfilter)) leaf_name_data.push_back(local_flag.get_name_leafdata());
    if (is_fgid.is_set || is_set(is_fgid.yfilter)) leaf_name_data.push_back(is_fgid.get_name_leafdata());
    if (deliver_list_short.is_set || is_set(deliver_list_short.yfilter)) leaf_name_data.push_back(deliver_list_short.get_name_leafdata());
    if (deliver_list_long.is_set || is_set(deliver_list_long.yfilter)) leaf_name_data.push_back(deliver_list_long.get_name_leafdata());
    if (min_ttl.is_set || is_set(min_ttl.yfilter)) leaf_name_data.push_back(min_ttl.get_name_leafdata());
    if (accepts.is_set || is_set(accepts.yfilter)) leaf_name_data.push_back(accepts.get_name_leafdata());
    if (drops.is_set || is_set(drops.yfilter)) leaf_name_data.push_back(drops.get_name_leafdata());
    if (stale.is_set || is_set(stale.yfilter)) leaf_name_data.push_back(stale.get_name_leafdata());
    if (pifib_type.is_set || is_set(pifib_type.yfilter)) leaf_name_data.push_back(pifib_type.get_name_leafdata());
    if (pifib_program_time.is_set || is_set(pifib_program_time.yfilter)) leaf_name_data.push_back(pifib_program_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LptsPifib_::Nodes::Node::TypeValues::TypeValue::Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib_::Nodes::Node::TypeValues::TypeValue::Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void LptsPifib_::Nodes::Node::TypeValues::TypeValue::Entry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vid")
    {
        vid = value;
        vid.value_namespace = name_space;
        vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l3protocol")
    {
        l3protocol = value;
        l3protocol.value_namespace = name_space;
        l3protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4protocol")
    {
        l4protocol = value;
        l4protocol.value_namespace = name_space;
        l4protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intf-name")
    {
        intf_name = value;
        intf_name.value_namespace = name_space;
        intf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intf-handle")
    {
        intf_handle = value;
        intf_handle.value_namespace = name_space;
        intf_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-addr")
    {
        destination_addr = value;
        destination_addr.value_namespace = name_space;
        destination_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-addr")
    {
        source_addr = value;
        source_addr.value_namespace = name_space;
        source_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-type")
    {
        destination_type = value;
        destination_type.value_namespace = name_space;
        destination_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-value")
    {
        destination_value = value;
        destination_value.value_namespace = name_space;
        destination_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-frag")
    {
        is_frag = value;
        is_frag.value_namespace = name_space;
        is_frag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-syn")
    {
        is_syn = value;
        is_syn.value_namespace = name_space;
        is_syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "opcode")
    {
        opcode = value;
        opcode.value_namespace = name_space;
        opcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-type")
    {
        flow_type = value;
        flow_type.value_namespace = name_space;
        flow_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "listener-tag")
    {
        listener_tag = value;
        listener_tag.value_namespace = name_space;
        listener_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-flag")
    {
        local_flag = value;
        local_flag.value_namespace = name_space;
        local_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fgid")
    {
        is_fgid = value;
        is_fgid.value_namespace = name_space;
        is_fgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deliver-list-short")
    {
        deliver_list_short = value;
        deliver_list_short.value_namespace = name_space;
        deliver_list_short.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deliver-list-long")
    {
        deliver_list_long = value;
        deliver_list_long.value_namespace = name_space;
        deliver_list_long.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-ttl")
    {
        min_ttl = value;
        min_ttl.value_namespace = name_space;
        min_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepts")
    {
        accepts = value;
        accepts.value_namespace = name_space;
        accepts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drops")
    {
        drops = value;
        drops.value_namespace = name_space;
        drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale")
    {
        stale = value;
        stale.value_namespace = name_space;
        stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pifib-type")
    {
        pifib_type = value;
        pifib_type.value_namespace = name_space;
        pifib_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pifib-program-time")
    {
        pifib_program_time = value;
        pifib_program_time.value_namespace = name_space;
        pifib_program_time.value_namespace_prefix = name_space_prefix;
    }
}

void LptsPifib_::Nodes::Node::TypeValues::TypeValue::Entry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "vid")
    {
        vid.yfilter = yfilter;
    }
    if(value_path == "l3protocol")
    {
        l3protocol.yfilter = yfilter;
    }
    if(value_path == "l4protocol")
    {
        l4protocol.yfilter = yfilter;
    }
    if(value_path == "intf-name")
    {
        intf_name.yfilter = yfilter;
    }
    if(value_path == "intf-handle")
    {
        intf_handle.yfilter = yfilter;
    }
    if(value_path == "destination-addr")
    {
        destination_addr.yfilter = yfilter;
    }
    if(value_path == "source-addr")
    {
        source_addr.yfilter = yfilter;
    }
    if(value_path == "destination-type")
    {
        destination_type.yfilter = yfilter;
    }
    if(value_path == "destination-value")
    {
        destination_value.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "is-frag")
    {
        is_frag.yfilter = yfilter;
    }
    if(value_path == "is-syn")
    {
        is_syn.yfilter = yfilter;
    }
    if(value_path == "opcode")
    {
        opcode.yfilter = yfilter;
    }
    if(value_path == "flow-type")
    {
        flow_type.yfilter = yfilter;
    }
    if(value_path == "listener-tag")
    {
        listener_tag.yfilter = yfilter;
    }
    if(value_path == "local-flag")
    {
        local_flag.yfilter = yfilter;
    }
    if(value_path == "is-fgid")
    {
        is_fgid.yfilter = yfilter;
    }
    if(value_path == "deliver-list-short")
    {
        deliver_list_short.yfilter = yfilter;
    }
    if(value_path == "deliver-list-long")
    {
        deliver_list_long.yfilter = yfilter;
    }
    if(value_path == "min-ttl")
    {
        min_ttl.yfilter = yfilter;
    }
    if(value_path == "accepts")
    {
        accepts.yfilter = yfilter;
    }
    if(value_path == "drops")
    {
        drops.yfilter = yfilter;
    }
    if(value_path == "stale")
    {
        stale.yfilter = yfilter;
    }
    if(value_path == "pifib-type")
    {
        pifib_type.yfilter = yfilter;
    }
    if(value_path == "pifib-program-time")
    {
        pifib_program_time.yfilter = yfilter;
    }
}

bool LptsPifib_::Nodes::Node::TypeValues::TypeValue::Entry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry" || name == "vrf-name" || name == "vid" || name == "l3protocol" || name == "l4protocol" || name == "intf-name" || name == "intf-handle" || name == "destination-addr" || name == "source-addr" || name == "destination-type" || name == "destination-value" || name == "source-port" || name == "is-frag" || name == "is-syn" || name == "opcode" || name == "flow-type" || name == "listener-tag" || name == "local-flag" || name == "is-fgid" || name == "deliver-list-short" || name == "deliver-list-long" || name == "min-ttl" || name == "accepts" || name == "drops" || name == "stale" || name == "pifib-type" || name == "pifib-program-time")
        return true;
    return false;
}

LptsPifib_::Nodes::Node::DynamicFlowsStats::DynamicFlowsStats()
    :
    dynamic_flows_enabled{YType::boolean, "dynamic-flows-enabled"},
    platform_supported_max{YType::uint32, "platform-supported-max"},
    platform_configured_max{YType::uint32, "platform-configured-max"},
    platform_total_configured{YType::uint32, "platform-total-configured"},
    total_hw_entries{YType::uint32, "total-hw-entries"},
    total_sw_entries{YType::uint32, "total-sw-entries"}
{

    yang_name = "dynamic-flows-stats"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

LptsPifib_::Nodes::Node::DynamicFlowsStats::~DynamicFlowsStats()
{
}

bool LptsPifib_::Nodes::Node::DynamicFlowsStats::has_data() const
{
    for (std::size_t index=0; index<flow.size(); index++)
    {
        if(flow[index]->has_data())
            return true;
    }
    return dynamic_flows_enabled.is_set
	|| platform_supported_max.is_set
	|| platform_configured_max.is_set
	|| platform_total_configured.is_set
	|| total_hw_entries.is_set
	|| total_sw_entries.is_set;
}

bool LptsPifib_::Nodes::Node::DynamicFlowsStats::has_operation() const
{
    for (std::size_t index=0; index<flow.size(); index++)
    {
        if(flow[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dynamic_flows_enabled.yfilter)
	|| ydk::is_set(platform_supported_max.yfilter)
	|| ydk::is_set(platform_configured_max.yfilter)
	|| ydk::is_set(platform_total_configured.yfilter)
	|| ydk::is_set(total_hw_entries.yfilter)
	|| ydk::is_set(total_sw_entries.yfilter);
}

std::string LptsPifib_::Nodes::Node::DynamicFlowsStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-flows-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPifib_::Nodes::Node::DynamicFlowsStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic_flows_enabled.is_set || is_set(dynamic_flows_enabled.yfilter)) leaf_name_data.push_back(dynamic_flows_enabled.get_name_leafdata());
    if (platform_supported_max.is_set || is_set(platform_supported_max.yfilter)) leaf_name_data.push_back(platform_supported_max.get_name_leafdata());
    if (platform_configured_max.is_set || is_set(platform_configured_max.yfilter)) leaf_name_data.push_back(platform_configured_max.get_name_leafdata());
    if (platform_total_configured.is_set || is_set(platform_total_configured.yfilter)) leaf_name_data.push_back(platform_total_configured.get_name_leafdata());
    if (total_hw_entries.is_set || is_set(total_hw_entries.yfilter)) leaf_name_data.push_back(total_hw_entries.get_name_leafdata());
    if (total_sw_entries.is_set || is_set(total_sw_entries.yfilter)) leaf_name_data.push_back(total_sw_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LptsPifib_::Nodes::Node::DynamicFlowsStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        auto c = std::make_shared<LptsPifib_::Nodes::Node::DynamicFlowsStats::Flow>();
        c->parent = this;
        flow.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib_::Nodes::Node::DynamicFlowsStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : flow)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void LptsPifib_::Nodes::Node::DynamicFlowsStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic-flows-enabled")
    {
        dynamic_flows_enabled = value;
        dynamic_flows_enabled.value_namespace = name_space;
        dynamic_flows_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-supported-max")
    {
        platform_supported_max = value;
        platform_supported_max.value_namespace = name_space;
        platform_supported_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-configured-max")
    {
        platform_configured_max = value;
        platform_configured_max.value_namespace = name_space;
        platform_configured_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-total-configured")
    {
        platform_total_configured = value;
        platform_total_configured.value_namespace = name_space;
        platform_total_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-hw-entries")
    {
        total_hw_entries = value;
        total_hw_entries.value_namespace = name_space;
        total_hw_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-sw-entries")
    {
        total_sw_entries = value;
        total_sw_entries.value_namespace = name_space;
        total_sw_entries.value_namespace_prefix = name_space_prefix;
    }
}

void LptsPifib_::Nodes::Node::DynamicFlowsStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic-flows-enabled")
    {
        dynamic_flows_enabled.yfilter = yfilter;
    }
    if(value_path == "platform-supported-max")
    {
        platform_supported_max.yfilter = yfilter;
    }
    if(value_path == "platform-configured-max")
    {
        platform_configured_max.yfilter = yfilter;
    }
    if(value_path == "platform-total-configured")
    {
        platform_total_configured.yfilter = yfilter;
    }
    if(value_path == "total-hw-entries")
    {
        total_hw_entries.yfilter = yfilter;
    }
    if(value_path == "total-sw-entries")
    {
        total_sw_entries.yfilter = yfilter;
    }
}

bool LptsPifib_::Nodes::Node::DynamicFlowsStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow" || name == "dynamic-flows-enabled" || name == "platform-supported-max" || name == "platform-configured-max" || name == "platform-total-configured" || name == "total-hw-entries" || name == "total-sw-entries")
        return true;
    return false;
}

LptsPifib_::Nodes::Node::DynamicFlowsStats::Flow::Flow()
    :
    flow_name{YType::str, "flow-name"},
    configurable{YType::boolean, "configurable"},
    configured{YType::boolean, "configured"},
    default_max{YType::uint32, "default-max"},
    configured_max{YType::str, "configured-max"},
    active_max{YType::uint32, "active-max"},
    hardware_count{YType::uint32, "hardware-count"},
    software_count{YType::uint32, "software-count"},
    pending_software_entries{YType::boolean, "pending-software-entries"}
{

    yang_name = "flow"; yang_parent_name = "dynamic-flows-stats"; is_top_level_class = false; has_list_ancestor = true;
}

LptsPifib_::Nodes::Node::DynamicFlowsStats::Flow::~Flow()
{
}

bool LptsPifib_::Nodes::Node::DynamicFlowsStats::Flow::has_data() const
{
    return flow_name.is_set
	|| configurable.is_set
	|| configured.is_set
	|| default_max.is_set
	|| configured_max.is_set
	|| active_max.is_set
	|| hardware_count.is_set
	|| software_count.is_set
	|| pending_software_entries.is_set;
}

bool LptsPifib_::Nodes::Node::DynamicFlowsStats::Flow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_name.yfilter)
	|| ydk::is_set(configurable.yfilter)
	|| ydk::is_set(configured.yfilter)
	|| ydk::is_set(default_max.yfilter)
	|| ydk::is_set(configured_max.yfilter)
	|| ydk::is_set(active_max.yfilter)
	|| ydk::is_set(hardware_count.yfilter)
	|| ydk::is_set(software_count.yfilter)
	|| ydk::is_set(pending_software_entries.yfilter);
}

std::string LptsPifib_::Nodes::Node::DynamicFlowsStats::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPifib_::Nodes::Node::DynamicFlowsStats::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_name.is_set || is_set(flow_name.yfilter)) leaf_name_data.push_back(flow_name.get_name_leafdata());
    if (configurable.is_set || is_set(configurable.yfilter)) leaf_name_data.push_back(configurable.get_name_leafdata());
    if (configured.is_set || is_set(configured.yfilter)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (default_max.is_set || is_set(default_max.yfilter)) leaf_name_data.push_back(default_max.get_name_leafdata());
    if (configured_max.is_set || is_set(configured_max.yfilter)) leaf_name_data.push_back(configured_max.get_name_leafdata());
    if (active_max.is_set || is_set(active_max.yfilter)) leaf_name_data.push_back(active_max.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.yfilter)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (software_count.is_set || is_set(software_count.yfilter)) leaf_name_data.push_back(software_count.get_name_leafdata());
    if (pending_software_entries.is_set || is_set(pending_software_entries.yfilter)) leaf_name_data.push_back(pending_software_entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LptsPifib_::Nodes::Node::DynamicFlowsStats::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib_::Nodes::Node::DynamicFlowsStats::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void LptsPifib_::Nodes::Node::DynamicFlowsStats::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-name")
    {
        flow_name = value;
        flow_name.value_namespace = name_space;
        flow_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configurable")
    {
        configurable = value;
        configurable.value_namespace = name_space;
        configurable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured")
    {
        configured = value;
        configured.value_namespace = name_space;
        configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-max")
    {
        default_max = value;
        default_max.value_namespace = name_space;
        default_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-max")
    {
        configured_max = value;
        configured_max.value_namespace = name_space;
        configured_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-max")
    {
        active_max = value;
        active_max.value_namespace = name_space;
        active_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-count")
    {
        hardware_count = value;
        hardware_count.value_namespace = name_space;
        hardware_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-count")
    {
        software_count = value;
        software_count.value_namespace = name_space;
        software_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-software-entries")
    {
        pending_software_entries = value;
        pending_software_entries.value_namespace = name_space;
        pending_software_entries.value_namespace_prefix = name_space_prefix;
    }
}

void LptsPifib_::Nodes::Node::DynamicFlowsStats::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-name")
    {
        flow_name.yfilter = yfilter;
    }
    if(value_path == "configurable")
    {
        configurable.yfilter = yfilter;
    }
    if(value_path == "configured")
    {
        configured.yfilter = yfilter;
    }
    if(value_path == "default-max")
    {
        default_max.yfilter = yfilter;
    }
    if(value_path == "configured-max")
    {
        configured_max.yfilter = yfilter;
    }
    if(value_path == "active-max")
    {
        active_max.yfilter = yfilter;
    }
    if(value_path == "hardware-count")
    {
        hardware_count.yfilter = yfilter;
    }
    if(value_path == "software-count")
    {
        software_count.yfilter = yfilter;
    }
    if(value_path == "pending-software-entries")
    {
        pending_software_entries.yfilter = yfilter;
    }
}

bool LptsPifib_::Nodes::Node::DynamicFlowsStats::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-name" || name == "configurable" || name == "configured" || name == "default-max" || name == "configured-max" || name == "active-max" || name == "hardware-count" || name == "software-count" || name == "pending-software-entries")
        return true;
    return false;
}

LptsPifib_::Nodes::Node::Hardware::Hardware()
    :
    usage_entries(std::make_shared<LptsPifib_::Nodes::Node::Hardware::UsageEntries>())
	,police(std::make_shared<LptsPifib_::Nodes::Node::Hardware::Police>())
	,static_police(std::make_shared<LptsPifib_::Nodes::Node::Hardware::StaticPolice>())
	,bfd(std::make_shared<LptsPifib_::Nodes::Node::Hardware::Bfd>())
	,statistics(std::make_shared<LptsPifib_::Nodes::Node::Hardware::Statistics>())
	,index_entries(std::make_shared<LptsPifib_::Nodes::Node::Hardware::IndexEntries>())
{
    usage_entries->parent = this;
    police->parent = this;
    static_police->parent = this;
    bfd->parent = this;
    statistics->parent = this;
    index_entries->parent = this;

    yang_name = "hardware"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

LptsPifib_::Nodes::Node::Hardware::~Hardware()
{
}

bool LptsPifib_::Nodes::Node::Hardware::has_data() const
{
    return (usage_entries !=  nullptr && usage_entries->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (static_police !=  nullptr && static_police->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (index_entries !=  nullptr && index_entries->has_data());
}

bool LptsPifib_::Nodes::Node::Hardware::has_operation() const
{
    return is_set(yfilter)
	|| (usage_entries !=  nullptr && usage_entries->has_operation())
	|| (police !=  nullptr && police->has_operation())
	|| (static_police !=  nullptr && static_police->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (index_entries !=  nullptr && index_entries->has_operation());
}

std::string LptsPifib_::Nodes::Node::Hardware::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-platform-pifib-oper:hardware";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPifib_::Nodes::Node::Hardware::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> LptsPifib_::Nodes::Node::Hardware::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usage-entries")
    {
        if(usage_entries == nullptr)
        {
            usage_entries = std::make_shared<LptsPifib_::Nodes::Node::Hardware::UsageEntries>();
        }
        return usage_entries;
    }

    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<LptsPifib_::Nodes::Node::Hardware::Police>();
        }
        return police;
    }

    if(child_yang_name == "static-police")
    {
        if(static_police == nullptr)
        {
            static_police = std::make_shared<LptsPifib_::Nodes::Node::Hardware::StaticPolice>();
        }
        return static_police;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<LptsPifib_::Nodes::Node::Hardware::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<LptsPifib_::Nodes::Node::Hardware::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "index-entries")
    {
        if(index_entries == nullptr)
        {
            index_entries = std::make_shared<LptsPifib_::Nodes::Node::Hardware::IndexEntries>();
        }
        return index_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib_::Nodes::Node::Hardware::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(usage_entries != nullptr)
    {
        children["usage-entries"] = usage_entries;
    }

    if(police != nullptr)
    {
        children["police"] = police;
    }

    if(static_police != nullptr)
    {
        children["static-police"] = static_police;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(index_entries != nullptr)
    {
        children["index-entries"] = index_entries;
    }

    return children;
}

void LptsPifib_::Nodes::Node::Hardware::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LptsPifib_::Nodes::Node::Hardware::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LptsPifib_::Nodes::Node::Hardware::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usage-entries" || name == "police" || name == "static-police" || name == "bfd" || name == "statistics" || name == "index-entries")
        return true;
    return false;
}

LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntries()
{

    yang_name = "usage-entries"; yang_parent_name = "hardware"; is_top_level_class = false; has_list_ancestor = true;
}

LptsPifib_::Nodes::Node::Hardware::UsageEntries::~UsageEntries()
{
}

bool LptsPifib_::Nodes::Node::Hardware::UsageEntries::has_data() const
{
    for (std::size_t index=0; index<usage_entry.size(); index++)
    {
        if(usage_entry[index]->has_data())
            return true;
    }
    return false;
}

bool LptsPifib_::Nodes::Node::Hardware::UsageEntries::has_operation() const
{
    for (std::size_t index=0; index<usage_entry.size(); index++)
    {
        if(usage_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LptsPifib_::Nodes::Node::Hardware::UsageEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usage-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPifib_::Nodes::Node::Hardware::UsageEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> LptsPifib_::Nodes::Node::Hardware::UsageEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usage-entry")
    {
        auto c = std::make_shared<LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry>();
        c->parent = this;
        usage_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib_::Nodes::Node::Hardware::UsageEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : usage_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void LptsPifib_::Nodes::Node::Hardware::UsageEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LptsPifib_::Nodes::Node::Hardware::UsageEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LptsPifib_::Nodes::Node::Hardware::UsageEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usage-entry")
        return true;
    return false;
}

LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageEntry()
    :
    region_id{YType::enumeration, "region-id"}
{

    yang_name = "usage-entry"; yang_parent_name = "usage-entries"; is_top_level_class = false; has_list_ancestor = true;
}

LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::~UsageEntry()
{
}

bool LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::has_data() const
{
    for (std::size_t index=0; index<usage_info.size(); index++)
    {
        if(usage_info[index]->has_data())
            return true;
    }
    return region_id.is_set;
}

bool LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::has_operation() const
{
    for (std::size_t index=0; index<usage_info.size(); index++)
    {
        if(usage_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(region_id.yfilter);
}

std::string LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usage-entry" <<"[region-id='" <<region_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (region_id.is_set || is_set(region_id.yfilter)) leaf_name_data.push_back(region_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usage-info")
    {
        auto c = std::make_shared<LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo>();
        c->parent = this;
        usage_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : usage_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "region-id")
    {
        region_id = value;
        region_id.value_namespace = name_space;
        region_id.value_namespace_prefix = name_space_prefix;
    }
}

void LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "region-id")
    {
        region_id.yfilter = yfilter;
    }
}

bool LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usage-info" || name == "region-id")
        return true;
    return false;
}

LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo::UsageInfo()
    :
    pipe_id{YType::uint8, "pipe-id"},
    region{YType::uint8, "region"},
    region_id{YType::uint8, "region-id"},
    size{YType::uint32, "size"},
    used{YType::uint32, "used"}
{

    yang_name = "usage-info"; yang_parent_name = "usage-entry"; is_top_level_class = false; has_list_ancestor = true;
}

LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo::~UsageInfo()
{
}

bool LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo::has_data() const
{
    return pipe_id.is_set
	|| region.is_set
	|| region_id.is_set
	|| size.is_set
	|| used.is_set;
}

bool LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pipe_id.yfilter)
	|| ydk::is_set(region.yfilter)
	|| ydk::is_set(region_id.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(used.yfilter);
}

std::string LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usage-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pipe_id.is_set || is_set(pipe_id.yfilter)) leaf_name_data.push_back(pipe_id.get_name_leafdata());
    if (region.is_set || is_set(region.yfilter)) leaf_name_data.push_back(region.get_name_leafdata());
    if (region_id.is_set || is_set(region_id.yfilter)) leaf_name_data.push_back(region_id.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (used.is_set || is_set(used.yfilter)) leaf_name_data.push_back(used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pipe-id")
    {
        pipe_id = value;
        pipe_id.value_namespace = name_space;
        pipe_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "region")
    {
        region = value;
        region.value_namespace = name_space;
        region.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "region-id")
    {
        region_id = value;
        region_id.value_namespace = name_space;
        region_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used")
    {
        used = value;
        used.value_namespace = name_space;
        used.value_namespace_prefix = name_space_prefix;
    }
}

void LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pipe-id")
    {
        pipe_id.yfilter = yfilter;
    }
    if(value_path == "region")
    {
        region.yfilter = yfilter;
    }
    if(value_path == "region-id")
    {
        region_id.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "used")
    {
        used.yfilter = yfilter;
    }
}

bool LptsPifib_::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pipe-id" || name == "region" || name == "region-id" || name == "size" || name == "used")
        return true;
    return false;
}

LptsPifib_::Nodes::Node::Hardware::Police::Police()
{

    yang_name = "police"; yang_parent_name = "hardware"; is_top_level_class = false; has_list_ancestor = true;
}

LptsPifib_::Nodes::Node::Hardware::Police::~Police()
{
}

bool LptsPifib_::Nodes::Node::Hardware::Police::has_data() const
{
    for (std::size_t index=0; index<police_info.size(); index++)
    {
        if(police_info[index]->has_data())
            return true;
    }
    return false;
}

bool LptsPifib_::Nodes::Node::Hardware::Police::has_operation() const
{
    for (std::size_t index=0; index<police_info.size(); index++)
    {
        if(police_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LptsPifib_::Nodes::Node::Hardware::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPifib_::Nodes::Node::Hardware::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> LptsPifib_::Nodes::Node::Hardware::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police-info")
    {
        auto c = std::make_shared<LptsPifib_::Nodes::Node::Hardware::Police::PoliceInfo>();
        c->parent = this;
        police_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib_::Nodes::Node::Hardware::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : police_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void LptsPifib_::Nodes::Node::Hardware::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LptsPifib_::Nodes::Node::Hardware::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LptsPifib_::Nodes::Node::Hardware::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "police-info")
        return true;
    return false;
}

LptsPifib_::Nodes::Node::Hardware::Police::PoliceInfo::PoliceInfo()
    :
    avgrate{YType::uint32, "avgrate"},
    burst{YType::uint32, "burst"},
    static_avgrate{YType::uint32, "static-avgrate"},
    avgrate_type{YType::uint32, "avgrate-type"},
    accepted_stats{YType::uint64, "accepted-stats"},
    dropped_stats{YType::uint64, "dropped-stats"},
    policer{YType::uint32, "policer"},
    iptos_value{YType::uint8, "iptos-value"},
    change_type{YType::uint8, "change-type"},
    acl_config{YType::uint8, "acl-config"},
    acl_str{YType::str, "acl-str"}
{

    yang_name = "police-info"; yang_parent_name = "police"; is_top_level_class = false; has_list_ancestor = true;
}

LptsPifib_::Nodes::Node::Hardware::Police::PoliceInfo::~PoliceInfo()
{
}

bool LptsPifib_::Nodes::Node::Hardware::Police::PoliceInfo::has_data() const
{
    return avgrate.is_set
	|| burst.is_set
	|| static_avgrate.is_set
	|| avgrate_type.is_set
	|| accepted_stats.is_set
	|| dropped_stats.is_set
	|| policer.is_set
	|| iptos_value.is_set
	|| change_type.is_set
	|| acl_config.is_set
	|| acl_str.is_set;
}

bool LptsPifib_::Nodes::Node::Hardware::Police::PoliceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(avgrate.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(static_avgrate.yfilter)
	|| ydk::is_set(avgrate_type.yfilter)
	|| ydk::is_set(accepted_stats.yfilter)
	|| ydk::is_set(dropped_stats.yfilter)
	|| ydk::is_set(policer.yfilter)
	|| ydk::is_set(iptos_value.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(acl_config.yfilter)
	|| ydk::is_set(acl_str.yfilter);
}

std::string LptsPifib_::Nodes::Node::Hardware::Police::PoliceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPifib_::Nodes::Node::Hardware::Police::PoliceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avgrate.is_set || is_set(avgrate.yfilter)) leaf_name_data.push_back(avgrate.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (static_avgrate.is_set || is_set(static_avgrate.yfilter)) leaf_name_data.push_back(static_avgrate.get_name_leafdata());
    if (avgrate_type.is_set || is_set(avgrate_type.yfilter)) leaf_name_data.push_back(avgrate_type.get_name_leafdata());
    if (accepted_stats.is_set || is_set(accepted_stats.yfilter)) leaf_name_data.push_back(accepted_stats.get_name_leafdata());
    if (dropped_stats.is_set || is_set(dropped_stats.yfilter)) leaf_name_data.push_back(dropped_stats.get_name_leafdata());
    if (policer.is_set || is_set(policer.yfilter)) leaf_name_data.push_back(policer.get_name_leafdata());
    if (iptos_value.is_set || is_set(iptos_value.yfilter)) leaf_name_data.push_back(iptos_value.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (acl_config.is_set || is_set(acl_config.yfilter)) leaf_name_data.push_back(acl_config.get_name_leafdata());
    if (acl_str.is_set || is_set(acl_str.yfilter)) leaf_name_data.push_back(acl_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LptsPifib_::Nodes::Node::Hardware::Police::PoliceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib_::Nodes::Node::Hardware::Police::PoliceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void LptsPifib_::Nodes::Node::Hardware::Police::PoliceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "avgrate")
    {
        avgrate = value;
        avgrate.value_namespace = name_space;
        avgrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static-avgrate")
    {
        static_avgrate = value;
        static_avgrate.value_namespace = name_space;
        static_avgrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "avgrate-type")
    {
        avgrate_type = value;
        avgrate_type.value_namespace = name_space;
        avgrate_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-stats")
    {
        accepted_stats = value;
        accepted_stats.value_namespace = name_space;
        accepted_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-stats")
    {
        dropped_stats = value;
        dropped_stats.value_namespace = name_space;
        dropped_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer")
    {
        policer = value;
        policer.value_namespace = name_space;
        policer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iptos-value")
    {
        iptos_value = value;
        iptos_value.value_namespace = name_space;
        iptos_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-config")
    {
        acl_config = value;
        acl_config.value_namespace = name_space;
        acl_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-str")
    {
        acl_str = value;
        acl_str.value_namespace = name_space;
        acl_str.value_namespace_prefix = name_space_prefix;
    }
}

void LptsPifib_::Nodes::Node::Hardware::Police::PoliceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "avgrate")
    {
        avgrate.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "static-avgrate")
    {
        static_avgrate.yfilter = yfilter;
    }
    if(value_path == "avgrate-type")
    {
        avgrate_type.yfilter = yfilter;
    }
    if(value_path == "accepted-stats")
    {
        accepted_stats.yfilter = yfilter;
    }
    if(value_path == "dropped-stats")
    {
        dropped_stats.yfilter = yfilter;
    }
    if(value_path == "policer")
    {
        policer.yfilter = yfilter;
    }
    if(value_path == "iptos-value")
    {
        iptos_value.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "acl-config")
    {
        acl_config.yfilter = yfilter;
    }
    if(value_path == "acl-str")
    {
        acl_str.yfilter = yfilter;
    }
}

bool LptsPifib_::Nodes::Node::Hardware::Police::PoliceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "avgrate" || name == "burst" || name == "static-avgrate" || name == "avgrate-type" || name == "accepted-stats" || name == "dropped-stats" || name == "policer" || name == "iptos-value" || name == "change-type" || name == "acl-config" || name == "acl-str")
        return true;
    return false;
}

LptsPifib_::Nodes::Node::Hardware::StaticPolice::StaticPolice()
{

    yang_name = "static-police"; yang_parent_name = "hardware"; is_top_level_class = false; has_list_ancestor = true;
}

LptsPifib_::Nodes::Node::Hardware::StaticPolice::~StaticPolice()
{
}

bool LptsPifib_::Nodes::Node::Hardware::StaticPolice::has_data() const
{
    for (std::size_t index=0; index<static_info.size(); index++)
    {
        if(static_info[index]->has_data())
            return true;
    }
    return false;
}

bool LptsPifib_::Nodes::Node::Hardware::StaticPolice::has_operation() const
{
    for (std::size_t index=0; index<static_info.size(); index++)
    {
        if(static_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LptsPifib_::Nodes::Node::Hardware::StaticPolice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPifib_::Nodes::Node::Hardware::StaticPolice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> LptsPifib_::Nodes::Node::Hardware::StaticPolice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-info")
    {
        auto c = std::make_shared<LptsPifib_::Nodes::Node::Hardware::StaticPolice::StaticInfo>();
        c->parent = this;
        static_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib_::Nodes::Node::Hardware::StaticPolice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : static_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void LptsPifib_::Nodes::Node::Hardware::StaticPolice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LptsPifib_::Nodes::Node::Hardware::StaticPolice::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LptsPifib_::Nodes::Node::Hardware::StaticPolice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-info")
        return true;
    return false;
}

LptsPifib_::Nodes::Node::Hardware::StaticPolice::StaticInfo::StaticInfo()
    :
    punt_reason{YType::uint32, "punt-reason"},
    sid{YType::uint32, "sid"},
    flow_rate{YType::uint32, "flow-rate"},
    burst_rate{YType::uint32, "burst-rate"},
    accepted{YType::uint64, "accepted"},
    dropped{YType::uint64, "dropped"},
    punt_reason_string{YType::str, "punt-reason-string"},
    change_type{YType::uint8, "change-type"}
{

    yang_name = "static-info"; yang_parent_name = "static-police"; is_top_level_class = false; has_list_ancestor = true;
}

LptsPifib_::Nodes::Node::Hardware::StaticPolice::StaticInfo::~StaticInfo()
{
}

bool LptsPifib_::Nodes::Node::Hardware::StaticPolice::StaticInfo::has_data() const
{
    return punt_reason.is_set
	|| sid.is_set
	|| flow_rate.is_set
	|| burst_rate.is_set
	|| accepted.is_set
	|| dropped.is_set
	|| punt_reason_string.is_set
	|| change_type.is_set;
}

bool LptsPifib_::Nodes::Node::Hardware::StaticPolice::StaticInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(punt_reason.yfilter)
	|| ydk::is_set(sid.yfilter)
	|| ydk::is_set(flow_rate.yfilter)
	|| ydk::is_set(burst_rate.yfilter)
	|| ydk::is_set(accepted.yfilter)
	|| ydk::is_set(dropped.yfilter)
	|| ydk::is_set(punt_reason_string.yfilter)
	|| ydk::is_set(change_type.yfilter);
}

std::string LptsPifib_::Nodes::Node::Hardware::StaticPolice::StaticInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPifib_::Nodes::Node::Hardware::StaticPolice::StaticInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (punt_reason.is_set || is_set(punt_reason.yfilter)) leaf_name_data.push_back(punt_reason.get_name_leafdata());
    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());
    if (flow_rate.is_set || is_set(flow_rate.yfilter)) leaf_name_data.push_back(flow_rate.get_name_leafdata());
    if (burst_rate.is_set || is_set(burst_rate.yfilter)) leaf_name_data.push_back(burst_rate.get_name_leafdata());
    if (accepted.is_set || is_set(accepted.yfilter)) leaf_name_data.push_back(accepted.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (punt_reason_string.is_set || is_set(punt_reason_string.yfilter)) leaf_name_data.push_back(punt_reason_string.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LptsPifib_::Nodes::Node::Hardware::StaticPolice::StaticInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib_::Nodes::Node::Hardware::StaticPolice::StaticInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void LptsPifib_::Nodes::Node::Hardware::StaticPolice::StaticInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "punt-reason")
    {
        punt_reason = value;
        punt_reason.value_namespace = name_space;
        punt_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-rate")
    {
        flow_rate = value;
        flow_rate.value_namespace = name_space;
        flow_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst-rate")
    {
        burst_rate = value;
        burst_rate.value_namespace = name_space;
        burst_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted")
    {
        accepted = value;
        accepted.value_namespace = name_space;
        accepted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "punt-reason-string")
    {
        punt_reason_string = value;
        punt_reason_string.value_namespace = name_space;
        punt_reason_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
}

void LptsPifib_::Nodes::Node::Hardware::StaticPolice::StaticInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "punt-reason")
    {
        punt_reason.yfilter = yfilter;
    }
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
    if(value_path == "flow-rate")
    {
        flow_rate.yfilter = yfilter;
    }
    if(value_path == "burst-rate")
    {
        burst_rate.yfilter = yfilter;
    }
    if(value_path == "accepted")
    {
        accepted.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
    if(value_path == "punt-reason-string")
    {
        punt_reason_string.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
}

bool LptsPifib_::Nodes::Node::Hardware::StaticPolice::StaticInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "punt-reason" || name == "sid" || name == "flow-rate" || name == "burst-rate" || name == "accepted" || name == "dropped" || name == "punt-reason-string" || name == "change-type")
        return true;
    return false;
}

LptsPifib_::Nodes::Node::Hardware::Bfd::Bfd()
{

    yang_name = "bfd"; yang_parent_name = "hardware"; is_top_level_class = false; has_list_ancestor = true;
}

LptsPifib_::Nodes::Node::Hardware::Bfd::~Bfd()
{
}

bool LptsPifib_::Nodes::Node::Hardware::Bfd::has_data() const
{
    for (std::size_t index=0; index<bfd_entry_info.size(); index++)
    {
        if(bfd_entry_info[index]->has_data())
            return true;
    }
    return false;
}

bool LptsPifib_::Nodes::Node::Hardware::Bfd::has_operation() const
{
    for (std::size_t index=0; index<bfd_entry_info.size(); index++)
    {
        if(bfd_entry_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LptsPifib_::Nodes::Node::Hardware::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPifib_::Nodes::Node::Hardware::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> LptsPifib_::Nodes::Node::Hardware::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-entry-info")
    {
        auto c = std::make_shared<LptsPifib_::Nodes::Node::Hardware::Bfd::BfdEntryInfo>();
        c->parent = this;
        bfd_entry_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib_::Nodes::Node::Hardware::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bfd_entry_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void LptsPifib_::Nodes::Node::Hardware::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LptsPifib_::Nodes::Node::Hardware::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LptsPifib_::Nodes::Node::Hardware::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-entry-info")
        return true;
    return false;
}

LptsPifib_::Nodes::Node::Hardware::Bfd::BfdEntryInfo::BfdEntryInfo()
    :
    index_{YType::uint8, "index"},
    is_mcast{YType::uint8, "is-mcast"},
    fgid_or_vqi{YType::uint32, "fgid-or-vqi"},
    is_valid{YType::uint8, "is-valid"},
    policer_id{YType::uint32, "policer-id"}
{

    yang_name = "bfd-entry-info"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = true;
}

LptsPifib_::Nodes::Node::Hardware::Bfd::BfdEntryInfo::~BfdEntryInfo()
{
}

bool LptsPifib_::Nodes::Node::Hardware::Bfd::BfdEntryInfo::has_data() const
{
    return index_.is_set
	|| is_mcast.is_set
	|| fgid_or_vqi.is_set
	|| is_valid.is_set
	|| policer_id.is_set;
}

bool LptsPifib_::Nodes::Node::Hardware::Bfd::BfdEntryInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(is_mcast.yfilter)
	|| ydk::is_set(fgid_or_vqi.yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(policer_id.yfilter);
}

std::string LptsPifib_::Nodes::Node::Hardware::Bfd::BfdEntryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-entry-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPifib_::Nodes::Node::Hardware::Bfd::BfdEntryInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (is_mcast.is_set || is_set(is_mcast.yfilter)) leaf_name_data.push_back(is_mcast.get_name_leafdata());
    if (fgid_or_vqi.is_set || is_set(fgid_or_vqi.yfilter)) leaf_name_data.push_back(fgid_or_vqi.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (policer_id.is_set || is_set(policer_id.yfilter)) leaf_name_data.push_back(policer_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LptsPifib_::Nodes::Node::Hardware::Bfd::BfdEntryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib_::Nodes::Node::Hardware::Bfd::BfdEntryInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void LptsPifib_::Nodes::Node::Hardware::Bfd::BfdEntryInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mcast")
    {
        is_mcast = value;
        is_mcast.value_namespace = name_space;
        is_mcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgid-or-vqi")
    {
        fgid_or_vqi = value;
        fgid_or_vqi.value_namespace = name_space;
        fgid_or_vqi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer-id")
    {
        policer_id = value;
        policer_id.value_namespace = name_space;
        policer_id.value_namespace_prefix = name_space_prefix;
    }
}

void LptsPifib_::Nodes::Node::Hardware::Bfd::BfdEntryInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "is-mcast")
    {
        is_mcast.yfilter = yfilter;
    }
    if(value_path == "fgid-or-vqi")
    {
        fgid_or_vqi.yfilter = yfilter;
    }
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "policer-id")
    {
        policer_id.yfilter = yfilter;
    }
}

bool LptsPifib_::Nodes::Node::Hardware::Bfd::BfdEntryInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "is-mcast" || name == "fgid-or-vqi" || name == "is-valid" || name == "policer-id")
        return true;
    return false;
}

LptsPifib_::Nodes::Node::Hardware::Statistics::Statistics()
    :
    accepted{YType::uint64, "accepted"},
    dropped{YType::uint64, "dropped"},
    clear_ts{YType::uint64, "clear-ts"},
    no_stats_mem_err{YType::uint64, "no-stats-mem-err"}
{

    yang_name = "statistics"; yang_parent_name = "hardware"; is_top_level_class = false; has_list_ancestor = true;
}

LptsPifib_::Nodes::Node::Hardware::Statistics::~Statistics()
{
}

bool LptsPifib_::Nodes::Node::Hardware::Statistics::has_data() const
{
    return accepted.is_set
	|| dropped.is_set
	|| clear_ts.is_set
	|| no_stats_mem_err.is_set;
}

bool LptsPifib_::Nodes::Node::Hardware::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accepted.yfilter)
	|| ydk::is_set(dropped.yfilter)
	|| ydk::is_set(clear_ts.yfilter)
	|| ydk::is_set(no_stats_mem_err.yfilter);
}

std::string LptsPifib_::Nodes::Node::Hardware::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPifib_::Nodes::Node::Hardware::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted.is_set || is_set(accepted.yfilter)) leaf_name_data.push_back(accepted.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (clear_ts.is_set || is_set(clear_ts.yfilter)) leaf_name_data.push_back(clear_ts.get_name_leafdata());
    if (no_stats_mem_err.is_set || is_set(no_stats_mem_err.yfilter)) leaf_name_data.push_back(no_stats_mem_err.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LptsPifib_::Nodes::Node::Hardware::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib_::Nodes::Node::Hardware::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void LptsPifib_::Nodes::Node::Hardware::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accepted")
    {
        accepted = value;
        accepted.value_namespace = name_space;
        accepted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-ts")
    {
        clear_ts = value;
        clear_ts.value_namespace = name_space;
        clear_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-stats-mem-err")
    {
        no_stats_mem_err = value;
        no_stats_mem_err.value_namespace = name_space;
        no_stats_mem_err.value_namespace_prefix = name_space_prefix;
    }
}

void LptsPifib_::Nodes::Node::Hardware::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accepted")
    {
        accepted.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
    if(value_path == "clear-ts")
    {
        clear_ts.yfilter = yfilter;
    }
    if(value_path == "no-stats-mem-err")
    {
        no_stats_mem_err.yfilter = yfilter;
    }
}

bool LptsPifib_::Nodes::Node::Hardware::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accepted" || name == "dropped" || name == "clear-ts" || name == "no-stats-mem-err")
        return true;
    return false;
}

LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntries()
{

    yang_name = "index-entries"; yang_parent_name = "hardware"; is_top_level_class = false; has_list_ancestor = true;
}

LptsPifib_::Nodes::Node::Hardware::IndexEntries::~IndexEntries()
{
}

bool LptsPifib_::Nodes::Node::Hardware::IndexEntries::has_data() const
{
    for (std::size_t index=0; index<index_entry.size(); index++)
    {
        if(index_entry[index]->has_data())
            return true;
    }
    return false;
}

bool LptsPifib_::Nodes::Node::Hardware::IndexEntries::has_operation() const
{
    for (std::size_t index=0; index<index_entry.size(); index++)
    {
        if(index_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LptsPifib_::Nodes::Node::Hardware::IndexEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPifib_::Nodes::Node::Hardware::IndexEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> LptsPifib_::Nodes::Node::Hardware::IndexEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "index-entry")
    {
        auto c = std::make_shared<LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry>();
        c->parent = this;
        index_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib_::Nodes::Node::Hardware::IndexEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : index_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void LptsPifib_::Nodes::Node::Hardware::IndexEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LptsPifib_::Nodes::Node::Hardware::IndexEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LptsPifib_::Nodes::Node::Hardware::IndexEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index-entry")
        return true;
    return false;
}

LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::IndexEntry()
    :
    index_{YType::int32, "index"},
    l3protocol{YType::uint32, "l3protocol"},
    l4protocol{YType::uint32, "l4protocol"},
    intf_handle{YType::uint32, "intf-handle"},
    intf_name{YType::str, "intf-name"},
    uidb_index{YType::uint32, "uidb-index"},
    local_addr{YType::str, "local-addr"},
    local_prefix_len{YType::uint32, "local-prefix-len"},
    remote_addr{YType::str, "remote-addr"},
    remote_prefix_len{YType::uint32, "remote-prefix-len"},
    vrf_id{YType::uint32, "vrf-id"},
    u_value{YType::uint32, "u-value"},
    u_len{YType::uint32, "u-len"},
    local_port{YType::uint32, "local-port"},
    is_frag{YType::uint8, "is-frag"},
    is_syn{YType::uint8, "is-syn"},
    action{YType::uint8, "action"},
    action_string{YType::str, "action-string"},
    listener_tag{YType::uint8, "listener-tag"},
    is_fgid{YType::uint8, "is-fgid"},
    is_vrf{YType::uint8, "is-vrf"},
    is_optimized{YType::uint8, "is-optimized"},
    is_uidb_opt_bit{YType::uint8, "is-uidb-opt-bit"},
    fgid_or_sfp{YType::uint32, "fgid-or-sfp"},
    remote_rack{YType::uint8, "remote-rack"},
    rack_id{YType::uint32, "rack-id"},
    rslot{YType::uint32, "rslot"},
    cir{YType::uint64, "cir"},
    flow_type{YType::uint32, "flow-type"},
    priority{YType::uint32, "priority"},
    sid{YType::uint32, "sid"},
    policer_avgrate{YType::uint32, "policer-avgrate"},
    policer_burst{YType::uint32, "policer-burst"},
    lookup_priority{YType::int32, "lookup-priority"},
    storage_priority{YType::int32, "storage-priority"},
    num_tm_entries{YType::int32, "num-tm-entries"},
    entry_ptr{YType::uint32, "entry-ptr"},
    entry_shadow_ptr{YType::uint32, "entry-shadow-ptr"},
    list_node_ptr{YType::uint32, "list-node-ptr"},
    state{YType::uint8, "state"},
    retry_fail_cause{YType::uint8, "retry-fail-cause"},
    num_retries{YType::uint8, "num-retries"},
    min_ttl{YType::uint8, "min-ttl"},
    u_type{YType::uint8, "u-type"},
    remote_fgid{YType::uint32, "remote-fgid"},
    acl_str{YType::str, "acl-str"},
    no_stats{YType::uint8, "no-stats"}
{

    yang_name = "index-entry"; yang_parent_name = "index-entries"; is_top_level_class = false; has_list_ancestor = true;
}

LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::~IndexEntry()
{
}

bool LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::has_data() const
{
    for (std::size_t index=0; index<hw_info.size(); index++)
    {
        if(hw_info[index]->has_data())
            return true;
    }
    return index_.is_set
	|| l3protocol.is_set
	|| l4protocol.is_set
	|| intf_handle.is_set
	|| intf_name.is_set
	|| uidb_index.is_set
	|| local_addr.is_set
	|| local_prefix_len.is_set
	|| remote_addr.is_set
	|| remote_prefix_len.is_set
	|| vrf_id.is_set
	|| u_value.is_set
	|| u_len.is_set
	|| local_port.is_set
	|| is_frag.is_set
	|| is_syn.is_set
	|| action.is_set
	|| action_string.is_set
	|| listener_tag.is_set
	|| is_fgid.is_set
	|| is_vrf.is_set
	|| is_optimized.is_set
	|| is_uidb_opt_bit.is_set
	|| fgid_or_sfp.is_set
	|| remote_rack.is_set
	|| rack_id.is_set
	|| rslot.is_set
	|| cir.is_set
	|| flow_type.is_set
	|| priority.is_set
	|| sid.is_set
	|| policer_avgrate.is_set
	|| policer_burst.is_set
	|| lookup_priority.is_set
	|| storage_priority.is_set
	|| num_tm_entries.is_set
	|| entry_ptr.is_set
	|| entry_shadow_ptr.is_set
	|| list_node_ptr.is_set
	|| state.is_set
	|| retry_fail_cause.is_set
	|| num_retries.is_set
	|| min_ttl.is_set
	|| u_type.is_set
	|| remote_fgid.is_set
	|| acl_str.is_set
	|| no_stats.is_set;
}

bool LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::has_operation() const
{
    for (std::size_t index=0; index<hw_info.size(); index++)
    {
        if(hw_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(l3protocol.yfilter)
	|| ydk::is_set(l4protocol.yfilter)
	|| ydk::is_set(intf_handle.yfilter)
	|| ydk::is_set(intf_name.yfilter)
	|| ydk::is_set(uidb_index.yfilter)
	|| ydk::is_set(local_addr.yfilter)
	|| ydk::is_set(local_prefix_len.yfilter)
	|| ydk::is_set(remote_addr.yfilter)
	|| ydk::is_set(remote_prefix_len.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(u_value.yfilter)
	|| ydk::is_set(u_len.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(is_frag.yfilter)
	|| ydk::is_set(is_syn.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(action_string.yfilter)
	|| ydk::is_set(listener_tag.yfilter)
	|| ydk::is_set(is_fgid.yfilter)
	|| ydk::is_set(is_vrf.yfilter)
	|| ydk::is_set(is_optimized.yfilter)
	|| ydk::is_set(is_uidb_opt_bit.yfilter)
	|| ydk::is_set(fgid_or_sfp.yfilter)
	|| ydk::is_set(remote_rack.yfilter)
	|| ydk::is_set(rack_id.yfilter)
	|| ydk::is_set(rslot.yfilter)
	|| ydk::is_set(cir.yfilter)
	|| ydk::is_set(flow_type.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(sid.yfilter)
	|| ydk::is_set(policer_avgrate.yfilter)
	|| ydk::is_set(policer_burst.yfilter)
	|| ydk::is_set(lookup_priority.yfilter)
	|| ydk::is_set(storage_priority.yfilter)
	|| ydk::is_set(num_tm_entries.yfilter)
	|| ydk::is_set(entry_ptr.yfilter)
	|| ydk::is_set(entry_shadow_ptr.yfilter)
	|| ydk::is_set(list_node_ptr.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(retry_fail_cause.yfilter)
	|| ydk::is_set(num_retries.yfilter)
	|| ydk::is_set(min_ttl.yfilter)
	|| ydk::is_set(u_type.yfilter)
	|| ydk::is_set(remote_fgid.yfilter)
	|| ydk::is_set(acl_str.yfilter)
	|| ydk::is_set(no_stats.yfilter);
}

std::string LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index-entry" <<"[index='" <<index_ <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (l3protocol.is_set || is_set(l3protocol.yfilter)) leaf_name_data.push_back(l3protocol.get_name_leafdata());
    if (l4protocol.is_set || is_set(l4protocol.yfilter)) leaf_name_data.push_back(l4protocol.get_name_leafdata());
    if (intf_handle.is_set || is_set(intf_handle.yfilter)) leaf_name_data.push_back(intf_handle.get_name_leafdata());
    if (intf_name.is_set || is_set(intf_name.yfilter)) leaf_name_data.push_back(intf_name.get_name_leafdata());
    if (uidb_index.is_set || is_set(uidb_index.yfilter)) leaf_name_data.push_back(uidb_index.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.yfilter)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (local_prefix_len.is_set || is_set(local_prefix_len.yfilter)) leaf_name_data.push_back(local_prefix_len.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.yfilter)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (remote_prefix_len.is_set || is_set(remote_prefix_len.yfilter)) leaf_name_data.push_back(remote_prefix_len.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (u_value.is_set || is_set(u_value.yfilter)) leaf_name_data.push_back(u_value.get_name_leafdata());
    if (u_len.is_set || is_set(u_len.yfilter)) leaf_name_data.push_back(u_len.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (is_frag.is_set || is_set(is_frag.yfilter)) leaf_name_data.push_back(is_frag.get_name_leafdata());
    if (is_syn.is_set || is_set(is_syn.yfilter)) leaf_name_data.push_back(is_syn.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (action_string.is_set || is_set(action_string.yfilter)) leaf_name_data.push_back(action_string.get_name_leafdata());
    if (listener_tag.is_set || is_set(listener_tag.yfilter)) leaf_name_data.push_back(listener_tag.get_name_leafdata());
    if (is_fgid.is_set || is_set(is_fgid.yfilter)) leaf_name_data.push_back(is_fgid.get_name_leafdata());
    if (is_vrf.is_set || is_set(is_vrf.yfilter)) leaf_name_data.push_back(is_vrf.get_name_leafdata());
    if (is_optimized.is_set || is_set(is_optimized.yfilter)) leaf_name_data.push_back(is_optimized.get_name_leafdata());
    if (is_uidb_opt_bit.is_set || is_set(is_uidb_opt_bit.yfilter)) leaf_name_data.push_back(is_uidb_opt_bit.get_name_leafdata());
    if (fgid_or_sfp.is_set || is_set(fgid_or_sfp.yfilter)) leaf_name_data.push_back(fgid_or_sfp.get_name_leafdata());
    if (remote_rack.is_set || is_set(remote_rack.yfilter)) leaf_name_data.push_back(remote_rack.get_name_leafdata());
    if (rack_id.is_set || is_set(rack_id.yfilter)) leaf_name_data.push_back(rack_id.get_name_leafdata());
    if (rslot.is_set || is_set(rslot.yfilter)) leaf_name_data.push_back(rslot.get_name_leafdata());
    if (cir.is_set || is_set(cir.yfilter)) leaf_name_data.push_back(cir.get_name_leafdata());
    if (flow_type.is_set || is_set(flow_type.yfilter)) leaf_name_data.push_back(flow_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (sid.is_set || is_set(sid.yfilter)) leaf_name_data.push_back(sid.get_name_leafdata());
    if (policer_avgrate.is_set || is_set(policer_avgrate.yfilter)) leaf_name_data.push_back(policer_avgrate.get_name_leafdata());
    if (policer_burst.is_set || is_set(policer_burst.yfilter)) leaf_name_data.push_back(policer_burst.get_name_leafdata());
    if (lookup_priority.is_set || is_set(lookup_priority.yfilter)) leaf_name_data.push_back(lookup_priority.get_name_leafdata());
    if (storage_priority.is_set || is_set(storage_priority.yfilter)) leaf_name_data.push_back(storage_priority.get_name_leafdata());
    if (num_tm_entries.is_set || is_set(num_tm_entries.yfilter)) leaf_name_data.push_back(num_tm_entries.get_name_leafdata());
    if (entry_ptr.is_set || is_set(entry_ptr.yfilter)) leaf_name_data.push_back(entry_ptr.get_name_leafdata());
    if (entry_shadow_ptr.is_set || is_set(entry_shadow_ptr.yfilter)) leaf_name_data.push_back(entry_shadow_ptr.get_name_leafdata());
    if (list_node_ptr.is_set || is_set(list_node_ptr.yfilter)) leaf_name_data.push_back(list_node_ptr.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (retry_fail_cause.is_set || is_set(retry_fail_cause.yfilter)) leaf_name_data.push_back(retry_fail_cause.get_name_leafdata());
    if (num_retries.is_set || is_set(num_retries.yfilter)) leaf_name_data.push_back(num_retries.get_name_leafdata());
    if (min_ttl.is_set || is_set(min_ttl.yfilter)) leaf_name_data.push_back(min_ttl.get_name_leafdata());
    if (u_type.is_set || is_set(u_type.yfilter)) leaf_name_data.push_back(u_type.get_name_leafdata());
    if (remote_fgid.is_set || is_set(remote_fgid.yfilter)) leaf_name_data.push_back(remote_fgid.get_name_leafdata());
    if (acl_str.is_set || is_set(acl_str.yfilter)) leaf_name_data.push_back(acl_str.get_name_leafdata());
    if (no_stats.is_set || is_set(no_stats.yfilter)) leaf_name_data.push_back(no_stats.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-info")
    {
        auto c = std::make_shared<LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo>();
        c->parent = this;
        hw_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : hw_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l3protocol")
    {
        l3protocol = value;
        l3protocol.value_namespace = name_space;
        l3protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4protocol")
    {
        l4protocol = value;
        l4protocol.value_namespace = name_space;
        l4protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intf-handle")
    {
        intf_handle = value;
        intf_handle.value_namespace = name_space;
        intf_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intf-name")
    {
        intf_name = value;
        intf_name.value_namespace = name_space;
        intf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uidb-index")
    {
        uidb_index = value;
        uidb_index.value_namespace = name_space;
        uidb_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
        local_addr.value_namespace = name_space;
        local_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-prefix-len")
    {
        local_prefix_len = value;
        local_prefix_len.value_namespace = name_space;
        local_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
        remote_addr.value_namespace = name_space;
        remote_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-prefix-len")
    {
        remote_prefix_len = value;
        remote_prefix_len.value_namespace = name_space;
        remote_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "u-value")
    {
        u_value = value;
        u_value.value_namespace = name_space;
        u_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "u-len")
    {
        u_len = value;
        u_len.value_namespace = name_space;
        u_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-frag")
    {
        is_frag = value;
        is_frag.value_namespace = name_space;
        is_frag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-syn")
    {
        is_syn = value;
        is_syn.value_namespace = name_space;
        is_syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-string")
    {
        action_string = value;
        action_string.value_namespace = name_space;
        action_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "listener-tag")
    {
        listener_tag = value;
        listener_tag.value_namespace = name_space;
        listener_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fgid")
    {
        is_fgid = value;
        is_fgid.value_namespace = name_space;
        is_fgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vrf")
    {
        is_vrf = value;
        is_vrf.value_namespace = name_space;
        is_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-optimized")
    {
        is_optimized = value;
        is_optimized.value_namespace = name_space;
        is_optimized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-uidb-opt-bit")
    {
        is_uidb_opt_bit = value;
        is_uidb_opt_bit.value_namespace = name_space;
        is_uidb_opt_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fgid-or-sfp")
    {
        fgid_or_sfp = value;
        fgid_or_sfp.value_namespace = name_space;
        fgid_or_sfp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-rack")
    {
        remote_rack = value;
        remote_rack.value_namespace = name_space;
        remote_rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-id")
    {
        rack_id = value;
        rack_id.value_namespace = name_space;
        rack_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rslot")
    {
        rslot = value;
        rslot.value_namespace = name_space;
        rslot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cir")
    {
        cir = value;
        cir.value_namespace = name_space;
        cir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-type")
    {
        flow_type = value;
        flow_type.value_namespace = name_space;
        flow_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid")
    {
        sid = value;
        sid.value_namespace = name_space;
        sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer-avgrate")
    {
        policer_avgrate = value;
        policer_avgrate.value_namespace = name_space;
        policer_avgrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policer-burst")
    {
        policer_burst = value;
        policer_burst.value_namespace = name_space;
        policer_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup-priority")
    {
        lookup_priority = value;
        lookup_priority.value_namespace = name_space;
        lookup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "storage-priority")
    {
        storage_priority = value;
        storage_priority.value_namespace = name_space;
        storage_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-tm-entries")
    {
        num_tm_entries = value;
        num_tm_entries.value_namespace = name_space;
        num_tm_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entry-ptr")
    {
        entry_ptr = value;
        entry_ptr.value_namespace = name_space;
        entry_ptr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entry-shadow-ptr")
    {
        entry_shadow_ptr = value;
        entry_shadow_ptr.value_namespace = name_space;
        entry_shadow_ptr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list-node-ptr")
    {
        list_node_ptr = value;
        list_node_ptr.value_namespace = name_space;
        list_node_ptr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-fail-cause")
    {
        retry_fail_cause = value;
        retry_fail_cause.value_namespace = name_space;
        retry_fail_cause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-retries")
    {
        num_retries = value;
        num_retries.value_namespace = name_space;
        num_retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-ttl")
    {
        min_ttl = value;
        min_ttl.value_namespace = name_space;
        min_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "u-type")
    {
        u_type = value;
        u_type.value_namespace = name_space;
        u_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-fgid")
    {
        remote_fgid = value;
        remote_fgid.value_namespace = name_space;
        remote_fgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-str")
    {
        acl_str = value;
        acl_str.value_namespace = name_space;
        acl_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-stats")
    {
        no_stats = value;
        no_stats.value_namespace = name_space;
        no_stats.value_namespace_prefix = name_space_prefix;
    }
}

void LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "l3protocol")
    {
        l3protocol.yfilter = yfilter;
    }
    if(value_path == "l4protocol")
    {
        l4protocol.yfilter = yfilter;
    }
    if(value_path == "intf-handle")
    {
        intf_handle.yfilter = yfilter;
    }
    if(value_path == "intf-name")
    {
        intf_name.yfilter = yfilter;
    }
    if(value_path == "uidb-index")
    {
        uidb_index.yfilter = yfilter;
    }
    if(value_path == "local-addr")
    {
        local_addr.yfilter = yfilter;
    }
    if(value_path == "local-prefix-len")
    {
        local_prefix_len.yfilter = yfilter;
    }
    if(value_path == "remote-addr")
    {
        remote_addr.yfilter = yfilter;
    }
    if(value_path == "remote-prefix-len")
    {
        remote_prefix_len.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "u-value")
    {
        u_value.yfilter = yfilter;
    }
    if(value_path == "u-len")
    {
        u_len.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "is-frag")
    {
        is_frag.yfilter = yfilter;
    }
    if(value_path == "is-syn")
    {
        is_syn.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "action-string")
    {
        action_string.yfilter = yfilter;
    }
    if(value_path == "listener-tag")
    {
        listener_tag.yfilter = yfilter;
    }
    if(value_path == "is-fgid")
    {
        is_fgid.yfilter = yfilter;
    }
    if(value_path == "is-vrf")
    {
        is_vrf.yfilter = yfilter;
    }
    if(value_path == "is-optimized")
    {
        is_optimized.yfilter = yfilter;
    }
    if(value_path == "is-uidb-opt-bit")
    {
        is_uidb_opt_bit.yfilter = yfilter;
    }
    if(value_path == "fgid-or-sfp")
    {
        fgid_or_sfp.yfilter = yfilter;
    }
    if(value_path == "remote-rack")
    {
        remote_rack.yfilter = yfilter;
    }
    if(value_path == "rack-id")
    {
        rack_id.yfilter = yfilter;
    }
    if(value_path == "rslot")
    {
        rslot.yfilter = yfilter;
    }
    if(value_path == "cir")
    {
        cir.yfilter = yfilter;
    }
    if(value_path == "flow-type")
    {
        flow_type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "sid")
    {
        sid.yfilter = yfilter;
    }
    if(value_path == "policer-avgrate")
    {
        policer_avgrate.yfilter = yfilter;
    }
    if(value_path == "policer-burst")
    {
        policer_burst.yfilter = yfilter;
    }
    if(value_path == "lookup-priority")
    {
        lookup_priority.yfilter = yfilter;
    }
    if(value_path == "storage-priority")
    {
        storage_priority.yfilter = yfilter;
    }
    if(value_path == "num-tm-entries")
    {
        num_tm_entries.yfilter = yfilter;
    }
    if(value_path == "entry-ptr")
    {
        entry_ptr.yfilter = yfilter;
    }
    if(value_path == "entry-shadow-ptr")
    {
        entry_shadow_ptr.yfilter = yfilter;
    }
    if(value_path == "list-node-ptr")
    {
        list_node_ptr.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "retry-fail-cause")
    {
        retry_fail_cause.yfilter = yfilter;
    }
    if(value_path == "num-retries")
    {
        num_retries.yfilter = yfilter;
    }
    if(value_path == "min-ttl")
    {
        min_ttl.yfilter = yfilter;
    }
    if(value_path == "u-type")
    {
        u_type.yfilter = yfilter;
    }
    if(value_path == "remote-fgid")
    {
        remote_fgid.yfilter = yfilter;
    }
    if(value_path == "acl-str")
    {
        acl_str.yfilter = yfilter;
    }
    if(value_path == "no-stats")
    {
        no_stats.yfilter = yfilter;
    }
}

bool LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-info" || name == "index" || name == "l3protocol" || name == "l4protocol" || name == "intf-handle" || name == "intf-name" || name == "uidb-index" || name == "local-addr" || name == "local-prefix-len" || name == "remote-addr" || name == "remote-prefix-len" || name == "vrf-id" || name == "u-value" || name == "u-len" || name == "local-port" || name == "is-frag" || name == "is-syn" || name == "action" || name == "action-string" || name == "listener-tag" || name == "is-fgid" || name == "is-vrf" || name == "is-optimized" || name == "is-uidb-opt-bit" || name == "fgid-or-sfp" || name == "remote-rack" || name == "rack-id" || name == "rslot" || name == "cir" || name == "flow-type" || name == "priority" || name == "sid" || name == "policer-avgrate" || name == "policer-burst" || name == "lookup-priority" || name == "storage-priority" || name == "num-tm-entries" || name == "entry-ptr" || name == "entry-shadow-ptr" || name == "list-node-ptr" || name == "state" || name == "retry-fail-cause" || name == "num-retries" || name == "min-ttl" || name == "u-type" || name == "remote-fgid" || name == "acl-str" || name == "no-stats")
        return true;
    return false;
}

LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo::HwInfo()
    :
    policer{YType::uint32, "policer"},
    stats_ptr{YType::uint32, "stats-ptr"},
    accepted{YType::uint64, "accepted"},
    dropped{YType::uint64, "dropped"},
    sort_start_offset{YType::int32, "sort-start-offset"},
    tm_start_offset{YType::int32, "tm-start-offset"}
{

    yang_name = "hw-info"; yang_parent_name = "index-entry"; is_top_level_class = false; has_list_ancestor = true;
}

LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo::~HwInfo()
{
}

bool LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo::has_data() const
{
    return policer.is_set
	|| stats_ptr.is_set
	|| accepted.is_set
	|| dropped.is_set
	|| sort_start_offset.is_set
	|| tm_start_offset.is_set;
}

bool LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policer.yfilter)
	|| ydk::is_set(stats_ptr.yfilter)
	|| ydk::is_set(accepted.yfilter)
	|| ydk::is_set(dropped.yfilter)
	|| ydk::is_set(sort_start_offset.yfilter)
	|| ydk::is_set(tm_start_offset.yfilter);
}

std::string LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policer.is_set || is_set(policer.yfilter)) leaf_name_data.push_back(policer.get_name_leafdata());
    if (stats_ptr.is_set || is_set(stats_ptr.yfilter)) leaf_name_data.push_back(stats_ptr.get_name_leafdata());
    if (accepted.is_set || is_set(accepted.yfilter)) leaf_name_data.push_back(accepted.get_name_leafdata());
    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (sort_start_offset.is_set || is_set(sort_start_offset.yfilter)) leaf_name_data.push_back(sort_start_offset.get_name_leafdata());
    if (tm_start_offset.is_set || is_set(tm_start_offset.yfilter)) leaf_name_data.push_back(tm_start_offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policer")
    {
        policer = value;
        policer.value_namespace = name_space;
        policer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stats-ptr")
    {
        stats_ptr = value;
        stats_ptr.value_namespace = name_space;
        stats_ptr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted")
    {
        accepted = value;
        accepted.value_namespace = name_space;
        accepted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sort-start-offset")
    {
        sort_start_offset = value;
        sort_start_offset.value_namespace = name_space;
        sort_start_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tm-start-offset")
    {
        tm_start_offset = value;
        tm_start_offset.value_namespace = name_space;
        tm_start_offset.value_namespace_prefix = name_space_prefix;
    }
}

void LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policer")
    {
        policer.yfilter = yfilter;
    }
    if(value_path == "stats-ptr")
    {
        stats_ptr.yfilter = yfilter;
    }
    if(value_path == "accepted")
    {
        accepted.yfilter = yfilter;
    }
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
    if(value_path == "sort-start-offset")
    {
        sort_start_offset.yfilter = yfilter;
    }
    if(value_path == "tm-start-offset")
    {
        tm_start_offset.yfilter = yfilter;
    }
}

bool LptsPifib_::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policer" || name == "stats-ptr" || name == "accepted" || name == "dropped" || name == "sort-start-offset" || name == "tm-start-offset")
        return true;
    return false;
}

const Enum::YLeaf LptsPifib::isis {0, "isis"};
const Enum::YLeaf LptsPifib::ipv4_frag {1, "ipv4-frag"};
const Enum::YLeaf LptsPifib::ipv4_echo {2, "ipv4-echo"};
const Enum::YLeaf LptsPifib::ipv4_any {3, "ipv4-any"};
const Enum::YLeaf LptsPifib::ipv6_frag {4, "ipv6-frag"};
const Enum::YLeaf LptsPifib::ipv6_echo {5, "ipv6-echo"};
const Enum::YLeaf LptsPifib::ipv6_nd {6, "ipv6-nd"};
const Enum::YLeaf LptsPifib::ipv6_any {7, "ipv6-any"};
const Enum::YLeaf LptsPifib::bfd_any {8, "bfd-any"};
const Enum::YLeaf LptsPifib::all {9, "all"};


}
}

