
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_cfg_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_cfg {

MplsTe::TransportProfile::Midpoints::Midpoint::Midpoint()
    :
    midpoint_name{YType::str, "midpoint-name"},
    lsp_id{YType::uint32, "lsp-id"},
    lsp_protect{YType::empty, "lsp-protect"},
    tunnel_name{YType::str, "tunnel-name"}
    	,
    destination(nullptr) // presence node
	,forward_lsp(std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp>())
	,reverse_lsp(std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp>())
	,source(nullptr) // presence node
{
    forward_lsp->parent = this;
    reverse_lsp->parent = this;

    yang_name = "midpoint"; yang_parent_name = "midpoints"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TransportProfile::Midpoints::Midpoint::~Midpoint()
{
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::has_data() const
{
    return midpoint_name.is_set
	|| lsp_id.is_set
	|| lsp_protect.is_set
	|| tunnel_name.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (forward_lsp !=  nullptr && forward_lsp->has_data())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(midpoint_name.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(lsp_protect.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (forward_lsp !=  nullptr && forward_lsp->has_operation())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string MplsTe::TransportProfile::Midpoints::Midpoint::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mpls-te/transport-profile/midpoints/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TransportProfile::Midpoints::Midpoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "midpoint" <<"[midpoint-name='" <<midpoint_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Midpoints::Midpoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (midpoint_name.is_set || is_set(midpoint_name.yfilter)) leaf_name_data.push_back(midpoint_name.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (lsp_protect.is_set || is_set(lsp_protect.yfilter)) leaf_name_data.push_back(lsp_protect.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Midpoints::Midpoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "forward-lsp")
    {
        if(forward_lsp == nullptr)
        {
            forward_lsp = std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp>();
        }
        return forward_lsp;
    }

    if(child_yang_name == "reverse-lsp")
    {
        if(reverse_lsp == nullptr)
        {
            reverse_lsp = std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp>();
        }
        return reverse_lsp;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Midpoints::Midpoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(forward_lsp != nullptr)
    {
        children["forward-lsp"] = forward_lsp;
    }

    if(reverse_lsp != nullptr)
    {
        children["reverse-lsp"] = reverse_lsp;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void MplsTe::TransportProfile::Midpoints::Midpoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "midpoint-name")
    {
        midpoint_name = value;
        midpoint_name.value_namespace = name_space;
        midpoint_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-protect")
    {
        lsp_protect = value;
        lsp_protect.value_namespace = name_space;
        lsp_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Midpoints::Midpoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "midpoint-name")
    {
        midpoint_name.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "lsp-protect")
    {
        lsp_protect.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "forward-lsp" || name == "reverse-lsp" || name == "source" || name == "midpoint-name" || name == "lsp-id" || name == "lsp-protect" || name == "tunnel-name")
        return true;
    return false;
}

MplsTe::TransportProfile::Midpoints::Midpoint::Destination::Destination()
    :
    global_id{YType::uint32, "global-id"},
    node_id{YType::str, "node-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "destination"; yang_parent_name = "midpoint"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TransportProfile::Midpoints::Midpoint::Destination::~Destination()
{
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::Destination::has_data() const
{
    return global_id.is_set
	|| node_id.is_set
	|| tunnel_id.is_set;
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_id.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsTe::TransportProfile::Midpoints::Midpoint::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Midpoints::Midpoint::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_id.is_set || is_set(global_id.yfilter)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Midpoints::Midpoint::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Midpoints::Midpoint::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::TransportProfile::Midpoints::Midpoint::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-id")
    {
        global_id = value;
        global_id.value_namespace = name_space;
        global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Midpoints::Midpoint::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-id")
    {
        global_id.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-id" || name == "node-id" || name == "tunnel-id")
        return true;
    return false;
}

MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardLsp()
    :
    forward_bandwidth{YType::uint32, "forward-bandwidth"}
    	,
    forward_io_map(nullptr) // presence node
{

    yang_name = "forward-lsp"; yang_parent_name = "midpoint"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::~ForwardLsp()
{
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::has_data() const
{
    return forward_bandwidth.is_set
	|| (forward_io_map !=  nullptr && forward_io_map->has_data());
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forward_bandwidth.yfilter)
	|| (forward_io_map !=  nullptr && forward_io_map->has_operation());
}

std::string MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forward_bandwidth.is_set || is_set(forward_bandwidth.yfilter)) leaf_name_data.push_back(forward_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-io-map")
    {
        if(forward_io_map == nullptr)
        {
            forward_io_map = std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap>();
        }
        return forward_io_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forward_io_map != nullptr)
    {
        children["forward-io-map"] = forward_io_map;
    }

    return children;
}

void MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forward-bandwidth")
    {
        forward_bandwidth = value;
        forward_bandwidth.value_namespace = name_space;
        forward_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forward-bandwidth")
    {
        forward_bandwidth.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-io-map" || name == "forward-bandwidth")
        return true;
    return false;
}

MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::ForwardIoMap()
    :
    in_label{YType::uint32, "in-label"},
    out_label{YType::uint32, "out-label"},
    out_link{YType::uint32, "out-link"}
{

    yang_name = "forward-io-map"; yang_parent_name = "forward-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::~ForwardIoMap()
{
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::has_data() const
{
    return in_label.is_set
	|| out_label.is_set
	|| out_link.is_set;
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_link.yfilter);
}

std::string MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-io-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_link.is_set || is_set(out_link.yfilter)) leaf_name_data.push_back(out_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-link")
    {
        out_link = value;
        out_link.value_namespace = name_space;
        out_link.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-link")
    {
        out_link.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-label" || name == "out-label" || name == "out-link")
        return true;
    return false;
}

MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseLsp()
    :
    reverse_bandwidth{YType::uint32, "reverse-bandwidth"}
    	,
    reverse_io_map(nullptr) // presence node
{

    yang_name = "reverse-lsp"; yang_parent_name = "midpoint"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::~ReverseLsp()
{
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::has_data() const
{
    return reverse_bandwidth.is_set
	|| (reverse_io_map !=  nullptr && reverse_io_map->has_data());
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reverse_bandwidth.yfilter)
	|| (reverse_io_map !=  nullptr && reverse_io_map->has_operation());
}

std::string MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reverse_bandwidth.is_set || is_set(reverse_bandwidth.yfilter)) leaf_name_data.push_back(reverse_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reverse-io-map")
    {
        if(reverse_io_map == nullptr)
        {
            reverse_io_map = std::make_shared<MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap>();
        }
        return reverse_io_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reverse_io_map != nullptr)
    {
        children["reverse-io-map"] = reverse_io_map;
    }

    return children;
}

void MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reverse-bandwidth")
    {
        reverse_bandwidth = value;
        reverse_bandwidth.value_namespace = name_space;
        reverse_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reverse-bandwidth")
    {
        reverse_bandwidth.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reverse-io-map" || name == "reverse-bandwidth")
        return true;
    return false;
}

MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::ReverseIoMap()
    :
    in_label{YType::uint32, "in-label"},
    out_label{YType::uint32, "out-label"},
    out_link{YType::uint32, "out-link"}
{

    yang_name = "reverse-io-map"; yang_parent_name = "reverse-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::~ReverseIoMap()
{
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::has_data() const
{
    return in_label.is_set
	|| out_label.is_set
	|| out_link.is_set;
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(out_label.yfilter)
	|| ydk::is_set(out_link.yfilter);
}

std::string MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-io-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_link.is_set || is_set(out_link.yfilter)) leaf_name_data.push_back(out_link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-link")
    {
        out_link = value;
        out_link.value_namespace = name_space;
        out_link.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
    if(value_path == "out-link")
    {
        out_link.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-label" || name == "out-label" || name == "out-link")
        return true;
    return false;
}

MplsTe::TransportProfile::Midpoints::Midpoint::Source::Source()
    :
    global_id{YType::uint32, "global-id"},
    node_id{YType::str, "node-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "source"; yang_parent_name = "midpoint"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TransportProfile::Midpoints::Midpoint::Source::~Source()
{
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::Source::has_data() const
{
    return global_id.is_set
	|| node_id.is_set
	|| tunnel_id.is_set;
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_id.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsTe::TransportProfile::Midpoints::Midpoint::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TransportProfile::Midpoints::Midpoint::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_id.is_set || is_set(global_id.yfilter)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TransportProfile::Midpoints::Midpoint::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TransportProfile::Midpoints::Midpoint::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::TransportProfile::Midpoints::Midpoint::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-id")
    {
        global_id = value;
        global_id.value_namespace = name_space;
        global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TransportProfile::Midpoints::Midpoint::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-id")
    {
        global_id.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsTe::TransportProfile::Midpoints::Midpoint::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-id" || name == "node-id" || name == "tunnel-id")
        return true;
    return false;
}


}
}

