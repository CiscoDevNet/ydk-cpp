
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_mpls_fwd_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_mpls_fwd_oper {

MplsForwardingTable::MplsForwardingTable()
{

    yang_name = "mpls-forwarding-table"; yang_parent_name = "Cisco-IOS-XE-mpls-fwd-oper"; is_top_level_class = true; has_list_ancestor = false;
}

MplsForwardingTable::~MplsForwardingTable()
{
}

bool MplsForwardingTable::has_data() const
{
    for (std::size_t index=0; index<local_label_entry.size(); index++)
    {
        if(local_label_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwardingTable::has_operation() const
{
    for (std::size_t index=0; index<local_label_entry.size(); index++)
    {
        if(local_label_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsForwardingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-fwd-oper:mpls-forwarding-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwardingTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwardingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-label-entry")
    {
        for(auto const & c : local_label_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwardingTable::LocalLabelEntry>();
        c->parent = this;
        local_label_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwardingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : local_label_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwardingTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsForwardingTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MplsForwardingTable::clone_ptr() const
{
    return std::make_shared<MplsForwardingTable>();
}

std::string MplsForwardingTable::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string MplsForwardingTable::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function MplsForwardingTable::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsForwardingTable::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool MplsForwardingTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-label-entry")
        return true;
    return false;
}

MplsForwardingTable::LocalLabelEntry::LocalLabelEntry()
    :
    local_label{YType::uint32, "local-label"}
{

    yang_name = "local-label-entry"; yang_parent_name = "mpls-forwarding-table"; is_top_level_class = false; has_list_ancestor = false;
}

MplsForwardingTable::LocalLabelEntry::~LocalLabelEntry()
{
}

bool MplsForwardingTable::LocalLabelEntry::has_data() const
{
    for (std::size_t index=0; index<forwarding_info.size(); index++)
    {
        if(forwarding_info[index]->has_data())
            return true;
    }
    return local_label.is_set;
}

bool MplsForwardingTable::LocalLabelEntry::has_operation() const
{
    for (std::size_t index=0; index<forwarding_info.size(); index++)
    {
        if(forwarding_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_label.yfilter);
}

std::string MplsForwardingTable::LocalLabelEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-fwd-oper:mpls-forwarding-table/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsForwardingTable::LocalLabelEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label-entry" <<"[local-label='" <<local_label <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwardingTable::LocalLabelEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwardingTable::LocalLabelEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-info")
    {
        for(auto const & c : forwarding_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwardingTable::LocalLabelEntry::ForwardingInfo>();
        c->parent = this;
        forwarding_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwardingTable::LocalLabelEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : forwarding_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwardingTable::LocalLabelEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwardingTable::LocalLabelEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool MplsForwardingTable::LocalLabelEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-info" || name == "local-label")
        return true;
    return false;
}

MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ForwardingInfo()
    :
    outgoing_interface{YType::str, "outgoing-interface"},
    label_switched_bytes{YType::uint64, "label-switched-bytes"},
    next_hop{YType::str, "next-hop"},
    outgoing_label{YType::str, "outgoing-label"}
    	,
    connection_info(std::make_shared<MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo>())
{
    connection_info->parent = this;

    yang_name = "forwarding-info"; yang_parent_name = "local-label-entry"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwardingTable::LocalLabelEntry::ForwardingInfo::~ForwardingInfo()
{
}

bool MplsForwardingTable::LocalLabelEntry::ForwardingInfo::has_data() const
{
    return outgoing_interface.is_set
	|| label_switched_bytes.is_set
	|| next_hop.is_set
	|| outgoing_label.is_set
	|| (connection_info !=  nullptr && connection_info->has_data());
}

bool MplsForwardingTable::LocalLabelEntry::ForwardingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(label_switched_bytes.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(outgoing_label.yfilter)
	|| (connection_info !=  nullptr && connection_info->has_operation());
}

std::string MplsForwardingTable::LocalLabelEntry::ForwardingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-info" <<"[outgoing-interface='" <<outgoing_interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwardingTable::LocalLabelEntry::ForwardingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (label_switched_bytes.is_set || is_set(label_switched_bytes.yfilter)) leaf_name_data.push_back(label_switched_bytes.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.yfilter)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwardingTable::LocalLabelEntry::ForwardingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connection-info")
    {
        if(connection_info == nullptr)
        {
            connection_info = std::make_shared<MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo>();
        }
        return connection_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwardingTable::LocalLabelEntry::ForwardingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connection_info != nullptr)
    {
        children["connection-info"] = connection_info;
    }

    return children;
}

void MplsForwardingTable::LocalLabelEntry::ForwardingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-switched-bytes")
    {
        label_switched_bytes = value;
        label_switched_bytes.value_namespace = name_space;
        label_switched_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
        outgoing_label.value_namespace = name_space;
        outgoing_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwardingTable::LocalLabelEntry::ForwardingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "label-switched-bytes")
    {
        label_switched_bytes.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label.yfilter = yfilter;
    }
}

bool MplsForwardingTable::LocalLabelEntry::ForwardingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connection-info" || name == "outgoing-interface" || name == "label-switched-bytes" || name == "next-hop" || name == "outgoing-label")
        return true;
    return false;
}

MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::ConnectionInfo()
    :
    ip{YType::str, "ip"},
    l2ckt_id{YType::uint32, "l2ckt-id"},
    mask{YType::uint16, "mask"},
    nh_id{YType::uint32, "nh-id"},
    tunnel_id{YType::uint32, "tunnel-id"},
    type{YType::enumeration, "type"},
    vrf_id{YType::uint32, "vrf-id"}
    	,
    tunnel_tp(std::make_shared<MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp>())
{
    tunnel_tp->parent = this;

    yang_name = "connection-info"; yang_parent_name = "forwarding-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::~ConnectionInfo()
{
}

bool MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::has_data() const
{
    return ip.is_set
	|| l2ckt_id.is_set
	|| mask.is_set
	|| nh_id.is_set
	|| tunnel_id.is_set
	|| type.is_set
	|| vrf_id.is_set
	|| (tunnel_tp !=  nullptr && tunnel_tp->has_data());
}

bool MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(l2ckt_id.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(nh_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| (tunnel_tp !=  nullptr && tunnel_tp->has_operation());
}

std::string MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (l2ckt_id.is_set || is_set(l2ckt_id.yfilter)) leaf_name_data.push_back(l2ckt_id.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (nh_id.is_set || is_set(nh_id.yfilter)) leaf_name_data.push_back(nh_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-tp")
    {
        if(tunnel_tp == nullptr)
        {
            tunnel_tp = std::make_shared<MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp>();
        }
        return tunnel_tp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tunnel_tp != nullptr)
    {
        children["tunnel-tp"] = tunnel_tp;
    }

    return children;
}

void MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2ckt-id")
    {
        l2ckt_id = value;
        l2ckt_id.value_namespace = name_space;
        l2ckt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nh-id")
    {
        nh_id = value;
        nh_id.value_namespace = name_space;
        nh_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "l2ckt-id")
    {
        l2ckt_id.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "nh-id")
    {
        nh_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
}

bool MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-tp" || name == "ip" || name == "l2ckt-id" || name == "mask" || name == "nh-id" || name == "tunnel-id" || name == "type" || name == "vrf-id")
        return true;
    return false;
}

MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::TunnelTp()
    :
    tunnel{YType::uint32, "tunnel"}
    	,
    dst_id(std::make_shared<MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId>())
	,src_id(std::make_shared<MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId>())
{
    dst_id->parent = this;
    src_id->parent = this;

    yang_name = "tunnel-tp"; yang_parent_name = "connection-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::~TunnelTp()
{
}

bool MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::has_data() const
{
    return tunnel.is_set
	|| (dst_id !=  nullptr && dst_id->has_data())
	|| (src_id !=  nullptr && src_id->has_data());
}

bool MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| (dst_id !=  nullptr && dst_id->has_operation())
	|| (src_id !=  nullptr && src_id->has_operation());
}

std::string MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dst-id")
    {
        if(dst_id == nullptr)
        {
            dst_id = std::make_shared<MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId>();
        }
        return dst_id;
    }

    if(child_yang_name == "src-id")
    {
        if(src_id == nullptr)
        {
            src_id = std::make_shared<MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId>();
        }
        return src_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dst_id != nullptr)
    {
        children["dst-id"] = dst_id;
    }

    if(src_id != nullptr)
    {
        children["src-id"] = src_id;
    }

    return children;
}

void MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-id" || name == "src-id" || name == "tunnel")
        return true;
    return false;
}

MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId::DstId()
    :
    global{YType::uint32, "global"},
    node{YType::str, "node"}
{

    yang_name = "dst-id"; yang_parent_name = "tunnel-tp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId::~DstId()
{
}

bool MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId::has_data() const
{
    return global.is_set
	|| node.is_set;
}

bool MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "node")
        return true;
    return false;
}

MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId::SrcId()
    :
    global{YType::uint32, "global"},
    node{YType::str, "node"}
{

    yang_name = "src-id"; yang_parent_name = "tunnel-tp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId::~SrcId()
{
}

bool MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId::has_data() const
{
    return global.is_set
	|| node.is_set;
}

bool MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(node.yfilter);
}

std::string MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
}

void MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
}

bool MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "node")
        return true;
    return false;
}

const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::OutgoingInterface::drop {0, "drop"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::OutgoingInterface::punt {1, "punt"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::OutgoingInterface::aggregate {2, "aggregate"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::OutgoingInterface::exception {3, "exception"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::OutgoingInterface::none {4, "none"};

const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::OutgoingLabel::no_label {0, "no-label"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::OutgoingLabel::pop_label {1, "pop-label"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::OutgoingLabel::aggregate {2, "aggregate"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::OutgoingLabel::explicit_null {3, "explicit-null"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::OutgoingLabel::illegal {4, "illegal"};

const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::NextHop::point2point {0, "point2point"};

const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::Type::ip {0, "ip"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::Type::tunnel {1, "tunnel"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::Type::nh_id {2, "nh-id"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::Type::l2ckt {3, "l2ckt"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::Type::ip_vrf {4, "ip-vrf"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::Type::none {5, "none"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::Type::tunnel_tp {6, "tunnel-tp"};


}
}

