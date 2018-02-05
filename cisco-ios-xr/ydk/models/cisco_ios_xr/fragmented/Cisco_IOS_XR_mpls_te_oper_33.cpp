
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_33.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_34.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::PrimaryS2L()
    :
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    parent_interface_name{YType::str, "parent-interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"}
{

    yang_name = "primary-s2l"; yang_parent_name = "p2p-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::~PrimaryS2L()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::has_data() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return physica_interface_name.is_set
	|| tunnel_interface_name.is_set
	|| parent_interface_name.is_set
	|| next_hop_address.is_set
	|| out_label.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        auto c = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack>();
        c->parent = this;
        sr_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sr_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
        physica_interface_name.value_namespace = name_space;
        physica_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "physica-interface-name" || name == "tunnel-interface-name" || name == "parent-interface-name" || name == "next-hop-address" || name == "out-label")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "primary-s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::BackupTunnelRewrite()
    :
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    parent_interface_name{YType::str, "parent-interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"}
{

    yang_name = "backup-tunnel-rewrite"; yang_parent_name = "p2p-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::~BackupTunnelRewrite()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::has_data() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return physica_interface_name.is_set
	|| tunnel_interface_name.is_set
	|| parent_interface_name.is_set
	|| next_hop_address.is_set
	|| out_label.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        auto c = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack>();
        c->parent = this;
        sr_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sr_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
        physica_interface_name.value_namespace = name_space;
        physica_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "physica-interface-name" || name == "tunnel-interface-name" || name == "parent-interface-name" || name == "next-hop-address" || name == "out-label")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "backup-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::P2MpTunnelRewrite()
    :
    local_label{YType::uint32, "local-label"}
{

    yang_name = "p2mp-tunnel-rewrite"; yang_parent_name = "tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::~P2MpTunnelRewrite()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::has_data() const
{
    return local_label.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-label")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::PendingRewrite()
    :
    timestamp{YType::uint32, "timestamp"}
    	,
    tunnel_rewrite(std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_>())
{
    tunnel_rewrite->parent = this;

    yang_name = "pending-rewrite"; yang_parent_name = "tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::~PendingRewrite()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::has_data() const
{
    return timestamp.is_set
	|| (tunnel_rewrite !=  nullptr && tunnel_rewrite->has_data());
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| (tunnel_rewrite !=  nullptr && tunnel_rewrite->has_operation());
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pending-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-rewrite")
    {
        if(tunnel_rewrite == nullptr)
        {
            tunnel_rewrite = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_>();
        }
        return tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tunnel_rewrite != nullptr)
    {
        children["tunnel-rewrite"] = tunnel_rewrite;
    }

    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-rewrite" || name == "timestamp")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::TunnelRewrite_()
    :
    fec_ctype{YType::enumeration, "fec-ctype"}
    	,
    p2p_tunnel_rewrite(std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite>())
	,p2mp_tunnel_rewrite(std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite>())
{
    p2p_tunnel_rewrite->parent = this;
    p2mp_tunnel_rewrite->parent = this;

    yang_name = "tunnel-rewrite"; yang_parent_name = "pending-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::~TunnelRewrite_()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::has_data() const
{
    return fec_ctype.is_set
	|| (p2p_tunnel_rewrite !=  nullptr && p2p_tunnel_rewrite->has_data())
	|| (p2mp_tunnel_rewrite !=  nullptr && p2mp_tunnel_rewrite->has_data());
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| (p2p_tunnel_rewrite !=  nullptr && p2p_tunnel_rewrite->has_operation())
	|| (p2mp_tunnel_rewrite !=  nullptr && p2mp_tunnel_rewrite->has_operation());
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2p-tunnel-rewrite")
    {
        if(p2p_tunnel_rewrite == nullptr)
        {
            p2p_tunnel_rewrite = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite>();
        }
        return p2p_tunnel_rewrite;
    }

    if(child_yang_name == "p2mp-tunnel-rewrite")
    {
        if(p2mp_tunnel_rewrite == nullptr)
        {
            p2mp_tunnel_rewrite = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite>();
        }
        return p2mp_tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(p2p_tunnel_rewrite != nullptr)
    {
        children["p2p-tunnel-rewrite"] = p2p_tunnel_rewrite;
    }

    if(p2mp_tunnel_rewrite != nullptr)
    {
        children["p2mp-tunnel-rewrite"] = p2mp_tunnel_rewrite;
    }

    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2p-tunnel-rewrite" || name == "p2mp-tunnel-rewrite" || name == "fec-ctype")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::P2PTunnelRewrite()
    :
    local_label{YType::uint32, "local-label"},
    tunnel_id{YType::uint16, "tunnel-id"},
    source_pe{YType::str, "source-pe"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    backup_active{YType::boolean, "backup-active"},
    original_input_interface{YType::str, "original-input-interface"},
    previous_hop_address{YType::str, "previous-hop-address"},
    output_interface_name{YType::str, "output-interface-name"},
    backup_tunnel_name{YType::str, "backup-tunnel-name"}
    	,
    primary_s2l(std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L>())
	,backup_tunnel_rewrite(std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite>())
{
    primary_s2l->parent = this;
    backup_tunnel_rewrite->parent = this;

    yang_name = "p2p-tunnel-rewrite"; yang_parent_name = "tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::~P2PTunnelRewrite()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::has_data() const
{
    return local_label.is_set
	|| tunnel_id.is_set
	|| source_pe.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| backup_active.is_set
	|| original_input_interface.is_set
	|| previous_hop_address.is_set
	|| output_interface_name.is_set
	|| backup_tunnel_name.is_set
	|| (primary_s2l !=  nullptr && primary_s2l->has_data())
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_data());
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(source_pe.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(backup_active.yfilter)
	|| ydk::is_set(original_input_interface.yfilter)
	|| ydk::is_set(previous_hop_address.yfilter)
	|| ydk::is_set(output_interface_name.yfilter)
	|| ydk::is_set(backup_tunnel_name.yfilter)
	|| (primary_s2l !=  nullptr && primary_s2l->has_operation())
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_operation());
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (source_pe.is_set || is_set(source_pe.yfilter)) leaf_name_data.push_back(source_pe.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (backup_active.is_set || is_set(backup_active.yfilter)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (original_input_interface.is_set || is_set(original_input_interface.yfilter)) leaf_name_data.push_back(original_input_interface.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.yfilter)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());
    if (output_interface_name.is_set || is_set(output_interface_name.yfilter)) leaf_name_data.push_back(output_interface_name.get_name_leafdata());
    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.yfilter)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary-s2l")
    {
        if(primary_s2l == nullptr)
        {
            primary_s2l = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L>();
        }
        return primary_s2l;
    }

    if(child_yang_name == "backup-tunnel-rewrite")
    {
        if(backup_tunnel_rewrite == nullptr)
        {
            backup_tunnel_rewrite = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite>();
        }
        return backup_tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(primary_s2l != nullptr)
    {
        children["primary-s2l"] = primary_s2l;
    }

    if(backup_tunnel_rewrite != nullptr)
    {
        children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
    }

    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-pe")
    {
        source_pe = value;
        source_pe.value_namespace = name_space;
        source_pe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-active")
    {
        backup_active = value;
        backup_active.value_namespace = name_space;
        backup_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface = value;
        original_input_interface.value_namespace = name_space;
        original_input_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
        previous_hop_address.value_namespace = name_space;
        previous_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name = value;
        output_interface_name.value_namespace = name_space;
        output_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
        backup_tunnel_name.value_namespace = name_space;
        backup_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "source-pe")
    {
        source_pe.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "backup-active")
    {
        backup_active.yfilter = yfilter;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface.yfilter = yfilter;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address.yfilter = yfilter;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-s2l" || name == "backup-tunnel-rewrite" || name == "local-label" || name == "tunnel-id" || name == "source-pe" || name == "destination-address" || name == "extended-tunnel-id" || name == "backup-active" || name == "original-input-interface" || name == "previous-hop-address" || name == "output-interface-name" || name == "backup-tunnel-name")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::PrimaryS2L()
    :
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    parent_interface_name{YType::str, "parent-interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"}
{

    yang_name = "primary-s2l"; yang_parent_name = "p2p-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::~PrimaryS2L()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::has_data() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return physica_interface_name.is_set
	|| tunnel_interface_name.is_set
	|| parent_interface_name.is_set
	|| next_hop_address.is_set
	|| out_label.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        auto c = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack>();
        c->parent = this;
        sr_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sr_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
        physica_interface_name.value_namespace = name_space;
        physica_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "physica-interface-name" || name == "tunnel-interface-name" || name == "parent-interface-name" || name == "next-hop-address" || name == "out-label")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "primary-s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::BackupTunnelRewrite()
    :
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    parent_interface_name{YType::str, "parent-interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"}
{

    yang_name = "backup-tunnel-rewrite"; yang_parent_name = "p2p-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::~BackupTunnelRewrite()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::has_data() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return physica_interface_name.is_set
	|| tunnel_interface_name.is_set
	|| parent_interface_name.is_set
	|| next_hop_address.is_set
	|| out_label.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        auto c = std::make_shared<MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack>();
        c->parent = this;
        sr_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sr_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
        physica_interface_name.value_namespace = name_space;
        physica_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "physica-interface-name" || name == "tunnel-interface-name" || name == "parent-interface-name" || name == "next-hop-address" || name == "out-label")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "backup-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::P2MpTunnelRewrite()
    :
    local_label{YType::uint32, "local-label"}
{

    yang_name = "p2mp-tunnel-rewrite"; yang_parent_name = "tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::~P2MpTunnelRewrite()
{
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::has_data() const
{
    return local_label.is_set;
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label.yfilter);
}

std::string MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-label")
        return true;
    return false;
}

MplsTe::P2Mp::CollaboratorTimers::CollaboratorTimers()
{

    yang_name = "collaborator-timers"; yang_parent_name = "p2mp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::P2Mp::CollaboratorTimers::~CollaboratorTimers()
{
}

bool MplsTe::P2Mp::CollaboratorTimers::has_data() const
{
    for (std::size_t index=0; index<p2mp_timer.size(); index++)
    {
        if(p2mp_timer[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2Mp::CollaboratorTimers::has_operation() const
{
    for (std::size_t index=0; index<p2mp_timer.size(); index++)
    {
        if(p2mp_timer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2Mp::CollaboratorTimers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/p2mp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::P2Mp::CollaboratorTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collaborator-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::CollaboratorTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::CollaboratorTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2mp-timer")
    {
        auto c = std::make_shared<MplsTe::P2Mp::CollaboratorTimers::P2MpTimer>();
        c->parent = this;
        p2mp_timer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::CollaboratorTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : p2mp_timer)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::P2Mp::CollaboratorTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2Mp::CollaboratorTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2Mp::CollaboratorTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-timer")
        return true;
    return false;
}

MplsTe::P2Mp::CollaboratorTimers::P2MpTimer::P2MpTimer()
    :
    timer_type{YType::enumeration, "timer-type"},
    timer_name{YType::str, "timer-name"},
    start_time{YType::uint32, "start-time"},
    expiry_time{YType::uint32, "expiry-time"},
    stop_time{YType::uint32, "stop-time"},
    duration{YType::uint32, "duration"},
    is_running{YType::boolean, "is-running"}
{

    yang_name = "p2mp-timer"; yang_parent_name = "collaborator-timers"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::P2Mp::CollaboratorTimers::P2MpTimer::~P2MpTimer()
{
}

bool MplsTe::P2Mp::CollaboratorTimers::P2MpTimer::has_data() const
{
    return timer_type.is_set
	|| timer_name.is_set
	|| start_time.is_set
	|| expiry_time.is_set
	|| stop_time.is_set
	|| duration.is_set
	|| is_running.is_set;
}

bool MplsTe::P2Mp::CollaboratorTimers::P2MpTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timer_type.yfilter)
	|| ydk::is_set(timer_name.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(expiry_time.yfilter)
	|| ydk::is_set(stop_time.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(is_running.yfilter);
}

std::string MplsTe::P2Mp::CollaboratorTimers::P2MpTimer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/p2mp/collaborator-timers/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::P2Mp::CollaboratorTimers::P2MpTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::CollaboratorTimers::P2MpTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer_type.is_set || is_set(timer_type.yfilter)) leaf_name_data.push_back(timer_type.get_name_leafdata());
    if (timer_name.is_set || is_set(timer_name.yfilter)) leaf_name_data.push_back(timer_name.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (expiry_time.is_set || is_set(expiry_time.yfilter)) leaf_name_data.push_back(expiry_time.get_name_leafdata());
    if (stop_time.is_set || is_set(stop_time.yfilter)) leaf_name_data.push_back(stop_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (is_running.is_set || is_set(is_running.yfilter)) leaf_name_data.push_back(is_running.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::CollaboratorTimers::P2MpTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::CollaboratorTimers::P2MpTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::P2Mp::CollaboratorTimers::P2MpTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timer-type")
    {
        timer_type = value;
        timer_type.value_namespace = name_space;
        timer_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-name")
    {
        timer_name = value;
        timer_name.value_namespace = name_space;
        timer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-time")
    {
        expiry_time = value;
        expiry_time.value_namespace = name_space;
        expiry_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-time")
    {
        stop_time = value;
        stop_time.value_namespace = name_space;
        stop_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-running")
    {
        is_running = value;
        is_running.value_namespace = name_space;
        is_running.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::CollaboratorTimers::P2MpTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timer-type")
    {
        timer_type.yfilter = yfilter;
    }
    if(value_path == "timer-name")
    {
        timer_name.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "expiry-time")
    {
        expiry_time.yfilter = yfilter;
    }
    if(value_path == "stop-time")
    {
        stop_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "is-running")
    {
        is_running.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::CollaboratorTimers::P2MpTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer-type" || name == "timer-name" || name == "start-time" || name == "expiry-time" || name == "stop-time" || name == "duration" || name == "is-running")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrites()
{

    yang_name = "forwarding-output-label-rewrites"; yang_parent_name = "p2mp"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::~ForwardingOutputLabelRewrites()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::has_data() const
{
    for (std::size_t index=0; index<forwarding_output_label_rewrite.size(); index++)
    {
        if(forwarding_output_label_rewrite[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::has_operation() const
{
    for (std::size_t index=0; index<forwarding_output_label_rewrite.size(); index++)
    {
        if(forwarding_output_label_rewrite[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/p2mp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-output-label-rewrites";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-output-label-rewrite")
    {
        auto c = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite>();
        c->parent = this;
        forwarding_output_label_rewrite.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : forwarding_output_label_rewrite)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-output-label-rewrite")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::ForwardingOutputLabelRewrite()
    :
    tunnel_id{YType::int32, "tunnel-id"},
    lsp_id{YType::int32, "lsp-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    source_address{YType::str, "source-address"},
    p2mp_id{YType::int32, "p2mp-id"},
    destination_address{YType::str, "destination-address"},
    next_hop_address{YType::str, "next-hop-address"},
    previous_hop_address{YType::str, "previous-hop-address"},
    ctype{YType::enumeration, "ctype"},
    original_input_interface{YType::str, "original-input-interface"},
    output_interface_name{YType::str, "output-interface-name"},
    backup_tunnel_name{YType::str, "backup-tunnel-name"},
    is_segment_routing{YType::boolean, "is-segment-routing"}
    	,
    s2l_output_rewrite(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite>())
{
    s2l_output_rewrite->parent = this;

    yang_name = "forwarding-output-label-rewrite"; yang_parent_name = "forwarding-output-label-rewrites"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::~ForwardingOutputLabelRewrite()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::has_data() const
{
    for (std::size_t index=0; index<s2l.size(); index++)
    {
        if(s2l[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<s2lsr_path.size(); index++)
    {
        if(s2lsr_path[index]->has_data())
            return true;
    }
    return tunnel_id.is_set
	|| lsp_id.is_set
	|| extended_tunnel_id.is_set
	|| source_address.is_set
	|| p2mp_id.is_set
	|| destination_address.is_set
	|| next_hop_address.is_set
	|| previous_hop_address.is_set
	|| ctype.is_set
	|| original_input_interface.is_set
	|| output_interface_name.is_set
	|| backup_tunnel_name.is_set
	|| is_segment_routing.is_set
	|| (s2l_output_rewrite !=  nullptr && s2l_output_rewrite->has_data());
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::has_operation() const
{
    for (std::size_t index=0; index<s2l.size(); index++)
    {
        if(s2l[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<s2lsr_path.size(); index++)
    {
        if(s2lsr_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(previous_hop_address.yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(original_input_interface.yfilter)
	|| ydk::is_set(output_interface_name.yfilter)
	|| ydk::is_set(backup_tunnel_name.yfilter)
	|| ydk::is_set(is_segment_routing.yfilter)
	|| (s2l_output_rewrite !=  nullptr && s2l_output_rewrite->has_operation());
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/p2mp/forwarding-output-label-rewrites/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-output-label-rewrite" <<"[tunnel-id='" <<tunnel_id <<"']" <<"[lsp-id='" <<lsp_id <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[source-address='" <<source_address <<"']" <<"[p2mp-id='" <<p2mp_id <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[next-hop-address='" <<next_hop_address <<"']" <<"[previous-hop-address='" <<previous_hop_address <<"']" <<"[ctype='" <<ctype <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.yfilter)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());
    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (original_input_interface.is_set || is_set(original_input_interface.yfilter)) leaf_name_data.push_back(original_input_interface.get_name_leafdata());
    if (output_interface_name.is_set || is_set(output_interface_name.yfilter)) leaf_name_data.push_back(output_interface_name.get_name_leafdata());
    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.yfilter)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());
    if (is_segment_routing.is_set || is_set(is_segment_routing.yfilter)) leaf_name_data.push_back(is_segment_routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-output-rewrite")
    {
        if(s2l_output_rewrite == nullptr)
        {
            s2l_output_rewrite = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite>();
        }
        return s2l_output_rewrite;
    }

    if(child_yang_name == "s2l")
    {
        auto c = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L>();
        c->parent = this;
        s2l.push_back(c);
        return c;
    }

    if(child_yang_name == "s2lsr-path")
    {
        auto c = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath>();
        c->parent = this;
        s2lsr_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(s2l_output_rewrite != nullptr)
    {
        children["s2l-output-rewrite"] = s2l_output_rewrite;
    }

    count = 0;
    for (auto const & c : s2l)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : s2lsr_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
        previous_hop_address.value_namespace = name_space;
        previous_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface = value;
        original_input_interface.value_namespace = name_space;
        original_input_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name = value;
        output_interface_name.value_namespace = name_space;
        output_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
        backup_tunnel_name.value_namespace = name_space;
        backup_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-segment-routing")
    {
        is_segment_routing = value;
        is_segment_routing.value_namespace = name_space;
        is_segment_routing.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address.yfilter = yfilter;
    }
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface.yfilter = yfilter;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "is-segment-routing")
    {
        is_segment_routing.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-output-rewrite" || name == "s2l" || name == "s2lsr-path" || name == "tunnel-id" || name == "lsp-id" || name == "extended-tunnel-id" || name == "source-address" || name == "p2mp-id" || name == "destination-address" || name == "next-hop-address" || name == "previous-hop-address" || name == "ctype" || name == "original-input-interface" || name == "output-interface-name" || name == "backup-tunnel-name" || name == "is-segment-routing")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::S2LOutputRewrite()
    :
    subfamily(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily>())
	,successful_rewrite(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite>())
	,failed_rewrite(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite>())
	,pending_rewrite(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite>())
{
    subfamily->parent = this;
    successful_rewrite->parent = this;
    failed_rewrite->parent = this;
    pending_rewrite->parent = this;

    yang_name = "s2l-output-rewrite"; yang_parent_name = "forwarding-output-label-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::~S2LOutputRewrite()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::has_data() const
{
    return (subfamily !=  nullptr && subfamily->has_data())
	|| (successful_rewrite !=  nullptr && successful_rewrite->has_data())
	|| (failed_rewrite !=  nullptr && failed_rewrite->has_data())
	|| (pending_rewrite !=  nullptr && pending_rewrite->has_data());
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::has_operation() const
{
    return is_set(yfilter)
	|| (subfamily !=  nullptr && subfamily->has_operation())
	|| (successful_rewrite !=  nullptr && successful_rewrite->has_operation())
	|| (failed_rewrite !=  nullptr && failed_rewrite->has_operation())
	|| (pending_rewrite !=  nullptr && pending_rewrite->has_operation());
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-output-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subfamily")
    {
        if(subfamily == nullptr)
        {
            subfamily = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily>();
        }
        return subfamily;
    }

    if(child_yang_name == "successful-rewrite")
    {
        if(successful_rewrite == nullptr)
        {
            successful_rewrite = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite>();
        }
        return successful_rewrite;
    }

    if(child_yang_name == "failed-rewrite")
    {
        if(failed_rewrite == nullptr)
        {
            failed_rewrite = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite>();
        }
        return failed_rewrite;
    }

    if(child_yang_name == "pending-rewrite")
    {
        if(pending_rewrite == nullptr)
        {
            pending_rewrite = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite>();
        }
        return pending_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(subfamily != nullptr)
    {
        children["subfamily"] = subfamily;
    }

    if(successful_rewrite != nullptr)
    {
        children["successful-rewrite"] = successful_rewrite;
    }

    if(failed_rewrite != nullptr)
    {
        children["failed-rewrite"] = failed_rewrite;
    }

    if(pending_rewrite != nullptr)
    {
        children["pending-rewrite"] = pending_rewrite;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subfamily" || name == "successful-rewrite" || name == "failed-rewrite" || name == "pending-rewrite")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::Subfamily()
    :
    next_hop_address{YType::str, "next-hop-address"},
    previous_hop_address{YType::str, "previous-hop-address"}
    	,
    lsp_fec(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec>())
{
    lsp_fec->parent = this;

    yang_name = "subfamily"; yang_parent_name = "s2l-output-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::~Subfamily()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::has_data() const
{
    return next_hop_address.is_set
	|| previous_hop_address.is_set
	|| (lsp_fec !=  nullptr && lsp_fec->has_data());
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(previous_hop_address.yfilter)
	|| (lsp_fec !=  nullptr && lsp_fec->has_operation());
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subfamily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.yfilter)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-fec")
    {
        if(lsp_fec == nullptr)
        {
            lsp_fec = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec>();
        }
        return lsp_fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsp_fec != nullptr)
    {
        children["lsp-fec"] = lsp_fec;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
        previous_hop_address.value_namespace = name_space;
        previous_hop_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-fec" || name == "next-hop-address" || name == "previous-hop-address")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::LspFec()
    :
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "lsp-fec"; yang_parent_name = "subfamily"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::~LspFec()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::has_data() const
{
    return fec_lsp_id.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
        fec_lsp_id.value_namespace = name_space;
        fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
        fec_vrf.value_namespace = name_space;
        fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-lsp-id" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-vrf")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "lsp-fec"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| p2p_lsp_destination.is_set
	|| fec_destination_p2mp_id.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
        p2p_lsp_destination.value_namespace = name_space;
        p2p_lsp_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
        fec_destination_p2mp_id.value_namespace = name_space;
        fec_destination_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination.yfilter = yfilter;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "p2p-lsp-destination" || name == "fec-destination-p2mp-id")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::SuccessfulRewrite()
    :
    timestamp{YType::uint32, "timestamp"},
    out_rewrite_role{YType::enumeration, "out-rewrite-role"},
    label{YType::uint32, "label"},
    backup_active{YType::boolean, "backup-active"},
    s2l_source{YType::str, "s2l-source"},
    explicit_null{YType::enumeration, "explicit-null"},
    protocol_transported{YType::uint16, "protocol-transported"}
    	,
    primary_s2l(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L>())
	,backup_tunnel_rewrite(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite>())
{
    primary_s2l->parent = this;
    backup_tunnel_rewrite->parent = this;

    yang_name = "successful-rewrite"; yang_parent_name = "s2l-output-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::~SuccessfulRewrite()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::has_data() const
{
    return timestamp.is_set
	|| out_rewrite_role.is_set
	|| label.is_set
	|| backup_active.is_set
	|| s2l_source.is_set
	|| explicit_null.is_set
	|| protocol_transported.is_set
	|| (primary_s2l !=  nullptr && primary_s2l->has_data())
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_data());
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(out_rewrite_role.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(backup_active.yfilter)
	|| ydk::is_set(s2l_source.yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(protocol_transported.yfilter)
	|| (primary_s2l !=  nullptr && primary_s2l->has_operation())
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_operation());
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "successful-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (out_rewrite_role.is_set || is_set(out_rewrite_role.yfilter)) leaf_name_data.push_back(out_rewrite_role.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (backup_active.is_set || is_set(backup_active.yfilter)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (s2l_source.is_set || is_set(s2l_source.yfilter)) leaf_name_data.push_back(s2l_source.get_name_leafdata());
    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (protocol_transported.is_set || is_set(protocol_transported.yfilter)) leaf_name_data.push_back(protocol_transported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary-s2l")
    {
        if(primary_s2l == nullptr)
        {
            primary_s2l = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L>();
        }
        return primary_s2l;
    }

    if(child_yang_name == "backup-tunnel-rewrite")
    {
        if(backup_tunnel_rewrite == nullptr)
        {
            backup_tunnel_rewrite = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite>();
        }
        return backup_tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(primary_s2l != nullptr)
    {
        children["primary-s2l"] = primary_s2l;
    }

    if(backup_tunnel_rewrite != nullptr)
    {
        children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-rewrite-role")
    {
        out_rewrite_role = value;
        out_rewrite_role.value_namespace = name_space;
        out_rewrite_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-active")
    {
        backup_active = value;
        backup_active.value_namespace = name_space;
        backup_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-source")
    {
        s2l_source = value;
        s2l_source.value_namespace = name_space;
        s2l_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-null")
    {
        explicit_null = value;
        explicit_null.value_namespace = name_space;
        explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-transported")
    {
        protocol_transported = value;
        protocol_transported.value_namespace = name_space;
        protocol_transported.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "out-rewrite-role")
    {
        out_rewrite_role.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "backup-active")
    {
        backup_active.yfilter = yfilter;
    }
    if(value_path == "s2l-source")
    {
        s2l_source.yfilter = yfilter;
    }
    if(value_path == "explicit-null")
    {
        explicit_null.yfilter = yfilter;
    }
    if(value_path == "protocol-transported")
    {
        protocol_transported.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-s2l" || name == "backup-tunnel-rewrite" || name == "timestamp" || name == "out-rewrite-role" || name == "label" || name == "backup-active" || name == "s2l-source" || name == "explicit-null" || name == "protocol-transported")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::PrimaryS2L()
    :
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    parent_interface_name{YType::str, "parent-interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"}
{

    yang_name = "primary-s2l"; yang_parent_name = "successful-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::~PrimaryS2L()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::has_data() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return physica_interface_name.is_set
	|| tunnel_interface_name.is_set
	|| parent_interface_name.is_set
	|| next_hop_address.is_set
	|| out_label.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        auto c = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack>();
        c->parent = this;
        sr_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sr_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
        physica_interface_name.value_namespace = name_space;
        physica_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "physica-interface-name" || name == "tunnel-interface-name" || name == "parent-interface-name" || name == "next-hop-address" || name == "out-label")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "primary-s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::BackupTunnelRewrite()
    :
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    parent_interface_name{YType::str, "parent-interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"}
{

    yang_name = "backup-tunnel-rewrite"; yang_parent_name = "successful-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::~BackupTunnelRewrite()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::has_data() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return physica_interface_name.is_set
	|| tunnel_interface_name.is_set
	|| parent_interface_name.is_set
	|| next_hop_address.is_set
	|| out_label.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        auto c = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack>();
        c->parent = this;
        sr_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sr_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
        physica_interface_name.value_namespace = name_space;
        physica_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "physica-interface-name" || name == "tunnel-interface-name" || name == "parent-interface-name" || name == "next-hop-address" || name == "out-label")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "backup-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::FailedRewrite()
    :
    timestamp{YType::uint32, "timestamp"},
    out_rewrite_role{YType::enumeration, "out-rewrite-role"},
    label{YType::uint32, "label"},
    backup_active{YType::boolean, "backup-active"},
    s2l_source{YType::str, "s2l-source"},
    explicit_null{YType::enumeration, "explicit-null"},
    protocol_transported{YType::uint16, "protocol-transported"}
    	,
    primary_s2l(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L>())
	,backup_tunnel_rewrite(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite>())
{
    primary_s2l->parent = this;
    backup_tunnel_rewrite->parent = this;

    yang_name = "failed-rewrite"; yang_parent_name = "s2l-output-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::~FailedRewrite()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::has_data() const
{
    return timestamp.is_set
	|| out_rewrite_role.is_set
	|| label.is_set
	|| backup_active.is_set
	|| s2l_source.is_set
	|| explicit_null.is_set
	|| protocol_transported.is_set
	|| (primary_s2l !=  nullptr && primary_s2l->has_data())
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_data());
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(out_rewrite_role.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(backup_active.yfilter)
	|| ydk::is_set(s2l_source.yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(protocol_transported.yfilter)
	|| (primary_s2l !=  nullptr && primary_s2l->has_operation())
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_operation());
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failed-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (out_rewrite_role.is_set || is_set(out_rewrite_role.yfilter)) leaf_name_data.push_back(out_rewrite_role.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (backup_active.is_set || is_set(backup_active.yfilter)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (s2l_source.is_set || is_set(s2l_source.yfilter)) leaf_name_data.push_back(s2l_source.get_name_leafdata());
    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (protocol_transported.is_set || is_set(protocol_transported.yfilter)) leaf_name_data.push_back(protocol_transported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary-s2l")
    {
        if(primary_s2l == nullptr)
        {
            primary_s2l = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L>();
        }
        return primary_s2l;
    }

    if(child_yang_name == "backup-tunnel-rewrite")
    {
        if(backup_tunnel_rewrite == nullptr)
        {
            backup_tunnel_rewrite = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite>();
        }
        return backup_tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(primary_s2l != nullptr)
    {
        children["primary-s2l"] = primary_s2l;
    }

    if(backup_tunnel_rewrite != nullptr)
    {
        children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-rewrite-role")
    {
        out_rewrite_role = value;
        out_rewrite_role.value_namespace = name_space;
        out_rewrite_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-active")
    {
        backup_active = value;
        backup_active.value_namespace = name_space;
        backup_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-source")
    {
        s2l_source = value;
        s2l_source.value_namespace = name_space;
        s2l_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-null")
    {
        explicit_null = value;
        explicit_null.value_namespace = name_space;
        explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-transported")
    {
        protocol_transported = value;
        protocol_transported.value_namespace = name_space;
        protocol_transported.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "out-rewrite-role")
    {
        out_rewrite_role.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "backup-active")
    {
        backup_active.yfilter = yfilter;
    }
    if(value_path == "s2l-source")
    {
        s2l_source.yfilter = yfilter;
    }
    if(value_path == "explicit-null")
    {
        explicit_null.yfilter = yfilter;
    }
    if(value_path == "protocol-transported")
    {
        protocol_transported.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-s2l" || name == "backup-tunnel-rewrite" || name == "timestamp" || name == "out-rewrite-role" || name == "label" || name == "backup-active" || name == "s2l-source" || name == "explicit-null" || name == "protocol-transported")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::PrimaryS2L()
    :
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    parent_interface_name{YType::str, "parent-interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"}
{

    yang_name = "primary-s2l"; yang_parent_name = "failed-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::~PrimaryS2L()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::has_data() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return physica_interface_name.is_set
	|| tunnel_interface_name.is_set
	|| parent_interface_name.is_set
	|| next_hop_address.is_set
	|| out_label.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        auto c = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack>();
        c->parent = this;
        sr_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sr_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
        physica_interface_name.value_namespace = name_space;
        physica_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "physica-interface-name" || name == "tunnel-interface-name" || name == "parent-interface-name" || name == "next-hop-address" || name == "out-label")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "primary-s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::BackupTunnelRewrite()
    :
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    parent_interface_name{YType::str, "parent-interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"}
{

    yang_name = "backup-tunnel-rewrite"; yang_parent_name = "failed-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::~BackupTunnelRewrite()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::has_data() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return physica_interface_name.is_set
	|| tunnel_interface_name.is_set
	|| parent_interface_name.is_set
	|| next_hop_address.is_set
	|| out_label.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        auto c = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack>();
        c->parent = this;
        sr_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sr_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
        physica_interface_name.value_namespace = name_space;
        physica_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "physica-interface-name" || name == "tunnel-interface-name" || name == "parent-interface-name" || name == "next-hop-address" || name == "out-label")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "backup-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PendingRewrite()
    :
    timestamp{YType::uint32, "timestamp"},
    out_rewrite_role{YType::enumeration, "out-rewrite-role"},
    label{YType::uint32, "label"},
    backup_active{YType::boolean, "backup-active"},
    s2l_source{YType::str, "s2l-source"},
    explicit_null{YType::enumeration, "explicit-null"},
    protocol_transported{YType::uint16, "protocol-transported"}
    	,
    primary_s2l(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L>())
	,backup_tunnel_rewrite(std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite>())
{
    primary_s2l->parent = this;
    backup_tunnel_rewrite->parent = this;

    yang_name = "pending-rewrite"; yang_parent_name = "s2l-output-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::~PendingRewrite()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::has_data() const
{
    return timestamp.is_set
	|| out_rewrite_role.is_set
	|| label.is_set
	|| backup_active.is_set
	|| s2l_source.is_set
	|| explicit_null.is_set
	|| protocol_transported.is_set
	|| (primary_s2l !=  nullptr && primary_s2l->has_data())
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_data());
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(out_rewrite_role.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(backup_active.yfilter)
	|| ydk::is_set(s2l_source.yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(protocol_transported.yfilter)
	|| (primary_s2l !=  nullptr && primary_s2l->has_operation())
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_operation());
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pending-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (out_rewrite_role.is_set || is_set(out_rewrite_role.yfilter)) leaf_name_data.push_back(out_rewrite_role.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (backup_active.is_set || is_set(backup_active.yfilter)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (s2l_source.is_set || is_set(s2l_source.yfilter)) leaf_name_data.push_back(s2l_source.get_name_leafdata());
    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (protocol_transported.is_set || is_set(protocol_transported.yfilter)) leaf_name_data.push_back(protocol_transported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary-s2l")
    {
        if(primary_s2l == nullptr)
        {
            primary_s2l = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L>();
        }
        return primary_s2l;
    }

    if(child_yang_name == "backup-tunnel-rewrite")
    {
        if(backup_tunnel_rewrite == nullptr)
        {
            backup_tunnel_rewrite = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite>();
        }
        return backup_tunnel_rewrite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(primary_s2l != nullptr)
    {
        children["primary-s2l"] = primary_s2l;
    }

    if(backup_tunnel_rewrite != nullptr)
    {
        children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-rewrite-role")
    {
        out_rewrite_role = value;
        out_rewrite_role.value_namespace = name_space;
        out_rewrite_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-active")
    {
        backup_active = value;
        backup_active.value_namespace = name_space;
        backup_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-source")
    {
        s2l_source = value;
        s2l_source.value_namespace = name_space;
        s2l_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-null")
    {
        explicit_null = value;
        explicit_null.value_namespace = name_space;
        explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-transported")
    {
        protocol_transported = value;
        protocol_transported.value_namespace = name_space;
        protocol_transported.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "out-rewrite-role")
    {
        out_rewrite_role.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "backup-active")
    {
        backup_active.yfilter = yfilter;
    }
    if(value_path == "s2l-source")
    {
        s2l_source.yfilter = yfilter;
    }
    if(value_path == "explicit-null")
    {
        explicit_null.yfilter = yfilter;
    }
    if(value_path == "protocol-transported")
    {
        protocol_transported.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-s2l" || name == "backup-tunnel-rewrite" || name == "timestamp" || name == "out-rewrite-role" || name == "label" || name == "backup-active" || name == "s2l-source" || name == "explicit-null" || name == "protocol-transported")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::PrimaryS2L()
    :
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    parent_interface_name{YType::str, "parent-interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"}
{

    yang_name = "primary-s2l"; yang_parent_name = "pending-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::~PrimaryS2L()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::has_data() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return physica_interface_name.is_set
	|| tunnel_interface_name.is_set
	|| parent_interface_name.is_set
	|| next_hop_address.is_set
	|| out_label.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        auto c = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack>();
        c->parent = this;
        sr_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sr_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
        physica_interface_name.value_namespace = name_space;
        physica_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "physica-interface-name" || name == "tunnel-interface-name" || name == "parent-interface-name" || name == "next-hop-address" || name == "out-label")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "primary-s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::BackupTunnelRewrite()
    :
    physica_interface_name{YType::str, "physica-interface-name"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"},
    parent_interface_name{YType::str, "parent-interface-name"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"}
{

    yang_name = "backup-tunnel-rewrite"; yang_parent_name = "pending-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::~BackupTunnelRewrite()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::has_data() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_data())
            return true;
    }
    return physica_interface_name.is_set
	|| tunnel_interface_name.is_set
	|| parent_interface_name.is_set
	|| next_hop_address.is_set
	|| out_label.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::has_operation() const
{
    for (std::size_t index=0; index<sr_label_stack.size(); index++)
    {
        if(sr_label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(physica_interface_name.yfilter)
	|| ydk::is_set(tunnel_interface_name.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(out_label.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel-rewrite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (physica_interface_name.is_set || is_set(physica_interface_name.yfilter)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.yfilter)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.yfilter)) leaf_name_data.push_back(out_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label-stack")
    {
        auto c = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack>();
        c->parent = this;
        sr_label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sr_label_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
        physica_interface_name.value_namespace = name_space;
        physica_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
        tunnel_interface_name.value_namespace = name_space;
        tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-label")
    {
        out_label = value;
        out_label.value_namespace = name_space;
        out_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "physica-interface-name")
    {
        physica_interface_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "out-label")
    {
        out_label.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label-stack" || name == "physica-interface-name" || name == "tunnel-interface-name" || name == "parent-interface-name" || name == "next-hop-address" || name == "out-label")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::SrLabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "sr-label-stack"; yang_parent_name = "backup-tunnel-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::~SrLabelStack()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::SrLabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::S2L()
    :
    destination_address{YType::str, "destination-address"},
    sub_group_id{YType::uint16, "sub-group-id"},
    sub_group_original_id{YType::str, "sub-group-original-id"}
{

    yang_name = "s2l"; yang_parent_name = "forwarding-output-label-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::~S2L()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::has_data() const
{
    return destination_address.is_set
	|| sub_group_id.is_set
	|| sub_group_original_id.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(sub_group_original_id.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_original_id.is_set || is_set(sub_group_original_id.yfilter)) leaf_name_data.push_back(sub_group_original_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-original-id")
    {
        sub_group_original_id = value;
        sub_group_original_id.value_namespace = name_space;
        sub_group_original_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-original-id")
    {
        sub_group_original_id.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "sub-group-id" || name == "sub-group-original-id")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::S2LsrPath()
    :
    is_primary{YType::boolean, "is-primary"},
    is_backup{YType::boolean, "is-backup"},
    outgoing_interface{YType::str, "outgoing-interface"},
    path_id{YType::uint32, "path-id"},
    backup_path_id{YType::uint32, "backup-path-id"},
    next_hop{YType::str, "next-hop"}
{

    yang_name = "s2lsr-path"; yang_parent_name = "forwarding-output-label-rewrite"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::~S2LsrPath()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::has_data() const
{
    for (std::size_t index=0; index<outgoing_labels_stack.size(); index++)
    {
        if(outgoing_labels_stack[index]->has_data())
            return true;
    }
    return is_primary.is_set
	|| is_backup.is_set
	|| outgoing_interface.is_set
	|| path_id.is_set
	|| backup_path_id.is_set
	|| next_hop.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::has_operation() const
{
    for (std::size_t index=0; index<outgoing_labels_stack.size(); index++)
    {
        if(outgoing_labels_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_primary.yfilter)
	|| ydk::is_set(is_backup.yfilter)
	|| ydk::is_set(outgoing_interface.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(backup_path_id.yfilter)
	|| ydk::is_set(next_hop.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2lsr-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_primary.is_set || is_set(is_primary.yfilter)) leaf_name_data.push_back(is_primary.get_name_leafdata());
    if (is_backup.is_set || is_set(is_backup.yfilter)) leaf_name_data.push_back(is_backup.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.yfilter)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (backup_path_id.is_set || is_set(backup_path_id.yfilter)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "outgoing-labels-stack")
    {
        auto c = std::make_shared<MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack>();
        c->parent = this;
        outgoing_labels_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : outgoing_labels_stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-primary")
    {
        is_primary = value;
        is_primary.value_namespace = name_space;
        is_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-backup")
    {
        is_backup = value;
        is_backup.value_namespace = name_space;
        is_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
        outgoing_interface.value_namespace = name_space;
        outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
        backup_path_id.value_namespace = name_space;
        backup_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-primary")
    {
        is_primary.yfilter = yfilter;
    }
    if(value_path == "is-backup")
    {
        is_backup.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "backup-path-id")
    {
        backup_path_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outgoing-labels-stack" || name == "is-primary" || name == "is-backup" || name == "outgoing-interface" || name == "path-id" || name == "backup-path-id" || name == "next-hop")
        return true;
    return false;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack::OutgoingLabelsStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "outgoing-labels-stack"; yang_parent_name = "s2lsr-path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack::~OutgoingLabelsStack()
{
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-labels-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::OutgoingLabelsStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::OpenConfig::OpenConfig()
    :
    lsp_states(std::make_shared<MplsTe::OpenConfig::LspStates>())
	,lsp_counters(std::make_shared<MplsTe::OpenConfig::LspCounters>())
{
    lsp_states->parent = this;
    lsp_counters->parent = this;

    yang_name = "open-config"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::OpenConfig::~OpenConfig()
{
}

bool MplsTe::OpenConfig::has_data() const
{
    return (lsp_states !=  nullptr && lsp_states->has_data())
	|| (lsp_counters !=  nullptr && lsp_counters->has_data());
}

bool MplsTe::OpenConfig::has_operation() const
{
    return is_set(yfilter)
	|| (lsp_states !=  nullptr && lsp_states->has_operation())
	|| (lsp_counters !=  nullptr && lsp_counters->has_operation());
}

std::string MplsTe::OpenConfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::OpenConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "open-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::OpenConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::OpenConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-states")
    {
        if(lsp_states == nullptr)
        {
            lsp_states = std::make_shared<MplsTe::OpenConfig::LspStates>();
        }
        return lsp_states;
    }

    if(child_yang_name == "lsp-counters")
    {
        if(lsp_counters == nullptr)
        {
            lsp_counters = std::make_shared<MplsTe::OpenConfig::LspCounters>();
        }
        return lsp_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::OpenConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsp_states != nullptr)
    {
        children["lsp-states"] = lsp_states;
    }

    if(lsp_counters != nullptr)
    {
        children["lsp-counters"] = lsp_counters;
    }

    return children;
}

void MplsTe::OpenConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::OpenConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::OpenConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-states" || name == "lsp-counters")
        return true;
    return false;
}

MplsTe::OpenConfig::LspStates::LspStates()
{

    yang_name = "lsp-states"; yang_parent_name = "open-config"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::OpenConfig::LspStates::~LspStates()
{
}

bool MplsTe::OpenConfig::LspStates::has_data() const
{
    for (std::size_t index=0; index<lsp_state.size(); index++)
    {
        if(lsp_state[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::OpenConfig::LspStates::has_operation() const
{
    for (std::size_t index=0; index<lsp_state.size(); index++)
    {
        if(lsp_state[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::OpenConfig::LspStates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/open-config/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::OpenConfig::LspStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-states";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::OpenConfig::LspStates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::OpenConfig::LspStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-state")
    {
        auto c = std::make_shared<MplsTe::OpenConfig::LspStates::LspState>();
        c->parent = this;
        lsp_state.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::OpenConfig::LspStates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : lsp_state)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::OpenConfig::LspStates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::OpenConfig::LspStates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::OpenConfig::LspStates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state")
        return true;
    return false;
}

MplsTe::OpenConfig::LspStates::LspState::LspState()
    :
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_type{YType::enumeration, "tunnel-type"},
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    signaling_protocol{YType::enumeration, "signaling-protocol"},
    local_id{YType::uint32, "local-id"},
    source{YType::str, "source"},
    description{YType::str, "description"},
    admin_status{YType::enumeration, "admin-status"},
    oper_status{YType::enumeration, "oper-status"},
    metric{YType::enumeration, "metric"},
    protection_style_requested{YType::enumeration, "protection-style-requested"},
    reoptimize_timer{YType::uint16, "reoptimize-timer"},
    role{YType::enumeration, "role"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    soft_preemption{YType::boolean, "soft-preemption"}
{

    yang_name = "lsp-state"; yang_parent_name = "lsp-states"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::OpenConfig::LspStates::LspState::~LspState()
{
}

bool MplsTe::OpenConfig::LspStates::LspState::has_data() const
{
    return tunnel_name.is_set
	|| tunnel_type.is_set
	|| name.is_set
	|| type.is_set
	|| signaling_protocol.is_set
	|| local_id.is_set
	|| source.is_set
	|| description.is_set
	|| admin_status.is_set
	|| oper_status.is_set
	|| metric.is_set
	|| protection_style_requested.is_set
	|| reoptimize_timer.is_set
	|| role.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| soft_preemption.is_set;
}

bool MplsTe::OpenConfig::LspStates::LspState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(signaling_protocol.yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(oper_status.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(protection_style_requested.yfilter)
	|| ydk::is_set(reoptimize_timer.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(soft_preemption.yfilter);
}

std::string MplsTe::OpenConfig::LspStates::LspState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/open-config/lsp-states/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::OpenConfig::LspStates::LspState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-state" <<"[tunnel-name='" <<tunnel_name <<"']" <<"[tunnel-type='" <<tunnel_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::OpenConfig::LspStates::LspState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_type.is_set || is_set(tunnel_type.yfilter)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (signaling_protocol.is_set || is_set(signaling_protocol.yfilter)) leaf_name_data.push_back(signaling_protocol.get_name_leafdata());
    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (oper_status.is_set || is_set(oper_status.yfilter)) leaf_name_data.push_back(oper_status.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (protection_style_requested.is_set || is_set(protection_style_requested.yfilter)) leaf_name_data.push_back(protection_style_requested.get_name_leafdata());
    if (reoptimize_timer.is_set || is_set(reoptimize_timer.yfilter)) leaf_name_data.push_back(reoptimize_timer.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (soft_preemption.is_set || is_set(soft_preemption.yfilter)) leaf_name_data.push_back(soft_preemption.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::OpenConfig::LspStates::LspState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::OpenConfig::LspStates::LspState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::OpenConfig::LspStates::LspState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
        tunnel_type.value_namespace = name_space;
        tunnel_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol = value;
        signaling_protocol.value_namespace = name_space;
        signaling_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-status")
    {
        oper_status = value;
        oper_status.value_namespace = name_space;
        oper_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-style-requested")
    {
        protection_style_requested = value;
        protection_style_requested.value_namespace = name_space;
        protection_style_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer = value;
        reoptimize_timer.value_namespace = name_space;
        reoptimize_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption = value;
        soft_preemption.value_namespace = name_space;
        soft_preemption.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::OpenConfig::LspStates::LspState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol.yfilter = yfilter;
    }
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "oper-status")
    {
        oper_status.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "protection-style-requested")
    {
        protection_style_requested.yfilter = yfilter;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption.yfilter = yfilter;
    }
}

bool MplsTe::OpenConfig::LspStates::LspState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-name" || name == "tunnel-type" || name == "name" || name == "type" || name == "signaling-protocol" || name == "local-id" || name == "source" || name == "description" || name == "admin-status" || name == "oper-status" || name == "metric" || name == "protection-style-requested" || name == "reoptimize-timer" || name == "role" || name == "setup-priority" || name == "hold-priority" || name == "soft-preemption")
        return true;
    return false;
}

MplsTe::OpenConfig::LspCounters::LspCounters()
{

    yang_name = "lsp-counters"; yang_parent_name = "open-config"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::OpenConfig::LspCounters::~LspCounters()
{
}

bool MplsTe::OpenConfig::LspCounters::has_data() const
{
    for (std::size_t index=0; index<lsp_counter.size(); index++)
    {
        if(lsp_counter[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::OpenConfig::LspCounters::has_operation() const
{
    for (std::size_t index=0; index<lsp_counter.size(); index++)
    {
        if(lsp_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::OpenConfig::LspCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/open-config/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::OpenConfig::LspCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::OpenConfig::LspCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::OpenConfig::LspCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-counter")
    {
        auto c = std::make_shared<MplsTe::OpenConfig::LspCounters::LspCounter>();
        c->parent = this;
        lsp_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::OpenConfig::LspCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : lsp_counter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::OpenConfig::LspCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::OpenConfig::LspCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::OpenConfig::LspCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-counter")
        return true;
    return false;
}

MplsTe::OpenConfig::LspCounters::LspCounter::LspCounter()
    :
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_type{YType::enumeration, "tunnel-type"},
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    bytes{YType::uint64, "bytes"},
    packets{YType::uint64, "packets"},
    path_changes{YType::uint64, "path-changes"},
    state_changes{YType::uint64, "state-changes"},
    online_time{YType::str, "online-time"},
    current_path_time{YType::str, "current-path-time"},
    next_reoptimization_time{YType::str, "next-reoptimization-time"}
{

    yang_name = "lsp-counter"; yang_parent_name = "lsp-counters"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::OpenConfig::LspCounters::LspCounter::~LspCounter()
{
}

bool MplsTe::OpenConfig::LspCounters::LspCounter::has_data() const
{
    return tunnel_name.is_set
	|| tunnel_type.is_set
	|| name.is_set
	|| type.is_set
	|| bytes.is_set
	|| packets.is_set
	|| path_changes.is_set
	|| state_changes.is_set
	|| online_time.is_set
	|| current_path_time.is_set
	|| next_reoptimization_time.is_set;
}

bool MplsTe::OpenConfig::LspCounters::LspCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(bytes.yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(path_changes.yfilter)
	|| ydk::is_set(state_changes.yfilter)
	|| ydk::is_set(online_time.yfilter)
	|| ydk::is_set(current_path_time.yfilter)
	|| ydk::is_set(next_reoptimization_time.yfilter);
}

std::string MplsTe::OpenConfig::LspCounters::LspCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/open-config/lsp-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::OpenConfig::LspCounters::LspCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-counter" <<"[tunnel-name='" <<tunnel_name <<"']" <<"[tunnel-type='" <<tunnel_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::OpenConfig::LspCounters::LspCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_type.is_set || is_set(tunnel_type.yfilter)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (path_changes.is_set || is_set(path_changes.yfilter)) leaf_name_data.push_back(path_changes.get_name_leafdata());
    if (state_changes.is_set || is_set(state_changes.yfilter)) leaf_name_data.push_back(state_changes.get_name_leafdata());
    if (online_time.is_set || is_set(online_time.yfilter)) leaf_name_data.push_back(online_time.get_name_leafdata());
    if (current_path_time.is_set || is_set(current_path_time.yfilter)) leaf_name_data.push_back(current_path_time.get_name_leafdata());
    if (next_reoptimization_time.is_set || is_set(next_reoptimization_time.yfilter)) leaf_name_data.push_back(next_reoptimization_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::OpenConfig::LspCounters::LspCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::OpenConfig::LspCounters::LspCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::OpenConfig::LspCounters::LspCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
        tunnel_type.value_namespace = name_space;
        tunnel_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-changes")
    {
        path_changes = value;
        path_changes.value_namespace = name_space;
        path_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-changes")
    {
        state_changes = value;
        state_changes.value_namespace = name_space;
        state_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "online-time")
    {
        online_time = value;
        online_time.value_namespace = name_space;
        online_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-path-time")
    {
        current_path_time = value;
        current_path_time.value_namespace = name_space;
        current_path_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-reoptimization-time")
    {
        next_reoptimization_time = value;
        next_reoptimization_time.value_namespace = name_space;
        next_reoptimization_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::OpenConfig::LspCounters::LspCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "path-changes")
    {
        path_changes.yfilter = yfilter;
    }
    if(value_path == "state-changes")
    {
        state_changes.yfilter = yfilter;
    }
    if(value_path == "online-time")
    {
        online_time.yfilter = yfilter;
    }
    if(value_path == "current-path-time")
    {
        current_path_time.yfilter = yfilter;
    }
    if(value_path == "next-reoptimization-time")
    {
        next_reoptimization_time.yfilter = yfilter;
    }
}

bool MplsTe::OpenConfig::LspCounters::LspCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-name" || name == "tunnel-type" || name == "name" || name == "type" || name == "bytes" || name == "packets" || name == "path-changes" || name == "state-changes" || name == "online-time" || name == "current-path-time" || name == "next-reoptimization-time")
        return true;
    return false;
}

MplsTe::LspOutOfResources::LspOutOfResources()
    :
    summary(std::make_shared<MplsTe::LspOutOfResources::Summary>())
{
    summary->parent = this;

    yang_name = "lsp-out-of-resources"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::LspOutOfResources::~LspOutOfResources()
{
}

bool MplsTe::LspOutOfResources::has_data() const
{
    return (summary !=  nullptr && summary->has_data());
}

bool MplsTe::LspOutOfResources::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsTe::LspOutOfResources::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::LspOutOfResources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-out-of-resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::LspOutOfResources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::LspOutOfResources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTe::LspOutOfResources::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::LspOutOfResources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void MplsTe::LspOutOfResources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::LspOutOfResources::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::LspOutOfResources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary")
        return true;
    return false;
}

MplsTe::LspOutOfResources::Summary::Summary()
    :
    transit_lsp_total_count{YType::uint32, "transit-lsp-total-count"},
    transit_lsp_unprotected_count{YType::uint32, "transit-lsp-unprotected-count"},
    lsp_oor_state{YType::enumeration, "lsp-oor-state"},
    lsp_oor_timestamp{YType::uint32, "lsp-oor-timestamp"},
    lsp_oor_green_recovery_time{YType::uint32, "lsp-oor-green-recovery-time"}
{

    yang_name = "summary"; yang_parent_name = "lsp-out-of-resources"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::LspOutOfResources::Summary::~Summary()
{
}

bool MplsTe::LspOutOfResources::Summary::has_data() const
{
    for (std::size_t index=0; index<lsp_oor_state_xr.size(); index++)
    {
        if(lsp_oor_state_xr[index]->has_data())
            return true;
    }
    return transit_lsp_total_count.is_set
	|| transit_lsp_unprotected_count.is_set
	|| lsp_oor_state.is_set
	|| lsp_oor_timestamp.is_set
	|| lsp_oor_green_recovery_time.is_set;
}

bool MplsTe::LspOutOfResources::Summary::has_operation() const
{
    for (std::size_t index=0; index<lsp_oor_state_xr.size(); index++)
    {
        if(lsp_oor_state_xr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(transit_lsp_total_count.yfilter)
	|| ydk::is_set(transit_lsp_unprotected_count.yfilter)
	|| ydk::is_set(lsp_oor_state.yfilter)
	|| ydk::is_set(lsp_oor_timestamp.yfilter)
	|| ydk::is_set(lsp_oor_green_recovery_time.yfilter);
}

std::string MplsTe::LspOutOfResources::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/lsp-out-of-resources/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::LspOutOfResources::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::LspOutOfResources::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transit_lsp_total_count.is_set || is_set(transit_lsp_total_count.yfilter)) leaf_name_data.push_back(transit_lsp_total_count.get_name_leafdata());
    if (transit_lsp_unprotected_count.is_set || is_set(transit_lsp_unprotected_count.yfilter)) leaf_name_data.push_back(transit_lsp_unprotected_count.get_name_leafdata());
    if (lsp_oor_state.is_set || is_set(lsp_oor_state.yfilter)) leaf_name_data.push_back(lsp_oor_state.get_name_leafdata());
    if (lsp_oor_timestamp.is_set || is_set(lsp_oor_timestamp.yfilter)) leaf_name_data.push_back(lsp_oor_timestamp.get_name_leafdata());
    if (lsp_oor_green_recovery_time.is_set || is_set(lsp_oor_green_recovery_time.yfilter)) leaf_name_data.push_back(lsp_oor_green_recovery_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::LspOutOfResources::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-oor-state-xr")
    {
        auto c = std::make_shared<MplsTe::LspOutOfResources::Summary::LspOorStateXr>();
        c->parent = this;
        lsp_oor_state_xr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::LspOutOfResources::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : lsp_oor_state_xr)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::LspOutOfResources::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transit-lsp-total-count")
    {
        transit_lsp_total_count = value;
        transit_lsp_total_count.value_namespace = name_space;
        transit_lsp_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transit-lsp-unprotected-count")
    {
        transit_lsp_unprotected_count = value;
        transit_lsp_unprotected_count.value_namespace = name_space;
        transit_lsp_unprotected_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-oor-state")
    {
        lsp_oor_state = value;
        lsp_oor_state.value_namespace = name_space;
        lsp_oor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-oor-timestamp")
    {
        lsp_oor_timestamp = value;
        lsp_oor_timestamp.value_namespace = name_space;
        lsp_oor_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-oor-green-recovery-time")
    {
        lsp_oor_green_recovery_time = value;
        lsp_oor_green_recovery_time.value_namespace = name_space;
        lsp_oor_green_recovery_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::LspOutOfResources::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transit-lsp-total-count")
    {
        transit_lsp_total_count.yfilter = yfilter;
    }
    if(value_path == "transit-lsp-unprotected-count")
    {
        transit_lsp_unprotected_count.yfilter = yfilter;
    }
    if(value_path == "lsp-oor-state")
    {
        lsp_oor_state.yfilter = yfilter;
    }
    if(value_path == "lsp-oor-timestamp")
    {
        lsp_oor_timestamp.yfilter = yfilter;
    }
    if(value_path == "lsp-oor-green-recovery-time")
    {
        lsp_oor_green_recovery_time.yfilter = yfilter;
    }
}

bool MplsTe::LspOutOfResources::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-oor-state-xr" || name == "transit-lsp-total-count" || name == "transit-lsp-unprotected-count" || name == "lsp-oor-state" || name == "lsp-oor-timestamp" || name == "lsp-oor-green-recovery-time")
        return true;
    return false;
}

MplsTe::LspOutOfResources::Summary::LspOorStateXr::LspOorStateXr()
    :
    lsp_oor_state{YType::enumeration, "lsp-oor-state"},
    threshold_transit_all{YType::uint32, "threshold-transit-all"},
    threshold_transit_unprotected{YType::uint32, "threshold-transit-unprotected"},
    te_metric_penalty{YType::uint32, "te-metric-penalty"},
    available_bw_percentage{YType::uint32, "available-bw-percentage"},
    transition_duration{YType::uint32, "transition-duration"},
    minimum_lsp_bandwidth{YType::uint32, "minimum-lsp-bandwidth"},
    accept_reopt{YType::boolean, "accept-reopt"}
    	,
    statistics(std::make_shared<MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics>())
{
    statistics->parent = this;

    yang_name = "lsp-oor-state-xr"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::LspOutOfResources::Summary::LspOorStateXr::~LspOorStateXr()
{
}

bool MplsTe::LspOutOfResources::Summary::LspOorStateXr::has_data() const
{
    return lsp_oor_state.is_set
	|| threshold_transit_all.is_set
	|| threshold_transit_unprotected.is_set
	|| te_metric_penalty.is_set
	|| available_bw_percentage.is_set
	|| transition_duration.is_set
	|| minimum_lsp_bandwidth.is_set
	|| accept_reopt.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::LspOutOfResources::Summary::LspOorStateXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_oor_state.yfilter)
	|| ydk::is_set(threshold_transit_all.yfilter)
	|| ydk::is_set(threshold_transit_unprotected.yfilter)
	|| ydk::is_set(te_metric_penalty.yfilter)
	|| ydk::is_set(available_bw_percentage.yfilter)
	|| ydk::is_set(transition_duration.yfilter)
	|| ydk::is_set(minimum_lsp_bandwidth.yfilter)
	|| ydk::is_set(accept_reopt.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::LspOutOfResources::Summary::LspOorStateXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/lsp-out-of-resources/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::LspOutOfResources::Summary::LspOorStateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-oor-state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::LspOutOfResources::Summary::LspOorStateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_oor_state.is_set || is_set(lsp_oor_state.yfilter)) leaf_name_data.push_back(lsp_oor_state.get_name_leafdata());
    if (threshold_transit_all.is_set || is_set(threshold_transit_all.yfilter)) leaf_name_data.push_back(threshold_transit_all.get_name_leafdata());
    if (threshold_transit_unprotected.is_set || is_set(threshold_transit_unprotected.yfilter)) leaf_name_data.push_back(threshold_transit_unprotected.get_name_leafdata());
    if (te_metric_penalty.is_set || is_set(te_metric_penalty.yfilter)) leaf_name_data.push_back(te_metric_penalty.get_name_leafdata());
    if (available_bw_percentage.is_set || is_set(available_bw_percentage.yfilter)) leaf_name_data.push_back(available_bw_percentage.get_name_leafdata());
    if (transition_duration.is_set || is_set(transition_duration.yfilter)) leaf_name_data.push_back(transition_duration.get_name_leafdata());
    if (minimum_lsp_bandwidth.is_set || is_set(minimum_lsp_bandwidth.yfilter)) leaf_name_data.push_back(minimum_lsp_bandwidth.get_name_leafdata());
    if (accept_reopt.is_set || is_set(accept_reopt.yfilter)) leaf_name_data.push_back(accept_reopt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::LspOutOfResources::Summary::LspOorStateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::LspOutOfResources::Summary::LspOorStateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTe::LspOutOfResources::Summary::LspOorStateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-oor-state")
    {
        lsp_oor_state = value;
        lsp_oor_state.value_namespace = name_space;
        lsp_oor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-transit-all")
    {
        threshold_transit_all = value;
        threshold_transit_all.value_namespace = name_space;
        threshold_transit_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-transit-unprotected")
    {
        threshold_transit_unprotected = value;
        threshold_transit_unprotected.value_namespace = name_space;
        threshold_transit_unprotected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric-penalty")
    {
        te_metric_penalty = value;
        te_metric_penalty.value_namespace = name_space;
        te_metric_penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bw-percentage")
    {
        available_bw_percentage = value;
        available_bw_percentage.value_namespace = name_space;
        available_bw_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transition-duration")
    {
        transition_duration = value;
        transition_duration.value_namespace = name_space;
        transition_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-lsp-bandwidth")
    {
        minimum_lsp_bandwidth = value;
        minimum_lsp_bandwidth.value_namespace = name_space;
        minimum_lsp_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-reopt")
    {
        accept_reopt = value;
        accept_reopt.value_namespace = name_space;
        accept_reopt.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::LspOutOfResources::Summary::LspOorStateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-oor-state")
    {
        lsp_oor_state.yfilter = yfilter;
    }
    if(value_path == "threshold-transit-all")
    {
        threshold_transit_all.yfilter = yfilter;
    }
    if(value_path == "threshold-transit-unprotected")
    {
        threshold_transit_unprotected.yfilter = yfilter;
    }
    if(value_path == "te-metric-penalty")
    {
        te_metric_penalty.yfilter = yfilter;
    }
    if(value_path == "available-bw-percentage")
    {
        available_bw_percentage.yfilter = yfilter;
    }
    if(value_path == "transition-duration")
    {
        transition_duration.yfilter = yfilter;
    }
    if(value_path == "minimum-lsp-bandwidth")
    {
        minimum_lsp_bandwidth.yfilter = yfilter;
    }
    if(value_path == "accept-reopt")
    {
        accept_reopt.yfilter = yfilter;
    }
}

bool MplsTe::LspOutOfResources::Summary::LspOorStateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "lsp-oor-state" || name == "threshold-transit-all" || name == "threshold-transit-unprotected" || name == "te-metric-penalty" || name == "available-bw-percentage" || name == "transition-duration" || name == "minimum-lsp-bandwidth" || name == "accept-reopt")
        return true;
    return false;
}

MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::Statistics()
    :
    transitions{YType::uint32, "transitions"},
    rejected_ls_ps_number{YType::uint32, "rejected-ls-ps-number"},
    accepted_ls_ps_number{YType::uint32, "accepted-ls-ps-number"},
    accepted_reopt_ls_ps_number{YType::uint32, "accepted-reopt-ls-ps-number"},
    rejected_reopt_ls_ps_number{YType::uint32, "rejected-reopt-ls-ps-number"}
{

    yang_name = "statistics"; yang_parent_name = "lsp-oor-state-xr"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::~Statistics()
{
}

bool MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::has_data() const
{
    return transitions.is_set
	|| rejected_ls_ps_number.is_set
	|| accepted_ls_ps_number.is_set
	|| accepted_reopt_ls_ps_number.is_set
	|| rejected_reopt_ls_ps_number.is_set;
}

bool MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transitions.yfilter)
	|| ydk::is_set(rejected_ls_ps_number.yfilter)
	|| ydk::is_set(accepted_ls_ps_number.yfilter)
	|| ydk::is_set(accepted_reopt_ls_ps_number.yfilter)
	|| ydk::is_set(rejected_reopt_ls_ps_number.yfilter);
}

std::string MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/lsp-out-of-resources/summary/lsp-oor-state-xr/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transitions.is_set || is_set(transitions.yfilter)) leaf_name_data.push_back(transitions.get_name_leafdata());
    if (rejected_ls_ps_number.is_set || is_set(rejected_ls_ps_number.yfilter)) leaf_name_data.push_back(rejected_ls_ps_number.get_name_leafdata());
    if (accepted_ls_ps_number.is_set || is_set(accepted_ls_ps_number.yfilter)) leaf_name_data.push_back(accepted_ls_ps_number.get_name_leafdata());
    if (accepted_reopt_ls_ps_number.is_set || is_set(accepted_reopt_ls_ps_number.yfilter)) leaf_name_data.push_back(accepted_reopt_ls_ps_number.get_name_leafdata());
    if (rejected_reopt_ls_ps_number.is_set || is_set(rejected_reopt_ls_ps_number.yfilter)) leaf_name_data.push_back(rejected_reopt_ls_ps_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transitions")
    {
        transitions = value;
        transitions.value_namespace = name_space;
        transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-ls-ps-number")
    {
        rejected_ls_ps_number = value;
        rejected_ls_ps_number.value_namespace = name_space;
        rejected_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-ls-ps-number")
    {
        accepted_ls_ps_number = value;
        accepted_ls_ps_number.value_namespace = name_space;
        accepted_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-reopt-ls-ps-number")
    {
        accepted_reopt_ls_ps_number = value;
        accepted_reopt_ls_ps_number.value_namespace = name_space;
        accepted_reopt_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-reopt-ls-ps-number")
    {
        rejected_reopt_ls_ps_number = value;
        rejected_reopt_ls_ps_number.value_namespace = name_space;
        rejected_reopt_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transitions")
    {
        transitions.yfilter = yfilter;
    }
    if(value_path == "rejected-ls-ps-number")
    {
        rejected_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "accepted-ls-ps-number")
    {
        accepted_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "accepted-reopt-ls-ps-number")
    {
        accepted_reopt_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "rejected-reopt-ls-ps-number")
    {
        rejected_reopt_ls_ps_number.yfilter = yfilter;
    }
}

bool MplsTe::LspOutOfResources::Summary::LspOorStateXr::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transitions" || name == "rejected-ls-ps-number" || name == "accepted-ls-ps-number" || name == "accepted-reopt-ls-ps-number" || name == "rejected-reopt-ls-ps-number")
        return true;
    return false;
}

MplsTe::Bfd::Bfd()
    :
    head_infos(std::make_shared<MplsTe::Bfd::HeadInfos>())
	,links(std::make_shared<MplsTe::Bfd::Links>())
	,tail_infos(std::make_shared<MplsTe::Bfd::TailInfos>())
	,summary(std::make_shared<MplsTe::Bfd::Summary>())
	,counters(std::make_shared<MplsTe::Bfd::Counters>())
{
    head_infos->parent = this;
    links->parent = this;
    tail_infos->parent = this;
    summary->parent = this;
    counters->parent = this;

    yang_name = "bfd"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Bfd::~Bfd()
{
}

bool MplsTe::Bfd::has_data() const
{
    return (head_infos !=  nullptr && head_infos->has_data())
	|| (links !=  nullptr && links->has_data())
	|| (tail_infos !=  nullptr && tail_infos->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (counters !=  nullptr && counters->has_data());
}

bool MplsTe::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| (head_infos !=  nullptr && head_infos->has_operation())
	|| (links !=  nullptr && links->has_operation())
	|| (tail_infos !=  nullptr && tail_infos->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (counters !=  nullptr && counters->has_operation());
}

std::string MplsTe::Bfd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head-infos")
    {
        if(head_infos == nullptr)
        {
            head_infos = std::make_shared<MplsTe::Bfd::HeadInfos>();
        }
        return head_infos;
    }

    if(child_yang_name == "links")
    {
        if(links == nullptr)
        {
            links = std::make_shared<MplsTe::Bfd::Links>();
        }
        return links;
    }

    if(child_yang_name == "tail-infos")
    {
        if(tail_infos == nullptr)
        {
            tail_infos = std::make_shared<MplsTe::Bfd::TailInfos>();
        }
        return tail_infos;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTe::Bfd::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<MplsTe::Bfd::Counters>();
        }
        return counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(head_infos != nullptr)
    {
        children["head-infos"] = head_infos;
    }

    if(links != nullptr)
    {
        children["links"] = links;
    }

    if(tail_infos != nullptr)
    {
        children["tail-infos"] = tail_infos;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    return children;
}

void MplsTe::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head-infos" || name == "links" || name == "tail-infos" || name == "summary" || name == "counters")
        return true;
    return false;
}

MplsTe::Bfd::HeadInfos::HeadInfos()
{

    yang_name = "head-infos"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Bfd::HeadInfos::~HeadInfos()
{
}

bool MplsTe::Bfd::HeadInfos::has_data() const
{
    for (std::size_t index=0; index<head_info.size(); index++)
    {
        if(head_info[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Bfd::HeadInfos::has_operation() const
{
    for (std::size_t index=0; index<head_info.size(); index++)
    {
        if(head_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Bfd::HeadInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::HeadInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::HeadInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Bfd::HeadInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head-info")
    {
        auto c = std::make_shared<MplsTe::Bfd::HeadInfos::HeadInfo>();
        c->parent = this;
        head_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Bfd::HeadInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : head_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Bfd::HeadInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Bfd::HeadInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Bfd::HeadInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head-info")
        return true;
    return false;
}

MplsTe::Bfd::HeadInfos::HeadInfo::HeadInfo()
    :
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_name_xr{YType::str, "tunnel-name-xr"},
    destination_address{YType::str, "destination-address"},
    lspbfd_type{YType::enumeration, "lspbfd-type"}
    	,
    current_lspbfd_info(std::make_shared<MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo>())
	,standby_lspbfd_info(std::make_shared<MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo>())
	,reoptimized_lspbfd_info(std::make_shared<MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo>())
{
    current_lspbfd_info->parent = this;
    standby_lspbfd_info->parent = this;
    reoptimized_lspbfd_info->parent = this;

    yang_name = "head-info"; yang_parent_name = "head-infos"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Bfd::HeadInfos::HeadInfo::~HeadInfo()
{
}

bool MplsTe::Bfd::HeadInfos::HeadInfo::has_data() const
{
    return tunnel_name.is_set
	|| tunnel_name_xr.is_set
	|| destination_address.is_set
	|| lspbfd_type.is_set
	|| (current_lspbfd_info !=  nullptr && current_lspbfd_info->has_data())
	|| (standby_lspbfd_info !=  nullptr && standby_lspbfd_info->has_data())
	|| (reoptimized_lspbfd_info !=  nullptr && reoptimized_lspbfd_info->has_data());
}

bool MplsTe::Bfd::HeadInfos::HeadInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_name_xr.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(lspbfd_type.yfilter)
	|| (current_lspbfd_info !=  nullptr && current_lspbfd_info->has_operation())
	|| (standby_lspbfd_info !=  nullptr && standby_lspbfd_info->has_operation())
	|| (reoptimized_lspbfd_info !=  nullptr && reoptimized_lspbfd_info->has_operation());
}

std::string MplsTe::Bfd::HeadInfos::HeadInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/head-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::HeadInfos::HeadInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-info" <<"[tunnel-name='" <<tunnel_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::HeadInfos::HeadInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_name_xr.is_set || is_set(tunnel_name_xr.yfilter)) leaf_name_data.push_back(tunnel_name_xr.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (lspbfd_type.is_set || is_set(lspbfd_type.yfilter)) leaf_name_data.push_back(lspbfd_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Bfd::HeadInfos::HeadInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-lspbfd-info")
    {
        if(current_lspbfd_info == nullptr)
        {
            current_lspbfd_info = std::make_shared<MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo>();
        }
        return current_lspbfd_info;
    }

    if(child_yang_name == "standby-lspbfd-info")
    {
        if(standby_lspbfd_info == nullptr)
        {
            standby_lspbfd_info = std::make_shared<MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo>();
        }
        return standby_lspbfd_info;
    }

    if(child_yang_name == "reoptimized-lspbfd-info")
    {
        if(reoptimized_lspbfd_info == nullptr)
        {
            reoptimized_lspbfd_info = std::make_shared<MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo>();
        }
        return reoptimized_lspbfd_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Bfd::HeadInfos::HeadInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(current_lspbfd_info != nullptr)
    {
        children["current-lspbfd-info"] = current_lspbfd_info;
    }

    if(standby_lspbfd_info != nullptr)
    {
        children["standby-lspbfd-info"] = standby_lspbfd_info;
    }

    if(reoptimized_lspbfd_info != nullptr)
    {
        children["reoptimized-lspbfd-info"] = reoptimized_lspbfd_info;
    }

    return children;
}

void MplsTe::Bfd::HeadInfos::HeadInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr = value;
        tunnel_name_xr.value_namespace = name_space;
        tunnel_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspbfd-type")
    {
        lspbfd_type = value;
        lspbfd_type.value_namespace = name_space;
        lspbfd_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::HeadInfos::HeadInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "lspbfd-type")
    {
        lspbfd_type.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::HeadInfos::HeadInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-lspbfd-info" || name == "standby-lspbfd-info" || name == "reoptimized-lspbfd-info" || name == "tunnel-name" || name == "tunnel-name-xr" || name == "destination-address" || name == "lspbfd-type")
        return true;
    return false;
}

MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::CurrentLspbfdInfo()
    :
    lsp_id{YType::uint16, "lsp-id"},
    bfd_session_state{YType::enumeration, "bfd-session-state"}
{

    yang_name = "current-lspbfd-info"; yang_parent_name = "head-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::~CurrentLspbfdInfo()
{
}

bool MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::has_data() const
{
    return lsp_id.is_set
	|| bfd_session_state.is_set;
}

bool MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(bfd_session_state.yfilter);
}

std::string MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-lspbfd-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (bfd_session_state.is_set || is_set(bfd_session_state.yfilter)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
        bfd_session_state.value_namespace = name_space;
        bfd_session_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "bfd-session-state")
        return true;
    return false;
}

MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::StandbyLspbfdInfo()
    :
    lsp_id{YType::uint16, "lsp-id"},
    bfd_session_state{YType::enumeration, "bfd-session-state"}
{

    yang_name = "standby-lspbfd-info"; yang_parent_name = "head-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::~StandbyLspbfdInfo()
{
}

bool MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::has_data() const
{
    return lsp_id.is_set
	|| bfd_session_state.is_set;
}

bool MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(bfd_session_state.yfilter);
}

std::string MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-lspbfd-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (bfd_session_state.is_set || is_set(bfd_session_state.yfilter)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
        bfd_session_state.value_namespace = name_space;
        bfd_session_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "bfd-session-state")
        return true;
    return false;
}

MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::ReoptimizedLspbfdInfo()
    :
    lsp_id{YType::uint16, "lsp-id"},
    bfd_session_state{YType::enumeration, "bfd-session-state"}
{

    yang_name = "reoptimized-lspbfd-info"; yang_parent_name = "head-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::~ReoptimizedLspbfdInfo()
{
}

bool MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::has_data() const
{
    return lsp_id.is_set
	|| bfd_session_state.is_set;
}

bool MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(bfd_session_state.yfilter);
}

std::string MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reoptimized-lspbfd-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (bfd_session_state.is_set || is_set(bfd_session_state.yfilter)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
        bfd_session_state.value_namespace = name_space;
        bfd_session_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "bfd-session-state")
        return true;
    return false;
}

MplsTe::Bfd::Links::Links()
{

    yang_name = "links"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Bfd::Links::~Links()
{
}

bool MplsTe::Bfd::Links::has_data() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Bfd::Links::has_operation() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Bfd::Links::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::Links::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::Links::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Bfd::Links::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        auto c = std::make_shared<MplsTe::Bfd::Links::Link>();
        c->parent = this;
        link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Bfd::Links::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Bfd::Links::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Bfd::Links::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Bfd::Links::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link")
        return true;
    return false;
}

MplsTe::Bfd::Links::Link::Link()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "link"; yang_parent_name = "links"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Bfd::Links::Link::~Link()
{
}

bool MplsTe::Bfd::Links::Link::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return interface_name.is_set;
}

bool MplsTe::Bfd::Links::Link::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string MplsTe::Bfd::Links::Link::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::Links::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::Links::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Bfd::Links::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<MplsTe::Bfd::Links::Link::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Bfd::Links::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Bfd::Links::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::Links::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::Links::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "interface-name")
        return true;
    return false;
}

MplsTe::Bfd::Links::Link::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    is_bfd_up{YType::boolean, "is-bfd-up"}
{

    yang_name = "neighbor"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::Bfd::Links::Link::Neighbor::~Neighbor()
{
}

bool MplsTe::Bfd::Links::Link::Neighbor::has_data() const
{
    return neighbor_address.is_set
	|| is_bfd_up.is_set;
}

bool MplsTe::Bfd::Links::Link::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(is_bfd_up.yfilter);
}

std::string MplsTe::Bfd::Links::Link::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::Links::Link::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (is_bfd_up.is_set || is_set(is_bfd_up.yfilter)) leaf_name_data.push_back(is_bfd_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Bfd::Links::Link::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Bfd::Links::Link::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Bfd::Links::Link::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bfd-up")
    {
        is_bfd_up = value;
        is_bfd_up.value_namespace = name_space;
        is_bfd_up.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::Links::Link::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "is-bfd-up")
    {
        is_bfd_up.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::Links::Link::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "is-bfd-up")
        return true;
    return false;
}

MplsTe::Bfd::TailInfos::TailInfos()
{

    yang_name = "tail-infos"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Bfd::TailInfos::~TailInfos()
{
}

bool MplsTe::Bfd::TailInfos::has_data() const
{
    for (std::size_t index=0; index<tail_info.size(); index++)
    {
        if(tail_info[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Bfd::TailInfos::has_operation() const
{
    for (std::size_t index=0; index<tail_info.size(); index++)
    {
        if(tail_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Bfd::TailInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::TailInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tail-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::TailInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Bfd::TailInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tail-info")
    {
        auto c = std::make_shared<MplsTe::Bfd::TailInfos::TailInfo>();
        c->parent = this;
        tail_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Bfd::TailInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tail_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Bfd::TailInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Bfd::TailInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Bfd::TailInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tail-info")
        return true;
    return false;
}

MplsTe::Bfd::TailInfos::TailInfo::TailInfo()
    :
    source_address{YType::str, "source-address"},
    tunnel_id{YType::int32, "tunnel-id"},
    lsp_id{YType::int32, "lsp-id"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    ctype{YType::enumeration, "ctype"},
    p2mp_id{YType::int32, "p2mp-id"},
    signaled_name{YType::str, "signaled-name"},
    bfd_session_state{YType::enumeration, "bfd-session-state"}
    	,
    lsp_fec(std::make_shared<MplsTe::Bfd::TailInfos::TailInfo::LspFec>())
{
    lsp_fec->parent = this;

    yang_name = "tail-info"; yang_parent_name = "tail-infos"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Bfd::TailInfos::TailInfo::~TailInfo()
{
}

bool MplsTe::Bfd::TailInfos::TailInfo::has_data() const
{
    return source_address.is_set
	|| tunnel_id.is_set
	|| lsp_id.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| ctype.is_set
	|| p2mp_id.is_set
	|| signaled_name.is_set
	|| bfd_session_state.is_set
	|| (lsp_fec !=  nullptr && lsp_fec->has_data());
}

bool MplsTe::Bfd::TailInfos::TailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(signaled_name.yfilter)
	|| ydk::is_set(bfd_session_state.yfilter)
	|| (lsp_fec !=  nullptr && lsp_fec->has_operation());
}

std::string MplsTe::Bfd::TailInfos::TailInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/tail-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::TailInfos::TailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tail-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::TailInfos::TailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (bfd_session_state.is_set || is_set(bfd_session_state.yfilter)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Bfd::TailInfos::TailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-fec")
    {
        if(lsp_fec == nullptr)
        {
            lsp_fec = std::make_shared<MplsTe::Bfd::TailInfos::TailInfo::LspFec>();
        }
        return lsp_fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Bfd::TailInfos::TailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lsp_fec != nullptr)
    {
        children["lsp-fec"] = lsp_fec;
    }

    return children;
}

void MplsTe::Bfd::TailInfos::TailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
        signaled_name.value_namespace = name_space;
        signaled_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
        bfd_session_state.value_namespace = name_space;
        bfd_session_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::TailInfos::TailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "signaled-name")
    {
        signaled_name.yfilter = yfilter;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::TailInfos::TailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-fec" || name == "source-address" || name == "tunnel-id" || name == "lsp-id" || name == "destination-address" || name == "extended-tunnel-id" || name == "ctype" || name == "p2mp-id" || name == "signaled-name" || name == "bfd-session-state")
        return true;
    return false;
}

MplsTe::Bfd::TailInfos::TailInfo::LspFec::LspFec()
    :
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "lsp-fec"; yang_parent_name = "tail-info"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Bfd::TailInfos::TailInfo::LspFec::~LspFec()
{
}

bool MplsTe::Bfd::TailInfos::TailInfo::LspFec::has_data() const
{
    return fec_lsp_id.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::Bfd::TailInfos::TailInfo::LspFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::Bfd::TailInfos::TailInfo::LspFec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/tail-infos/tail-info/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::TailInfos::TailInfo::LspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::TailInfos::TailInfo::LspFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Bfd::TailInfos::TailInfo::LspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Bfd::TailInfos::TailInfo::LspFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTe::Bfd::TailInfos::TailInfo::LspFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
        fec_lsp_id.value_namespace = name_space;
        fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
        fec_vrf.value_namespace = name_space;
        fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::TailInfos::TailInfo::LspFec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::TailInfos::TailInfo::LspFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-lsp-id" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-vrf")
        return true;
    return false;
}

MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "lsp-fec"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| p2p_lsp_destination.is_set
	|| fec_destination_p2mp_id.is_set;
}

bool MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter);
}

std::string MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/tail-infos/tail-info/lsp-fec/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
        p2p_lsp_destination.value_namespace = name_space;
        p2p_lsp_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
        fec_destination_p2mp_id.value_namespace = name_space;
        fec_destination_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination.yfilter = yfilter;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "p2p-lsp-destination" || name == "fec-destination-p2mp-id")
        return true;
    return false;
}

MplsTe::Bfd::Summary::Summary()
    :
    tunnel_count_total{YType::uint16, "tunnel-count-total"},
    tunnel_count_bfd_enabled{YType::uint16, "tunnel-count-bfd-enabled"},
    tunnel_count_session_up{YType::uint16, "tunnel-count-session-up"},
    tunnel_count_sbfd_enabled{YType::uint16, "tunnel-count-sbfd-enabled"},
    tunnel_count_sbfd_session_up{YType::uint16, "tunnel-count-sbfd-session-up"},
    head_lsp_count_session_created{YType::uint16, "head-lsp-count-session-created"},
    head_lsp_count_up{YType::uint16, "head-lsp-count-up"},
    tail_lsp_count_session_created{YType::uint16, "tail-lsp-count-session-created"},
    tail_lsp_count_session_up{YType::uint16, "tail-lsp-count-session-up"},
    head_lsp_count_sbfd_session_created{YType::uint16, "head-lsp-count-sbfd-session-created"},
    head_lsp_count_sbfd_up{YType::uint16, "head-lsp-count-sbfd-up"},
    link_count_bfd_enabled{YType::uint16, "link-count-bfd-enabled"},
    link_count_session_created{YType::uint16, "link-count-session-created"},
    link_count_session_up{YType::uint16, "link-count-session-up"}
{

    yang_name = "summary"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Bfd::Summary::~Summary()
{
}

bool MplsTe::Bfd::Summary::has_data() const
{
    return tunnel_count_total.is_set
	|| tunnel_count_bfd_enabled.is_set
	|| tunnel_count_session_up.is_set
	|| tunnel_count_sbfd_enabled.is_set
	|| tunnel_count_sbfd_session_up.is_set
	|| head_lsp_count_session_created.is_set
	|| head_lsp_count_up.is_set
	|| tail_lsp_count_session_created.is_set
	|| tail_lsp_count_session_up.is_set
	|| head_lsp_count_sbfd_session_created.is_set
	|| head_lsp_count_sbfd_up.is_set
	|| link_count_bfd_enabled.is_set
	|| link_count_session_created.is_set
	|| link_count_session_up.is_set;
}

bool MplsTe::Bfd::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_count_total.yfilter)
	|| ydk::is_set(tunnel_count_bfd_enabled.yfilter)
	|| ydk::is_set(tunnel_count_session_up.yfilter)
	|| ydk::is_set(tunnel_count_sbfd_enabled.yfilter)
	|| ydk::is_set(tunnel_count_sbfd_session_up.yfilter)
	|| ydk::is_set(head_lsp_count_session_created.yfilter)
	|| ydk::is_set(head_lsp_count_up.yfilter)
	|| ydk::is_set(tail_lsp_count_session_created.yfilter)
	|| ydk::is_set(tail_lsp_count_session_up.yfilter)
	|| ydk::is_set(head_lsp_count_sbfd_session_created.yfilter)
	|| ydk::is_set(head_lsp_count_sbfd_up.yfilter)
	|| ydk::is_set(link_count_bfd_enabled.yfilter)
	|| ydk::is_set(link_count_session_created.yfilter)
	|| ydk::is_set(link_count_session_up.yfilter);
}

std::string MplsTe::Bfd::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_count_total.is_set || is_set(tunnel_count_total.yfilter)) leaf_name_data.push_back(tunnel_count_total.get_name_leafdata());
    if (tunnel_count_bfd_enabled.is_set || is_set(tunnel_count_bfd_enabled.yfilter)) leaf_name_data.push_back(tunnel_count_bfd_enabled.get_name_leafdata());
    if (tunnel_count_session_up.is_set || is_set(tunnel_count_session_up.yfilter)) leaf_name_data.push_back(tunnel_count_session_up.get_name_leafdata());
    if (tunnel_count_sbfd_enabled.is_set || is_set(tunnel_count_sbfd_enabled.yfilter)) leaf_name_data.push_back(tunnel_count_sbfd_enabled.get_name_leafdata());
    if (tunnel_count_sbfd_session_up.is_set || is_set(tunnel_count_sbfd_session_up.yfilter)) leaf_name_data.push_back(tunnel_count_sbfd_session_up.get_name_leafdata());
    if (head_lsp_count_session_created.is_set || is_set(head_lsp_count_session_created.yfilter)) leaf_name_data.push_back(head_lsp_count_session_created.get_name_leafdata());
    if (head_lsp_count_up.is_set || is_set(head_lsp_count_up.yfilter)) leaf_name_data.push_back(head_lsp_count_up.get_name_leafdata());
    if (tail_lsp_count_session_created.is_set || is_set(tail_lsp_count_session_created.yfilter)) leaf_name_data.push_back(tail_lsp_count_session_created.get_name_leafdata());
    if (tail_lsp_count_session_up.is_set || is_set(tail_lsp_count_session_up.yfilter)) leaf_name_data.push_back(tail_lsp_count_session_up.get_name_leafdata());
    if (head_lsp_count_sbfd_session_created.is_set || is_set(head_lsp_count_sbfd_session_created.yfilter)) leaf_name_data.push_back(head_lsp_count_sbfd_session_created.get_name_leafdata());
    if (head_lsp_count_sbfd_up.is_set || is_set(head_lsp_count_sbfd_up.yfilter)) leaf_name_data.push_back(head_lsp_count_sbfd_up.get_name_leafdata());
    if (link_count_bfd_enabled.is_set || is_set(link_count_bfd_enabled.yfilter)) leaf_name_data.push_back(link_count_bfd_enabled.get_name_leafdata());
    if (link_count_session_created.is_set || is_set(link_count_session_created.yfilter)) leaf_name_data.push_back(link_count_session_created.get_name_leafdata());
    if (link_count_session_up.is_set || is_set(link_count_session_up.yfilter)) leaf_name_data.push_back(link_count_session_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Bfd::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Bfd::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Bfd::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-count-total")
    {
        tunnel_count_total = value;
        tunnel_count_total.value_namespace = name_space;
        tunnel_count_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-count-bfd-enabled")
    {
        tunnel_count_bfd_enabled = value;
        tunnel_count_bfd_enabled.value_namespace = name_space;
        tunnel_count_bfd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-count-session-up")
    {
        tunnel_count_session_up = value;
        tunnel_count_session_up.value_namespace = name_space;
        tunnel_count_session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-count-sbfd-enabled")
    {
        tunnel_count_sbfd_enabled = value;
        tunnel_count_sbfd_enabled.value_namespace = name_space;
        tunnel_count_sbfd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-count-sbfd-session-up")
    {
        tunnel_count_sbfd_session_up = value;
        tunnel_count_sbfd_session_up.value_namespace = name_space;
        tunnel_count_sbfd_session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "head-lsp-count-session-created")
    {
        head_lsp_count_session_created = value;
        head_lsp_count_session_created.value_namespace = name_space;
        head_lsp_count_session_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "head-lsp-count-up")
    {
        head_lsp_count_up = value;
        head_lsp_count_up.value_namespace = name_space;
        head_lsp_count_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail-lsp-count-session-created")
    {
        tail_lsp_count_session_created = value;
        tail_lsp_count_session_created.value_namespace = name_space;
        tail_lsp_count_session_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail-lsp-count-session-up")
    {
        tail_lsp_count_session_up = value;
        tail_lsp_count_session_up.value_namespace = name_space;
        tail_lsp_count_session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "head-lsp-count-sbfd-session-created")
    {
        head_lsp_count_sbfd_session_created = value;
        head_lsp_count_sbfd_session_created.value_namespace = name_space;
        head_lsp_count_sbfd_session_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "head-lsp-count-sbfd-up")
    {
        head_lsp_count_sbfd_up = value;
        head_lsp_count_sbfd_up.value_namespace = name_space;
        head_lsp_count_sbfd_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-count-bfd-enabled")
    {
        link_count_bfd_enabled = value;
        link_count_bfd_enabled.value_namespace = name_space;
        link_count_bfd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-count-session-created")
    {
        link_count_session_created = value;
        link_count_session_created.value_namespace = name_space;
        link_count_session_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-count-session-up")
    {
        link_count_session_up = value;
        link_count_session_up.value_namespace = name_space;
        link_count_session_up.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-count-total")
    {
        tunnel_count_total.yfilter = yfilter;
    }
    if(value_path == "tunnel-count-bfd-enabled")
    {
        tunnel_count_bfd_enabled.yfilter = yfilter;
    }
    if(value_path == "tunnel-count-session-up")
    {
        tunnel_count_session_up.yfilter = yfilter;
    }
    if(value_path == "tunnel-count-sbfd-enabled")
    {
        tunnel_count_sbfd_enabled.yfilter = yfilter;
    }
    if(value_path == "tunnel-count-sbfd-session-up")
    {
        tunnel_count_sbfd_session_up.yfilter = yfilter;
    }
    if(value_path == "head-lsp-count-session-created")
    {
        head_lsp_count_session_created.yfilter = yfilter;
    }
    if(value_path == "head-lsp-count-up")
    {
        head_lsp_count_up.yfilter = yfilter;
    }
    if(value_path == "tail-lsp-count-session-created")
    {
        tail_lsp_count_session_created.yfilter = yfilter;
    }
    if(value_path == "tail-lsp-count-session-up")
    {
        tail_lsp_count_session_up.yfilter = yfilter;
    }
    if(value_path == "head-lsp-count-sbfd-session-created")
    {
        head_lsp_count_sbfd_session_created.yfilter = yfilter;
    }
    if(value_path == "head-lsp-count-sbfd-up")
    {
        head_lsp_count_sbfd_up.yfilter = yfilter;
    }
    if(value_path == "link-count-bfd-enabled")
    {
        link_count_bfd_enabled.yfilter = yfilter;
    }
    if(value_path == "link-count-session-created")
    {
        link_count_session_created.yfilter = yfilter;
    }
    if(value_path == "link-count-session-up")
    {
        link_count_session_up.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-count-total" || name == "tunnel-count-bfd-enabled" || name == "tunnel-count-session-up" || name == "tunnel-count-sbfd-enabled" || name == "tunnel-count-sbfd-session-up" || name == "head-lsp-count-session-created" || name == "head-lsp-count-up" || name == "tail-lsp-count-session-created" || name == "tail-lsp-count-session-up" || name == "head-lsp-count-sbfd-session-created" || name == "head-lsp-count-sbfd-up" || name == "link-count-bfd-enabled" || name == "link-count-session-created" || name == "link-count-session-up")
        return true;
    return false;
}

MplsTe::Bfd::Counters::Counters()
    :
    last_cleared_timestamp{YType::uint32, "last-cleared-timestamp"}
    	,
    bfd_over_lsp_head_counters(std::make_shared<MplsTe::Bfd::Counters::BfdOverLspHeadCounters>())
	,sbfd_over_lsp_head_counters(std::make_shared<MplsTe::Bfd::Counters::SbfdOverLspHeadCounters>())
	,bfd_over_lsp_tail_counters(std::make_shared<MplsTe::Bfd::Counters::BfdOverLspTailCounters>())
	,bf_do_lm_counters(std::make_shared<MplsTe::Bfd::Counters::BfDoLmCounters>())
{
    bfd_over_lsp_head_counters->parent = this;
    sbfd_over_lsp_head_counters->parent = this;
    bfd_over_lsp_tail_counters->parent = this;
    bf_do_lm_counters->parent = this;

    yang_name = "counters"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Bfd::Counters::~Counters()
{
}

bool MplsTe::Bfd::Counters::has_data() const
{
    return last_cleared_timestamp.is_set
	|| (bfd_over_lsp_head_counters !=  nullptr && bfd_over_lsp_head_counters->has_data())
	|| (sbfd_over_lsp_head_counters !=  nullptr && sbfd_over_lsp_head_counters->has_data())
	|| (bfd_over_lsp_tail_counters !=  nullptr && bfd_over_lsp_tail_counters->has_data())
	|| (bf_do_lm_counters !=  nullptr && bf_do_lm_counters->has_data());
}

bool MplsTe::Bfd::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_cleared_timestamp.yfilter)
	|| (bfd_over_lsp_head_counters !=  nullptr && bfd_over_lsp_head_counters->has_operation())
	|| (sbfd_over_lsp_head_counters !=  nullptr && sbfd_over_lsp_head_counters->has_operation())
	|| (bfd_over_lsp_tail_counters !=  nullptr && bfd_over_lsp_tail_counters->has_operation())
	|| (bf_do_lm_counters !=  nullptr && bf_do_lm_counters->has_operation());
}

std::string MplsTe::Bfd::Counters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.yfilter)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Bfd::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-over-lsp-head-counters")
    {
        if(bfd_over_lsp_head_counters == nullptr)
        {
            bfd_over_lsp_head_counters = std::make_shared<MplsTe::Bfd::Counters::BfdOverLspHeadCounters>();
        }
        return bfd_over_lsp_head_counters;
    }

    if(child_yang_name == "sbfd-over-lsp-head-counters")
    {
        if(sbfd_over_lsp_head_counters == nullptr)
        {
            sbfd_over_lsp_head_counters = std::make_shared<MplsTe::Bfd::Counters::SbfdOverLspHeadCounters>();
        }
        return sbfd_over_lsp_head_counters;
    }

    if(child_yang_name == "bfd-over-lsp-tail-counters")
    {
        if(bfd_over_lsp_tail_counters == nullptr)
        {
            bfd_over_lsp_tail_counters = std::make_shared<MplsTe::Bfd::Counters::BfdOverLspTailCounters>();
        }
        return bfd_over_lsp_tail_counters;
    }

    if(child_yang_name == "bf-do-lm-counters")
    {
        if(bf_do_lm_counters == nullptr)
        {
            bf_do_lm_counters = std::make_shared<MplsTe::Bfd::Counters::BfDoLmCounters>();
        }
        return bf_do_lm_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Bfd::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bfd_over_lsp_head_counters != nullptr)
    {
        children["bfd-over-lsp-head-counters"] = bfd_over_lsp_head_counters;
    }

    if(sbfd_over_lsp_head_counters != nullptr)
    {
        children["sbfd-over-lsp-head-counters"] = sbfd_over_lsp_head_counters;
    }

    if(bfd_over_lsp_tail_counters != nullptr)
    {
        children["bfd-over-lsp-tail-counters"] = bfd_over_lsp_tail_counters;
    }

    if(bf_do_lm_counters != nullptr)
    {
        children["bf-do-lm-counters"] = bf_do_lm_counters;
    }

    return children;
}

void MplsTe::Bfd::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
        last_cleared_timestamp.value_namespace = name_space;
        last_cleared_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-over-lsp-head-counters" || name == "sbfd-over-lsp-head-counters" || name == "bfd-over-lsp-tail-counters" || name == "bf-do-lm-counters" || name == "last-cleared-timestamp")
        return true;
    return false;
}

MplsTe::Bfd::Counters::BfdOverLspHeadCounters::BfdOverLspHeadCounters()
    :
    session_create_events{YType::uint32, "session-create-events"},
    session_up_events{YType::uint32, "session-up-events"},
    session_creation_failed_events{YType::uint32, "session-creation-failed-events"},
    session_down_events{YType::uint32, "session-down-events"},
    session_admin_down_events{YType::uint32, "session-admin-down-events"},
    session_gracefully_delete_events{YType::uint32, "session-gracefully-delete-events"},
    session_non_gracefully_delete_events{YType::uint32, "session-non-gracefully-delete-events"},
    session_create_timeout_events{YType::uint32, "session-create-timeout-events"},
    session_replay_events{YType::uint32, "session-replay-events"}
{

    yang_name = "bfd-over-lsp-head-counters"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Bfd::Counters::BfdOverLspHeadCounters::~BfdOverLspHeadCounters()
{
}

bool MplsTe::Bfd::Counters::BfdOverLspHeadCounters::has_data() const
{
    return session_create_events.is_set
	|| session_up_events.is_set
	|| session_creation_failed_events.is_set
	|| session_down_events.is_set
	|| session_admin_down_events.is_set
	|| session_gracefully_delete_events.is_set
	|| session_non_gracefully_delete_events.is_set
	|| session_create_timeout_events.is_set
	|| session_replay_events.is_set;
}

bool MplsTe::Bfd::Counters::BfdOverLspHeadCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_create_events.yfilter)
	|| ydk::is_set(session_up_events.yfilter)
	|| ydk::is_set(session_creation_failed_events.yfilter)
	|| ydk::is_set(session_down_events.yfilter)
	|| ydk::is_set(session_admin_down_events.yfilter)
	|| ydk::is_set(session_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_non_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_create_timeout_events.yfilter)
	|| ydk::is_set(session_replay_events.yfilter);
}

std::string MplsTe::Bfd::Counters::BfdOverLspHeadCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::Counters::BfdOverLspHeadCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-over-lsp-head-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::Counters::BfdOverLspHeadCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_create_events.is_set || is_set(session_create_events.yfilter)) leaf_name_data.push_back(session_create_events.get_name_leafdata());
    if (session_up_events.is_set || is_set(session_up_events.yfilter)) leaf_name_data.push_back(session_up_events.get_name_leafdata());
    if (session_creation_failed_events.is_set || is_set(session_creation_failed_events.yfilter)) leaf_name_data.push_back(session_creation_failed_events.get_name_leafdata());
    if (session_down_events.is_set || is_set(session_down_events.yfilter)) leaf_name_data.push_back(session_down_events.get_name_leafdata());
    if (session_admin_down_events.is_set || is_set(session_admin_down_events.yfilter)) leaf_name_data.push_back(session_admin_down_events.get_name_leafdata());
    if (session_gracefully_delete_events.is_set || is_set(session_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_gracefully_delete_events.get_name_leafdata());
    if (session_non_gracefully_delete_events.is_set || is_set(session_non_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_non_gracefully_delete_events.get_name_leafdata());
    if (session_create_timeout_events.is_set || is_set(session_create_timeout_events.yfilter)) leaf_name_data.push_back(session_create_timeout_events.get_name_leafdata());
    if (session_replay_events.is_set || is_set(session_replay_events.yfilter)) leaf_name_data.push_back(session_replay_events.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Bfd::Counters::BfdOverLspHeadCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Bfd::Counters::BfdOverLspHeadCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Bfd::Counters::BfdOverLspHeadCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-create-events")
    {
        session_create_events = value;
        session_create_events.value_namespace = name_space;
        session_create_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up-events")
    {
        session_up_events = value;
        session_up_events.value_namespace = name_space;
        session_up_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events = value;
        session_creation_failed_events.value_namespace = name_space;
        session_creation_failed_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-down-events")
    {
        session_down_events = value;
        session_down_events.value_namespace = name_space;
        session_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events = value;
        session_admin_down_events.value_namespace = name_space;
        session_admin_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events = value;
        session_gracefully_delete_events.value_namespace = name_space;
        session_gracefully_delete_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events = value;
        session_non_gracefully_delete_events.value_namespace = name_space;
        session_non_gracefully_delete_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-create-timeout-events")
    {
        session_create_timeout_events = value;
        session_create_timeout_events.value_namespace = name_space;
        session_create_timeout_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events = value;
        session_replay_events.value_namespace = name_space;
        session_replay_events.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::Counters::BfdOverLspHeadCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-create-events")
    {
        session_create_events.yfilter = yfilter;
    }
    if(value_path == "session-up-events")
    {
        session_up_events.yfilter = yfilter;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events.yfilter = yfilter;
    }
    if(value_path == "session-down-events")
    {
        session_down_events.yfilter = yfilter;
    }
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events.yfilter = yfilter;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events.yfilter = yfilter;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events.yfilter = yfilter;
    }
    if(value_path == "session-create-timeout-events")
    {
        session_create_timeout_events.yfilter = yfilter;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::Counters::BfdOverLspHeadCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-create-events" || name == "session-up-events" || name == "session-creation-failed-events" || name == "session-down-events" || name == "session-admin-down-events" || name == "session-gracefully-delete-events" || name == "session-non-gracefully-delete-events" || name == "session-create-timeout-events" || name == "session-replay-events")
        return true;
    return false;
}

MplsTe::Bfd::Counters::SbfdOverLspHeadCounters::SbfdOverLspHeadCounters()
    :
    session_create_events{YType::uint32, "session-create-events"},
    session_up_events{YType::uint32, "session-up-events"},
    session_creation_failed_events{YType::uint32, "session-creation-failed-events"},
    session_down_events{YType::uint32, "session-down-events"},
    session_admin_down_events{YType::uint32, "session-admin-down-events"},
    session_gracefully_delete_events{YType::uint32, "session-gracefully-delete-events"},
    session_non_gracefully_delete_events{YType::uint32, "session-non-gracefully-delete-events"},
    session_create_timeout_events{YType::uint32, "session-create-timeout-events"},
    session_replay_events{YType::uint32, "session-replay-events"}
{

    yang_name = "sbfd-over-lsp-head-counters"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Bfd::Counters::SbfdOverLspHeadCounters::~SbfdOverLspHeadCounters()
{
}

bool MplsTe::Bfd::Counters::SbfdOverLspHeadCounters::has_data() const
{
    return session_create_events.is_set
	|| session_up_events.is_set
	|| session_creation_failed_events.is_set
	|| session_down_events.is_set
	|| session_admin_down_events.is_set
	|| session_gracefully_delete_events.is_set
	|| session_non_gracefully_delete_events.is_set
	|| session_create_timeout_events.is_set
	|| session_replay_events.is_set;
}

bool MplsTe::Bfd::Counters::SbfdOverLspHeadCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_create_events.yfilter)
	|| ydk::is_set(session_up_events.yfilter)
	|| ydk::is_set(session_creation_failed_events.yfilter)
	|| ydk::is_set(session_down_events.yfilter)
	|| ydk::is_set(session_admin_down_events.yfilter)
	|| ydk::is_set(session_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_non_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_create_timeout_events.yfilter)
	|| ydk::is_set(session_replay_events.yfilter);
}

std::string MplsTe::Bfd::Counters::SbfdOverLspHeadCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::Counters::SbfdOverLspHeadCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sbfd-over-lsp-head-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::Counters::SbfdOverLspHeadCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_create_events.is_set || is_set(session_create_events.yfilter)) leaf_name_data.push_back(session_create_events.get_name_leafdata());
    if (session_up_events.is_set || is_set(session_up_events.yfilter)) leaf_name_data.push_back(session_up_events.get_name_leafdata());
    if (session_creation_failed_events.is_set || is_set(session_creation_failed_events.yfilter)) leaf_name_data.push_back(session_creation_failed_events.get_name_leafdata());
    if (session_down_events.is_set || is_set(session_down_events.yfilter)) leaf_name_data.push_back(session_down_events.get_name_leafdata());
    if (session_admin_down_events.is_set || is_set(session_admin_down_events.yfilter)) leaf_name_data.push_back(session_admin_down_events.get_name_leafdata());
    if (session_gracefully_delete_events.is_set || is_set(session_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_gracefully_delete_events.get_name_leafdata());
    if (session_non_gracefully_delete_events.is_set || is_set(session_non_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_non_gracefully_delete_events.get_name_leafdata());
    if (session_create_timeout_events.is_set || is_set(session_create_timeout_events.yfilter)) leaf_name_data.push_back(session_create_timeout_events.get_name_leafdata());
    if (session_replay_events.is_set || is_set(session_replay_events.yfilter)) leaf_name_data.push_back(session_replay_events.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Bfd::Counters::SbfdOverLspHeadCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Bfd::Counters::SbfdOverLspHeadCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Bfd::Counters::SbfdOverLspHeadCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-create-events")
    {
        session_create_events = value;
        session_create_events.value_namespace = name_space;
        session_create_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up-events")
    {
        session_up_events = value;
        session_up_events.value_namespace = name_space;
        session_up_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events = value;
        session_creation_failed_events.value_namespace = name_space;
        session_creation_failed_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-down-events")
    {
        session_down_events = value;
        session_down_events.value_namespace = name_space;
        session_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events = value;
        session_admin_down_events.value_namespace = name_space;
        session_admin_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events = value;
        session_gracefully_delete_events.value_namespace = name_space;
        session_gracefully_delete_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events = value;
        session_non_gracefully_delete_events.value_namespace = name_space;
        session_non_gracefully_delete_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-create-timeout-events")
    {
        session_create_timeout_events = value;
        session_create_timeout_events.value_namespace = name_space;
        session_create_timeout_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events = value;
        session_replay_events.value_namespace = name_space;
        session_replay_events.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::Counters::SbfdOverLspHeadCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-create-events")
    {
        session_create_events.yfilter = yfilter;
    }
    if(value_path == "session-up-events")
    {
        session_up_events.yfilter = yfilter;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events.yfilter = yfilter;
    }
    if(value_path == "session-down-events")
    {
        session_down_events.yfilter = yfilter;
    }
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events.yfilter = yfilter;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events.yfilter = yfilter;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events.yfilter = yfilter;
    }
    if(value_path == "session-create-timeout-events")
    {
        session_create_timeout_events.yfilter = yfilter;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::Counters::SbfdOverLspHeadCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-create-events" || name == "session-up-events" || name == "session-creation-failed-events" || name == "session-down-events" || name == "session-admin-down-events" || name == "session-gracefully-delete-events" || name == "session-non-gracefully-delete-events" || name == "session-create-timeout-events" || name == "session-replay-events")
        return true;
    return false;
}

MplsTe::Bfd::Counters::BfdOverLspTailCounters::BfdOverLspTailCounters()
    :
    session_create_events{YType::uint32, "session-create-events"},
    session_up_events{YType::uint32, "session-up-events"},
    session_creation_failed_events{YType::uint32, "session-creation-failed-events"},
    session_down_events{YType::uint32, "session-down-events"},
    session_admin_down_events{YType::uint32, "session-admin-down-events"},
    session_gracefully_delete_events{YType::uint32, "session-gracefully-delete-events"},
    session_non_gracefully_delete_events{YType::uint32, "session-non-gracefully-delete-events"},
    session_replay_events{YType::uint32, "session-replay-events"}
{

    yang_name = "bfd-over-lsp-tail-counters"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Bfd::Counters::BfdOverLspTailCounters::~BfdOverLspTailCounters()
{
}

bool MplsTe::Bfd::Counters::BfdOverLspTailCounters::has_data() const
{
    return session_create_events.is_set
	|| session_up_events.is_set
	|| session_creation_failed_events.is_set
	|| session_down_events.is_set
	|| session_admin_down_events.is_set
	|| session_gracefully_delete_events.is_set
	|| session_non_gracefully_delete_events.is_set
	|| session_replay_events.is_set;
}

bool MplsTe::Bfd::Counters::BfdOverLspTailCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_create_events.yfilter)
	|| ydk::is_set(session_up_events.yfilter)
	|| ydk::is_set(session_creation_failed_events.yfilter)
	|| ydk::is_set(session_down_events.yfilter)
	|| ydk::is_set(session_admin_down_events.yfilter)
	|| ydk::is_set(session_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_non_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_replay_events.yfilter);
}

std::string MplsTe::Bfd::Counters::BfdOverLspTailCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::Counters::BfdOverLspTailCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-over-lsp-tail-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::Counters::BfdOverLspTailCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_create_events.is_set || is_set(session_create_events.yfilter)) leaf_name_data.push_back(session_create_events.get_name_leafdata());
    if (session_up_events.is_set || is_set(session_up_events.yfilter)) leaf_name_data.push_back(session_up_events.get_name_leafdata());
    if (session_creation_failed_events.is_set || is_set(session_creation_failed_events.yfilter)) leaf_name_data.push_back(session_creation_failed_events.get_name_leafdata());
    if (session_down_events.is_set || is_set(session_down_events.yfilter)) leaf_name_data.push_back(session_down_events.get_name_leafdata());
    if (session_admin_down_events.is_set || is_set(session_admin_down_events.yfilter)) leaf_name_data.push_back(session_admin_down_events.get_name_leafdata());
    if (session_gracefully_delete_events.is_set || is_set(session_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_gracefully_delete_events.get_name_leafdata());
    if (session_non_gracefully_delete_events.is_set || is_set(session_non_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_non_gracefully_delete_events.get_name_leafdata());
    if (session_replay_events.is_set || is_set(session_replay_events.yfilter)) leaf_name_data.push_back(session_replay_events.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Bfd::Counters::BfdOverLspTailCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Bfd::Counters::BfdOverLspTailCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Bfd::Counters::BfdOverLspTailCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-create-events")
    {
        session_create_events = value;
        session_create_events.value_namespace = name_space;
        session_create_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up-events")
    {
        session_up_events = value;
        session_up_events.value_namespace = name_space;
        session_up_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events = value;
        session_creation_failed_events.value_namespace = name_space;
        session_creation_failed_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-down-events")
    {
        session_down_events = value;
        session_down_events.value_namespace = name_space;
        session_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events = value;
        session_admin_down_events.value_namespace = name_space;
        session_admin_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events = value;
        session_gracefully_delete_events.value_namespace = name_space;
        session_gracefully_delete_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events = value;
        session_non_gracefully_delete_events.value_namespace = name_space;
        session_non_gracefully_delete_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events = value;
        session_replay_events.value_namespace = name_space;
        session_replay_events.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::Counters::BfdOverLspTailCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-create-events")
    {
        session_create_events.yfilter = yfilter;
    }
    if(value_path == "session-up-events")
    {
        session_up_events.yfilter = yfilter;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events.yfilter = yfilter;
    }
    if(value_path == "session-down-events")
    {
        session_down_events.yfilter = yfilter;
    }
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events.yfilter = yfilter;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events.yfilter = yfilter;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events.yfilter = yfilter;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::Counters::BfdOverLspTailCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-create-events" || name == "session-up-events" || name == "session-creation-failed-events" || name == "session-down-events" || name == "session-admin-down-events" || name == "session-gracefully-delete-events" || name == "session-non-gracefully-delete-events" || name == "session-replay-events")
        return true;
    return false;
}

MplsTe::Bfd::Counters::BfDoLmCounters::BfDoLmCounters()
    :
    session_create_events{YType::uint32, "session-create-events"},
    session_up_events{YType::uint32, "session-up-events"},
    session_creation_failed_events{YType::uint32, "session-creation-failed-events"},
    session_down_events{YType::uint32, "session-down-events"},
    session_admin_down_events{YType::uint32, "session-admin-down-events"},
    session_gracefully_delete_events{YType::uint32, "session-gracefully-delete-events"},
    session_non_gracefully_delete_events{YType::uint32, "session-non-gracefully-delete-events"},
    session_replay_events{YType::uint32, "session-replay-events"}
{

    yang_name = "bf-do-lm-counters"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Bfd::Counters::BfDoLmCounters::~BfDoLmCounters()
{
}

bool MplsTe::Bfd::Counters::BfDoLmCounters::has_data() const
{
    return session_create_events.is_set
	|| session_up_events.is_set
	|| session_creation_failed_events.is_set
	|| session_down_events.is_set
	|| session_admin_down_events.is_set
	|| session_gracefully_delete_events.is_set
	|| session_non_gracefully_delete_events.is_set
	|| session_replay_events.is_set;
}

bool MplsTe::Bfd::Counters::BfDoLmCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_create_events.yfilter)
	|| ydk::is_set(session_up_events.yfilter)
	|| ydk::is_set(session_creation_failed_events.yfilter)
	|| ydk::is_set(session_down_events.yfilter)
	|| ydk::is_set(session_admin_down_events.yfilter)
	|| ydk::is_set(session_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_non_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_replay_events.yfilter);
}

std::string MplsTe::Bfd::Counters::BfDoLmCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/bfd/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Bfd::Counters::BfDoLmCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bf-do-lm-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Bfd::Counters::BfDoLmCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_create_events.is_set || is_set(session_create_events.yfilter)) leaf_name_data.push_back(session_create_events.get_name_leafdata());
    if (session_up_events.is_set || is_set(session_up_events.yfilter)) leaf_name_data.push_back(session_up_events.get_name_leafdata());
    if (session_creation_failed_events.is_set || is_set(session_creation_failed_events.yfilter)) leaf_name_data.push_back(session_creation_failed_events.get_name_leafdata());
    if (session_down_events.is_set || is_set(session_down_events.yfilter)) leaf_name_data.push_back(session_down_events.get_name_leafdata());
    if (session_admin_down_events.is_set || is_set(session_admin_down_events.yfilter)) leaf_name_data.push_back(session_admin_down_events.get_name_leafdata());
    if (session_gracefully_delete_events.is_set || is_set(session_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_gracefully_delete_events.get_name_leafdata());
    if (session_non_gracefully_delete_events.is_set || is_set(session_non_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_non_gracefully_delete_events.get_name_leafdata());
    if (session_replay_events.is_set || is_set(session_replay_events.yfilter)) leaf_name_data.push_back(session_replay_events.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Bfd::Counters::BfDoLmCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Bfd::Counters::BfDoLmCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Bfd::Counters::BfDoLmCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-create-events")
    {
        session_create_events = value;
        session_create_events.value_namespace = name_space;
        session_create_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-up-events")
    {
        session_up_events = value;
        session_up_events.value_namespace = name_space;
        session_up_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events = value;
        session_creation_failed_events.value_namespace = name_space;
        session_creation_failed_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-down-events")
    {
        session_down_events = value;
        session_down_events.value_namespace = name_space;
        session_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events = value;
        session_admin_down_events.value_namespace = name_space;
        session_admin_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events = value;
        session_gracefully_delete_events.value_namespace = name_space;
        session_gracefully_delete_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events = value;
        session_non_gracefully_delete_events.value_namespace = name_space;
        session_non_gracefully_delete_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events = value;
        session_replay_events.value_namespace = name_space;
        session_replay_events.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Bfd::Counters::BfDoLmCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-create-events")
    {
        session_create_events.yfilter = yfilter;
    }
    if(value_path == "session-up-events")
    {
        session_up_events.yfilter = yfilter;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events.yfilter = yfilter;
    }
    if(value_path == "session-down-events")
    {
        session_down_events.yfilter = yfilter;
    }
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events.yfilter = yfilter;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events.yfilter = yfilter;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events.yfilter = yfilter;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events.yfilter = yfilter;
    }
}

bool MplsTe::Bfd::Counters::BfDoLmCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-create-events" || name == "session-up-events" || name == "session-creation-failed-events" || name == "session-down-events" || name == "session-admin-down-events" || name == "session-gracefully-delete-events" || name == "session-non-gracefully-delete-events" || name == "session-replay-events")
        return true;
    return false;
}

MplsTe::Nsr::Nsr()
    :
    status(std::make_shared<MplsTe::Nsr::Status>())
	,detail(std::make_shared<MplsTe::Nsr::Detail>())
{
    status->parent = this;
    detail->parent = this;

    yang_name = "nsr"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::~Nsr()
{
}

bool MplsTe::Nsr::has_data() const
{
    return (status !=  nullptr && status->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool MplsTe::Nsr::has_operation() const
{
    return is_set(yfilter)
	|| (status !=  nullptr && status->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string MplsTe::Nsr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<MplsTe::Nsr::Status>();
        }
        return status;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<MplsTe::Nsr::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(status != nullptr)
    {
        children["status"] = status;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void MplsTe::Nsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Nsr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Nsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status" || name == "detail")
        return true;
    return false;
}

MplsTe::Nsr::Status::Status()
    :
    role{YType::enumeration, "role"}
    	,
    sync_status_information(std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation>())
{
    sync_status_information->parent = this;

    yang_name = "status"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Status::~Status()
{
}

bool MplsTe::Nsr::Status::has_data() const
{
    return role.is_set
	|| (sync_status_information !=  nullptr && sync_status_information->has_data());
}

bool MplsTe::Nsr::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (sync_status_information !=  nullptr && sync_status_information->has_operation());
}

std::string MplsTe::Nsr::Status::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sync-status-information")
    {
        if(sync_status_information == nullptr)
        {
            sync_status_information = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation>();
        }
        return sync_status_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sync_status_information != nullptr)
    {
        children["sync-status-information"] = sync_status_information;
    }

    return children;
}

void MplsTe::Nsr::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status-information" || name == "role")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SyncStatusInformation()
    :
    sync_show_type{YType::enumeration, "sync-show-type"}
    	,
    slave_sync_information(std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation>())
	,master_sync_information(std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation>())
{
    slave_sync_information->parent = this;
    master_sync_information->parent = this;

    yang_name = "sync-status-information"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Status::SyncStatusInformation::~SyncStatusInformation()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::has_data() const
{
    return sync_show_type.is_set
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_data())
	|| (master_sync_information !=  nullptr && master_sync_information->has_data());
}

bool MplsTe::Nsr::Status::SyncStatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_show_type.yfilter)
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_operation())
	|| (master_sync_information !=  nullptr && master_sync_information->has_operation());
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/status/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::SyncStatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_show_type.is_set || is_set(sync_show_type.yfilter)) leaf_name_data.push_back(sync_show_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Status::SyncStatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave-sync-information")
    {
        if(slave_sync_information == nullptr)
        {
            slave_sync_information = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation>();
        }
        return slave_sync_information;
    }

    if(child_yang_name == "master-sync-information")
    {
        if(master_sync_information == nullptr)
        {
            master_sync_information = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation>();
        }
        return master_sync_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Status::SyncStatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(slave_sync_information != nullptr)
    {
        children["slave-sync-information"] = slave_sync_information;
    }

    if(master_sync_information != nullptr)
    {
        children["master-sync-information"] = master_sync_information;
    }

    return children;
}

void MplsTe::Nsr::Status::SyncStatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type = value;
        sync_show_type.value_namespace = name_space;
        sync_show_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Status::SyncStatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Status::SyncStatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-sync-information" || name == "master-sync-information" || name == "sync-show-type")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::SlaveSyncInformation()
    :
    insync_tunnels{YType::uint32, "insync-tunnels"},
    insync_sub_ls_ps{YType::uint32, "insync-sub-ls-ps"},
    pending_tunnels{YType::uint32, "pending-tunnels"},
    pending_sub_ls_ps{YType::uint32, "pending-sub-ls-ps"}
    	,
    idt(std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt>())
{
    idt->parent = this;

    yang_name = "slave-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::~SlaveSyncInformation()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::has_data() const
{
    for (std::size_t index=0; index<vif_pending.size(); index++)
    {
        if(vif_pending[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<s2l_pending.size(); index++)
    {
        if(s2l_pending[index]->has_data())
            return true;
    }
    return insync_tunnels.is_set
	|| insync_sub_ls_ps.is_set
	|| pending_tunnels.is_set
	|| pending_sub_ls_ps.is_set
	|| (idt !=  nullptr && idt->has_data());
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::has_operation() const
{
    for (std::size_t index=0; index<vif_pending.size(); index++)
    {
        if(vif_pending[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<s2l_pending.size(); index++)
    {
        if(s2l_pending[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(insync_tunnels.yfilter)
	|| ydk::is_set(insync_sub_ls_ps.yfilter)
	|| ydk::is_set(pending_tunnels.yfilter)
	|| ydk::is_set(pending_sub_ls_ps.yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/status/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insync_tunnels.is_set || is_set(insync_tunnels.yfilter)) leaf_name_data.push_back(insync_tunnels.get_name_leafdata());
    if (insync_sub_ls_ps.is_set || is_set(insync_sub_ls_ps.yfilter)) leaf_name_data.push_back(insync_sub_ls_ps.get_name_leafdata());
    if (pending_tunnels.is_set || is_set(pending_tunnels.yfilter)) leaf_name_data.push_back(pending_tunnels.get_name_leafdata());
    if (pending_sub_ls_ps.is_set || is_set(pending_sub_ls_ps.yfilter)) leaf_name_data.push_back(pending_sub_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt>();
        }
        return idt;
    }

    if(child_yang_name == "vif-pending")
    {
        auto c = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending>();
        c->parent = this;
        vif_pending.push_back(c);
        return c;
    }

    if(child_yang_name == "s2l-pending")
    {
        auto c = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending>();
        c->parent = this;
        s2l_pending.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(idt != nullptr)
    {
        children["idt"] = idt;
    }

    count = 0;
    for (auto const & c : vif_pending)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : s2l_pending)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "insync-tunnels")
    {
        insync_tunnels = value;
        insync_tunnels.value_namespace = name_space;
        insync_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps = value;
        insync_sub_ls_ps.value_namespace = name_space;
        insync_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels = value;
        pending_tunnels.value_namespace = name_space;
        pending_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps = value;
        pending_sub_ls_ps.value_namespace = name_space;
        pending_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "insync-tunnels")
    {
        insync_tunnels.yfilter = yfilter;
    }
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps.yfilter = yfilter;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels.yfilter = yfilter;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt" || name == "vif-pending" || name == "s2l-pending" || name == "insync-tunnels" || name == "insync-sub-ls-ps" || name == "pending-tunnels" || name == "pending-sub-ls-ps")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::~Idt()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/status/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(current_idt_info != nullptr)
    {
        children["current-idt-info"] = current_idt_info;
    }

    if(previous_idt_status != nullptr)
    {
        children["previous-idt-status"] = previous_idt_status;
    }

    return children;
}

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/status/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/status/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::VifPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    tunnel_name{YType::str, "tunnel-name"}
{

    yang_name = "vif-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::~VifPending()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::has_data() const
{
    return pending_reason.is_set
	|| tunnel_name.is_set;
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(tunnel_name.yfilter);
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/status/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vif-pending";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
        pending_reason.value_namespace = name_space;
        pending_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pending-reason")
    {
        pending_reason.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "tunnel-name")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::S2LPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    signaled_name{YType::str, "signaled-name"},
    s2l_role{YType::enumeration, "s2l-role"}
{

    yang_name = "s2l-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::~S2LPending()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_data() const
{
    return pending_reason.is_set
	|| signaled_name.is_set
	|| s2l_role.is_set;
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(signaled_name.yfilter)
	|| ydk::is_set(s2l_role.yfilter);
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/status/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-pending";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (s2l_role.is_set || is_set(s2l_role.yfilter)) leaf_name_data.push_back(s2l_role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
        pending_reason.value_namespace = name_space;
        pending_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
        signaled_name.value_namespace = name_space;
        signaled_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-role")
    {
        s2l_role = value;
        s2l_role.value_namespace = name_space;
        s2l_role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pending-reason")
    {
        pending_reason.yfilter = yfilter;
    }
    if(value_path == "signaled-name")
    {
        signaled_name.yfilter = yfilter;
    }
    if(value_path == "s2l-role")
    {
        s2l_role.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "signaled-name" || name == "s2l-role")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::MasterSyncInformation()
    :
    idt(std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt>())
{
    idt->parent = this;

    yang_name = "master-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::~MasterSyncInformation()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::has_data() const
{
    return (idt !=  nullptr && idt->has_data());
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::has_operation() const
{
    return is_set(yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/status/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt>();
        }
        return idt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(idt != nullptr)
    {
        children["idt"] = idt;
    }

    return children;
}

void MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "master-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::~Idt()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/status/sync-status-information/master-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(current_idt_info != nullptr)
    {
        children["current-idt-info"] = current_idt_info;
    }

    if(previous_idt_status != nullptr)
    {
        children["previous-idt-status"] = previous_idt_status;
    }

    return children;
}

void MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/status/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/status/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Nsr::Detail::Detail()
    :
    role{YType::enumeration, "role"}
    	,
    sync_status_information(std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation>())
{
    sync_status_information->parent = this;

    yang_name = "detail"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Detail::~Detail()
{
}

bool MplsTe::Nsr::Detail::has_data() const
{
    return role.is_set
	|| (sync_status_information !=  nullptr && sync_status_information->has_data());
}

bool MplsTe::Nsr::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (sync_status_information !=  nullptr && sync_status_information->has_operation());
}

std::string MplsTe::Nsr::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sync-status-information")
    {
        if(sync_status_information == nullptr)
        {
            sync_status_information = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation>();
        }
        return sync_status_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sync_status_information != nullptr)
    {
        children["sync-status-information"] = sync_status_information;
    }

    return children;
}

void MplsTe::Nsr::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status-information" || name == "role")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SyncStatusInformation()
    :
    sync_show_type{YType::enumeration, "sync-show-type"}
    	,
    slave_sync_information(std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation>())
	,master_sync_information(std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation>())
{
    slave_sync_information->parent = this;
    master_sync_information->parent = this;

    yang_name = "sync-status-information"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::~SyncStatusInformation()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::has_data() const
{
    return sync_show_type.is_set
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_data())
	|| (master_sync_information !=  nullptr && master_sync_information->has_data());
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_show_type.yfilter)
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_operation())
	|| (master_sync_information !=  nullptr && master_sync_information->has_operation());
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::SyncStatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_show_type.is_set || is_set(sync_show_type.yfilter)) leaf_name_data.push_back(sync_show_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Detail::SyncStatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave-sync-information")
    {
        if(slave_sync_information == nullptr)
        {
            slave_sync_information = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation>();
        }
        return slave_sync_information;
    }

    if(child_yang_name == "master-sync-information")
    {
        if(master_sync_information == nullptr)
        {
            master_sync_information = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation>();
        }
        return master_sync_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(slave_sync_information != nullptr)
    {
        children["slave-sync-information"] = slave_sync_information;
    }

    if(master_sync_information != nullptr)
    {
        children["master-sync-information"] = master_sync_information;
    }

    return children;
}

void MplsTe::Nsr::Detail::SyncStatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type = value;
        sync_show_type.value_namespace = name_space;
        sync_show_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Detail::SyncStatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-sync-information" || name == "master-sync-information" || name == "sync-show-type")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::SlaveSyncInformation()
    :
    insync_tunnels{YType::uint32, "insync-tunnels"},
    insync_sub_ls_ps{YType::uint32, "insync-sub-ls-ps"},
    pending_tunnels{YType::uint32, "pending-tunnels"},
    pending_sub_ls_ps{YType::uint32, "pending-sub-ls-ps"}
    	,
    idt(std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt>())
{
    idt->parent = this;

    yang_name = "slave-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::~SlaveSyncInformation()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::has_data() const
{
    for (std::size_t index=0; index<vif_pending.size(); index++)
    {
        if(vif_pending[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<s2l_pending.size(); index++)
    {
        if(s2l_pending[index]->has_data())
            return true;
    }
    return insync_tunnels.is_set
	|| insync_sub_ls_ps.is_set
	|| pending_tunnels.is_set
	|| pending_sub_ls_ps.is_set
	|| (idt !=  nullptr && idt->has_data());
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::has_operation() const
{
    for (std::size_t index=0; index<vif_pending.size(); index++)
    {
        if(vif_pending[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<s2l_pending.size(); index++)
    {
        if(s2l_pending[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(insync_tunnels.yfilter)
	|| ydk::is_set(insync_sub_ls_ps.yfilter)
	|| ydk::is_set(pending_tunnels.yfilter)
	|| ydk::is_set(pending_sub_ls_ps.yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/detail/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insync_tunnels.is_set || is_set(insync_tunnels.yfilter)) leaf_name_data.push_back(insync_tunnels.get_name_leafdata());
    if (insync_sub_ls_ps.is_set || is_set(insync_sub_ls_ps.yfilter)) leaf_name_data.push_back(insync_sub_ls_ps.get_name_leafdata());
    if (pending_tunnels.is_set || is_set(pending_tunnels.yfilter)) leaf_name_data.push_back(pending_tunnels.get_name_leafdata());
    if (pending_sub_ls_ps.is_set || is_set(pending_sub_ls_ps.yfilter)) leaf_name_data.push_back(pending_sub_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt>();
        }
        return idt;
    }

    if(child_yang_name == "vif-pending")
    {
        auto c = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending>();
        c->parent = this;
        vif_pending.push_back(c);
        return c;
    }

    if(child_yang_name == "s2l-pending")
    {
        auto c = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending>();
        c->parent = this;
        s2l_pending.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(idt != nullptr)
    {
        children["idt"] = idt;
    }

    count = 0;
    for (auto const & c : vif_pending)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : s2l_pending)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "insync-tunnels")
    {
        insync_tunnels = value;
        insync_tunnels.value_namespace = name_space;
        insync_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps = value;
        insync_sub_ls_ps.value_namespace = name_space;
        insync_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels = value;
        pending_tunnels.value_namespace = name_space;
        pending_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps = value;
        pending_sub_ls_ps.value_namespace = name_space;
        pending_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "insync-tunnels")
    {
        insync_tunnels.yfilter = yfilter;
    }
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps.yfilter = yfilter;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels.yfilter = yfilter;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt" || name == "vif-pending" || name == "s2l-pending" || name == "insync-tunnels" || name == "insync-sub-ls-ps" || name == "pending-tunnels" || name == "pending-sub-ls-ps")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::~Idt()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(current_idt_info != nullptr)
    {
        children["current-idt-info"] = current_idt_info;
    }

    if(previous_idt_status != nullptr)
    {
        children["previous-idt-status"] = previous_idt_status;
    }

    return children;
}

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/detail/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/detail/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::VifPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    tunnel_name{YType::str, "tunnel-name"}
{

    yang_name = "vif-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::~VifPending()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_data() const
{
    return pending_reason.is_set
	|| tunnel_name.is_set;
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(tunnel_name.yfilter);
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vif-pending";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
        pending_reason.value_namespace = name_space;
        pending_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pending-reason")
    {
        pending_reason.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "tunnel-name")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::S2LPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    signaled_name{YType::str, "signaled-name"},
    s2l_role{YType::enumeration, "s2l-role"}
{

    yang_name = "s2l-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::~S2LPending()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_data() const
{
    return pending_reason.is_set
	|| signaled_name.is_set
	|| s2l_role.is_set;
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(signaled_name.yfilter)
	|| ydk::is_set(s2l_role.yfilter);
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-pending";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (s2l_role.is_set || is_set(s2l_role.yfilter)) leaf_name_data.push_back(s2l_role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
        pending_reason.value_namespace = name_space;
        pending_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
        signaled_name.value_namespace = name_space;
        signaled_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-role")
    {
        s2l_role = value;
        s2l_role.value_namespace = name_space;
        s2l_role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pending-reason")
    {
        pending_reason.yfilter = yfilter;
    }
    if(value_path == "signaled-name")
    {
        signaled_name.yfilter = yfilter;
    }
    if(value_path == "s2l-role")
    {
        s2l_role.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "signaled-name" || name == "s2l-role")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::MasterSyncInformation()
    :
    idt(std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt>())
{
    idt->parent = this;

    yang_name = "master-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::~MasterSyncInformation()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::has_data() const
{
    return (idt !=  nullptr && idt->has_data());
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::has_operation() const
{
    return is_set(yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/detail/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt>();
        }
        return idt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(idt != nullptr)
    {
        children["idt"] = idt;
    }

    return children;
}

void MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "master-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::~Idt()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/detail/sync-status-information/master-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(current_idt_info != nullptr)
    {
        children["current-idt-info"] = current_idt_info;
    }

    if(previous_idt_status != nullptr)
    {
        children["previous-idt-status"] = previous_idt_status;
    }

    return children;
}

void MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/detail/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/nsr/detail/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTe::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTe::AutoTunnelServices::AutoTunnelServices()
    :
    sr_policy_entries(std::make_shared<MplsTe::AutoTunnelServices::SrPolicyEntries>())
{
    sr_policy_entries->parent = this;

    yang_name = "auto-tunnel-services"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::AutoTunnelServices::~AutoTunnelServices()
{
}

bool MplsTe::AutoTunnelServices::has_data() const
{
    return (sr_policy_entries !=  nullptr && sr_policy_entries->has_data());
}

bool MplsTe::AutoTunnelServices::has_operation() const
{
    return is_set(yfilter)
	|| (sr_policy_entries !=  nullptr && sr_policy_entries->has_operation());
}

std::string MplsTe::AutoTunnelServices::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnelServices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-tunnel-services";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnelServices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnelServices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy-entries")
    {
        if(sr_policy_entries == nullptr)
        {
            sr_policy_entries = std::make_shared<MplsTe::AutoTunnelServices::SrPolicyEntries>();
        }
        return sr_policy_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnelServices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sr_policy_entries != nullptr)
    {
        children["sr-policy-entries"] = sr_policy_entries;
    }

    return children;
}

void MplsTe::AutoTunnelServices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::AutoTunnelServices::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::AutoTunnelServices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy-entries")
        return true;
    return false;
}

MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntries()
{

    yang_name = "sr-policy-entries"; yang_parent_name = "auto-tunnel-services"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::AutoTunnelServices::SrPolicyEntries::~SrPolicyEntries()
{
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::has_data() const
{
    for (std::size_t index=0; index<sr_policy_entry.size(); index++)
    {
        if(sr_policy_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::has_operation() const
{
    for (std::size_t index=0; index<sr_policy_entry.size(); index++)
    {
        if(sr_policy_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::AutoTunnelServices::SrPolicyEntries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel-services/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnelServices::SrPolicyEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnelServices::SrPolicyEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnelServices::SrPolicyEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy-entry")
    {
        auto c = std::make_shared<MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry>();
        c->parent = this;
        sr_policy_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnelServices::SrPolicyEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : sr_policy_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AutoTunnelServices::SrPolicyEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::AutoTunnelServices::SrPolicyEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy-entry")
        return true;
    return false;
}

MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::SrPolicyEntry()
    :
    client_id{YType::int32, "client-id"},
    color{YType::int32, "color"},
    end_point{YType::str, "end-point"},
    distinguisher{YType::int32, "distinguisher"},
    sr_policy_id{YType::uint32, "sr-policy-id"},
    policy_active{YType::boolean, "policy-active"},
    client_id_xr{YType::uint32, "client-id-xr"},
    client_name{YType::str, "client-name"},
    color_xr{YType::uint32, "color-xr"},
    distinguisher_xr{YType::uint32, "distinguisher-xr"},
    ipv6_caps{YType::boolean, "ipv6-caps"},
    binding_sid_context_id{YType::uint32, "binding-sid-context-id"},
    requested_binding_sid{YType::uint32, "requested-binding-sid"},
    binding_sid_request_pending{YType::boolean, "binding-sid-request-pending"},
    allocated_binding_sid{YType::uint32, "allocated-binding-sid"},
    rewrite_request_pending{YType::boolean, "rewrite-request-pending"},
    rewrite_done{YType::boolean, "rewrite-done"},
    is_stale{YType::boolean, "is-stale"},
    is_synced{YType::boolean, "is-synced"},
    notify_time{YType::uint32, "notify-time"},
    notify_state_is_active{YType::boolean, "notify-state-is-active"},
    creation_time{YType::uint64, "creation-time"}
    	,
    end_point_xr(std::make_shared<MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr>())
{
    end_point_xr->parent = this;

    yang_name = "sr-policy-entry"; yang_parent_name = "sr-policy-entries"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::~SrPolicyEntry()
{
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::has_data() const
{
    for (std::size_t index=0; index<explicit_path.size(); index++)
    {
        if(explicit_path[index]->has_data())
            return true;
    }
    return client_id.is_set
	|| color.is_set
	|| end_point.is_set
	|| distinguisher.is_set
	|| sr_policy_id.is_set
	|| policy_active.is_set
	|| client_id_xr.is_set
	|| client_name.is_set
	|| color_xr.is_set
	|| distinguisher_xr.is_set
	|| ipv6_caps.is_set
	|| binding_sid_context_id.is_set
	|| requested_binding_sid.is_set
	|| binding_sid_request_pending.is_set
	|| allocated_binding_sid.is_set
	|| rewrite_request_pending.is_set
	|| rewrite_done.is_set
	|| is_stale.is_set
	|| is_synced.is_set
	|| notify_time.is_set
	|| notify_state_is_active.is_set
	|| creation_time.is_set
	|| (end_point_xr !=  nullptr && end_point_xr->has_data());
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::has_operation() const
{
    for (std::size_t index=0; index<explicit_path.size(); index++)
    {
        if(explicit_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(color.yfilter)
	|| ydk::is_set(end_point.yfilter)
	|| ydk::is_set(distinguisher.yfilter)
	|| ydk::is_set(sr_policy_id.yfilter)
	|| ydk::is_set(policy_active.yfilter)
	|| ydk::is_set(client_id_xr.yfilter)
	|| ydk::is_set(client_name.yfilter)
	|| ydk::is_set(color_xr.yfilter)
	|| ydk::is_set(distinguisher_xr.yfilter)
	|| ydk::is_set(ipv6_caps.yfilter)
	|| ydk::is_set(binding_sid_context_id.yfilter)
	|| ydk::is_set(requested_binding_sid.yfilter)
	|| ydk::is_set(binding_sid_request_pending.yfilter)
	|| ydk::is_set(allocated_binding_sid.yfilter)
	|| ydk::is_set(rewrite_request_pending.yfilter)
	|| ydk::is_set(rewrite_done.yfilter)
	|| ydk::is_set(is_stale.yfilter)
	|| ydk::is_set(is_synced.yfilter)
	|| ydk::is_set(notify_time.yfilter)
	|| ydk::is_set(notify_state_is_active.yfilter)
	|| ydk::is_set(creation_time.yfilter)
	|| (end_point_xr !=  nullptr && end_point_xr->has_operation());
}

std::string MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel-services/sr-policy-entries/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-entry" <<"[client-id='" <<client_id <<"']" <<"[color='" <<color <<"']" <<"[end-point='" <<end_point <<"']" <<"[distinguisher='" <<distinguisher <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());
    if (end_point.is_set || is_set(end_point.yfilter)) leaf_name_data.push_back(end_point.get_name_leafdata());
    if (distinguisher.is_set || is_set(distinguisher.yfilter)) leaf_name_data.push_back(distinguisher.get_name_leafdata());
    if (sr_policy_id.is_set || is_set(sr_policy_id.yfilter)) leaf_name_data.push_back(sr_policy_id.get_name_leafdata());
    if (policy_active.is_set || is_set(policy_active.yfilter)) leaf_name_data.push_back(policy_active.get_name_leafdata());
    if (client_id_xr.is_set || is_set(client_id_xr.yfilter)) leaf_name_data.push_back(client_id_xr.get_name_leafdata());
    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (color_xr.is_set || is_set(color_xr.yfilter)) leaf_name_data.push_back(color_xr.get_name_leafdata());
    if (distinguisher_xr.is_set || is_set(distinguisher_xr.yfilter)) leaf_name_data.push_back(distinguisher_xr.get_name_leafdata());
    if (ipv6_caps.is_set || is_set(ipv6_caps.yfilter)) leaf_name_data.push_back(ipv6_caps.get_name_leafdata());
    if (binding_sid_context_id.is_set || is_set(binding_sid_context_id.yfilter)) leaf_name_data.push_back(binding_sid_context_id.get_name_leafdata());
    if (requested_binding_sid.is_set || is_set(requested_binding_sid.yfilter)) leaf_name_data.push_back(requested_binding_sid.get_name_leafdata());
    if (binding_sid_request_pending.is_set || is_set(binding_sid_request_pending.yfilter)) leaf_name_data.push_back(binding_sid_request_pending.get_name_leafdata());
    if (allocated_binding_sid.is_set || is_set(allocated_binding_sid.yfilter)) leaf_name_data.push_back(allocated_binding_sid.get_name_leafdata());
    if (rewrite_request_pending.is_set || is_set(rewrite_request_pending.yfilter)) leaf_name_data.push_back(rewrite_request_pending.get_name_leafdata());
    if (rewrite_done.is_set || is_set(rewrite_done.yfilter)) leaf_name_data.push_back(rewrite_done.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.yfilter)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (is_synced.is_set || is_set(is_synced.yfilter)) leaf_name_data.push_back(is_synced.get_name_leafdata());
    if (notify_time.is_set || is_set(notify_time.yfilter)) leaf_name_data.push_back(notify_time.get_name_leafdata());
    if (notify_state_is_active.is_set || is_set(notify_state_is_active.yfilter)) leaf_name_data.push_back(notify_state_is_active.get_name_leafdata());
    if (creation_time.is_set || is_set(creation_time.yfilter)) leaf_name_data.push_back(creation_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "end-point-xr")
    {
        if(end_point_xr == nullptr)
        {
            end_point_xr = std::make_shared<MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr>();
        }
        return end_point_xr;
    }

    if(child_yang_name == "explicit-path")
    {
        auto c = std::make_shared<MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath>();
        c->parent = this;
        explicit_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(end_point_xr != nullptr)
    {
        children["end-point-xr"] = end_point_xr;
    }

    count = 0;
    for (auto const & c : explicit_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "color")
    {
        color = value;
        color.value_namespace = name_space;
        color.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-point")
    {
        end_point = value;
        end_point.value_namespace = name_space;
        end_point.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distinguisher")
    {
        distinguisher = value;
        distinguisher.value_namespace = name_space;
        distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-policy-id")
    {
        sr_policy_id = value;
        sr_policy_id.value_namespace = name_space;
        sr_policy_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-active")
    {
        policy_active = value;
        policy_active.value_namespace = name_space;
        policy_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id-xr")
    {
        client_id_xr = value;
        client_id_xr.value_namespace = name_space;
        client_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-name")
    {
        client_name = value;
        client_name.value_namespace = name_space;
        client_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "color-xr")
    {
        color_xr = value;
        color_xr.value_namespace = name_space;
        color_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distinguisher-xr")
    {
        distinguisher_xr = value;
        distinguisher_xr.value_namespace = name_space;
        distinguisher_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-caps")
    {
        ipv6_caps = value;
        ipv6_caps.value_namespace = name_space;
        ipv6_caps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-sid-context-id")
    {
        binding_sid_context_id = value;
        binding_sid_context_id.value_namespace = name_space;
        binding_sid_context_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requested-binding-sid")
    {
        requested_binding_sid = value;
        requested_binding_sid.value_namespace = name_space;
        requested_binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-sid-request-pending")
    {
        binding_sid_request_pending = value;
        binding_sid_request_pending.value_namespace = name_space;
        binding_sid_request_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocated-binding-sid")
    {
        allocated_binding_sid = value;
        allocated_binding_sid.value_namespace = name_space;
        allocated_binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rewrite-request-pending")
    {
        rewrite_request_pending = value;
        rewrite_request_pending.value_namespace = name_space;
        rewrite_request_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rewrite-done")
    {
        rewrite_done = value;
        rewrite_done.value_namespace = name_space;
        rewrite_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
        is_stale.value_namespace = name_space;
        is_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-synced")
    {
        is_synced = value;
        is_synced.value_namespace = name_space;
        is_synced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify-time")
    {
        notify_time = value;
        notify_time.value_namespace = name_space;
        notify_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify-state-is-active")
    {
        notify_state_is_active = value;
        notify_state_is_active.value_namespace = name_space;
        notify_state_is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creation-time")
    {
        creation_time = value;
        creation_time.value_namespace = name_space;
        creation_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
    if(value_path == "end-point")
    {
        end_point.yfilter = yfilter;
    }
    if(value_path == "distinguisher")
    {
        distinguisher.yfilter = yfilter;
    }
    if(value_path == "sr-policy-id")
    {
        sr_policy_id.yfilter = yfilter;
    }
    if(value_path == "policy-active")
    {
        policy_active.yfilter = yfilter;
    }
    if(value_path == "client-id-xr")
    {
        client_id_xr.yfilter = yfilter;
    }
    if(value_path == "client-name")
    {
        client_name.yfilter = yfilter;
    }
    if(value_path == "color-xr")
    {
        color_xr.yfilter = yfilter;
    }
    if(value_path == "distinguisher-xr")
    {
        distinguisher_xr.yfilter = yfilter;
    }
    if(value_path == "ipv6-caps")
    {
        ipv6_caps.yfilter = yfilter;
    }
    if(value_path == "binding-sid-context-id")
    {
        binding_sid_context_id.yfilter = yfilter;
    }
    if(value_path == "requested-binding-sid")
    {
        requested_binding_sid.yfilter = yfilter;
    }
    if(value_path == "binding-sid-request-pending")
    {
        binding_sid_request_pending.yfilter = yfilter;
    }
    if(value_path == "allocated-binding-sid")
    {
        allocated_binding_sid.yfilter = yfilter;
    }
    if(value_path == "rewrite-request-pending")
    {
        rewrite_request_pending.yfilter = yfilter;
    }
    if(value_path == "rewrite-done")
    {
        rewrite_done.yfilter = yfilter;
    }
    if(value_path == "is-stale")
    {
        is_stale.yfilter = yfilter;
    }
    if(value_path == "is-synced")
    {
        is_synced.yfilter = yfilter;
    }
    if(value_path == "notify-time")
    {
        notify_time.yfilter = yfilter;
    }
    if(value_path == "notify-state-is-active")
    {
        notify_state_is_active.yfilter = yfilter;
    }
    if(value_path == "creation-time")
    {
        creation_time.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-point-xr" || name == "explicit-path" || name == "client-id" || name == "color" || name == "end-point" || name == "distinguisher" || name == "sr-policy-id" || name == "policy-active" || name == "client-id-xr" || name == "client-name" || name == "color-xr" || name == "distinguisher-xr" || name == "ipv6-caps" || name == "binding-sid-context-id" || name == "requested-binding-sid" || name == "binding-sid-request-pending" || name == "allocated-binding-sid" || name == "rewrite-request-pending" || name == "rewrite-done" || name == "is-stale" || name == "is-synced" || name == "notify-time" || name == "notify-state-is-active" || name == "creation-time")
        return true;
    return false;
}

MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::EndPointXr()
    :
    address_family_type{YType::enumeration, "address-family-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "end-point-xr"; yang_parent_name = "sr-policy-entry"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::~EndPointXr()
{
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::has_data() const
{
    return address_family_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "end-point-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_type.is_set || is_set(address_family_type.yfilter)) leaf_name_data.push_back(address_family_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family-type")
    {
        address_family_type = value;
        address_family_type.value_namespace = name_space;
        address_family_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family-type")
    {
        address_family_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family-type" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::ExplicitPath()
    :
    context_id{YType::uint32, "context-id"},
    path_weight{YType::uint32, "path-weight"},
    is_stale{YType::boolean, "is-stale"},
    is_synced{YType::boolean, "is-synced"},
    programmed_in_fib{YType::boolean, "programmed-in-fib"}
    	,
    tunnel_info(std::make_shared<MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo>())
{
    tunnel_info->parent = this;

    yang_name = "explicit-path"; yang_parent_name = "sr-policy-entry"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::~ExplicitPath()
{
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::has_data() const
{
    for (std::size_t index=0; index<hops.size(); index++)
    {
        if(hops[index]->has_data())
            return true;
    }
    return context_id.is_set
	|| path_weight.is_set
	|| is_stale.is_set
	|| is_synced.is_set
	|| programmed_in_fib.is_set
	|| (tunnel_info !=  nullptr && tunnel_info->has_data());
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::has_operation() const
{
    for (std::size_t index=0; index<hops.size(); index++)
    {
        if(hops[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(context_id.yfilter)
	|| ydk::is_set(path_weight.yfilter)
	|| ydk::is_set(is_stale.yfilter)
	|| ydk::is_set(is_synced.yfilter)
	|| ydk::is_set(programmed_in_fib.yfilter)
	|| (tunnel_info !=  nullptr && tunnel_info->has_operation());
}

std::string MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_id.is_set || is_set(context_id.yfilter)) leaf_name_data.push_back(context_id.get_name_leafdata());
    if (path_weight.is_set || is_set(path_weight.yfilter)) leaf_name_data.push_back(path_weight.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.yfilter)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (is_synced.is_set || is_set(is_synced.yfilter)) leaf_name_data.push_back(is_synced.get_name_leafdata());
    if (programmed_in_fib.is_set || is_set(programmed_in_fib.yfilter)) leaf_name_data.push_back(programmed_in_fib.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-info")
    {
        if(tunnel_info == nullptr)
        {
            tunnel_info = std::make_shared<MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo>();
        }
        return tunnel_info;
    }

    if(child_yang_name == "hops")
    {
        auto c = std::make_shared<MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops>();
        c->parent = this;
        hops.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tunnel_info != nullptr)
    {
        children["tunnel-info"] = tunnel_info;
    }

    count = 0;
    for (auto const & c : hops)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context-id")
    {
        context_id = value;
        context_id.value_namespace = name_space;
        context_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-weight")
    {
        path_weight = value;
        path_weight.value_namespace = name_space;
        path_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
        is_stale.value_namespace = name_space;
        is_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-synced")
    {
        is_synced = value;
        is_synced.value_namespace = name_space;
        is_synced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "programmed-in-fib")
    {
        programmed_in_fib = value;
        programmed_in_fib.value_namespace = name_space;
        programmed_in_fib.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context-id")
    {
        context_id.yfilter = yfilter;
    }
    if(value_path == "path-weight")
    {
        path_weight.yfilter = yfilter;
    }
    if(value_path == "is-stale")
    {
        is_stale.yfilter = yfilter;
    }
    if(value_path == "is-synced")
    {
        is_synced.yfilter = yfilter;
    }
    if(value_path == "programmed-in-fib")
    {
        programmed_in_fib.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-info" || name == "hops" || name == "context-id" || name == "path-weight" || name == "is-stale" || name == "is-synced" || name == "programmed-in-fib")
        return true;
    return false;
}

MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::TunnelInfo()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_up{YType::boolean, "tunnel-up"},
    ipv6_caps{YType::boolean, "ipv6-caps"}
{

    yang_name = "tunnel-info"; yang_parent_name = "explicit-path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::~TunnelInfo()
{
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::has_data() const
{
    return tunnel_id.is_set
	|| tunnel_up.is_set
	|| ipv6_caps.is_set;
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_up.yfilter)
	|| ydk::is_set(ipv6_caps.yfilter);
}

std::string MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_up.is_set || is_set(tunnel_up.yfilter)) leaf_name_data.push_back(tunnel_up.get_name_leafdata());
    if (ipv6_caps.is_set || is_set(ipv6_caps.yfilter)) leaf_name_data.push_back(ipv6_caps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-up")
    {
        tunnel_up = value;
        tunnel_up.value_namespace = name_space;
        tunnel_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-caps")
    {
        ipv6_caps = value;
        ipv6_caps.value_namespace = name_space;
        ipv6_caps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-up")
    {
        tunnel_up.yfilter = yfilter;
    }
    if(value_path == "ipv6-caps")
    {
        ipv6_caps.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-id" || name == "tunnel-up" || name == "ipv6-caps")
        return true;
    return false;
}

MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::Hops()
    :
    hop_type{YType::enumeration, "hop-type"},
    ipv4_address{YType::str, "ipv4-address"},
    mpls_label{YType::uint32, "mpls-label"}
{

    yang_name = "hops"; yang_parent_name = "explicit-path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::~Hops()
{
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::has_data() const
{
    return hop_type.is_set
	|| ipv4_address.is_set
	|| mpls_label.is_set;
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hop_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(mpls_label.yfilter);
}

std::string MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_type.is_set || is_set(hop_type.yfilter)) leaf_name_data.push_back(hop_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hop-type")
    {
        hop_type = value;
        hop_type.value_namespace = name_space;
        hop_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hop-type")
    {
        hop_type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop-type" || name == "ipv4-address" || name == "mpls-label")
        return true;
    return false;
}

MplsTe::AffinityMap::AffinityMap()
{

    yang_name = "affinity-map"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::AffinityMap::~AffinityMap()
{
}

bool MplsTe::AffinityMap::has_data() const
{
    for (std::size_t index=0; index<affinity_map_array.size(); index++)
    {
        if(affinity_map_array[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::AffinityMap::has_operation() const
{
    for (std::size_t index=0; index<affinity_map_array.size(); index++)
    {
        if(affinity_map_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::AffinityMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AffinityMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AffinityMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AffinityMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-map-array")
    {
        auto c = std::make_shared<MplsTe::AffinityMap::AffinityMapArray>();
        c->parent = this;
        affinity_map_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AffinityMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : affinity_map_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AffinityMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::AffinityMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::AffinityMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-map-array")
        return true;
    return false;
}

MplsTe::AffinityMap::AffinityMapArray::AffinityMapArray()
    :
    affinity_name{YType::str, "affinity-name"},
    affinity_value{YType::uint32, "affinity-value"},
    affinity_bit_position{YType::uint8, "affinity-bit-position"},
    affinity_table_id{YType::enumeration, "affinity-table-id"}
{

    yang_name = "affinity-map-array"; yang_parent_name = "affinity-map"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::AffinityMap::AffinityMapArray::~AffinityMapArray()
{
}

bool MplsTe::AffinityMap::AffinityMapArray::has_data() const
{
    for (std::size_t index=0; index<affinity_extended_value.size(); index++)
    {
        if(affinity_extended_value[index]->has_data())
            return true;
    }
    return affinity_name.is_set
	|| affinity_value.is_set
	|| affinity_bit_position.is_set
	|| affinity_table_id.is_set;
}

bool MplsTe::AffinityMap::AffinityMapArray::has_operation() const
{
    for (std::size_t index=0; index<affinity_extended_value.size(); index++)
    {
        if(affinity_extended_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_name.yfilter)
	|| ydk::is_set(affinity_value.yfilter)
	|| ydk::is_set(affinity_bit_position.yfilter)
	|| ydk::is_set(affinity_table_id.yfilter);
}

std::string MplsTe::AffinityMap::AffinityMapArray::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/affinity-map/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AffinityMap::AffinityMapArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-map-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AffinityMap::AffinityMapArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_name.is_set || is_set(affinity_name.yfilter)) leaf_name_data.push_back(affinity_name.get_name_leafdata());
    if (affinity_value.is_set || is_set(affinity_value.yfilter)) leaf_name_data.push_back(affinity_value.get_name_leafdata());
    if (affinity_bit_position.is_set || is_set(affinity_bit_position.yfilter)) leaf_name_data.push_back(affinity_bit_position.get_name_leafdata());
    if (affinity_table_id.is_set || is_set(affinity_table_id.yfilter)) leaf_name_data.push_back(affinity_table_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AffinityMap::AffinityMapArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-extended-value")
    {
        auto c = std::make_shared<MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue>();
        c->parent = this;
        affinity_extended_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AffinityMap::AffinityMapArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : affinity_extended_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AffinityMap::AffinityMapArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-name")
    {
        affinity_name = value;
        affinity_name.value_namespace = name_space;
        affinity_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-value")
    {
        affinity_value = value;
        affinity_value.value_namespace = name_space;
        affinity_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-bit-position")
    {
        affinity_bit_position = value;
        affinity_bit_position.value_namespace = name_space;
        affinity_bit_position.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-table-id")
    {
        affinity_table_id = value;
        affinity_table_id.value_namespace = name_space;
        affinity_table_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AffinityMap::AffinityMapArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-name")
    {
        affinity_name.yfilter = yfilter;
    }
    if(value_path == "affinity-value")
    {
        affinity_value.yfilter = yfilter;
    }
    if(value_path == "affinity-bit-position")
    {
        affinity_bit_position.yfilter = yfilter;
    }
    if(value_path == "affinity-table-id")
    {
        affinity_table_id.yfilter = yfilter;
    }
}

bool MplsTe::AffinityMap::AffinityMapArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-extended-value" || name == "affinity-name" || name == "affinity-value" || name == "affinity-bit-position" || name == "affinity-table-id")
        return true;
    return false;
}

MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue::AffinityExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "affinity-extended-value"; yang_parent_name = "affinity-map-array"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue::~AffinityExtendedValue()
{
}

bool MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/affinity-map/affinity-map-array/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::AffinityMap::AffinityMapArray::AffinityExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBriefs()
{

    yang_name = "topology-briefs"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TopologyBriefs::~TopologyBriefs()
{
}

bool MplsTe::TopologyBriefs::has_data() const
{
    for (std::size_t index=0; index<topology_brief.size(); index++)
    {
        if(topology_brief[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::TopologyBriefs::has_operation() const
{
    for (std::size_t index=0; index<topology_brief.size(); index++)
    {
        if(topology_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::TopologyBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TopologyBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-brief")
    {
        auto c = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief>();
        c->parent = this;
        topology_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : topology_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::TopologyBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::TopologyBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::TopologyBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-brief")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyBrief()
    :
    protocol{YType::enumeration, "protocol"},
    igp_id{YType::str, "igp-id"},
    area{YType::int32, "area"},
    topology_node_type{YType::enumeration, "topology-node-type"},
    igp_node_id{YType::str, "igp-node-id"},
    topology_node_te_router_id{YType::str, "topology-node-te-router-id"},
    topology_node_overloaded{YType::boolean, "topology-node-overloaded"}
    	,
    topology_node_sid_and_srbg(std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg>())
{
    topology_node_sid_and_srbg->parent = this;

    yang_name = "topology-brief"; yang_parent_name = "topology-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTe::TopologyBriefs::TopologyBrief::~TopologyBrief()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::has_data() const
{
    for (std::size_t index=0; index<topology_node_link.size(); index++)
    {
        if(topology_node_link[index]->has_data())
            return true;
    }
    return protocol.is_set
	|| igp_id.is_set
	|| area.is_set
	|| topology_node_type.is_set
	|| igp_node_id.is_set
	|| topology_node_te_router_id.is_set
	|| topology_node_overloaded.is_set
	|| (topology_node_sid_and_srbg !=  nullptr && topology_node_sid_and_srbg->has_data());
}

bool MplsTe::TopologyBriefs::TopologyBrief::has_operation() const
{
    for (std::size_t index=0; index<topology_node_link.size(); index++)
    {
        if(topology_node_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(topology_node_type.yfilter)
	|| ydk::is_set(igp_node_id.yfilter)
	|| ydk::is_set(topology_node_te_router_id.yfilter)
	|| ydk::is_set(topology_node_overloaded.yfilter)
	|| (topology_node_sid_and_srbg !=  nullptr && topology_node_sid_and_srbg->has_operation());
}

std::string MplsTe::TopologyBriefs::TopologyBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TopologyBriefs::TopologyBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-brief" <<"[protocol='" <<protocol <<"']" <<"[igp-id='" <<igp_id <<"']" <<"[area='" <<area <<"']" <<"[topology-node-type='" <<topology_node_type <<"']" <<"[igp-node-id='" <<igp_node_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (topology_node_type.is_set || is_set(topology_node_type.yfilter)) leaf_name_data.push_back(topology_node_type.get_name_leafdata());
    if (igp_node_id.is_set || is_set(igp_node_id.yfilter)) leaf_name_data.push_back(igp_node_id.get_name_leafdata());
    if (topology_node_te_router_id.is_set || is_set(topology_node_te_router_id.yfilter)) leaf_name_data.push_back(topology_node_te_router_id.get_name_leafdata());
    if (topology_node_overloaded.is_set || is_set(topology_node_overloaded.yfilter)) leaf_name_data.push_back(topology_node_overloaded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-node-sid-and-srbg")
    {
        if(topology_node_sid_and_srbg == nullptr)
        {
            topology_node_sid_and_srbg = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg>();
        }
        return topology_node_sid_and_srbg;
    }

    if(child_yang_name == "topology-node-link")
    {
        auto c = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink>();
        c->parent = this;
        topology_node_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(topology_node_sid_and_srbg != nullptr)
    {
        children["topology-node-sid-and-srbg"] = topology_node_sid_and_srbg;
    }

    count = 0;
    for (auto const & c : topology_node_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-node-type")
    {
        topology_node_type = value;
        topology_node_type.value_namespace = name_space;
        topology_node_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-node-id")
    {
        igp_node_id = value;
        igp_node_id.value_namespace = name_space;
        igp_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-node-te-router-id")
    {
        topology_node_te_router_id = value;
        topology_node_te_router_id.value_namespace = name_space;
        topology_node_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-node-overloaded")
    {
        topology_node_overloaded = value;
        topology_node_overloaded.value_namespace = name_space;
        topology_node_overloaded.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyBriefs::TopologyBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "topology-node-type")
    {
        topology_node_type.yfilter = yfilter;
    }
    if(value_path == "igp-node-id")
    {
        igp_node_id.yfilter = yfilter;
    }
    if(value_path == "topology-node-te-router-id")
    {
        topology_node_te_router_id.yfilter = yfilter;
    }
    if(value_path == "topology-node-overloaded")
    {
        topology_node_overloaded.yfilter = yfilter;
    }
}

bool MplsTe::TopologyBriefs::TopologyBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-node-sid-and-srbg" || name == "topology-node-link" || name == "protocol" || name == "igp-id" || name == "area" || name == "topology-node-type" || name == "igp-node-id" || name == "topology-node-te-router-id" || name == "topology-node-overloaded")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg::TopologyNodeSidAndSrbg()
    :
    segment_id{YType::uint32, "segment-id"},
    segment_id_local_absolute_value{YType::uint32, "segment-id-local-absolute-value"},
    srgb_start{YType::uint32, "srgb-start"},
    srgb_size{YType::uint32, "srgb-size"}
{

    yang_name = "topology-node-sid-and-srbg"; yang_parent_name = "topology-brief"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg::~TopologyNodeSidAndSrbg()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg::has_data() const
{
    return segment_id.is_set
	|| segment_id_local_absolute_value.is_set
	|| srgb_start.is_set
	|| srgb_size.is_set;
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_id.yfilter)
	|| ydk::is_set(segment_id_local_absolute_value.yfilter)
	|| ydk::is_set(srgb_start.yfilter)
	|| ydk::is_set(srgb_size.yfilter);
}

std::string MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-node-sid-and-srbg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_id.is_set || is_set(segment_id.yfilter)) leaf_name_data.push_back(segment_id.get_name_leafdata());
    if (segment_id_local_absolute_value.is_set || is_set(segment_id_local_absolute_value.yfilter)) leaf_name_data.push_back(segment_id_local_absolute_value.get_name_leafdata());
    if (srgb_start.is_set || is_set(srgb_start.yfilter)) leaf_name_data.push_back(srgb_start.get_name_leafdata());
    if (srgb_size.is_set || is_set(srgb_size.yfilter)) leaf_name_data.push_back(srgb_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "segment-id")
    {
        segment_id = value;
        segment_id.value_namespace = name_space;
        segment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-id-local-absolute-value")
    {
        segment_id_local_absolute_value = value;
        segment_id_local_absolute_value.value_namespace = name_space;
        segment_id_local_absolute_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-start")
    {
        srgb_start = value;
        srgb_start.value_namespace = name_space;
        srgb_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-size")
    {
        srgb_size = value;
        srgb_size.value_namespace = name_space;
        srgb_size.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "segment-id")
    {
        segment_id.yfilter = yfilter;
    }
    if(value_path == "segment-id-local-absolute-value")
    {
        segment_id_local_absolute_value.yfilter = yfilter;
    }
    if(value_path == "srgb-start")
    {
        srgb_start.yfilter = yfilter;
    }
    if(value_path == "srgb-size")
    {
        srgb_size.yfilter = yfilter;
    }
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-id" || name == "segment-id-local-absolute-value" || name == "srgb-start" || name == "srgb-size")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyNodeLink()
    :
    topology_link_type{YType::enumeration, "topology-link-type"},
    topology_link_interface_address{YType::str, "topology-link-interface-address"},
    topology_link_interface_id{YType::uint32, "topology-link-interface-id"},
    topology_link_neighbor_address{YType::str, "topology-link-neighbor-address"},
    topology_link_neighbor_id{YType::uint32, "topology-link-neighbor-id"},
    topology_link_neighbor_system_id{YType::str, "topology-link-neighbor-system-id"},
    topology_link_neighbor_node_id{YType::uint32, "topology-link-neighbor-node-id"},
    topology_link_neighbor_generation{YType::uint32, "topology-link-neighbor-generation"},
    topology_link_fragment_id{YType::uint32, "topology-link-fragment-id"},
    topology_link_te_metric{YType::uint32, "topology-link-te-metric"},
    topology_link_igp_metric{YType::uint32, "topology-link-igp-metric"},
    topology_link_uni_delay{YType::uint32, "topology-link-uni-delay"},
    topology_link_affinity_bits{YType::uint32, "topology-link-affinity-bits"},
    topology_link_switching_capability{YType::uint8, "topology-link-switching-capability"},
    topology_link_encoding{YType::uint8, "topology-link-encoding"},
    topology_link_bandwidth_model{YType::enumeration, "topology-link-bandwidth-model"}
    	,
    topology_link_bandwidth(std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth>())
	,odu_link_capabilities(std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities>())
{
    topology_link_bandwidth->parent = this;
    odu_link_capabilities->parent = this;

    yang_name = "topology-node-link"; yang_parent_name = "topology-brief"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::~TopologyNodeLink()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::has_data() const
{
    for (std::size_t index=0; index<topology_link_extended_affinity_bit.size(); index++)
    {
        if(topology_link_extended_affinity_bit[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<adjacency_sid.size(); index++)
    {
        if(adjacency_sid[index]->has_data())
            return true;
    }
    return topology_link_type.is_set
	|| topology_link_interface_address.is_set
	|| topology_link_interface_id.is_set
	|| topology_link_neighbor_address.is_set
	|| topology_link_neighbor_id.is_set
	|| topology_link_neighbor_system_id.is_set
	|| topology_link_neighbor_node_id.is_set
	|| topology_link_neighbor_generation.is_set
	|| topology_link_fragment_id.is_set
	|| topology_link_te_metric.is_set
	|| topology_link_igp_metric.is_set
	|| topology_link_uni_delay.is_set
	|| topology_link_affinity_bits.is_set
	|| topology_link_switching_capability.is_set
	|| topology_link_encoding.is_set
	|| topology_link_bandwidth_model.is_set
	|| (topology_link_bandwidth !=  nullptr && topology_link_bandwidth->has_data())
	|| (odu_link_capabilities !=  nullptr && odu_link_capabilities->has_data());
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::has_operation() const
{
    for (std::size_t index=0; index<topology_link_extended_affinity_bit.size(); index++)
    {
        if(topology_link_extended_affinity_bit[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<adjacency_sid.size(); index++)
    {
        if(adjacency_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(topology_link_type.yfilter)
	|| ydk::is_set(topology_link_interface_address.yfilter)
	|| ydk::is_set(topology_link_interface_id.yfilter)
	|| ydk::is_set(topology_link_neighbor_address.yfilter)
	|| ydk::is_set(topology_link_neighbor_id.yfilter)
	|| ydk::is_set(topology_link_neighbor_system_id.yfilter)
	|| ydk::is_set(topology_link_neighbor_node_id.yfilter)
	|| ydk::is_set(topology_link_neighbor_generation.yfilter)
	|| ydk::is_set(topology_link_fragment_id.yfilter)
	|| ydk::is_set(topology_link_te_metric.yfilter)
	|| ydk::is_set(topology_link_igp_metric.yfilter)
	|| ydk::is_set(topology_link_uni_delay.yfilter)
	|| ydk::is_set(topology_link_affinity_bits.yfilter)
	|| ydk::is_set(topology_link_switching_capability.yfilter)
	|| ydk::is_set(topology_link_encoding.yfilter)
	|| ydk::is_set(topology_link_bandwidth_model.yfilter)
	|| (topology_link_bandwidth !=  nullptr && topology_link_bandwidth->has_operation())
	|| (odu_link_capabilities !=  nullptr && odu_link_capabilities->has_operation());
}

std::string MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-node-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_link_type.is_set || is_set(topology_link_type.yfilter)) leaf_name_data.push_back(topology_link_type.get_name_leafdata());
    if (topology_link_interface_address.is_set || is_set(topology_link_interface_address.yfilter)) leaf_name_data.push_back(topology_link_interface_address.get_name_leafdata());
    if (topology_link_interface_id.is_set || is_set(topology_link_interface_id.yfilter)) leaf_name_data.push_back(topology_link_interface_id.get_name_leafdata());
    if (topology_link_neighbor_address.is_set || is_set(topology_link_neighbor_address.yfilter)) leaf_name_data.push_back(topology_link_neighbor_address.get_name_leafdata());
    if (topology_link_neighbor_id.is_set || is_set(topology_link_neighbor_id.yfilter)) leaf_name_data.push_back(topology_link_neighbor_id.get_name_leafdata());
    if (topology_link_neighbor_system_id.is_set || is_set(topology_link_neighbor_system_id.yfilter)) leaf_name_data.push_back(topology_link_neighbor_system_id.get_name_leafdata());
    if (topology_link_neighbor_node_id.is_set || is_set(topology_link_neighbor_node_id.yfilter)) leaf_name_data.push_back(topology_link_neighbor_node_id.get_name_leafdata());
    if (topology_link_neighbor_generation.is_set || is_set(topology_link_neighbor_generation.yfilter)) leaf_name_data.push_back(topology_link_neighbor_generation.get_name_leafdata());
    if (topology_link_fragment_id.is_set || is_set(topology_link_fragment_id.yfilter)) leaf_name_data.push_back(topology_link_fragment_id.get_name_leafdata());
    if (topology_link_te_metric.is_set || is_set(topology_link_te_metric.yfilter)) leaf_name_data.push_back(topology_link_te_metric.get_name_leafdata());
    if (topology_link_igp_metric.is_set || is_set(topology_link_igp_metric.yfilter)) leaf_name_data.push_back(topology_link_igp_metric.get_name_leafdata());
    if (topology_link_uni_delay.is_set || is_set(topology_link_uni_delay.yfilter)) leaf_name_data.push_back(topology_link_uni_delay.get_name_leafdata());
    if (topology_link_affinity_bits.is_set || is_set(topology_link_affinity_bits.yfilter)) leaf_name_data.push_back(topology_link_affinity_bits.get_name_leafdata());
    if (topology_link_switching_capability.is_set || is_set(topology_link_switching_capability.yfilter)) leaf_name_data.push_back(topology_link_switching_capability.get_name_leafdata());
    if (topology_link_encoding.is_set || is_set(topology_link_encoding.yfilter)) leaf_name_data.push_back(topology_link_encoding.get_name_leafdata());
    if (topology_link_bandwidth_model.is_set || is_set(topology_link_bandwidth_model.yfilter)) leaf_name_data.push_back(topology_link_bandwidth_model.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-link-bandwidth")
    {
        if(topology_link_bandwidth == nullptr)
        {
            topology_link_bandwidth = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth>();
        }
        return topology_link_bandwidth;
    }

    if(child_yang_name == "odu-link-capabilities")
    {
        if(odu_link_capabilities == nullptr)
        {
            odu_link_capabilities = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities>();
        }
        return odu_link_capabilities;
    }

    if(child_yang_name == "topology-link-extended-affinity-bit")
    {
        auto c = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkExtendedAffinityBit>();
        c->parent = this;
        topology_link_extended_affinity_bit.push_back(c);
        return c;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        auto c = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(c);
        return c;
    }

    if(child_yang_name == "adjacency-sid")
    {
        auto c = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid>();
        c->parent = this;
        adjacency_sid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(topology_link_bandwidth != nullptr)
    {
        children["topology-link-bandwidth"] = topology_link_bandwidth;
    }

    if(odu_link_capabilities != nullptr)
    {
        children["odu-link-capabilities"] = odu_link_capabilities;
    }

    count = 0;
    for (auto const & c : topology_link_extended_affinity_bit)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : shared_risk_link_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : adjacency_sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-link-type")
    {
        topology_link_type = value;
        topology_link_type.value_namespace = name_space;
        topology_link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-interface-address")
    {
        topology_link_interface_address = value;
        topology_link_interface_address.value_namespace = name_space;
        topology_link_interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-interface-id")
    {
        topology_link_interface_id = value;
        topology_link_interface_id.value_namespace = name_space;
        topology_link_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-neighbor-address")
    {
        topology_link_neighbor_address = value;
        topology_link_neighbor_address.value_namespace = name_space;
        topology_link_neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-neighbor-id")
    {
        topology_link_neighbor_id = value;
        topology_link_neighbor_id.value_namespace = name_space;
        topology_link_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-neighbor-system-id")
    {
        topology_link_neighbor_system_id = value;
        topology_link_neighbor_system_id.value_namespace = name_space;
        topology_link_neighbor_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-neighbor-node-id")
    {
        topology_link_neighbor_node_id = value;
        topology_link_neighbor_node_id.value_namespace = name_space;
        topology_link_neighbor_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-neighbor-generation")
    {
        topology_link_neighbor_generation = value;
        topology_link_neighbor_generation.value_namespace = name_space;
        topology_link_neighbor_generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-fragment-id")
    {
        topology_link_fragment_id = value;
        topology_link_fragment_id.value_namespace = name_space;
        topology_link_fragment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-te-metric")
    {
        topology_link_te_metric = value;
        topology_link_te_metric.value_namespace = name_space;
        topology_link_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-igp-metric")
    {
        topology_link_igp_metric = value;
        topology_link_igp_metric.value_namespace = name_space;
        topology_link_igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-uni-delay")
    {
        topology_link_uni_delay = value;
        topology_link_uni_delay.value_namespace = name_space;
        topology_link_uni_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-affinity-bits")
    {
        topology_link_affinity_bits = value;
        topology_link_affinity_bits.value_namespace = name_space;
        topology_link_affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-switching-capability")
    {
        topology_link_switching_capability = value;
        topology_link_switching_capability.value_namespace = name_space;
        topology_link_switching_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-encoding")
    {
        topology_link_encoding = value;
        topology_link_encoding.value_namespace = name_space;
        topology_link_encoding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-bandwidth-model")
    {
        topology_link_bandwidth_model = value;
        topology_link_bandwidth_model.value_namespace = name_space;
        topology_link_bandwidth_model.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-link-type")
    {
        topology_link_type.yfilter = yfilter;
    }
    if(value_path == "topology-link-interface-address")
    {
        topology_link_interface_address.yfilter = yfilter;
    }
    if(value_path == "topology-link-interface-id")
    {
        topology_link_interface_id.yfilter = yfilter;
    }
    if(value_path == "topology-link-neighbor-address")
    {
        topology_link_neighbor_address.yfilter = yfilter;
    }
    if(value_path == "topology-link-neighbor-id")
    {
        topology_link_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "topology-link-neighbor-system-id")
    {
        topology_link_neighbor_system_id.yfilter = yfilter;
    }
    if(value_path == "topology-link-neighbor-node-id")
    {
        topology_link_neighbor_node_id.yfilter = yfilter;
    }
    if(value_path == "topology-link-neighbor-generation")
    {
        topology_link_neighbor_generation.yfilter = yfilter;
    }
    if(value_path == "topology-link-fragment-id")
    {
        topology_link_fragment_id.yfilter = yfilter;
    }
    if(value_path == "topology-link-te-metric")
    {
        topology_link_te_metric.yfilter = yfilter;
    }
    if(value_path == "topology-link-igp-metric")
    {
        topology_link_igp_metric.yfilter = yfilter;
    }
    if(value_path == "topology-link-uni-delay")
    {
        topology_link_uni_delay.yfilter = yfilter;
    }
    if(value_path == "topology-link-affinity-bits")
    {
        topology_link_affinity_bits.yfilter = yfilter;
    }
    if(value_path == "topology-link-switching-capability")
    {
        topology_link_switching_capability.yfilter = yfilter;
    }
    if(value_path == "topology-link-encoding")
    {
        topology_link_encoding.yfilter = yfilter;
    }
    if(value_path == "topology-link-bandwidth-model")
    {
        topology_link_bandwidth_model.yfilter = yfilter;
    }
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-link-bandwidth" || name == "odu-link-capabilities" || name == "topology-link-extended-affinity-bit" || name == "shared-risk-link-group" || name == "adjacency-sid" || name == "topology-link-type" || name == "topology-link-interface-address" || name == "topology-link-interface-id" || name == "topology-link-neighbor-address" || name == "topology-link-neighbor-id" || name == "topology-link-neighbor-system-id" || name == "topology-link-neighbor-node-id" || name == "topology-link-neighbor-generation" || name == "topology-link-fragment-id" || name == "topology-link-te-metric" || name == "topology-link-igp-metric" || name == "topology-link-uni-delay" || name == "topology-link-affinity-bits" || name == "topology-link-switching-capability" || name == "topology-link-encoding" || name == "topology-link-bandwidth-model")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidth()
    :
    bandwidth_migration_mode{YType::enumeration, "bandwidth-migration-mode"}
    	,
    topology_link_bandwidth_prestandard(std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard>())
	,topology_link_bandwidth_standard(std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard>())
{
    topology_link_bandwidth_prestandard->parent = this;
    topology_link_bandwidth_standard->parent = this;

    yang_name = "topology-link-bandwidth"; yang_parent_name = "topology-node-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::~TopologyLinkBandwidth()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::has_data() const
{
    return bandwidth_migration_mode.is_set
	|| (topology_link_bandwidth_prestandard !=  nullptr && topology_link_bandwidth_prestandard->has_data())
	|| (topology_link_bandwidth_standard !=  nullptr && topology_link_bandwidth_standard->has_data());
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_migration_mode.yfilter)
	|| (topology_link_bandwidth_prestandard !=  nullptr && topology_link_bandwidth_prestandard->has_operation())
	|| (topology_link_bandwidth_standard !=  nullptr && topology_link_bandwidth_standard->has_operation());
}

std::string MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_migration_mode.is_set || is_set(bandwidth_migration_mode.yfilter)) leaf_name_data.push_back(bandwidth_migration_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-link-bandwidth-prestandard")
    {
        if(topology_link_bandwidth_prestandard == nullptr)
        {
            topology_link_bandwidth_prestandard = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard>();
        }
        return topology_link_bandwidth_prestandard;
    }

    if(child_yang_name == "topology-link-bandwidth-standard")
    {
        if(topology_link_bandwidth_standard == nullptr)
        {
            topology_link_bandwidth_standard = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard>();
        }
        return topology_link_bandwidth_standard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(topology_link_bandwidth_prestandard != nullptr)
    {
        children["topology-link-bandwidth-prestandard"] = topology_link_bandwidth_prestandard;
    }

    if(topology_link_bandwidth_standard != nullptr)
    {
        children["topology-link-bandwidth-standard"] = topology_link_bandwidth_standard;
    }

    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-migration-mode")
    {
        bandwidth_migration_mode = value;
        bandwidth_migration_mode.value_namespace = name_space;
        bandwidth_migration_mode.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-migration-mode")
    {
        bandwidth_migration_mode.yfilter = yfilter;
    }
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-link-bandwidth-prestandard" || name == "topology-link-bandwidth-standard" || name == "bandwidth-migration-mode")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkBandwidthPrestandard()
    :
    topology_link_prestandard_bandwidth_physical{YType::uint32, "topology-link-prestandard-bandwidth-physical"},
    topology_link_prestandard_bandwidth_reservation_global{YType::uint32, "topology-link-prestandard-bandwidth-reservation-global"},
    topology_link_prestandard_bandwidth_reservation_subpool{YType::uint32, "topology-link-prestandard-bandwidth-reservation-subpool"}
    	,
    topology_link_prestandard_bandwidth_detail(std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail>())
{
    topology_link_prestandard_bandwidth_detail->parent = this;

    yang_name = "topology-link-bandwidth-prestandard"; yang_parent_name = "topology-link-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::~TopologyLinkBandwidthPrestandard()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::has_data() const
{
    return topology_link_prestandard_bandwidth_physical.is_set
	|| topology_link_prestandard_bandwidth_reservation_global.is_set
	|| topology_link_prestandard_bandwidth_reservation_subpool.is_set
	|| (topology_link_prestandard_bandwidth_detail !=  nullptr && topology_link_prestandard_bandwidth_detail->has_data());
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topology_link_prestandard_bandwidth_physical.yfilter)
	|| ydk::is_set(topology_link_prestandard_bandwidth_reservation_global.yfilter)
	|| ydk::is_set(topology_link_prestandard_bandwidth_reservation_subpool.yfilter)
	|| (topology_link_prestandard_bandwidth_detail !=  nullptr && topology_link_prestandard_bandwidth_detail->has_operation());
}

std::string MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-bandwidth-prestandard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_link_prestandard_bandwidth_physical.is_set || is_set(topology_link_prestandard_bandwidth_physical.yfilter)) leaf_name_data.push_back(topology_link_prestandard_bandwidth_physical.get_name_leafdata());
    if (topology_link_prestandard_bandwidth_reservation_global.is_set || is_set(topology_link_prestandard_bandwidth_reservation_global.yfilter)) leaf_name_data.push_back(topology_link_prestandard_bandwidth_reservation_global.get_name_leafdata());
    if (topology_link_prestandard_bandwidth_reservation_subpool.is_set || is_set(topology_link_prestandard_bandwidth_reservation_subpool.yfilter)) leaf_name_data.push_back(topology_link_prestandard_bandwidth_reservation_subpool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-link-prestandard-bandwidth-detail")
    {
        if(topology_link_prestandard_bandwidth_detail == nullptr)
        {
            topology_link_prestandard_bandwidth_detail = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail>();
        }
        return topology_link_prestandard_bandwidth_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(topology_link_prestandard_bandwidth_detail != nullptr)
    {
        children["topology-link-prestandard-bandwidth-detail"] = topology_link_prestandard_bandwidth_detail;
    }

    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology-link-prestandard-bandwidth-physical")
    {
        topology_link_prestandard_bandwidth_physical = value;
        topology_link_prestandard_bandwidth_physical.value_namespace = name_space;
        topology_link_prestandard_bandwidth_physical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-prestandard-bandwidth-reservation-global")
    {
        topology_link_prestandard_bandwidth_reservation_global = value;
        topology_link_prestandard_bandwidth_reservation_global.value_namespace = name_space;
        topology_link_prestandard_bandwidth_reservation_global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-link-prestandard-bandwidth-reservation-subpool")
    {
        topology_link_prestandard_bandwidth_reservation_subpool = value;
        topology_link_prestandard_bandwidth_reservation_subpool.value_namespace = name_space;
        topology_link_prestandard_bandwidth_reservation_subpool.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology-link-prestandard-bandwidth-physical")
    {
        topology_link_prestandard_bandwidth_physical.yfilter = yfilter;
    }
    if(value_path == "topology-link-prestandard-bandwidth-reservation-global")
    {
        topology_link_prestandard_bandwidth_reservation_global.yfilter = yfilter;
    }
    if(value_path == "topology-link-prestandard-bandwidth-reservation-subpool")
    {
        topology_link_prestandard_bandwidth_reservation_subpool.yfilter = yfilter;
    }
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-link-prestandard-bandwidth-detail" || name == "topology-link-prestandard-bandwidth-physical" || name == "topology-link-prestandard-bandwidth-reservation-global" || name == "topology-link-prestandard-bandwidth-reservation-subpool")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthDetail()
{

    yang_name = "topology-link-prestandard-bandwidth-detail"; yang_parent_name = "topology-link-bandwidth-prestandard"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::~TopologyLinkPrestandardBandwidthDetail()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::has_data() const
{
    for (std::size_t index=0; index<topology_link_prestandard_bandwidth_allocated.size(); index++)
    {
        if(topology_link_prestandard_bandwidth_allocated[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<topology_link_prestandard_bandwidth_available_global.size(); index++)
    {
        if(topology_link_prestandard_bandwidth_available_global[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<topology_link_prestandard_bandwidth_available_subpool.size(); index++)
    {
        if(topology_link_prestandard_bandwidth_available_subpool[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::has_operation() const
{
    for (std::size_t index=0; index<topology_link_prestandard_bandwidth_allocated.size(); index++)
    {
        if(topology_link_prestandard_bandwidth_allocated[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<topology_link_prestandard_bandwidth_available_global.size(); index++)
    {
        if(topology_link_prestandard_bandwidth_available_global[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<topology_link_prestandard_bandwidth_available_subpool.size(); index++)
    {
        if(topology_link_prestandard_bandwidth_available_subpool[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-prestandard-bandwidth-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-link-prestandard-bandwidth-allocated")
    {
        auto c = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated>();
        c->parent = this;
        topology_link_prestandard_bandwidth_allocated.push_back(c);
        return c;
    }

    if(child_yang_name == "topology-link-prestandard-bandwidth-available-global")
    {
        auto c = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal>();
        c->parent = this;
        topology_link_prestandard_bandwidth_available_global.push_back(c);
        return c;
    }

    if(child_yang_name == "topology-link-prestandard-bandwidth-available-subpool")
    {
        auto c = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool>();
        c->parent = this;
        topology_link_prestandard_bandwidth_available_subpool.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : topology_link_prestandard_bandwidth_allocated)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : topology_link_prestandard_bandwidth_available_global)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : topology_link_prestandard_bandwidth_available_subpool)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-link-prestandard-bandwidth-allocated" || name == "topology-link-prestandard-bandwidth-available-global" || name == "topology-link-prestandard-bandwidth-available-subpool")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::TopologyLinkPrestandardBandwidthAllocated()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "topology-link-prestandard-bandwidth-allocated"; yang_parent_name = "topology-link-prestandard-bandwidth-detail"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::~TopologyLinkPrestandardBandwidthAllocated()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::has_data() const
{
    return entry.is_set;
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-prestandard-bandwidth-allocated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::TopologyLinkPrestandardBandwidthAvailableGlobal()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "topology-link-prestandard-bandwidth-available-global"; yang_parent_name = "topology-link-prestandard-bandwidth-detail"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::~TopologyLinkPrestandardBandwidthAvailableGlobal()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::has_data() const
{
    return entry.is_set;
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-prestandard-bandwidth-available-global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::TopologyLinkPrestandardBandwidthAvailableSubpool()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "topology-link-prestandard-bandwidth-available-subpool"; yang_parent_name = "topology-link-prestandard-bandwidth-detail"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::~TopologyLinkPrestandardBandwidthAvailableSubpool()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::has_data() const
{
    return entry.is_set;
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-prestandard-bandwidth-available-subpool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopologyLinkBandwidthStandard()
    :
    topo_link_std_bw_physical{YType::uint32, "topo-link-std-bw-physical"},
    topo_link_std_bw_res_max{YType::uint32, "topo-link-std-bw-res-max"},
    topo_link_std_bw_res_pool0{YType::uint32, "topo-link-std-bw-res-pool0"},
    topo_link_std_bw_res_pool1{YType::uint32, "topo-link-std-bw-res-pool1"}
    	,
    topo_link_std_bw_detail(std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail>())
{
    topo_link_std_bw_detail->parent = this;

    yang_name = "topology-link-bandwidth-standard"; yang_parent_name = "topology-link-bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::~TopologyLinkBandwidthStandard()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::has_data() const
{
    return topo_link_std_bw_physical.is_set
	|| topo_link_std_bw_res_max.is_set
	|| topo_link_std_bw_res_pool0.is_set
	|| topo_link_std_bw_res_pool1.is_set
	|| (topo_link_std_bw_detail !=  nullptr && topo_link_std_bw_detail->has_data());
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topo_link_std_bw_physical.yfilter)
	|| ydk::is_set(topo_link_std_bw_res_max.yfilter)
	|| ydk::is_set(topo_link_std_bw_res_pool0.yfilter)
	|| ydk::is_set(topo_link_std_bw_res_pool1.yfilter)
	|| (topo_link_std_bw_detail !=  nullptr && topo_link_std_bw_detail->has_operation());
}

std::string MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-bandwidth-standard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topo_link_std_bw_physical.is_set || is_set(topo_link_std_bw_physical.yfilter)) leaf_name_data.push_back(topo_link_std_bw_physical.get_name_leafdata());
    if (topo_link_std_bw_res_max.is_set || is_set(topo_link_std_bw_res_max.yfilter)) leaf_name_data.push_back(topo_link_std_bw_res_max.get_name_leafdata());
    if (topo_link_std_bw_res_pool0.is_set || is_set(topo_link_std_bw_res_pool0.yfilter)) leaf_name_data.push_back(topo_link_std_bw_res_pool0.get_name_leafdata());
    if (topo_link_std_bw_res_pool1.is_set || is_set(topo_link_std_bw_res_pool1.yfilter)) leaf_name_data.push_back(topo_link_std_bw_res_pool1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topo-link-std-bw-detail")
    {
        if(topo_link_std_bw_detail == nullptr)
        {
            topo_link_std_bw_detail = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail>();
        }
        return topo_link_std_bw_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(topo_link_std_bw_detail != nullptr)
    {
        children["topo-link-std-bw-detail"] = topo_link_std_bw_detail;
    }

    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topo-link-std-bw-physical")
    {
        topo_link_std_bw_physical = value;
        topo_link_std_bw_physical.value_namespace = name_space;
        topo_link_std_bw_physical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-link-std-bw-res-max")
    {
        topo_link_std_bw_res_max = value;
        topo_link_std_bw_res_max.value_namespace = name_space;
        topo_link_std_bw_res_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-link-std-bw-res-pool0")
    {
        topo_link_std_bw_res_pool0 = value;
        topo_link_std_bw_res_pool0.value_namespace = name_space;
        topo_link_std_bw_res_pool0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-link-std-bw-res-pool1")
    {
        topo_link_std_bw_res_pool1 = value;
        topo_link_std_bw_res_pool1.value_namespace = name_space;
        topo_link_std_bw_res_pool1.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topo-link-std-bw-physical")
    {
        topo_link_std_bw_physical.yfilter = yfilter;
    }
    if(value_path == "topo-link-std-bw-res-max")
    {
        topo_link_std_bw_res_max.yfilter = yfilter;
    }
    if(value_path == "topo-link-std-bw-res-pool0")
    {
        topo_link_std_bw_res_pool0.yfilter = yfilter;
    }
    if(value_path == "topo-link-std-bw-res-pool1")
    {
        topo_link_std_bw_res_pool1.yfilter = yfilter;
    }
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topo-link-std-bw-detail" || name == "topo-link-std-bw-physical" || name == "topo-link-std-bw-res-max" || name == "topo-link-std-bw-res-pool0" || name == "topo-link-std-bw-res-pool1")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwDetail()
{

    yang_name = "topo-link-std-bw-detail"; yang_parent_name = "topology-link-bandwidth-standard"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::~TopoLinkStdBwDetail()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::has_data() const
{
    for (std::size_t index=0; index<topo_link_std_bw_allocated.size(); index++)
    {
        if(topo_link_std_bw_allocated[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<topo_link_std_bw_available.size(); index++)
    {
        if(topo_link_std_bw_available[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::has_operation() const
{
    for (std::size_t index=0; index<topo_link_std_bw_allocated.size(); index++)
    {
        if(topo_link_std_bw_allocated[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<topo_link_std_bw_available.size(); index++)
    {
        if(topo_link_std_bw_available[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topo-link-std-bw-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topo-link-std-bw-allocated")
    {
        auto c = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated>();
        c->parent = this;
        topo_link_std_bw_allocated.push_back(c);
        return c;
    }

    if(child_yang_name == "topo-link-std-bw-available")
    {
        auto c = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable>();
        c->parent = this;
        topo_link_std_bw_available.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : topo_link_std_bw_allocated)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : topo_link_std_bw_available)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topo-link-std-bw-allocated" || name == "topo-link-std-bw-available")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::TopoLinkStdBwAllocated()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "topo-link-std-bw-allocated"; yang_parent_name = "topo-link-std-bw-detail"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::~TopoLinkStdBwAllocated()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::has_data() const
{
    return entry.is_set;
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topo-link-std-bw-allocated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::TopoLinkStdBwAvailable()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "topo-link-std-bw-available"; yang_parent_name = "topo-link-std-bw-detail"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::~TopoLinkStdBwAvailable()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::has_data() const
{
    return entry.is_set;
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topo-link-std-bw-available";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduLinkCapabilities()
{

    yang_name = "odu-link-capabilities"; yang_parent_name = "topology-node-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::~OduLinkCapabilities()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::has_data() const
{
    for (std::size_t index=0; index<max_lsp_bandwidth.size(); index++)
    {
        if(max_lsp_bandwidth[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<odu_capability.size(); index++)
    {
        if(odu_capability[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::has_operation() const
{
    for (std::size_t index=0; index<max_lsp_bandwidth.size(); index++)
    {
        if(max_lsp_bandwidth[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<odu_capability.size(); index++)
    {
        if(odu_capability[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-link-capabilities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-lsp-bandwidth")
    {
        auto c = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth>();
        c->parent = this;
        max_lsp_bandwidth.push_back(c);
        return c;
    }

    if(child_yang_name == "odu-capability")
    {
        auto c = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability>();
        c->parent = this;
        odu_capability.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : max_lsp_bandwidth)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : odu_capability)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-lsp-bandwidth" || name == "odu-capability")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::MaxLspBandwidth()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "max-lsp-bandwidth"; yang_parent_name = "odu-link-capabilities"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::~MaxLspBandwidth()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::has_data() const
{
    return entry.is_set;
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lsp-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::OduCapability()
    :
    signal_type{YType::enumeration, "signal-type"},
    stage1{YType::enumeration, "stage1"},
    stage2{YType::enumeration, "stage2"},
    stage3{YType::enumeration, "stage3"},
    stage4{YType::enumeration, "stage4"},
    terminable{YType::boolean, "terminable"},
    switchable{YType::boolean, "switchable"},
    tsg1p25{YType::boolean, "tsg1p25"},
    tsg2p5{YType::boolean, "tsg2p5"},
    vcat_capable{YType::boolean, "vcat-capable"},
    lcas_capable{YType::boolean, "lcas-capable"}
    	,
    bandwidth_info(std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo>())
{
    bandwidth_info->parent = this;

    yang_name = "odu-capability"; yang_parent_name = "odu-link-capabilities"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::~OduCapability()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::has_data() const
{
    return signal_type.is_set
	|| stage1.is_set
	|| stage2.is_set
	|| stage3.is_set
	|| stage4.is_set
	|| terminable.is_set
	|| switchable.is_set
	|| tsg1p25.is_set
	|| tsg2p5.is_set
	|| vcat_capable.is_set
	|| lcas_capable.is_set
	|| (bandwidth_info !=  nullptr && bandwidth_info->has_data());
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(signal_type.yfilter)
	|| ydk::is_set(stage1.yfilter)
	|| ydk::is_set(stage2.yfilter)
	|| ydk::is_set(stage3.yfilter)
	|| ydk::is_set(stage4.yfilter)
	|| ydk::is_set(terminable.yfilter)
	|| ydk::is_set(switchable.yfilter)
	|| ydk::is_set(tsg1p25.yfilter)
	|| ydk::is_set(tsg2p5.yfilter)
	|| ydk::is_set(vcat_capable.yfilter)
	|| ydk::is_set(lcas_capable.yfilter)
	|| (bandwidth_info !=  nullptr && bandwidth_info->has_operation());
}

std::string MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signal_type.is_set || is_set(signal_type.yfilter)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage1.is_set || is_set(stage1.yfilter)) leaf_name_data.push_back(stage1.get_name_leafdata());
    if (stage2.is_set || is_set(stage2.yfilter)) leaf_name_data.push_back(stage2.get_name_leafdata());
    if (stage3.is_set || is_set(stage3.yfilter)) leaf_name_data.push_back(stage3.get_name_leafdata());
    if (stage4.is_set || is_set(stage4.yfilter)) leaf_name_data.push_back(stage4.get_name_leafdata());
    if (terminable.is_set || is_set(terminable.yfilter)) leaf_name_data.push_back(terminable.get_name_leafdata());
    if (switchable.is_set || is_set(switchable.yfilter)) leaf_name_data.push_back(switchable.get_name_leafdata());
    if (tsg1p25.is_set || is_set(tsg1p25.yfilter)) leaf_name_data.push_back(tsg1p25.get_name_leafdata());
    if (tsg2p5.is_set || is_set(tsg2p5.yfilter)) leaf_name_data.push_back(tsg2p5.get_name_leafdata());
    if (vcat_capable.is_set || is_set(vcat_capable.yfilter)) leaf_name_data.push_back(vcat_capable.get_name_leafdata());
    if (lcas_capable.is_set || is_set(lcas_capable.yfilter)) leaf_name_data.push_back(lcas_capable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-info")
    {
        if(bandwidth_info == nullptr)
        {
            bandwidth_info = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo>();
        }
        return bandwidth_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bandwidth_info != nullptr)
    {
        children["bandwidth-info"] = bandwidth_info;
    }

    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signal-type")
    {
        signal_type = value;
        signal_type.value_namespace = name_space;
        signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage1")
    {
        stage1 = value;
        stage1.value_namespace = name_space;
        stage1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage2")
    {
        stage2 = value;
        stage2.value_namespace = name_space;
        stage2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage3")
    {
        stage3 = value;
        stage3.value_namespace = name_space;
        stage3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage4")
    {
        stage4 = value;
        stage4.value_namespace = name_space;
        stage4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminable")
    {
        terminable = value;
        terminable.value_namespace = name_space;
        terminable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchable")
    {
        switchable = value;
        switchable.value_namespace = name_space;
        switchable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg1p25")
    {
        tsg1p25 = value;
        tsg1p25.value_namespace = name_space;
        tsg1p25.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg2p5")
    {
        tsg2p5 = value;
        tsg2p5.value_namespace = name_space;
        tsg2p5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcat-capable")
    {
        vcat_capable = value;
        vcat_capable.value_namespace = name_space;
        vcat_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lcas-capable")
    {
        lcas_capable = value;
        lcas_capable.value_namespace = name_space;
        lcas_capable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signal-type")
    {
        signal_type.yfilter = yfilter;
    }
    if(value_path == "stage1")
    {
        stage1.yfilter = yfilter;
    }
    if(value_path == "stage2")
    {
        stage2.yfilter = yfilter;
    }
    if(value_path == "stage3")
    {
        stage3.yfilter = yfilter;
    }
    if(value_path == "stage4")
    {
        stage4.yfilter = yfilter;
    }
    if(value_path == "terminable")
    {
        terminable.yfilter = yfilter;
    }
    if(value_path == "switchable")
    {
        switchable.yfilter = yfilter;
    }
    if(value_path == "tsg1p25")
    {
        tsg1p25.yfilter = yfilter;
    }
    if(value_path == "tsg2p5")
    {
        tsg2p5.yfilter = yfilter;
    }
    if(value_path == "vcat-capable")
    {
        vcat_capable.yfilter = yfilter;
    }
    if(value_path == "lcas-capable")
    {
        lcas_capable.yfilter = yfilter;
    }
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-info" || name == "signal-type" || name == "stage1" || name == "stage2" || name == "stage3" || name == "stage4" || name == "terminable" || name == "switchable" || name == "tsg1p25" || name == "tsg2p5" || name == "vcat-capable" || name == "lcas-capable")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::BandwidthInfo()
    :
    type{YType::enumeration, "type"}
    	,
    fixed(std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed>())
	,flex(std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex>())
{
    fixed->parent = this;
    flex->parent = this;

    yang_name = "bandwidth-info"; yang_parent_name = "odu-capability"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::~BandwidthInfo()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_data() const
{
    return type.is_set
	|| (fixed !=  nullptr && fixed->has_data())
	|| (flex !=  nullptr && flex->has_data());
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (fixed !=  nullptr && fixed->has_operation())
	|| (flex !=  nullptr && flex->has_operation());
}

std::string MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fixed")
    {
        if(fixed == nullptr)
        {
            fixed = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed>();
        }
        return fixed;
    }

    if(child_yang_name == "flex")
    {
        if(flex == nullptr)
        {
            flex = std::make_shared<MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex>();
        }
        return flex;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fixed != nullptr)
    {
        children["fixed"] = fixed;
    }

    if(flex != nullptr)
    {
        children["flex"] = flex;
    }

    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed" || name == "flex" || name == "type")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::Fixed()
    :
    maximum_od_us{YType::uint8, "maximum-od-us"},
    unreserved_od_us{YType::uint8, "unreserved-od-us"}
{

    yang_name = "fixed"; yang_parent_name = "bandwidth-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::~Fixed()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_data() const
{
    return maximum_od_us.is_set
	|| unreserved_od_us.is_set;
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_od_us.yfilter)
	|| ydk::is_set(unreserved_od_us.yfilter);
}

std::string MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_od_us.is_set || is_set(maximum_od_us.yfilter)) leaf_name_data.push_back(maximum_od_us.get_name_leafdata());
    if (unreserved_od_us.is_set || is_set(unreserved_od_us.yfilter)) leaf_name_data.push_back(unreserved_od_us.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-od-us")
    {
        maximum_od_us = value;
        maximum_od_us.value_namespace = name_space;
        maximum_od_us.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreserved-od-us")
    {
        unreserved_od_us = value;
        unreserved_od_us.value_namespace = name_space;
        unreserved_od_us.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-od-us")
    {
        maximum_od_us.yfilter = yfilter;
    }
    if(value_path == "unreserved-od-us")
    {
        unreserved_od_us.yfilter = yfilter;
    }
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-od-us" || name == "unreserved-od-us")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::Flex()
    :
    max_bandwidth{YType::uint32, "max-bandwidth"},
    unreserved_bandwidth{YType::uint32, "unreserved-bandwidth"},
    max_lsp_bandwidth{YType::uint32, "max-lsp-bandwidth"}
{

    yang_name = "flex"; yang_parent_name = "bandwidth-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::~Flex()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_data() const
{
    return max_bandwidth.is_set
	|| unreserved_bandwidth.is_set
	|| max_lsp_bandwidth.is_set;
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(unreserved_bandwidth.yfilter)
	|| ydk::is_set(max_lsp_bandwidth.yfilter);
}

std::string MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (unreserved_bandwidth.is_set || is_set(unreserved_bandwidth.yfilter)) leaf_name_data.push_back(unreserved_bandwidth.get_name_leafdata());
    if (max_lsp_bandwidth.is_set || is_set(max_lsp_bandwidth.yfilter)) leaf_name_data.push_back(max_lsp_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth = value;
        unreserved_bandwidth.value_namespace = name_space;
        unreserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsp-bandwidth")
    {
        max_lsp_bandwidth = value;
        max_lsp_bandwidth.value_namespace = name_space;
        max_lsp_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-lsp-bandwidth")
    {
        max_lsp_bandwidth.yfilter = yfilter;
    }
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-bandwidth" || name == "unreserved-bandwidth" || name == "max-lsp-bandwidth")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkExtendedAffinityBit::TopologyLinkExtendedAffinityBit()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "topology-link-extended-affinity-bit"; yang_parent_name = "topology-node-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkExtendedAffinityBit::~TopologyLinkExtendedAffinityBit()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkExtendedAffinityBit::has_data() const
{
    return entry.is_set;
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkExtendedAffinityBit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkExtendedAffinityBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-extended-affinity-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkExtendedAffinityBit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkExtendedAffinityBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkExtendedAffinityBit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkExtendedAffinityBit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkExtendedAffinityBit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkExtendedAffinityBit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "topology-node-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
        shared_risk_group.value_namespace = name_space;
        shared_risk_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::AdjacencySid()
    :
    adjacency_sid{YType::uint32, "adjacency-sid"},
    link_type{YType::enumeration, "link-type"},
    local_addr{YType::str, "local-addr"},
    remote_addr{YType::str, "remote-addr"},
    nbr_node_igpid{YType::str, "nbr-node-igpid"},
    nbr_node_te_router_id{YType::str, "nbr-node-te-router-id"},
    flag_f{YType::boolean, "flag-f"},
    flag_b{YType::boolean, "flag-b"},
    flag_v{YType::boolean, "flag-v"},
    flag_l{YType::boolean, "flag-l"},
    flag_s{YType::boolean, "flag-s"}
{

    yang_name = "adjacency-sid"; yang_parent_name = "topology-node-link"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::~AdjacencySid()
{
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::has_data() const
{
    return adjacency_sid.is_set
	|| link_type.is_set
	|| local_addr.is_set
	|| remote_addr.is_set
	|| nbr_node_igpid.is_set
	|| nbr_node_te_router_id.is_set
	|| flag_f.is_set
	|| flag_b.is_set
	|| flag_v.is_set
	|| flag_l.is_set
	|| flag_s.is_set;
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_sid.yfilter)
	|| ydk::is_set(link_type.yfilter)
	|| ydk::is_set(local_addr.yfilter)
	|| ydk::is_set(remote_addr.yfilter)
	|| ydk::is_set(nbr_node_igpid.yfilter)
	|| ydk::is_set(nbr_node_te_router_id.yfilter)
	|| ydk::is_set(flag_f.yfilter)
	|| ydk::is_set(flag_b.yfilter)
	|| ydk::is_set(flag_v.yfilter)
	|| ydk::is_set(flag_l.yfilter)
	|| ydk::is_set(flag_s.yfilter);
}

std::string MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid.is_set || is_set(adjacency_sid.yfilter)) leaf_name_data.push_back(adjacency_sid.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.yfilter)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.yfilter)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.yfilter)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (nbr_node_igpid.is_set || is_set(nbr_node_igpid.yfilter)) leaf_name_data.push_back(nbr_node_igpid.get_name_leafdata());
    if (nbr_node_te_router_id.is_set || is_set(nbr_node_te_router_id.yfilter)) leaf_name_data.push_back(nbr_node_te_router_id.get_name_leafdata());
    if (flag_f.is_set || is_set(flag_f.yfilter)) leaf_name_data.push_back(flag_f.get_name_leafdata());
    if (flag_b.is_set || is_set(flag_b.yfilter)) leaf_name_data.push_back(flag_b.get_name_leafdata());
    if (flag_v.is_set || is_set(flag_v.yfilter)) leaf_name_data.push_back(flag_v.get_name_leafdata());
    if (flag_l.is_set || is_set(flag_l.yfilter)) leaf_name_data.push_back(flag_l.get_name_leafdata());
    if (flag_s.is_set || is_set(flag_s.yfilter)) leaf_name_data.push_back(flag_s.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-sid")
    {
        adjacency_sid = value;
        adjacency_sid.value_namespace = name_space;
        adjacency_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-type")
    {
        link_type = value;
        link_type.value_namespace = name_space;
        link_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
        local_addr.value_namespace = name_space;
        local_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
        remote_addr.value_namespace = name_space;
        remote_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-node-igpid")
    {
        nbr_node_igpid = value;
        nbr_node_igpid.value_namespace = name_space;
        nbr_node_igpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-node-te-router-id")
    {
        nbr_node_te_router_id = value;
        nbr_node_te_router_id.value_namespace = name_space;
        nbr_node_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-f")
    {
        flag_f = value;
        flag_f.value_namespace = name_space;
        flag_f.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-b")
    {
        flag_b = value;
        flag_b.value_namespace = name_space;
        flag_b.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-v")
    {
        flag_v = value;
        flag_v.value_namespace = name_space;
        flag_v.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-l")
    {
        flag_l = value;
        flag_l.value_namespace = name_space;
        flag_l.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-s")
    {
        flag_s = value;
        flag_s.value_namespace = name_space;
        flag_s.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-sid")
    {
        adjacency_sid.yfilter = yfilter;
    }
    if(value_path == "link-type")
    {
        link_type.yfilter = yfilter;
    }
    if(value_path == "local-addr")
    {
        local_addr.yfilter = yfilter;
    }
    if(value_path == "remote-addr")
    {
        remote_addr.yfilter = yfilter;
    }
    if(value_path == "nbr-node-igpid")
    {
        nbr_node_igpid.yfilter = yfilter;
    }
    if(value_path == "nbr-node-te-router-id")
    {
        nbr_node_te_router_id.yfilter = yfilter;
    }
    if(value_path == "flag-f")
    {
        flag_f.yfilter = yfilter;
    }
    if(value_path == "flag-b")
    {
        flag_b.yfilter = yfilter;
    }
    if(value_path == "flag-v")
    {
        flag_v.yfilter = yfilter;
    }
    if(value_path == "flag-l")
    {
        flag_l.yfilter = yfilter;
    }
    if(value_path == "flag-s")
    {
        flag_s.yfilter = yfilter;
    }
}

bool MplsTe::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid" || name == "link-type" || name == "local-addr" || name == "remote-addr" || name == "nbr-node-igpid" || name == "nbr-node-te-router-id" || name == "flag-f" || name == "flag-b" || name == "flag-v" || name == "flag-l" || name == "flag-s")
        return true;
    return false;
}

MplsLcacStandby::MplsLcacStandby()
    :
    neighbors(std::make_shared<MplsLcacStandby::Neighbors>())
	,preemption_events(std::make_shared<MplsLcacStandby::PreemptionEvents>())
	,advertisements(std::make_shared<MplsLcacStandby::Advertisements>())
	,statistics(std::make_shared<MplsLcacStandby::Statistics>())
	,bandwidth_allocation(std::make_shared<MplsLcacStandby::BandwidthAllocation>())
	,gmpls(std::make_shared<MplsLcacStandby::Gmpls>())
	,bfd_neighbors(std::make_shared<MplsLcacStandby::BfdNeighbors>())
	,bandwidth_account(std::make_shared<MplsLcacStandby::BandwidthAccount>())
	,link_summary(std::make_shared<MplsLcacStandby::LinkSummary>())
	,link_information(std::make_shared<MplsLcacStandby::LinkInformation>())
	,admission_control(std::make_shared<MplsLcacStandby::AdmissionControl>())
	,soft_preemption_global_info(std::make_shared<MplsLcacStandby::SoftPreemptionGlobalInfo>())
	,soft_preemptions(std::make_shared<MplsLcacStandby::SoftPreemptions>())
{
    neighbors->parent = this;
    preemption_events->parent = this;
    advertisements->parent = this;
    statistics->parent = this;
    bandwidth_allocation->parent = this;
    gmpls->parent = this;
    bfd_neighbors->parent = this;
    bandwidth_account->parent = this;
    link_summary->parent = this;
    link_information->parent = this;
    admission_control->parent = this;
    soft_preemption_global_info->parent = this;
    soft_preemptions->parent = this;

    yang_name = "mpls-lcac-standby"; yang_parent_name = "Cisco-IOS-XR-mpls-te-oper"; is_top_level_class = true; has_list_ancestor = false;
}

MplsLcacStandby::~MplsLcacStandby()
{
}

bool MplsLcacStandby::has_data() const
{
    return (neighbors !=  nullptr && neighbors->has_data())
	|| (preemption_events !=  nullptr && preemption_events->has_data())
	|| (advertisements !=  nullptr && advertisements->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (bandwidth_allocation !=  nullptr && bandwidth_allocation->has_data())
	|| (gmpls !=  nullptr && gmpls->has_data())
	|| (bfd_neighbors !=  nullptr && bfd_neighbors->has_data())
	|| (bandwidth_account !=  nullptr && bandwidth_account->has_data())
	|| (link_summary !=  nullptr && link_summary->has_data())
	|| (link_information !=  nullptr && link_information->has_data())
	|| (admission_control !=  nullptr && admission_control->has_data())
	|| (soft_preemption_global_info !=  nullptr && soft_preemption_global_info->has_data())
	|| (soft_preemptions !=  nullptr && soft_preemptions->has_data());
}

bool MplsLcacStandby::has_operation() const
{
    return is_set(yfilter)
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (preemption_events !=  nullptr && preemption_events->has_operation())
	|| (advertisements !=  nullptr && advertisements->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (bandwidth_allocation !=  nullptr && bandwidth_allocation->has_operation())
	|| (gmpls !=  nullptr && gmpls->has_operation())
	|| (bfd_neighbors !=  nullptr && bfd_neighbors->has_operation())
	|| (bandwidth_account !=  nullptr && bandwidth_account->has_operation())
	|| (link_summary !=  nullptr && link_summary->has_operation())
	|| (link_information !=  nullptr && link_information->has_operation())
	|| (admission_control !=  nullptr && admission_control->has_operation())
	|| (soft_preemption_global_info !=  nullptr && soft_preemption_global_info->has_operation())
	|| (soft_preemptions !=  nullptr && soft_preemptions->has_operation());
}

std::string MplsLcacStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<MplsLcacStandby::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "preemption-events")
    {
        if(preemption_events == nullptr)
        {
            preemption_events = std::make_shared<MplsLcacStandby::PreemptionEvents>();
        }
        return preemption_events;
    }

    if(child_yang_name == "advertisements")
    {
        if(advertisements == nullptr)
        {
            advertisements = std::make_shared<MplsLcacStandby::Advertisements>();
        }
        return advertisements;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsLcacStandby::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "bandwidth-allocation")
    {
        if(bandwidth_allocation == nullptr)
        {
            bandwidth_allocation = std::make_shared<MplsLcacStandby::BandwidthAllocation>();
        }
        return bandwidth_allocation;
    }

    if(child_yang_name == "gmpls")
    {
        if(gmpls == nullptr)
        {
            gmpls = std::make_shared<MplsLcacStandby::Gmpls>();
        }
        return gmpls;
    }

    if(child_yang_name == "bfd-neighbors")
    {
        if(bfd_neighbors == nullptr)
        {
            bfd_neighbors = std::make_shared<MplsLcacStandby::BfdNeighbors>();
        }
        return bfd_neighbors;
    }

    if(child_yang_name == "bandwidth-account")
    {
        if(bandwidth_account == nullptr)
        {
            bandwidth_account = std::make_shared<MplsLcacStandby::BandwidthAccount>();
        }
        return bandwidth_account;
    }

    if(child_yang_name == "link-summary")
    {
        if(link_summary == nullptr)
        {
            link_summary = std::make_shared<MplsLcacStandby::LinkSummary>();
        }
        return link_summary;
    }

    if(child_yang_name == "link-information")
    {
        if(link_information == nullptr)
        {
            link_information = std::make_shared<MplsLcacStandby::LinkInformation>();
        }
        return link_information;
    }

    if(child_yang_name == "admission-control")
    {
        if(admission_control == nullptr)
        {
            admission_control = std::make_shared<MplsLcacStandby::AdmissionControl>();
        }
        return admission_control;
    }

    if(child_yang_name == "soft-preemption-global-info")
    {
        if(soft_preemption_global_info == nullptr)
        {
            soft_preemption_global_info = std::make_shared<MplsLcacStandby::SoftPreemptionGlobalInfo>();
        }
        return soft_preemption_global_info;
    }

    if(child_yang_name == "soft-preemptions")
    {
        if(soft_preemptions == nullptr)
        {
            soft_preemptions = std::make_shared<MplsLcacStandby::SoftPreemptions>();
        }
        return soft_preemptions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(preemption_events != nullptr)
    {
        children["preemption-events"] = preemption_events;
    }

    if(advertisements != nullptr)
    {
        children["advertisements"] = advertisements;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(bandwidth_allocation != nullptr)
    {
        children["bandwidth-allocation"] = bandwidth_allocation;
    }

    if(gmpls != nullptr)
    {
        children["gmpls"] = gmpls;
    }

    if(bfd_neighbors != nullptr)
    {
        children["bfd-neighbors"] = bfd_neighbors;
    }

    if(bandwidth_account != nullptr)
    {
        children["bandwidth-account"] = bandwidth_account;
    }

    if(link_summary != nullptr)
    {
        children["link-summary"] = link_summary;
    }

    if(link_information != nullptr)
    {
        children["link-information"] = link_information;
    }

    if(admission_control != nullptr)
    {
        children["admission-control"] = admission_control;
    }

    if(soft_preemption_global_info != nullptr)
    {
        children["soft-preemption-global-info"] = soft_preemption_global_info;
    }

    if(soft_preemptions != nullptr)
    {
        children["soft-preemptions"] = soft_preemptions;
    }

    return children;
}

void MplsLcacStandby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MplsLcacStandby::clone_ptr() const
{
    return std::make_shared<MplsLcacStandby>();
}

std::string MplsLcacStandby::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsLcacStandby::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsLcacStandby::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MplsLcacStandby::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool MplsLcacStandby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors" || name == "preemption-events" || name == "advertisements" || name == "statistics" || name == "bandwidth-allocation" || name == "gmpls" || name == "bfd-neighbors" || name == "bandwidth-account" || name == "link-summary" || name == "link-information" || name == "admission-control" || name == "soft-preemption-global-info" || name == "soft-preemptions")
        return true;
    return false;
}

MplsLcacStandby::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Neighbors::~Neighbors()
{
}

bool MplsLcacStandby::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::Neighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<MplsLcacStandby::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

MplsLcacStandby::Neighbors::Neighbor::Neighbor()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Neighbors::Neighbor::~Neighbor()
{
}

bool MplsLcacStandby::Neighbors::Neighbor::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return interface_name.is_set;
}

bool MplsLcacStandby::Neighbors::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string MplsLcacStandby::Neighbors::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<MplsLcacStandby::Neighbors::Neighbor::Neighbor_>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "interface-name")
        return true;
    return false;
}

MplsLcacStandby::Neighbors::Neighbor::Neighbor_::Neighbor_()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_id{YType::str, "neighbor-id"},
    area_id{YType::str, "area-id"},
    neighbor_address{YType::str, "neighbor-address"}
{

    yang_name = "neighbor"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::Neighbors::Neighbor::Neighbor_::~Neighbor_()
{
}

bool MplsLcacStandby::Neighbors::Neighbor::Neighbor_::has_data() const
{
    return interface_name.is_set
	|| neighbor_id.is_set
	|| area_id.is_set
	|| neighbor_address.is_set;
}

bool MplsLcacStandby::Neighbors::Neighbor::Neighbor_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(neighbor_address.yfilter);
}

std::string MplsLcacStandby::Neighbors::Neighbor::Neighbor_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Neighbors::Neighbor::Neighbor_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Neighbors::Neighbor::Neighbor_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Neighbors::Neighbor::Neighbor_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::Neighbors::Neighbor::Neighbor_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Neighbors::Neighbor::Neighbor_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Neighbors::Neighbor::Neighbor_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "neighbor-id" || name == "area-id" || name == "neighbor-address")
        return true;
    return false;
}

MplsLcacStandby::PreemptionEvents::PreemptionEvents()
{

    yang_name = "preemption-events"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::PreemptionEvents::~PreemptionEvents()
{
}

bool MplsLcacStandby::PreemptionEvents::has_data() const
{
    for (std::size_t index=0; index<preemption_event.size(); index++)
    {
        if(preemption_event[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::PreemptionEvents::has_operation() const
{
    for (std::size_t index=0; index<preemption_event.size(); index++)
    {
        if(preemption_event[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::PreemptionEvents::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::PreemptionEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preemption-events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::PreemptionEvents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::PreemptionEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "preemption-event")
    {
        auto c = std::make_shared<MplsLcacStandby::PreemptionEvents::PreemptionEvent>();
        c->parent = this;
        preemption_event.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::PreemptionEvents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : preemption_event)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::PreemptionEvents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::PreemptionEvents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::PreemptionEvents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preemption-event")
        return true;
    return false;
}

MplsLcacStandby::PreemptionEvents::PreemptionEvent::PreemptionEvent()
    :
    event_index{YType::uint32, "event-index"},
    tunnel_id{YType::uint16, "tunnel-id"},
    lsp_id{YType::uint16, "lsp-id"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    bandwidth_type{YType::uint8, "bandwidth-type"},
    old_bandwidth_bc0{YType::uint64, "old-bandwidth-bc0"},
    old_bandwidth_bc1{YType::uint64, "old-bandwidth-bc1"},
    new_bandwidth_bc0{YType::uint64, "new-bandwidth-bc0"},
    new_bandwidth_bc1{YType::uint64, "new-bandwidth-bc1"},
    bandwidth_overshoot0{YType::uint64, "bandwidth-overshoot0"},
    bandwidth_overshoot1{YType::uint64, "bandwidth-overshoot1"},
    interface_name{YType::str, "interface-name"},
    event_time{YType::uint32, "event-time"},
    ls_ps{YType::uint16, "ls-ps"},
    soft_preempted_ls_ps{YType::uint16, "soft-preempted-ls-ps"},
    soft_preempted_ls_ps_fr_rrewrite{YType::uint16, "soft-preempted-ls-ps-fr-rrewrite"},
    hard_preempted_ls_ps{YType::uint16, "hard-preempted-ls-ps"},
    total_preempted_bandwidth_bc0{YType::uint64, "total-preempted-bandwidth-bc0"},
    total_preempted_bandwidth_bc1{YType::uint64, "total-preempted-bandwidth-bc1"},
    softly_preempted_bandwidth_bc0{YType::uint64, "softly-preempted-bandwidth-bc0"},
    softly_preempted_bandwidth_bc1{YType::uint64, "softly-preempted-bandwidth-bc1"},
    soft_preempted_fr_rrewrite_bandwidth_bc0{YType::uint64, "soft-preempted-fr-rrewrite-bandwidth-bc0"},
    soft_preempted_fr_rrewrite_bandwidth_bc1{YType::uint64, "soft-preempted-fr-rrewrite-bandwidth-bc1"},
    hard_preempted_bandwidth_bc0{YType::uint64, "hard-preempted-bandwidth-bc0"},
    hard_preempted_bandwidth_bc1{YType::uint64, "hard-preempted-bandwidth-bc1"},
    tunnels{YType::uint16, "tunnels"},
    soft_preempted_tunnels{YType::uint16, "soft-preempted-tunnels"},
    soft_preempted_tunnels_fr_rrewrite{YType::uint16, "soft-preempted-tunnels-fr-rrewrite"},
    hard_preempted_tunnels{YType::uint16, "hard-preempted-tunnels"}
{

    yang_name = "preemption-event"; yang_parent_name = "preemption-events"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::PreemptionEvents::PreemptionEvent::~PreemptionEvent()
{
}

bool MplsLcacStandby::PreemptionEvents::PreemptionEvent::has_data() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_data())
            return true;
    }
    return event_index.is_set
	|| tunnel_id.is_set
	|| lsp_id.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| requested_bandwidth.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| bandwidth_type.is_set
	|| old_bandwidth_bc0.is_set
	|| old_bandwidth_bc1.is_set
	|| new_bandwidth_bc0.is_set
	|| new_bandwidth_bc1.is_set
	|| bandwidth_overshoot0.is_set
	|| bandwidth_overshoot1.is_set
	|| interface_name.is_set
	|| event_time.is_set
	|| ls_ps.is_set
	|| soft_preempted_ls_ps.is_set
	|| soft_preempted_ls_ps_fr_rrewrite.is_set
	|| hard_preempted_ls_ps.is_set
	|| total_preempted_bandwidth_bc0.is_set
	|| total_preempted_bandwidth_bc1.is_set
	|| softly_preempted_bandwidth_bc0.is_set
	|| softly_preempted_bandwidth_bc1.is_set
	|| soft_preempted_fr_rrewrite_bandwidth_bc0.is_set
	|| soft_preempted_fr_rrewrite_bandwidth_bc1.is_set
	|| hard_preempted_bandwidth_bc0.is_set
	|| hard_preempted_bandwidth_bc1.is_set
	|| tunnels.is_set
	|| soft_preempted_tunnels.is_set
	|| soft_preempted_tunnels_fr_rrewrite.is_set
	|| hard_preempted_tunnels.is_set;
}

bool MplsLcacStandby::PreemptionEvents::PreemptionEvent::has_operation() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_index.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(requested_bandwidth.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(old_bandwidth_bc0.yfilter)
	|| ydk::is_set(old_bandwidth_bc1.yfilter)
	|| ydk::is_set(new_bandwidth_bc0.yfilter)
	|| ydk::is_set(new_bandwidth_bc1.yfilter)
	|| ydk::is_set(bandwidth_overshoot0.yfilter)
	|| ydk::is_set(bandwidth_overshoot1.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(event_time.yfilter)
	|| ydk::is_set(ls_ps.yfilter)
	|| ydk::is_set(soft_preempted_ls_ps.yfilter)
	|| ydk::is_set(soft_preempted_ls_ps_fr_rrewrite.yfilter)
	|| ydk::is_set(hard_preempted_ls_ps.yfilter)
	|| ydk::is_set(total_preempted_bandwidth_bc0.yfilter)
	|| ydk::is_set(total_preempted_bandwidth_bc1.yfilter)
	|| ydk::is_set(softly_preempted_bandwidth_bc0.yfilter)
	|| ydk::is_set(softly_preempted_bandwidth_bc1.yfilter)
	|| ydk::is_set(soft_preempted_fr_rrewrite_bandwidth_bc0.yfilter)
	|| ydk::is_set(soft_preempted_fr_rrewrite_bandwidth_bc1.yfilter)
	|| ydk::is_set(hard_preempted_bandwidth_bc0.yfilter)
	|| ydk::is_set(hard_preempted_bandwidth_bc1.yfilter)
	|| ydk::is_set(tunnels.yfilter)
	|| ydk::is_set(soft_preempted_tunnels.yfilter)
	|| ydk::is_set(soft_preempted_tunnels_fr_rrewrite.yfilter)
	|| ydk::is_set(hard_preempted_tunnels.yfilter);
}

std::string MplsLcacStandby::PreemptionEvents::PreemptionEvent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/preemption-events/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::PreemptionEvents::PreemptionEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preemption-event" <<"[event-index='" <<event_index <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::PreemptionEvents::PreemptionEvent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_index.is_set || is_set(event_index.yfilter)) leaf_name_data.push_back(event_index.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.yfilter)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (old_bandwidth_bc0.is_set || is_set(old_bandwidth_bc0.yfilter)) leaf_name_data.push_back(old_bandwidth_bc0.get_name_leafdata());
    if (old_bandwidth_bc1.is_set || is_set(old_bandwidth_bc1.yfilter)) leaf_name_data.push_back(old_bandwidth_bc1.get_name_leafdata());
    if (new_bandwidth_bc0.is_set || is_set(new_bandwidth_bc0.yfilter)) leaf_name_data.push_back(new_bandwidth_bc0.get_name_leafdata());
    if (new_bandwidth_bc1.is_set || is_set(new_bandwidth_bc1.yfilter)) leaf_name_data.push_back(new_bandwidth_bc1.get_name_leafdata());
    if (bandwidth_overshoot0.is_set || is_set(bandwidth_overshoot0.yfilter)) leaf_name_data.push_back(bandwidth_overshoot0.get_name_leafdata());
    if (bandwidth_overshoot1.is_set || is_set(bandwidth_overshoot1.yfilter)) leaf_name_data.push_back(bandwidth_overshoot1.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (event_time.is_set || is_set(event_time.yfilter)) leaf_name_data.push_back(event_time.get_name_leafdata());
    if (ls_ps.is_set || is_set(ls_ps.yfilter)) leaf_name_data.push_back(ls_ps.get_name_leafdata());
    if (soft_preempted_ls_ps.is_set || is_set(soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(soft_preempted_ls_ps.get_name_leafdata());
    if (soft_preempted_ls_ps_fr_rrewrite.is_set || is_set(soft_preempted_ls_ps_fr_rrewrite.yfilter)) leaf_name_data.push_back(soft_preempted_ls_ps_fr_rrewrite.get_name_leafdata());
    if (hard_preempted_ls_ps.is_set || is_set(hard_preempted_ls_ps.yfilter)) leaf_name_data.push_back(hard_preempted_ls_ps.get_name_leafdata());
    if (total_preempted_bandwidth_bc0.is_set || is_set(total_preempted_bandwidth_bc0.yfilter)) leaf_name_data.push_back(total_preempted_bandwidth_bc0.get_name_leafdata());
    if (total_preempted_bandwidth_bc1.is_set || is_set(total_preempted_bandwidth_bc1.yfilter)) leaf_name_data.push_back(total_preempted_bandwidth_bc1.get_name_leafdata());
    if (softly_preempted_bandwidth_bc0.is_set || is_set(softly_preempted_bandwidth_bc0.yfilter)) leaf_name_data.push_back(softly_preempted_bandwidth_bc0.get_name_leafdata());
    if (softly_preempted_bandwidth_bc1.is_set || is_set(softly_preempted_bandwidth_bc1.yfilter)) leaf_name_data.push_back(softly_preempted_bandwidth_bc1.get_name_leafdata());
    if (soft_preempted_fr_rrewrite_bandwidth_bc0.is_set || is_set(soft_preempted_fr_rrewrite_bandwidth_bc0.yfilter)) leaf_name_data.push_back(soft_preempted_fr_rrewrite_bandwidth_bc0.get_name_leafdata());
    if (soft_preempted_fr_rrewrite_bandwidth_bc1.is_set || is_set(soft_preempted_fr_rrewrite_bandwidth_bc1.yfilter)) leaf_name_data.push_back(soft_preempted_fr_rrewrite_bandwidth_bc1.get_name_leafdata());
    if (hard_preempted_bandwidth_bc0.is_set || is_set(hard_preempted_bandwidth_bc0.yfilter)) leaf_name_data.push_back(hard_preempted_bandwidth_bc0.get_name_leafdata());
    if (hard_preempted_bandwidth_bc1.is_set || is_set(hard_preempted_bandwidth_bc1.yfilter)) leaf_name_data.push_back(hard_preempted_bandwidth_bc1.get_name_leafdata());
    if (tunnels.is_set || is_set(tunnels.yfilter)) leaf_name_data.push_back(tunnels.get_name_leafdata());
    if (soft_preempted_tunnels.is_set || is_set(soft_preempted_tunnels.yfilter)) leaf_name_data.push_back(soft_preempted_tunnels.get_name_leafdata());
    if (soft_preempted_tunnels_fr_rrewrite.is_set || is_set(soft_preempted_tunnels_fr_rrewrite.yfilter)) leaf_name_data.push_back(soft_preempted_tunnels_fr_rrewrite.get_name_leafdata());
    if (hard_preempted_tunnels.is_set || is_set(hard_preempted_tunnels.yfilter)) leaf_name_data.push_back(hard_preempted_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::PreemptionEvents::PreemptionEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp")
    {
        auto c = std::make_shared<MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp>();
        c->parent = this;
        lsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::PreemptionEvents::PreemptionEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : lsp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::PreemptionEvents::PreemptionEvent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-index")
    {
        event_index = value;
        event_index.value_namespace = name_space;
        event_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
        requested_bandwidth.value_namespace = name_space;
        requested_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-bandwidth-bc0")
    {
        old_bandwidth_bc0 = value;
        old_bandwidth_bc0.value_namespace = name_space;
        old_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-bandwidth-bc1")
    {
        old_bandwidth_bc1 = value;
        old_bandwidth_bc1.value_namespace = name_space;
        old_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-bandwidth-bc0")
    {
        new_bandwidth_bc0 = value;
        new_bandwidth_bc0.value_namespace = name_space;
        new_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-bandwidth-bc1")
    {
        new_bandwidth_bc1 = value;
        new_bandwidth_bc1.value_namespace = name_space;
        new_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-overshoot0")
    {
        bandwidth_overshoot0 = value;
        bandwidth_overshoot0.value_namespace = name_space;
        bandwidth_overshoot0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-overshoot1")
    {
        bandwidth_overshoot1 = value;
        bandwidth_overshoot1.value_namespace = name_space;
        bandwidth_overshoot1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-time")
    {
        event_time = value;
        event_time.value_namespace = name_space;
        event_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ps")
    {
        ls_ps = value;
        ls_ps.value_namespace = name_space;
        ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-ls-ps")
    {
        soft_preempted_ls_ps = value;
        soft_preempted_ls_ps.value_namespace = name_space;
        soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-ls-ps-fr-rrewrite")
    {
        soft_preempted_ls_ps_fr_rrewrite = value;
        soft_preempted_ls_ps_fr_rrewrite.value_namespace = name_space;
        soft_preempted_ls_ps_fr_rrewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hard-preempted-ls-ps")
    {
        hard_preempted_ls_ps = value;
        hard_preempted_ls_ps.value_namespace = name_space;
        hard_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-preempted-bandwidth-bc0")
    {
        total_preempted_bandwidth_bc0 = value;
        total_preempted_bandwidth_bc0.value_namespace = name_space;
        total_preempted_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-preempted-bandwidth-bc1")
    {
        total_preempted_bandwidth_bc1 = value;
        total_preempted_bandwidth_bc1.value_namespace = name_space;
        total_preempted_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "softly-preempted-bandwidth-bc0")
    {
        softly_preempted_bandwidth_bc0 = value;
        softly_preempted_bandwidth_bc0.value_namespace = name_space;
        softly_preempted_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "softly-preempted-bandwidth-bc1")
    {
        softly_preempted_bandwidth_bc1 = value;
        softly_preempted_bandwidth_bc1.value_namespace = name_space;
        softly_preempted_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-fr-rrewrite-bandwidth-bc0")
    {
        soft_preempted_fr_rrewrite_bandwidth_bc0 = value;
        soft_preempted_fr_rrewrite_bandwidth_bc0.value_namespace = name_space;
        soft_preempted_fr_rrewrite_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-fr-rrewrite-bandwidth-bc1")
    {
        soft_preempted_fr_rrewrite_bandwidth_bc1 = value;
        soft_preempted_fr_rrewrite_bandwidth_bc1.value_namespace = name_space;
        soft_preempted_fr_rrewrite_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hard-preempted-bandwidth-bc0")
    {
        hard_preempted_bandwidth_bc0 = value;
        hard_preempted_bandwidth_bc0.value_namespace = name_space;
        hard_preempted_bandwidth_bc0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hard-preempted-bandwidth-bc1")
    {
        hard_preempted_bandwidth_bc1 = value;
        hard_preempted_bandwidth_bc1.value_namespace = name_space;
        hard_preempted_bandwidth_bc1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnels")
    {
        tunnels = value;
        tunnels.value_namespace = name_space;
        tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-tunnels")
    {
        soft_preempted_tunnels = value;
        soft_preempted_tunnels.value_namespace = name_space;
        soft_preempted_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-tunnels-fr-rrewrite")
    {
        soft_preempted_tunnels_fr_rrewrite = value;
        soft_preempted_tunnels_fr_rrewrite.value_namespace = name_space;
        soft_preempted_tunnels_fr_rrewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hard-preempted-tunnels")
    {
        hard_preempted_tunnels = value;
        hard_preempted_tunnels.value_namespace = name_space;
        hard_preempted_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::PreemptionEvents::PreemptionEvent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-index")
    {
        event_index.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "old-bandwidth-bc0")
    {
        old_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "old-bandwidth-bc1")
    {
        old_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "new-bandwidth-bc0")
    {
        new_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "new-bandwidth-bc1")
    {
        new_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "bandwidth-overshoot0")
    {
        bandwidth_overshoot0.yfilter = yfilter;
    }
    if(value_path == "bandwidth-overshoot1")
    {
        bandwidth_overshoot1.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "event-time")
    {
        event_time.yfilter = yfilter;
    }
    if(value_path == "ls-ps")
    {
        ls_ps.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-ls-ps")
    {
        soft_preempted_ls_ps.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-ls-ps-fr-rrewrite")
    {
        soft_preempted_ls_ps_fr_rrewrite.yfilter = yfilter;
    }
    if(value_path == "hard-preempted-ls-ps")
    {
        hard_preempted_ls_ps.yfilter = yfilter;
    }
    if(value_path == "total-preempted-bandwidth-bc0")
    {
        total_preempted_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "total-preempted-bandwidth-bc1")
    {
        total_preempted_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "softly-preempted-bandwidth-bc0")
    {
        softly_preempted_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "softly-preempted-bandwidth-bc1")
    {
        softly_preempted_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-fr-rrewrite-bandwidth-bc0")
    {
        soft_preempted_fr_rrewrite_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-fr-rrewrite-bandwidth-bc1")
    {
        soft_preempted_fr_rrewrite_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "hard-preempted-bandwidth-bc0")
    {
        hard_preempted_bandwidth_bc0.yfilter = yfilter;
    }
    if(value_path == "hard-preempted-bandwidth-bc1")
    {
        hard_preempted_bandwidth_bc1.yfilter = yfilter;
    }
    if(value_path == "tunnels")
    {
        tunnels.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-tunnels")
    {
        soft_preempted_tunnels.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-tunnels-fr-rrewrite")
    {
        soft_preempted_tunnels_fr_rrewrite.yfilter = yfilter;
    }
    if(value_path == "hard-preempted-tunnels")
    {
        hard_preempted_tunnels.yfilter = yfilter;
    }
}

bool MplsLcacStandby::PreemptionEvents::PreemptionEvent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp" || name == "event-index" || name == "tunnel-id" || name == "lsp-id" || name == "source-address" || name == "destination-address" || name == "requested-bandwidth" || name == "setup-priority" || name == "hold-priority" || name == "bandwidth-type" || name == "old-bandwidth-bc0" || name == "old-bandwidth-bc1" || name == "new-bandwidth-bc0" || name == "new-bandwidth-bc1" || name == "bandwidth-overshoot0" || name == "bandwidth-overshoot1" || name == "interface-name" || name == "event-time" || name == "ls-ps" || name == "soft-preempted-ls-ps" || name == "soft-preempted-ls-ps-fr-rrewrite" || name == "hard-preempted-ls-ps" || name == "total-preempted-bandwidth-bc0" || name == "total-preempted-bandwidth-bc1" || name == "softly-preempted-bandwidth-bc0" || name == "softly-preempted-bandwidth-bc1" || name == "soft-preempted-fr-rrewrite-bandwidth-bc0" || name == "soft-preempted-fr-rrewrite-bandwidth-bc1" || name == "hard-preempted-bandwidth-bc0" || name == "hard-preempted-bandwidth-bc1" || name == "tunnels" || name == "soft-preempted-tunnels" || name == "soft-preempted-tunnels-fr-rrewrite" || name == "hard-preempted-tunnels")
        return true;
    return false;
}

MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::Lsp()
    :
    tunnel_id{YType::uint16, "tunnel-id"},
    lsp_id{YType::uint16, "lsp-id"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    bandwidth_type{YType::uint8, "bandwidth-type"},
    soft_preempted{YType::boolean, "soft-preempted"},
    soft_preemption_timeout{YType::uint16, "soft-preemption-timeout"},
    bandwidth_preempted{YType::boolean, "bandwidth-preempted"},
    soft_preempted_fr_rrewrite{YType::boolean, "soft-preempted-fr-rrewrite"}
{

    yang_name = "lsp"; yang_parent_name = "preemption-event"; is_top_level_class = false; has_list_ancestor = true;
}

MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::~Lsp()
{
}

bool MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::has_data() const
{
    return tunnel_id.is_set
	|| lsp_id.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| requested_bandwidth.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| bandwidth_type.is_set
	|| soft_preempted.is_set
	|| soft_preemption_timeout.is_set
	|| bandwidth_preempted.is_set
	|| soft_preempted_fr_rrewrite.is_set;
}

bool MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(requested_bandwidth.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(soft_preempted.yfilter)
	|| ydk::is_set(soft_preemption_timeout.yfilter)
	|| ydk::is_set(bandwidth_preempted.yfilter)
	|| ydk::is_set(soft_preempted_fr_rrewrite.yfilter);
}

std::string MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.yfilter)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (soft_preempted.is_set || is_set(soft_preempted.yfilter)) leaf_name_data.push_back(soft_preempted.get_name_leafdata());
    if (soft_preemption_timeout.is_set || is_set(soft_preemption_timeout.yfilter)) leaf_name_data.push_back(soft_preemption_timeout.get_name_leafdata());
    if (bandwidth_preempted.is_set || is_set(bandwidth_preempted.yfilter)) leaf_name_data.push_back(bandwidth_preempted.get_name_leafdata());
    if (soft_preempted_fr_rrewrite.is_set || is_set(soft_preempted_fr_rrewrite.yfilter)) leaf_name_data.push_back(soft_preempted_fr_rrewrite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
        requested_bandwidth.value_namespace = name_space;
        requested_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted")
    {
        soft_preempted = value;
        soft_preempted.value_namespace = name_space;
        soft_preempted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout = value;
        soft_preemption_timeout.value_namespace = name_space;
        soft_preemption_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-preempted")
    {
        bandwidth_preempted = value;
        bandwidth_preempted.value_namespace = name_space;
        bandwidth_preempted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-fr-rrewrite")
    {
        soft_preempted_fr_rrewrite = value;
        soft_preempted_fr_rrewrite.value_namespace = name_space;
        soft_preempted_fr_rrewrite.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "soft-preempted")
    {
        soft_preempted.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout.yfilter = yfilter;
    }
    if(value_path == "bandwidth-preempted")
    {
        bandwidth_preempted.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-fr-rrewrite")
    {
        soft_preempted_fr_rrewrite.yfilter = yfilter;
    }
}

bool MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-id" || name == "lsp-id" || name == "source-address" || name == "destination-address" || name == "requested-bandwidth" || name == "setup-priority" || name == "hold-priority" || name == "bandwidth-type" || name == "soft-preempted" || name == "soft-preemption-timeout" || name == "bandwidth-preempted" || name == "soft-preempted-fr-rrewrite")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::Advertisements()
    :
    flooding_status_message{YType::str, "flooding-status-message"},
    last_flooding_time{YType::uint32, "last-flooding-time"},
    last_flooding_trigger{YType::enumeration, "last-flooding-trigger"},
    next_flooding_time{YType::uint32, "next-flooding-time"},
    ds_te_mode{YType::enumeration, "ds-te-mode"}
{

    yang_name = "advertisements"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::~Advertisements()
{
}

bool MplsLcacStandby::Advertisements::has_data() const
{
    for (std::size_t index=0; index<advertized_areas.size(); index++)
    {
        if(advertized_areas[index]->has_data())
            return true;
    }
    return flooding_status_message.is_set
	|| last_flooding_time.is_set
	|| last_flooding_trigger.is_set
	|| next_flooding_time.is_set
	|| ds_te_mode.is_set;
}

bool MplsLcacStandby::Advertisements::has_operation() const
{
    for (std::size_t index=0; index<advertized_areas.size(); index++)
    {
        if(advertized_areas[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flooding_status_message.yfilter)
	|| ydk::is_set(last_flooding_time.yfilter)
	|| ydk::is_set(last_flooding_trigger.yfilter)
	|| ydk::is_set(next_flooding_time.yfilter)
	|| ydk::is_set(ds_te_mode.yfilter);
}

std::string MplsLcacStandby::Advertisements::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisements";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flooding_status_message.is_set || is_set(flooding_status_message.yfilter)) leaf_name_data.push_back(flooding_status_message.get_name_leafdata());
    if (last_flooding_time.is_set || is_set(last_flooding_time.yfilter)) leaf_name_data.push_back(last_flooding_time.get_name_leafdata());
    if (last_flooding_trigger.is_set || is_set(last_flooding_trigger.yfilter)) leaf_name_data.push_back(last_flooding_trigger.get_name_leafdata());
    if (next_flooding_time.is_set || is_set(next_flooding_time.yfilter)) leaf_name_data.push_back(next_flooding_time.get_name_leafdata());
    if (ds_te_mode.is_set || is_set(ds_te_mode.yfilter)) leaf_name_data.push_back(ds_te_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertized-areas")
    {
        auto c = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas>();
        c->parent = this;
        advertized_areas.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : advertized_areas)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::Advertisements::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flooding-status-message")
    {
        flooding_status_message = value;
        flooding_status_message.value_namespace = name_space;
        flooding_status_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-flooding-time")
    {
        last_flooding_time = value;
        last_flooding_time.value_namespace = name_space;
        last_flooding_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-flooding-trigger")
    {
        last_flooding_trigger = value;
        last_flooding_trigger.value_namespace = name_space;
        last_flooding_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-flooding-time")
    {
        next_flooding_time = value;
        next_flooding_time.value_namespace = name_space;
        next_flooding_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ds-te-mode")
    {
        ds_te_mode = value;
        ds_te_mode.value_namespace = name_space;
        ds_te_mode.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Advertisements::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flooding-status-message")
    {
        flooding_status_message.yfilter = yfilter;
    }
    if(value_path == "last-flooding-time")
    {
        last_flooding_time.yfilter = yfilter;
    }
    if(value_path == "last-flooding-trigger")
    {
        last_flooding_trigger.yfilter = yfilter;
    }
    if(value_path == "next-flooding-time")
    {
        next_flooding_time.yfilter = yfilter;
    }
    if(value_path == "ds-te-mode")
    {
        ds_te_mode.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Advertisements::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertized-areas" || name == "flooding-status-message" || name == "last-flooding-time" || name == "last-flooding-trigger" || name == "next-flooding-time" || name == "ds-te-mode")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::AdvertizedAreas()
    :
    igp_area_id{YType::str, "igp-area-id"},
    protocol{YType::enumeration, "protocol"},
    system_id{YType::str, "system-id"},
    router_id{YType::str, "router-id"}
{

    yang_name = "advertized-areas"; yang_parent_name = "advertisements"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::~AdvertizedAreas()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::has_data() const
{
    for (std::size_t index=0; index<flooded_link.size(); index++)
    {
        if(flooded_link[index]->has_data())
            return true;
    }
    return igp_area_id.is_set
	|| protocol.is_set
	|| system_id.is_set
	|| router_id.is_set;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::has_operation() const
{
    for (std::size_t index=0; index<flooded_link.size(); index++)
    {
        if(flooded_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(igp_area_id.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertized-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::AdvertizedAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_area_id.is_set || is_set(igp_area_id.yfilter)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flooded-link")
    {
        auto c = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink>();
        c->parent = this;
        flooded_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::AdvertizedAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : flooded_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
        igp_area_id.value_namespace = name_space;
        igp_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-area-id")
    {
        igp_area_id.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooded-link" || name == "igp-area-id" || name == "protocol" || name == "system-id" || name == "router-id")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::FloodedLink()
    :
    link_id{YType::uint16, "link-id"},
    interface_name{YType::str, "interface-name"},
    link_address{YType::str, "link-address"},
    subnet_type{YType::enumeration, "subnet-type"},
    outgoing_interface_id{YType::uint32, "outgoing-interface-id"},
    is_designated_router{YType::boolean, "is-designated-router"},
    designated_router_igp_id{YType::str, "designated-router-igp-id"},
    neighbor_igp_id{YType::str, "neighbor-igp-id"},
    igp_neighbor_address{YType::str, "igp-neighbor-address"},
    incoming_interface_id{YType::uint32, "incoming-interface-id"},
    te_metric{YType::uint32, "te-metric"},
    igp_metric{YType::uint32, "igp-metric"},
    uni_link_delay{YType::uint32, "uni-link-delay"},
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    physical_bandwidth{YType::uint32, "physical-bandwidth"},
    bcm_id{YType::uint16, "bcm-id"},
    link_maximum_reservable_bandwidth{YType::uint32, "link-maximum-reservable-bandwidth"},
    reservable_pool0_bandwidth{YType::uint32, "reservable-pool0-bandwidth"},
    reservable_pool1_bandwidth{YType::uint32, "reservable-pool1-bandwidth"},
    is_receiving_reservable_bandwidth_enabled{YType::boolean, "is-receiving-reservable-bandwidth-enabled"},
    receiving_direction{YType::enumeration, "receiving-direction"},
    is_transmitting_reservable_bandwidth_enabled{YType::boolean, "is-transmitting-reservable-bandwidth-enabled"},
    transmitting_direction{YType::enumeration, "transmitting-direction"},
    affinity_attribute_flags{YType::uint32, "affinity-attribute-flags"}
    	,
    odu_link_capabilities(std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities>())
{
    odu_link_capabilities->parent = this;

    yang_name = "flooded-link"; yang_parent_name = "advertized-areas"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::~FloodedLink()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::has_data() const
{
    for (std::size_t index=0; index<extended_affinity_attribute_flag.size(); index++)
    {
        if(extended_affinity_attribute_flag[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<receiving_reservable_bandwidth.size(); index++)
    {
        if(receiving_reservable_bandwidth[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<transmitting_reservable_bandwidth.size(); index++)
    {
        if(transmitting_reservable_bandwidth[index]->has_data())
            return true;
    }
    return link_id.is_set
	|| interface_name.is_set
	|| link_address.is_set
	|| subnet_type.is_set
	|| outgoing_interface_id.is_set
	|| is_designated_router.is_set
	|| designated_router_igp_id.is_set
	|| neighbor_igp_id.is_set
	|| igp_neighbor_address.is_set
	|| incoming_interface_id.is_set
	|| te_metric.is_set
	|| igp_metric.is_set
	|| uni_link_delay.is_set
	|| bandwidth_units.is_set
	|| physical_bandwidth.is_set
	|| bcm_id.is_set
	|| link_maximum_reservable_bandwidth.is_set
	|| reservable_pool0_bandwidth.is_set
	|| reservable_pool1_bandwidth.is_set
	|| is_receiving_reservable_bandwidth_enabled.is_set
	|| receiving_direction.is_set
	|| is_transmitting_reservable_bandwidth_enabled.is_set
	|| transmitting_direction.is_set
	|| affinity_attribute_flags.is_set
	|| (odu_link_capabilities !=  nullptr && odu_link_capabilities->has_data());
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::has_operation() const
{
    for (std::size_t index=0; index<extended_affinity_attribute_flag.size(); index++)
    {
        if(extended_affinity_attribute_flag[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<receiving_reservable_bandwidth.size(); index++)
    {
        if(receiving_reservable_bandwidth[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<transmitting_reservable_bandwidth.size(); index++)
    {
        if(transmitting_reservable_bandwidth[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(subnet_type.yfilter)
	|| ydk::is_set(outgoing_interface_id.yfilter)
	|| ydk::is_set(is_designated_router.yfilter)
	|| ydk::is_set(designated_router_igp_id.yfilter)
	|| ydk::is_set(neighbor_igp_id.yfilter)
	|| ydk::is_set(igp_neighbor_address.yfilter)
	|| ydk::is_set(incoming_interface_id.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(uni_link_delay.yfilter)
	|| ydk::is_set(bandwidth_units.yfilter)
	|| ydk::is_set(physical_bandwidth.yfilter)
	|| ydk::is_set(bcm_id.yfilter)
	|| ydk::is_set(link_maximum_reservable_bandwidth.yfilter)
	|| ydk::is_set(reservable_pool0_bandwidth.yfilter)
	|| ydk::is_set(reservable_pool1_bandwidth.yfilter)
	|| ydk::is_set(is_receiving_reservable_bandwidth_enabled.yfilter)
	|| ydk::is_set(receiving_direction.yfilter)
	|| ydk::is_set(is_transmitting_reservable_bandwidth_enabled.yfilter)
	|| ydk::is_set(transmitting_direction.yfilter)
	|| ydk::is_set(affinity_attribute_flags.yfilter)
	|| (odu_link_capabilities !=  nullptr && odu_link_capabilities->has_operation());
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooded-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_id.is_set || is_set(link_id.yfilter)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (subnet_type.is_set || is_set(subnet_type.yfilter)) leaf_name_data.push_back(subnet_type.get_name_leafdata());
    if (outgoing_interface_id.is_set || is_set(outgoing_interface_id.yfilter)) leaf_name_data.push_back(outgoing_interface_id.get_name_leafdata());
    if (is_designated_router.is_set || is_set(is_designated_router.yfilter)) leaf_name_data.push_back(is_designated_router.get_name_leafdata());
    if (designated_router_igp_id.is_set || is_set(designated_router_igp_id.yfilter)) leaf_name_data.push_back(designated_router_igp_id.get_name_leafdata());
    if (neighbor_igp_id.is_set || is_set(neighbor_igp_id.yfilter)) leaf_name_data.push_back(neighbor_igp_id.get_name_leafdata());
    if (igp_neighbor_address.is_set || is_set(igp_neighbor_address.yfilter)) leaf_name_data.push_back(igp_neighbor_address.get_name_leafdata());
    if (incoming_interface_id.is_set || is_set(incoming_interface_id.yfilter)) leaf_name_data.push_back(incoming_interface_id.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (uni_link_delay.is_set || is_set(uni_link_delay.yfilter)) leaf_name_data.push_back(uni_link_delay.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.yfilter)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (physical_bandwidth.is_set || is_set(physical_bandwidth.yfilter)) leaf_name_data.push_back(physical_bandwidth.get_name_leafdata());
    if (bcm_id.is_set || is_set(bcm_id.yfilter)) leaf_name_data.push_back(bcm_id.get_name_leafdata());
    if (link_maximum_reservable_bandwidth.is_set || is_set(link_maximum_reservable_bandwidth.yfilter)) leaf_name_data.push_back(link_maximum_reservable_bandwidth.get_name_leafdata());
    if (reservable_pool0_bandwidth.is_set || is_set(reservable_pool0_bandwidth.yfilter)) leaf_name_data.push_back(reservable_pool0_bandwidth.get_name_leafdata());
    if (reservable_pool1_bandwidth.is_set || is_set(reservable_pool1_bandwidth.yfilter)) leaf_name_data.push_back(reservable_pool1_bandwidth.get_name_leafdata());
    if (is_receiving_reservable_bandwidth_enabled.is_set || is_set(is_receiving_reservable_bandwidth_enabled.yfilter)) leaf_name_data.push_back(is_receiving_reservable_bandwidth_enabled.get_name_leafdata());
    if (receiving_direction.is_set || is_set(receiving_direction.yfilter)) leaf_name_data.push_back(receiving_direction.get_name_leafdata());
    if (is_transmitting_reservable_bandwidth_enabled.is_set || is_set(is_transmitting_reservable_bandwidth_enabled.yfilter)) leaf_name_data.push_back(is_transmitting_reservable_bandwidth_enabled.get_name_leafdata());
    if (transmitting_direction.is_set || is_set(transmitting_direction.yfilter)) leaf_name_data.push_back(transmitting_direction.get_name_leafdata());
    if (affinity_attribute_flags.is_set || is_set(affinity_attribute_flags.yfilter)) leaf_name_data.push_back(affinity_attribute_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-link-capabilities")
    {
        if(odu_link_capabilities == nullptr)
        {
            odu_link_capabilities = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities>();
        }
        return odu_link_capabilities;
    }

    if(child_yang_name == "extended-affinity-attribute-flag")
    {
        auto c = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag>();
        c->parent = this;
        extended_affinity_attribute_flag.push_back(c);
        return c;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        auto c = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(c);
        return c;
    }

    if(child_yang_name == "receiving-reservable-bandwidth")
    {
        auto c = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth>();
        c->parent = this;
        receiving_reservable_bandwidth.push_back(c);
        return c;
    }

    if(child_yang_name == "transmitting-reservable-bandwidth")
    {
        auto c = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth>();
        c->parent = this;
        transmitting_reservable_bandwidth.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(odu_link_capabilities != nullptr)
    {
        children["odu-link-capabilities"] = odu_link_capabilities;
    }

    count = 0;
    for (auto const & c : extended_affinity_attribute_flag)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : shared_risk_link_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : receiving_reservable_bandwidth)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : transmitting_reservable_bandwidth)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-id")
    {
        link_id = value;
        link_id.value_namespace = name_space;
        link_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnet-type")
    {
        subnet_type = value;
        subnet_type.value_namespace = name_space;
        subnet_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-interface-id")
    {
        outgoing_interface_id = value;
        outgoing_interface_id.value_namespace = name_space;
        outgoing_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-designated-router")
    {
        is_designated_router = value;
        is_designated_router.value_namespace = name_space;
        is_designated_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "designated-router-igp-id")
    {
        designated_router_igp_id = value;
        designated_router_igp_id.value_namespace = name_space;
        designated_router_igp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-igp-id")
    {
        neighbor_igp_id = value;
        neighbor_igp_id.value_namespace = name_space;
        neighbor_igp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-neighbor-address")
    {
        igp_neighbor_address = value;
        igp_neighbor_address.value_namespace = name_space;
        igp_neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-interface-id")
    {
        incoming_interface_id = value;
        incoming_interface_id.value_namespace = name_space;
        incoming_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uni-link-delay")
    {
        uni_link_delay = value;
        uni_link_delay.value_namespace = name_space;
        uni_link_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
        bandwidth_units.value_namespace = name_space;
        bandwidth_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth = value;
        physical_bandwidth.value_namespace = name_space;
        physical_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bcm-id")
    {
        bcm_id = value;
        bcm_id.value_namespace = name_space;
        bcm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-maximum-reservable-bandwidth")
    {
        link_maximum_reservable_bandwidth = value;
        link_maximum_reservable_bandwidth.value_namespace = name_space;
        link_maximum_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservable-pool0-bandwidth")
    {
        reservable_pool0_bandwidth = value;
        reservable_pool0_bandwidth.value_namespace = name_space;
        reservable_pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reservable-pool1-bandwidth")
    {
        reservable_pool1_bandwidth = value;
        reservable_pool1_bandwidth.value_namespace = name_space;
        reservable_pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-receiving-reservable-bandwidth-enabled")
    {
        is_receiving_reservable_bandwidth_enabled = value;
        is_receiving_reservable_bandwidth_enabled.value_namespace = name_space;
        is_receiving_reservable_bandwidth_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receiving-direction")
    {
        receiving_direction = value;
        receiving_direction.value_namespace = name_space;
        receiving_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-transmitting-reservable-bandwidth-enabled")
    {
        is_transmitting_reservable_bandwidth_enabled = value;
        is_transmitting_reservable_bandwidth_enabled.value_namespace = name_space;
        is_transmitting_reservable_bandwidth_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitting-direction")
    {
        transmitting_direction = value;
        transmitting_direction.value_namespace = name_space;
        transmitting_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-attribute-flags")
    {
        affinity_attribute_flags = value;
        affinity_attribute_flags.value_namespace = name_space;
        affinity_attribute_flags.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-id")
    {
        link_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "subnet-type")
    {
        subnet_type.yfilter = yfilter;
    }
    if(value_path == "outgoing-interface-id")
    {
        outgoing_interface_id.yfilter = yfilter;
    }
    if(value_path == "is-designated-router")
    {
        is_designated_router.yfilter = yfilter;
    }
    if(value_path == "designated-router-igp-id")
    {
        designated_router_igp_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-igp-id")
    {
        neighbor_igp_id.yfilter = yfilter;
    }
    if(value_path == "igp-neighbor-address")
    {
        igp_neighbor_address.yfilter = yfilter;
    }
    if(value_path == "incoming-interface-id")
    {
        incoming_interface_id.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "uni-link-delay")
    {
        uni_link_delay.yfilter = yfilter;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units.yfilter = yfilter;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bcm-id")
    {
        bcm_id.yfilter = yfilter;
    }
    if(value_path == "link-maximum-reservable-bandwidth")
    {
        link_maximum_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "reservable-pool0-bandwidth")
    {
        reservable_pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "reservable-pool1-bandwidth")
    {
        reservable_pool1_bandwidth.yfilter = yfilter;
    }
    if(value_path == "is-receiving-reservable-bandwidth-enabled")
    {
        is_receiving_reservable_bandwidth_enabled.yfilter = yfilter;
    }
    if(value_path == "receiving-direction")
    {
        receiving_direction.yfilter = yfilter;
    }
    if(value_path == "is-transmitting-reservable-bandwidth-enabled")
    {
        is_transmitting_reservable_bandwidth_enabled.yfilter = yfilter;
    }
    if(value_path == "transmitting-direction")
    {
        transmitting_direction.yfilter = yfilter;
    }
    if(value_path == "affinity-attribute-flags")
    {
        affinity_attribute_flags.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-link-capabilities" || name == "extended-affinity-attribute-flag" || name == "shared-risk-link-group" || name == "receiving-reservable-bandwidth" || name == "transmitting-reservable-bandwidth" || name == "link-id" || name == "interface-name" || name == "link-address" || name == "subnet-type" || name == "outgoing-interface-id" || name == "is-designated-router" || name == "designated-router-igp-id" || name == "neighbor-igp-id" || name == "igp-neighbor-address" || name == "incoming-interface-id" || name == "te-metric" || name == "igp-metric" || name == "uni-link-delay" || name == "bandwidth-units" || name == "physical-bandwidth" || name == "bcm-id" || name == "link-maximum-reservable-bandwidth" || name == "reservable-pool0-bandwidth" || name == "reservable-pool1-bandwidth" || name == "is-receiving-reservable-bandwidth-enabled" || name == "receiving-direction" || name == "is-transmitting-reservable-bandwidth-enabled" || name == "transmitting-direction" || name == "affinity-attribute-flags")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduLinkCapabilities()
{

    yang_name = "odu-link-capabilities"; yang_parent_name = "flooded-link"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::~OduLinkCapabilities()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::has_data() const
{
    for (std::size_t index=0; index<max_lsp_bandwidth.size(); index++)
    {
        if(max_lsp_bandwidth[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<odu_capability.size(); index++)
    {
        if(odu_capability[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::has_operation() const
{
    for (std::size_t index=0; index<max_lsp_bandwidth.size(); index++)
    {
        if(max_lsp_bandwidth[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<odu_capability.size(); index++)
    {
        if(odu_capability[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-link-capabilities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-lsp-bandwidth")
    {
        auto c = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth>();
        c->parent = this;
        max_lsp_bandwidth.push_back(c);
        return c;
    }

    if(child_yang_name == "odu-capability")
    {
        auto c = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability>();
        c->parent = this;
        odu_capability.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : max_lsp_bandwidth)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : odu_capability)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-lsp-bandwidth" || name == "odu-capability")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::MaxLspBandwidth()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "max-lsp-bandwidth"; yang_parent_name = "odu-link-capabilities"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::~MaxLspBandwidth()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::has_data() const
{
    return entry.is_set;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/odu-link-capabilities/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lsp-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::MaxLspBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::OduCapability()
    :
    signal_type{YType::enumeration, "signal-type"},
    stage1{YType::enumeration, "stage1"},
    stage2{YType::enumeration, "stage2"},
    stage3{YType::enumeration, "stage3"},
    stage4{YType::enumeration, "stage4"},
    terminable{YType::boolean, "terminable"},
    switchable{YType::boolean, "switchable"},
    tsg1p25{YType::boolean, "tsg1p25"},
    tsg2p5{YType::boolean, "tsg2p5"},
    vcat_capable{YType::boolean, "vcat-capable"},
    lcas_capable{YType::boolean, "lcas-capable"}
    	,
    bandwidth_info(std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo>())
{
    bandwidth_info->parent = this;

    yang_name = "odu-capability"; yang_parent_name = "odu-link-capabilities"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::~OduCapability()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::has_data() const
{
    return signal_type.is_set
	|| stage1.is_set
	|| stage2.is_set
	|| stage3.is_set
	|| stage4.is_set
	|| terminable.is_set
	|| switchable.is_set
	|| tsg1p25.is_set
	|| tsg2p5.is_set
	|| vcat_capable.is_set
	|| lcas_capable.is_set
	|| (bandwidth_info !=  nullptr && bandwidth_info->has_data());
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(signal_type.yfilter)
	|| ydk::is_set(stage1.yfilter)
	|| ydk::is_set(stage2.yfilter)
	|| ydk::is_set(stage3.yfilter)
	|| ydk::is_set(stage4.yfilter)
	|| ydk::is_set(terminable.yfilter)
	|| ydk::is_set(switchable.yfilter)
	|| ydk::is_set(tsg1p25.yfilter)
	|| ydk::is_set(tsg2p5.yfilter)
	|| ydk::is_set(vcat_capable.yfilter)
	|| ydk::is_set(lcas_capable.yfilter)
	|| (bandwidth_info !=  nullptr && bandwidth_info->has_operation());
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/odu-link-capabilities/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signal_type.is_set || is_set(signal_type.yfilter)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage1.is_set || is_set(stage1.yfilter)) leaf_name_data.push_back(stage1.get_name_leafdata());
    if (stage2.is_set || is_set(stage2.yfilter)) leaf_name_data.push_back(stage2.get_name_leafdata());
    if (stage3.is_set || is_set(stage3.yfilter)) leaf_name_data.push_back(stage3.get_name_leafdata());
    if (stage4.is_set || is_set(stage4.yfilter)) leaf_name_data.push_back(stage4.get_name_leafdata());
    if (terminable.is_set || is_set(terminable.yfilter)) leaf_name_data.push_back(terminable.get_name_leafdata());
    if (switchable.is_set || is_set(switchable.yfilter)) leaf_name_data.push_back(switchable.get_name_leafdata());
    if (tsg1p25.is_set || is_set(tsg1p25.yfilter)) leaf_name_data.push_back(tsg1p25.get_name_leafdata());
    if (tsg2p5.is_set || is_set(tsg2p5.yfilter)) leaf_name_data.push_back(tsg2p5.get_name_leafdata());
    if (vcat_capable.is_set || is_set(vcat_capable.yfilter)) leaf_name_data.push_back(vcat_capable.get_name_leafdata());
    if (lcas_capable.is_set || is_set(lcas_capable.yfilter)) leaf_name_data.push_back(lcas_capable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-info")
    {
        if(bandwidth_info == nullptr)
        {
            bandwidth_info = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo>();
        }
        return bandwidth_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bandwidth_info != nullptr)
    {
        children["bandwidth-info"] = bandwidth_info;
    }

    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signal-type")
    {
        signal_type = value;
        signal_type.value_namespace = name_space;
        signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage1")
    {
        stage1 = value;
        stage1.value_namespace = name_space;
        stage1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage2")
    {
        stage2 = value;
        stage2.value_namespace = name_space;
        stage2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage3")
    {
        stage3 = value;
        stage3.value_namespace = name_space;
        stage3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stage4")
    {
        stage4 = value;
        stage4.value_namespace = name_space;
        stage4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminable")
    {
        terminable = value;
        terminable.value_namespace = name_space;
        terminable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchable")
    {
        switchable = value;
        switchable.value_namespace = name_space;
        switchable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg1p25")
    {
        tsg1p25 = value;
        tsg1p25.value_namespace = name_space;
        tsg1p25.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tsg2p5")
    {
        tsg2p5 = value;
        tsg2p5.value_namespace = name_space;
        tsg2p5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcat-capable")
    {
        vcat_capable = value;
        vcat_capable.value_namespace = name_space;
        vcat_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lcas-capable")
    {
        lcas_capable = value;
        lcas_capable.value_namespace = name_space;
        lcas_capable.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signal-type")
    {
        signal_type.yfilter = yfilter;
    }
    if(value_path == "stage1")
    {
        stage1.yfilter = yfilter;
    }
    if(value_path == "stage2")
    {
        stage2.yfilter = yfilter;
    }
    if(value_path == "stage3")
    {
        stage3.yfilter = yfilter;
    }
    if(value_path == "stage4")
    {
        stage4.yfilter = yfilter;
    }
    if(value_path == "terminable")
    {
        terminable.yfilter = yfilter;
    }
    if(value_path == "switchable")
    {
        switchable.yfilter = yfilter;
    }
    if(value_path == "tsg1p25")
    {
        tsg1p25.yfilter = yfilter;
    }
    if(value_path == "tsg2p5")
    {
        tsg2p5.yfilter = yfilter;
    }
    if(value_path == "vcat-capable")
    {
        vcat_capable.yfilter = yfilter;
    }
    if(value_path == "lcas-capable")
    {
        lcas_capable.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-info" || name == "signal-type" || name == "stage1" || name == "stage2" || name == "stage3" || name == "stage4" || name == "terminable" || name == "switchable" || name == "tsg1p25" || name == "tsg2p5" || name == "vcat-capable" || name == "lcas-capable")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::BandwidthInfo()
    :
    type{YType::enumeration, "type"}
    	,
    fixed(std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed>())
	,flex(std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex>())
{
    fixed->parent = this;
    flex->parent = this;

    yang_name = "bandwidth-info"; yang_parent_name = "odu-capability"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::~BandwidthInfo()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_data() const
{
    return type.is_set
	|| (fixed !=  nullptr && fixed->has_data())
	|| (flex !=  nullptr && flex->has_data());
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (fixed !=  nullptr && fixed->has_operation())
	|| (flex !=  nullptr && flex->has_operation());
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/odu-link-capabilities/odu-capability/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fixed")
    {
        if(fixed == nullptr)
        {
            fixed = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed>();
        }
        return fixed;
    }

    if(child_yang_name == "flex")
    {
        if(flex == nullptr)
        {
            flex = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex>();
        }
        return flex;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fixed != nullptr)
    {
        children["fixed"] = fixed;
    }

    if(flex != nullptr)
    {
        children["flex"] = flex;
    }

    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed" || name == "flex" || name == "type")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::Fixed()
    :
    maximum_od_us{YType::uint8, "maximum-od-us"},
    unreserved_od_us{YType::uint8, "unreserved-od-us"}
{

    yang_name = "fixed"; yang_parent_name = "bandwidth-info"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::~Fixed()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_data() const
{
    return maximum_od_us.is_set
	|| unreserved_od_us.is_set;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_od_us.yfilter)
	|| ydk::is_set(unreserved_od_us.yfilter);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/odu-link-capabilities/odu-capability/bandwidth-info/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_od_us.is_set || is_set(maximum_od_us.yfilter)) leaf_name_data.push_back(maximum_od_us.get_name_leafdata());
    if (unreserved_od_us.is_set || is_set(unreserved_od_us.yfilter)) leaf_name_data.push_back(unreserved_od_us.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-od-us")
    {
        maximum_od_us = value;
        maximum_od_us.value_namespace = name_space;
        maximum_od_us.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreserved-od-us")
    {
        unreserved_od_us = value;
        unreserved_od_us.value_namespace = name_space;
        unreserved_od_us.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-od-us")
    {
        maximum_od_us.yfilter = yfilter;
    }
    if(value_path == "unreserved-od-us")
    {
        unreserved_od_us.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-od-us" || name == "unreserved-od-us")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::Flex()
    :
    max_bandwidth{YType::uint32, "max-bandwidth"},
    unreserved_bandwidth{YType::uint32, "unreserved-bandwidth"},
    max_lsp_bandwidth{YType::uint32, "max-lsp-bandwidth"}
{

    yang_name = "flex"; yang_parent_name = "bandwidth-info"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::~Flex()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_data() const
{
    return max_bandwidth.is_set
	|| unreserved_bandwidth.is_set
	|| max_lsp_bandwidth.is_set;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(unreserved_bandwidth.yfilter)
	|| ydk::is_set(max_lsp_bandwidth.yfilter);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/odu-link-capabilities/odu-capability/bandwidth-info/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (unreserved_bandwidth.is_set || is_set(unreserved_bandwidth.yfilter)) leaf_name_data.push_back(unreserved_bandwidth.get_name_leafdata());
    if (max_lsp_bandwidth.is_set || is_set(max_lsp_bandwidth.yfilter)) leaf_name_data.push_back(max_lsp_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
        max_bandwidth.value_namespace = name_space;
        max_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth = value;
        unreserved_bandwidth.value_namespace = name_space;
        unreserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-lsp-bandwidth")
    {
        max_lsp_bandwidth = value;
        max_lsp_bandwidth.value_namespace = name_space;
        max_lsp_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-bandwidth")
    {
        max_bandwidth.yfilter = yfilter;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-lsp-bandwidth")
    {
        max_lsp_bandwidth.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-bandwidth" || name == "unreserved-bandwidth" || name == "max-lsp-bandwidth")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::ExtendedAffinityAttributeFlag()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-affinity-attribute-flag"; yang_parent_name = "flooded-link"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::~ExtendedAffinityAttributeFlag()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::has_data() const
{
    return entry.is_set;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-affinity-attribute-flag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ExtendedAffinityAttributeFlag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "flooded-link"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
        shared_risk_group.value_namespace = name_space;
        shared_risk_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::ReceivingReservableBandwidth()
    :
    priority{YType::uint8, "priority"},
    pool0_bandwidth{YType::uint32, "pool0-bandwidth"},
    pool1_bandwidth{YType::uint32, "pool1-bandwidth"}
{

    yang_name = "receiving-reservable-bandwidth"; yang_parent_name = "flooded-link"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::~ReceivingReservableBandwidth()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::has_data() const
{
    return priority.is_set
	|| pool0_bandwidth.is_set
	|| pool1_bandwidth.is_set;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(pool0_bandwidth.yfilter)
	|| ydk::is_set(pool1_bandwidth.yfilter);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receiving-reservable-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (pool0_bandwidth.is_set || is_set(pool0_bandwidth.yfilter)) leaf_name_data.push_back(pool0_bandwidth.get_name_leafdata());
    if (pool1_bandwidth.is_set || is_set(pool1_bandwidth.yfilter)) leaf_name_data.push_back(pool1_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool0-bandwidth")
    {
        pool0_bandwidth = value;
        pool0_bandwidth.value_namespace = name_space;
        pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool1-bandwidth")
    {
        pool1_bandwidth = value;
        pool1_bandwidth.value_namespace = name_space;
        pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "pool0-bandwidth")
    {
        pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "pool1-bandwidth")
    {
        pool1_bandwidth.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "pool0-bandwidth" || name == "pool1-bandwidth")
        return true;
    return false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::TransmittingReservableBandwidth()
    :
    priority{YType::uint8, "priority"},
    pool0_bandwidth{YType::uint32, "pool0-bandwidth"},
    pool1_bandwidth{YType::uint32, "pool1-bandwidth"}
{

    yang_name = "transmitting-reservable-bandwidth"; yang_parent_name = "flooded-link"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::~TransmittingReservableBandwidth()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::has_data() const
{
    return priority.is_set
	|| pool0_bandwidth.is_set
	|| pool1_bandwidth.is_set;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(pool0_bandwidth.yfilter)
	|| ydk::is_set(pool1_bandwidth.yfilter);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmitting-reservable-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (pool0_bandwidth.is_set || is_set(pool0_bandwidth.yfilter)) leaf_name_data.push_back(pool0_bandwidth.get_name_leafdata());
    if (pool1_bandwidth.is_set || is_set(pool1_bandwidth.yfilter)) leaf_name_data.push_back(pool1_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool0-bandwidth")
    {
        pool0_bandwidth = value;
        pool0_bandwidth.value_namespace = name_space;
        pool0_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool1-bandwidth")
    {
        pool1_bandwidth = value;
        pool1_bandwidth.value_namespace = name_space;
        pool1_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "pool0-bandwidth")
    {
        pool0_bandwidth.yfilter = yfilter;
    }
    if(value_path == "pool1-bandwidth")
    {
        pool1_bandwidth.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "pool0-bandwidth" || name == "pool1-bandwidth")
        return true;
    return false;
}

MplsLcacStandby::Statistics::Statistics()
    :
    summary(std::make_shared<MplsLcacStandby::Statistics::Summary>())
	,statstics_links(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks>())
{
    summary->parent = this;
    statstics_links->parent = this;

    yang_name = "statistics"; yang_parent_name = "mpls-lcac-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Statistics::~Statistics()
{
}

bool MplsLcacStandby::Statistics::has_data() const
{
    return (summary !=  nullptr && summary->has_data())
	|| (statstics_links !=  nullptr && statstics_links->has_data());
}

bool MplsLcacStandby::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation())
	|| (statstics_links !=  nullptr && statstics_links->has_operation());
}

std::string MplsLcacStandby::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsLcacStandby::Statistics::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "statstics-links")
    {
        if(statstics_links == nullptr)
        {
            statstics_links = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks>();
        }
        return statstics_links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(statstics_links != nullptr)
    {
        children["statstics-links"] = statstics_links;
    }

    return children;
}

void MplsLcacStandby::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsLcacStandby::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsLcacStandby::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary" || name == "statstics-links")
        return true;
    return false;
}

MplsLcacStandby::Statistics::Summary::Summary()
    :
    is_role_standby{YType::boolean, "is-role-standby"}
    	,
    path_statistics(std::make_shared<MplsLcacStandby::Statistics::Summary::PathStatistics>())
	,reservation_statistics(std::make_shared<MplsLcacStandby::Statistics::Summary::ReservationStatistics>())
	,path_statistics32_bit(std::make_shared<MplsLcacStandby::Statistics::Summary::PathStatistics32Bit>())
	,reservation_statistics32_bit(std::make_shared<MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit>())
{
    path_statistics->parent = this;
    reservation_statistics->parent = this;
    path_statistics32_bit->parent = this;
    reservation_statistics32_bit->parent = this;

    yang_name = "summary"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Statistics::Summary::~Summary()
{
}

bool MplsLcacStandby::Statistics::Summary::has_data() const
{
    return is_role_standby.is_set
	|| (path_statistics !=  nullptr && path_statistics->has_data())
	|| (reservation_statistics !=  nullptr && reservation_statistics->has_data())
	|| (path_statistics32_bit !=  nullptr && path_statistics32_bit->has_data())
	|| (reservation_statistics32_bit !=  nullptr && reservation_statistics32_bit->has_data());
}

bool MplsLcacStandby::Statistics::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_role_standby.yfilter)
	|| (path_statistics !=  nullptr && path_statistics->has_operation())
	|| (reservation_statistics !=  nullptr && reservation_statistics->has_operation())
	|| (path_statistics32_bit !=  nullptr && path_statistics32_bit->has_operation())
	|| (reservation_statistics32_bit !=  nullptr && reservation_statistics32_bit->has_operation());
}

std::string MplsLcacStandby::Statistics::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Statistics::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_role_standby.is_set || is_set(is_role_standby.yfilter)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-statistics")
    {
        if(path_statistics == nullptr)
        {
            path_statistics = std::make_shared<MplsLcacStandby::Statistics::Summary::PathStatistics>();
        }
        return path_statistics;
    }

    if(child_yang_name == "reservation-statistics")
    {
        if(reservation_statistics == nullptr)
        {
            reservation_statistics = std::make_shared<MplsLcacStandby::Statistics::Summary::ReservationStatistics>();
        }
        return reservation_statistics;
    }

    if(child_yang_name == "path-statistics32-bit")
    {
        if(path_statistics32_bit == nullptr)
        {
            path_statistics32_bit = std::make_shared<MplsLcacStandby::Statistics::Summary::PathStatistics32Bit>();
        }
        return path_statistics32_bit;
    }

    if(child_yang_name == "reservation-statistics32-bit")
    {
        if(reservation_statistics32_bit == nullptr)
        {
            reservation_statistics32_bit = std::make_shared<MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit>();
        }
        return reservation_statistics32_bit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_statistics != nullptr)
    {
        children["path-statistics"] = path_statistics;
    }

    if(reservation_statistics != nullptr)
    {
        children["reservation-statistics"] = reservation_statistics;
    }

    if(path_statistics32_bit != nullptr)
    {
        children["path-statistics32-bit"] = path_statistics32_bit;
    }

    if(reservation_statistics32_bit != nullptr)
    {
        children["reservation-statistics32-bit"] = reservation_statistics32_bit;
    }

    return children;
}

void MplsLcacStandby::Statistics::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
        is_role_standby.value_namespace = name_space;
        is_role_standby.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-statistics" || name == "reservation-statistics" || name == "path-statistics32-bit" || name == "reservation-statistics32-bit" || name == "is-role-standby")
        return true;
    return false;
}

MplsLcacStandby::Statistics::Summary::PathStatistics::PathStatistics()
    :
    setup_requests{YType::uint16, "setup-requests"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_admits{YType::uint16, "setup-admits"},
    setup_rejects{YType::uint16, "setup-rejects"},
    tear_requests{YType::uint16, "tear-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"}
{

    yang_name = "path-statistics"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Statistics::Summary::PathStatistics::~PathStatistics()
{
}

bool MplsLcacStandby::Statistics::Summary::PathStatistics::has_data() const
{
    return setup_requests.is_set
	|| setup_errors.is_set
	|| setup_admits.is_set
	|| setup_rejects.is_set
	|| tear_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set;
}

bool MplsLcacStandby::Statistics::Summary::PathStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(tear_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter);
}

std::string MplsLcacStandby::Statistics::Summary::PathStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/statistics/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Statistics::Summary::PathStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::Summary::PathStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::Summary::PathStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::Summary::PathStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::Statistics::Summary::PathStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::Summary::PathStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::Summary::PathStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-requests" || name == "setup-errors" || name == "setup-admits" || name == "setup-rejects" || name == "tear-requests" || name == "tear-errors" || name == "tear-preempts")
        return true;
    return false;
}

MplsLcacStandby::Statistics::Summary::ReservationStatistics::ReservationStatistics()
    :
    setup_requests{YType::uint16, "setup-requests"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_admits{YType::uint16, "setup-admits"},
    setup_rejects{YType::uint16, "setup-rejects"},
    tear_requests{YType::uint16, "tear-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"}
{

    yang_name = "reservation-statistics"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Statistics::Summary::ReservationStatistics::~ReservationStatistics()
{
}

bool MplsLcacStandby::Statistics::Summary::ReservationStatistics::has_data() const
{
    return setup_requests.is_set
	|| setup_errors.is_set
	|| setup_admits.is_set
	|| setup_rejects.is_set
	|| tear_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set;
}

bool MplsLcacStandby::Statistics::Summary::ReservationStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(tear_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter);
}

std::string MplsLcacStandby::Statistics::Summary::ReservationStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/statistics/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Statistics::Summary::ReservationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reservation-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::Summary::ReservationStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::Summary::ReservationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::Summary::ReservationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::Statistics::Summary::ReservationStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::Summary::ReservationStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::Summary::ReservationStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-requests" || name == "setup-errors" || name == "setup-admits" || name == "setup-rejects" || name == "tear-requests" || name == "tear-errors" || name == "tear-preempts")
        return true;
    return false;
}

MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::PathStatistics32Bit()
    :
    setup_requests{YType::uint32, "setup-requests"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_admits{YType::uint32, "setup-admits"},
    setup_rejects{YType::uint32, "setup-rejects"},
    tear_requests{YType::uint32, "tear-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"}
{

    yang_name = "path-statistics32-bit"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::~PathStatistics32Bit()
{
}

bool MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::has_data() const
{
    return setup_requests.is_set
	|| setup_errors.is_set
	|| setup_admits.is_set
	|| setup_rejects.is_set
	|| tear_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set;
}

bool MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_requests.yfilter)
	|| ydk::is_set(setup_errors.yfilter)
	|| ydk::is_set(setup_admits.yfilter)
	|| ydk::is_set(setup_rejects.yfilter)
	|| ydk::is_set(tear_requests.yfilter)
	|| ydk::is_set(tear_errors.yfilter)
	|| ydk::is_set(tear_preempts.yfilter);
}

std::string MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/statistics/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-statistics32-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_requests.is_set || is_set(setup_requests.yfilter)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.yfilter)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_admits.is_set || is_set(setup_admits.yfilter)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.yfilter)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.yfilter)) leaf_name_data.push_back(tear_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.yfilter)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.yfilter)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-requests")
    {
        setup_requests = value;
        setup_requests.value_namespace = name_space;
        setup_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
        setup_errors.value_namespace = name_space;
        setup_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-admits")
    {
        setup_admits = value;
        setup_admits.value_namespace = name_space;
        setup_admits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
        setup_rejects.value_namespace = name_space;
        setup_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
        tear_requests.value_namespace = name_space;
        tear_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
        tear_errors.value_namespace = name_space;
        tear_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
        tear_preempts.value_namespace = name_space;
        tear_preempts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-requests")
    {
        setup_requests.yfilter = yfilter;
    }
    if(value_path == "setup-errors")
    {
        setup_errors.yfilter = yfilter;
    }
    if(value_path == "setup-admits")
    {
        setup_admits.yfilter = yfilter;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects.yfilter = yfilter;
    }
    if(value_path == "tear-requests")
    {
        tear_requests.yfilter = yfilter;
    }
    if(value_path == "tear-errors")
    {
        tear_errors.yfilter = yfilter;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts.yfilter = yfilter;
    }
}

bool MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-requests" || name == "setup-errors" || name == "setup-admits" || name == "setup-rejects" || name == "tear-requests" || name == "tear-errors" || name == "tear-preempts")
        return true;
    return false;
}


}
}

