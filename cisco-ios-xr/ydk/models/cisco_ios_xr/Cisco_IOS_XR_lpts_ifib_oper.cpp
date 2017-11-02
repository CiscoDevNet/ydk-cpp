
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_lpts_ifib_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lpts_ifib_oper {

LptsIfib::LptsIfib()
    :
    nodes(std::make_shared<LptsIfib::Nodes>())
{
    nodes->parent = this;

    yang_name = "lpts-ifib"; yang_parent_name = "Cisco-IOS-XR-lpts-ifib-oper"; is_top_level_class = true; has_list_ancestor = false;
}

LptsIfib::~LptsIfib()
{
}

bool LptsIfib::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool LptsIfib::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string LptsIfib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-ifib-oper:lpts-ifib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsIfib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> LptsIfib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<LptsIfib::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsIfib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void LptsIfib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LptsIfib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> LptsIfib::clone_ptr() const
{
    return std::make_shared<LptsIfib>();
}

std::string LptsIfib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string LptsIfib::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function LptsIfib::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> LptsIfib::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool LptsIfib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

LptsIfib::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "lpts-ifib"; is_top_level_class = false; has_list_ancestor = false;
}

LptsIfib::Nodes::~Nodes()
{
}

bool LptsIfib::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool LptsIfib::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LptsIfib::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-ifib-oper:lpts-ifib/" << get_segment_path();
    return path_buffer.str();
}

std::string LptsIfib::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsIfib::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> LptsIfib::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LptsIfib::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsIfib::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LptsIfib::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LptsIfib::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LptsIfib::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

LptsIfib::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    slice_ids(std::make_shared<LptsIfib::Nodes::Node::SliceIds>())
{
    slice_ids->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

LptsIfib::Nodes::Node::~Node()
{
}

bool LptsIfib::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (slice_ids !=  nullptr && slice_ids->has_data());
}

bool LptsIfib::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (slice_ids !=  nullptr && slice_ids->has_operation());
}

std::string LptsIfib::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-ifib-oper:lpts-ifib/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string LptsIfib::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsIfib::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LptsIfib::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slice-ids")
    {
        if(slice_ids == nullptr)
        {
            slice_ids = std::make_shared<LptsIfib::Nodes::Node::SliceIds>();
        }
        return slice_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsIfib::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(slice_ids != nullptr)
    {
        children["slice-ids"] = slice_ids;
    }

    return children;
}

void LptsIfib::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void LptsIfib::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool LptsIfib::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slice-ids" || name == "node-name")
        return true;
    return false;
}

LptsIfib::Nodes::Node::SliceIds::SliceIds()
{

    yang_name = "slice-ids"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

LptsIfib::Nodes::Node::SliceIds::~SliceIds()
{
}

bool LptsIfib::Nodes::Node::SliceIds::has_data() const
{
    for (std::size_t index=0; index<slice_id.size(); index++)
    {
        if(slice_id[index]->has_data())
            return true;
    }
    return false;
}

bool LptsIfib::Nodes::Node::SliceIds::has_operation() const
{
    for (std::size_t index=0; index<slice_id.size(); index++)
    {
        if(slice_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LptsIfib::Nodes::Node::SliceIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsIfib::Nodes::Node::SliceIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> LptsIfib::Nodes::Node::SliceIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slice-id")
    {
        for(auto const & c : slice_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LptsIfib::Nodes::Node::SliceIds::SliceId>();
        c->parent = this;
        slice_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsIfib::Nodes::Node::SliceIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : slice_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LptsIfib::Nodes::Node::SliceIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LptsIfib::Nodes::Node::SliceIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LptsIfib::Nodes::Node::SliceIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slice-id")
        return true;
    return false;
}

LptsIfib::Nodes::Node::SliceIds::SliceId::SliceId()
    :
    slice_name{YType::str, "slice-name"}
{

    yang_name = "slice-id"; yang_parent_name = "slice-ids"; is_top_level_class = false; has_list_ancestor = true;
}

LptsIfib::Nodes::Node::SliceIds::SliceId::~SliceId()
{
}

bool LptsIfib::Nodes::Node::SliceIds::SliceId::has_data() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_data())
            return true;
    }
    return slice_name.is_set;
}

bool LptsIfib::Nodes::Node::SliceIds::SliceId::has_operation() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(slice_name.yfilter);
}

std::string LptsIfib::Nodes::Node::SliceIds::SliceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice-id" <<"[slice-name='" <<slice_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsIfib::Nodes::Node::SliceIds::SliceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slice_name.is_set || is_set(slice_name.yfilter)) leaf_name_data.push_back(slice_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LptsIfib::Nodes::Node::SliceIds::SliceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entry")
    {
        for(auto const & c : entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<LptsIfib::Nodes::Node::SliceIds::SliceId::Entry>();
        c->parent = this;
        entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsIfib::Nodes::Node::SliceIds::SliceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void LptsIfib::Nodes::Node::SliceIds::SliceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slice-name")
    {
        slice_name = value;
        slice_name.value_namespace = name_space;
        slice_name.value_namespace_prefix = name_space_prefix;
    }
}

void LptsIfib::Nodes::Node::SliceIds::SliceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slice-name")
    {
        slice_name.yfilter = yfilter;
    }
}

bool LptsIfib::Nodes::Node::SliceIds::SliceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry" || name == "slice-name")
        return true;
    return false;
}

LptsIfib::Nodes::Node::SliceIds::SliceId::Entry::Entry()
    :
    entry{YType::int32, "entry"},
    destination_type{YType::str, "destination-type"},
    destination_value{YType::str, "destination-value"},
    source_port{YType::str, "source-port"},
    destination_addr{YType::str, "destination-addr"},
    source_addr{YType::str, "source-addr"},
    vrf_name{YType::str, "vrf-name"},
    vid{YType::uint32, "vid"},
    l3protocol{YType::uint32, "l3protocol"},
    l4protocol{YType::uint32, "l4protocol"},
    intf_name{YType::str, "intf-name"},
    intf_handle{YType::uint32, "intf-handle"},
    is_syn{YType::uint8, "is-syn"},
    opcode{YType::str, "opcode"},
    accepts{YType::uint64, "accepts"},
    drops{YType::uint64, "drops"},
    flow_type{YType::str, "flow-type"},
    listener_tag{YType::str, "listener-tag"},
    local_flag{YType::uint8, "local-flag"},
    is_fgid{YType::uint8, "is-fgid"},
    deliver_list_short{YType::str, "deliver-list-short"},
    deliver_list_long{YType::str, "deliver-list-long"},
    min_ttl{YType::uint8, "min-ttl"},
    pending_ifibq_delay{YType::uint32, "pending-ifibq-delay"},
    sl_ifibq_delay{YType::uint32, "sl-ifibq-delay"},
    ifib_program_time{YType::str, "ifib-program-time"}
{

    yang_name = "entry"; yang_parent_name = "slice-id"; is_top_level_class = false; has_list_ancestor = true;
}

LptsIfib::Nodes::Node::SliceIds::SliceId::Entry::~Entry()
{
}

bool LptsIfib::Nodes::Node::SliceIds::SliceId::Entry::has_data() const
{
    return entry.is_set
	|| destination_type.is_set
	|| destination_value.is_set
	|| source_port.is_set
	|| destination_addr.is_set
	|| source_addr.is_set
	|| vrf_name.is_set
	|| vid.is_set
	|| l3protocol.is_set
	|| l4protocol.is_set
	|| intf_name.is_set
	|| intf_handle.is_set
	|| is_syn.is_set
	|| opcode.is_set
	|| accepts.is_set
	|| drops.is_set
	|| flow_type.is_set
	|| listener_tag.is_set
	|| local_flag.is_set
	|| is_fgid.is_set
	|| deliver_list_short.is_set
	|| deliver_list_long.is_set
	|| min_ttl.is_set
	|| pending_ifibq_delay.is_set
	|| sl_ifibq_delay.is_set
	|| ifib_program_time.is_set;
}

bool LptsIfib::Nodes::Node::SliceIds::SliceId::Entry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter)
	|| ydk::is_set(destination_type.yfilter)
	|| ydk::is_set(destination_value.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(destination_addr.yfilter)
	|| ydk::is_set(source_addr.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(l3protocol.yfilter)
	|| ydk::is_set(l4protocol.yfilter)
	|| ydk::is_set(intf_name.yfilter)
	|| ydk::is_set(intf_handle.yfilter)
	|| ydk::is_set(is_syn.yfilter)
	|| ydk::is_set(opcode.yfilter)
	|| ydk::is_set(accepts.yfilter)
	|| ydk::is_set(drops.yfilter)
	|| ydk::is_set(flow_type.yfilter)
	|| ydk::is_set(listener_tag.yfilter)
	|| ydk::is_set(local_flag.yfilter)
	|| ydk::is_set(is_fgid.yfilter)
	|| ydk::is_set(deliver_list_short.yfilter)
	|| ydk::is_set(deliver_list_long.yfilter)
	|| ydk::is_set(min_ttl.yfilter)
	|| ydk::is_set(pending_ifibq_delay.yfilter)
	|| ydk::is_set(sl_ifibq_delay.yfilter)
	|| ydk::is_set(ifib_program_time.yfilter);
}

std::string LptsIfib::Nodes::Node::SliceIds::SliceId::Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry" <<"[entry='" <<entry <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsIfib::Nodes::Node::SliceIds::SliceId::Entry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());
    if (destination_type.is_set || is_set(destination_type.yfilter)) leaf_name_data.push_back(destination_type.get_name_leafdata());
    if (destination_value.is_set || is_set(destination_value.yfilter)) leaf_name_data.push_back(destination_value.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (destination_addr.is_set || is_set(destination_addr.yfilter)) leaf_name_data.push_back(destination_addr.get_name_leafdata());
    if (source_addr.is_set || is_set(source_addr.yfilter)) leaf_name_data.push_back(source_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (l3protocol.is_set || is_set(l3protocol.yfilter)) leaf_name_data.push_back(l3protocol.get_name_leafdata());
    if (l4protocol.is_set || is_set(l4protocol.yfilter)) leaf_name_data.push_back(l4protocol.get_name_leafdata());
    if (intf_name.is_set || is_set(intf_name.yfilter)) leaf_name_data.push_back(intf_name.get_name_leafdata());
    if (intf_handle.is_set || is_set(intf_handle.yfilter)) leaf_name_data.push_back(intf_handle.get_name_leafdata());
    if (is_syn.is_set || is_set(is_syn.yfilter)) leaf_name_data.push_back(is_syn.get_name_leafdata());
    if (opcode.is_set || is_set(opcode.yfilter)) leaf_name_data.push_back(opcode.get_name_leafdata());
    if (accepts.is_set || is_set(accepts.yfilter)) leaf_name_data.push_back(accepts.get_name_leafdata());
    if (drops.is_set || is_set(drops.yfilter)) leaf_name_data.push_back(drops.get_name_leafdata());
    if (flow_type.is_set || is_set(flow_type.yfilter)) leaf_name_data.push_back(flow_type.get_name_leafdata());
    if (listener_tag.is_set || is_set(listener_tag.yfilter)) leaf_name_data.push_back(listener_tag.get_name_leafdata());
    if (local_flag.is_set || is_set(local_flag.yfilter)) leaf_name_data.push_back(local_flag.get_name_leafdata());
    if (is_fgid.is_set || is_set(is_fgid.yfilter)) leaf_name_data.push_back(is_fgid.get_name_leafdata());
    if (deliver_list_short.is_set || is_set(deliver_list_short.yfilter)) leaf_name_data.push_back(deliver_list_short.get_name_leafdata());
    if (deliver_list_long.is_set || is_set(deliver_list_long.yfilter)) leaf_name_data.push_back(deliver_list_long.get_name_leafdata());
    if (min_ttl.is_set || is_set(min_ttl.yfilter)) leaf_name_data.push_back(min_ttl.get_name_leafdata());
    if (pending_ifibq_delay.is_set || is_set(pending_ifibq_delay.yfilter)) leaf_name_data.push_back(pending_ifibq_delay.get_name_leafdata());
    if (sl_ifibq_delay.is_set || is_set(sl_ifibq_delay.yfilter)) leaf_name_data.push_back(sl_ifibq_delay.get_name_leafdata());
    if (ifib_program_time.is_set || is_set(ifib_program_time.yfilter)) leaf_name_data.push_back(ifib_program_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> LptsIfib::Nodes::Node::SliceIds::SliceId::Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> LptsIfib::Nodes::Node::SliceIds::SliceId::Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void LptsIfib::Nodes::Node::SliceIds::SliceId::Entry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "pending-ifibq-delay")
    {
        pending_ifibq_delay = value;
        pending_ifibq_delay.value_namespace = name_space;
        pending_ifibq_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sl-ifibq-delay")
    {
        sl_ifibq_delay = value;
        sl_ifibq_delay.value_namespace = name_space;
        sl_ifibq_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifib-program-time")
    {
        ifib_program_time = value;
        ifib_program_time.value_namespace = name_space;
        ifib_program_time.value_namespace_prefix = name_space_prefix;
    }
}

void LptsIfib::Nodes::Node::SliceIds::SliceId::Entry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
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
    if(value_path == "destination-addr")
    {
        destination_addr.yfilter = yfilter;
    }
    if(value_path == "source-addr")
    {
        source_addr.yfilter = yfilter;
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
    if(value_path == "is-syn")
    {
        is_syn.yfilter = yfilter;
    }
    if(value_path == "opcode")
    {
        opcode.yfilter = yfilter;
    }
    if(value_path == "accepts")
    {
        accepts.yfilter = yfilter;
    }
    if(value_path == "drops")
    {
        drops.yfilter = yfilter;
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
    if(value_path == "pending-ifibq-delay")
    {
        pending_ifibq_delay.yfilter = yfilter;
    }
    if(value_path == "sl-ifibq-delay")
    {
        sl_ifibq_delay.yfilter = yfilter;
    }
    if(value_path == "ifib-program-time")
    {
        ifib_program_time.yfilter = yfilter;
    }
}

bool LptsIfib::Nodes::Node::SliceIds::SliceId::Entry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry" || name == "destination-type" || name == "destination-value" || name == "source-port" || name == "destination-addr" || name == "source-addr" || name == "vrf-name" || name == "vid" || name == "l3protocol" || name == "l4protocol" || name == "intf-name" || name == "intf-handle" || name == "is-syn" || name == "opcode" || name == "accepts" || name == "drops" || name == "flow-type" || name == "listener-tag" || name == "local-flag" || name == "is-fgid" || name == "deliver-list-short" || name == "deliver-list-long" || name == "min-ttl" || name == "pending-ifibq-delay" || name == "sl-ifibq-delay" || name == "ifib-program-time")
        return true;
    return false;
}


}
}

