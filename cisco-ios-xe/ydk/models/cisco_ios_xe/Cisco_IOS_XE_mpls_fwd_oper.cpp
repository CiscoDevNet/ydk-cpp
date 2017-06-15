
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_mpls_fwd_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XE_mpls_fwd_oper {

MplsForwardingTable::MplsForwardingTable()
{
    yang_name = "mpls-forwarding-table"; yang_parent_name = "Cisco-IOS-XE-mpls-fwd-oper";
}

MplsForwardingTable::~MplsForwardingTable()
{
}

bool MplsForwardingTable::has_data() const
{
    for (std::size_t index=0; index<local_label_entry_.size(); index++)
    {
        if(local_label_entry_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwardingTable::has_operation() const
{
    for (std::size_t index=0; index<local_label_entry_.size(); index++)
    {
        if(local_label_entry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsForwardingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls-fwd-oper:mpls-forwarding-table";

    return path_buffer.str();

}

const EntityPath MplsForwardingTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwardingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-label-entry")
    {
        for(auto const & c : local_label_entry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwardingTable::LocalLabelEntry>();
        c->parent = this;
        local_label_entry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwardingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : local_label_entry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwardingTable::set_value(const std::string & value_path, std::string value)
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

MplsForwardingTable::LocalLabelEntry::LocalLabelEntry()
    :
    local_label{YType::uint32, "local-label"}
{
    yang_name = "local-label-entry"; yang_parent_name = "mpls-forwarding-table";
}

MplsForwardingTable::LocalLabelEntry::~LocalLabelEntry()
{
}

bool MplsForwardingTable::LocalLabelEntry::has_data() const
{
    for (std::size_t index=0; index<forwarding_info_.size(); index++)
    {
        if(forwarding_info_[index]->has_data())
            return true;
    }
    return local_label.is_set;
}

bool MplsForwardingTable::LocalLabelEntry::has_operation() const
{
    for (std::size_t index=0; index<forwarding_info_.size(); index++)
    {
        if(forwarding_info_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(local_label.operation);
}

std::string MplsForwardingTable::LocalLabelEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label-entry" <<"[local-label='" <<local_label <<"']";

    return path_buffer.str();

}

const EntityPath MplsForwardingTable::LocalLabelEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-mpls-fwd-oper:mpls-forwarding-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwardingTable::LocalLabelEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-info")
    {
        for(auto const & c : forwarding_info_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsForwardingTable::LocalLabelEntry::ForwardingInfo>();
        c->parent = this;
        forwarding_info_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwardingTable::LocalLabelEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : forwarding_info_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsForwardingTable::LocalLabelEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-label")
    {
        local_label = value;
    }
}

MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ForwardingInfo()
    :
    outgoing_interface{YType::str, "outgoing-interface"},
    label_switched_bytes{YType::uint64, "label-switched-bytes"},
    next_hop{YType::str, "next-hop"},
    outgoing_label{YType::str, "outgoing-label"}
    	,
    connection_info_(std::make_shared<MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo>())
{
    connection_info_->parent = this;

    yang_name = "forwarding-info"; yang_parent_name = "local-label-entry";
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
	|| (connection_info_ !=  nullptr && connection_info_->has_data());
}

bool MplsForwardingTable::LocalLabelEntry::ForwardingInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(outgoing_interface.operation)
	|| is_set(label_switched_bytes.operation)
	|| is_set(next_hop.operation)
	|| is_set(outgoing_label.operation)
	|| (connection_info_ !=  nullptr && connection_info_->has_operation());
}

std::string MplsForwardingTable::LocalLabelEntry::ForwardingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-info" <<"[outgoing-interface='" <<outgoing_interface <<"']";

    return path_buffer.str();

}

const EntityPath MplsForwardingTable::LocalLabelEntry::ForwardingInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardingInfo' in Cisco_IOS_XE_mpls_fwd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outgoing_interface.is_set || is_set(outgoing_interface.operation)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (label_switched_bytes.is_set || is_set(label_switched_bytes.operation)) leaf_name_data.push_back(label_switched_bytes.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.operation)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwardingTable::LocalLabelEntry::ForwardingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connection-info")
    {
        if(connection_info_ == nullptr)
        {
            connection_info_ = std::make_shared<MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo>();
        }
        return connection_info_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwardingTable::LocalLabelEntry::ForwardingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connection_info_ != nullptr)
    {
        children["connection-info"] = connection_info_;
    }

    return children;
}

void MplsForwardingTable::LocalLabelEntry::ForwardingInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
    }
    if(value_path == "label-switched-bytes")
    {
        label_switched_bytes = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
    }
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
    tunnel_tp_(std::make_shared<MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp>())
{
    tunnel_tp_->parent = this;

    yang_name = "connection-info"; yang_parent_name = "forwarding-info";
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
	|| (tunnel_tp_ !=  nullptr && tunnel_tp_->has_data());
}

bool MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(l2ckt_id.operation)
	|| is_set(mask.operation)
	|| is_set(nh_id.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(type.operation)
	|| is_set(vrf_id.operation)
	|| (tunnel_tp_ !=  nullptr && tunnel_tp_->has_operation());
}

std::string MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-info";

    return path_buffer.str();

}

const EntityPath MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectionInfo' in Cisco_IOS_XE_mpls_fwd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (l2ckt_id.is_set || is_set(l2ckt_id.operation)) leaf_name_data.push_back(l2ckt_id.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (nh_id.is_set || is_set(nh_id.operation)) leaf_name_data.push_back(nh_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-tp")
    {
        if(tunnel_tp_ == nullptr)
        {
            tunnel_tp_ = std::make_shared<MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp>();
        }
        return tunnel_tp_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tunnel_tp_ != nullptr)
    {
        children["tunnel-tp"] = tunnel_tp_;
    }

    return children;
}

void MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "l2ckt-id")
    {
        l2ckt_id = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "nh-id")
    {
        nh_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
}

MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::TunnelTp()
    :
    tunnel{YType::uint32, "tunnel"}
    	,
    dst_id_(std::make_shared<MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId>())
	,src_id_(std::make_shared<MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId>())
{
    dst_id_->parent = this;

    src_id_->parent = this;

    yang_name = "tunnel-tp"; yang_parent_name = "connection-info";
}

MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::~TunnelTp()
{
}

bool MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::has_data() const
{
    return tunnel.is_set
	|| (dst_id_ !=  nullptr && dst_id_->has_data())
	|| (src_id_ !=  nullptr && src_id_->has_data());
}

bool MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel.operation)
	|| (dst_id_ !=  nullptr && dst_id_->has_operation())
	|| (src_id_ !=  nullptr && src_id_->has_operation());
}

std::string MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-tp";

    return path_buffer.str();

}

const EntityPath MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelTp' in Cisco_IOS_XE_mpls_fwd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dst-id")
    {
        if(dst_id_ == nullptr)
        {
            dst_id_ = std::make_shared<MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId>();
        }
        return dst_id_;
    }

    if(child_yang_name == "src-id")
    {
        if(src_id_ == nullptr)
        {
            src_id_ = std::make_shared<MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId>();
        }
        return src_id_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dst_id_ != nullptr)
    {
        children["dst-id"] = dst_id_;
    }

    if(src_id_ != nullptr)
    {
        children["src-id"] = src_id_;
    }

    return children;
}

void MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel")
    {
        tunnel = value;
    }
}

MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId::SrcId()
    :
    global{YType::uint32, "global"},
    node{YType::str, "node"}
{
    yang_name = "src-id"; yang_parent_name = "tunnel-tp";
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
    return is_set(operation)
	|| is_set(global.operation)
	|| is_set(node.operation);
}

std::string MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-id";

    return path_buffer.str();

}

const EntityPath MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrcId' in Cisco_IOS_XE_mpls_fwd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global.is_set || is_set(global.operation)) leaf_name_data.push_back(global.get_name_leafdata());
    if (node.is_set || is_set(node.operation)) leaf_name_data.push_back(node.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::SrcId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "global")
    {
        global = value;
    }
    if(value_path == "node")
    {
        node = value;
    }
}

MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId::DstId()
    :
    global{YType::uint32, "global"},
    node{YType::str, "node"}
{
    yang_name = "dst-id"; yang_parent_name = "tunnel-tp";
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
    return is_set(operation)
	|| is_set(global.operation)
	|| is_set(node.operation);
}

std::string MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-id";

    return path_buffer.str();

}

const EntityPath MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DstId' in Cisco_IOS_XE_mpls_fwd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global.is_set || is_set(global.operation)) leaf_name_data.push_back(global.get_name_leafdata());
    if (node.is_set || is_set(node.operation)) leaf_name_data.push_back(node.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TunnelTp::DstId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "global")
    {
        global = value;
    }
    if(value_path == "node")
    {
        node = value;
    }
}

const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::OutgoingInterfaceEnum::drop {0, "drop"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::OutgoingInterfaceEnum::punt {1, "punt"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::OutgoingInterfaceEnum::aggregate {2, "aggregate"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::OutgoingInterfaceEnum::exception {3, "exception"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::OutgoingInterfaceEnum::none {4, "none"};

const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::OutgoingLabelEnum::no_label {0, "no-label"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::OutgoingLabelEnum::pop_label {1, "pop-label"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::OutgoingLabelEnum::aggregate {2, "aggregate"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::OutgoingLabelEnum::explicit_null {3, "explicit-null"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::OutgoingLabelEnum::illegal {4, "illegal"};

const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::NextHopEnum::point2point {0, "point2point"};

const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TypeEnum::ip {0, "ip"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TypeEnum::tunnel {1, "tunnel"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TypeEnum::nh_id {2, "nh-id"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TypeEnum::l2ckt {3, "l2ckt"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TypeEnum::ip_vrf {4, "ip-vrf"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TypeEnum::none {5, "none"};
const Enum::YLeaf MplsForwardingTable::LocalLabelEntry::ForwardingInfo::ConnectionInfo::TypeEnum::tunnel_tp {6, "tunnel-tp"};


}
}

