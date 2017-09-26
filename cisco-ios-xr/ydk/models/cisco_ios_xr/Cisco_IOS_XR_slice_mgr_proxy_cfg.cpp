
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_slice_mgr_proxy_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_slice_mgr_proxy_cfg {

NodePath::NodePath()
{

    yang_name = "node-path"; yang_parent_name = "Cisco-IOS-XR-slice-mgr-proxy-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

NodePath::~NodePath()
{
}

bool NodePath::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool NodePath::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NodePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-slice-mgr-proxy-cfg:node-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NodePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NodePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<NodePath::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NodePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NodePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NodePath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> NodePath::clone_ptr() const
{
    return std::make_shared<NodePath>();
}

std::string NodePath::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string NodePath::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function NodePath::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> NodePath::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool NodePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

NodePath::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    slice_ids(std::make_shared<NodePath::Node::SliceIds>())
{
    slice_ids->parent = this;

    yang_name = "node"; yang_parent_name = "node-path"; is_top_level_class = false; has_list_ancestor = false;
}

NodePath::Node::~Node()
{
}

bool NodePath::Node::has_data() const
{
    return node_name.is_set
	|| (slice_ids !=  nullptr && slice_ids->has_data());
}

bool NodePath::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (slice_ids !=  nullptr && slice_ids->has_operation());
}

std::string NodePath::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-slice-mgr-proxy-cfg:node-path/" << get_segment_path();
    return path_buffer.str();
}

std::string NodePath::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NodePath::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NodePath::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slice-ids")
    {
        if(slice_ids == nullptr)
        {
            slice_ids = std::make_shared<NodePath::Node::SliceIds>();
        }
        return slice_ids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NodePath::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(slice_ids != nullptr)
    {
        children["slice-ids"] = slice_ids;
    }

    return children;
}

void NodePath::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void NodePath::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool NodePath::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slice-ids" || name == "node-name")
        return true;
    return false;
}

NodePath::Node::SliceIds::SliceIds()
{

    yang_name = "slice-ids"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

NodePath::Node::SliceIds::~SliceIds()
{
}

bool NodePath::Node::SliceIds::has_data() const
{
    for (std::size_t index=0; index<slice_id.size(); index++)
    {
        if(slice_id[index]->has_data())
            return true;
    }
    return false;
}

bool NodePath::Node::SliceIds::has_operation() const
{
    for (std::size_t index=0; index<slice_id.size(); index++)
    {
        if(slice_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NodePath::Node::SliceIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NodePath::Node::SliceIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> NodePath::Node::SliceIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<NodePath::Node::SliceIds::SliceId>();
        c->parent = this;
        slice_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NodePath::Node::SliceIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : slice_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void NodePath::Node::SliceIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NodePath::Node::SliceIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NodePath::Node::SliceIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slice-id")
        return true;
    return false;
}

NodePath::Node::SliceIds::SliceId::SliceId()
    :
    slice_id{YType::uint32, "slice-id"},
    breakout{YType::int32, "breakout"},
    mode{YType::int32, "mode"},
    state{YType::int32, "state"}
{

    yang_name = "slice-id"; yang_parent_name = "slice-ids"; is_top_level_class = false; has_list_ancestor = true;
}

NodePath::Node::SliceIds::SliceId::~SliceId()
{
}

bool NodePath::Node::SliceIds::SliceId::has_data() const
{
    return slice_id.is_set
	|| breakout.is_set
	|| mode.is_set
	|| state.is_set;
}

bool NodePath::Node::SliceIds::SliceId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slice_id.yfilter)
	|| ydk::is_set(breakout.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string NodePath::Node::SliceIds::SliceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice-id" <<"[slice-id='" <<slice_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NodePath::Node::SliceIds::SliceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slice_id.is_set || is_set(slice_id.yfilter)) leaf_name_data.push_back(slice_id.get_name_leafdata());
    if (breakout.is_set || is_set(breakout.yfilter)) leaf_name_data.push_back(breakout.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> NodePath::Node::SliceIds::SliceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> NodePath::Node::SliceIds::SliceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void NodePath::Node::SliceIds::SliceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slice-id")
    {
        slice_id = value;
        slice_id.value_namespace = name_space;
        slice_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "breakout")
    {
        breakout = value;
        breakout.value_namespace = name_space;
        breakout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void NodePath::Node::SliceIds::SliceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slice-id")
    {
        slice_id.yfilter = yfilter;
    }
    if(value_path == "breakout")
    {
        breakout.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool NodePath::Node::SliceIds::SliceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slice-id" || name == "breakout" || name == "mode" || name == "state")
        return true;
    return false;
}


}
}

