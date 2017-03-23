
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_55.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::TunnelRewrite_()
    :
    fec_ctype{YType::enumeration, "fec-ctype"}
    	,
    p2mp_tunnel_rewrite(std::make_shared<MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite>())
	,p2p_tunnel_rewrite(std::make_shared<MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite>())
{
    p2mp_tunnel_rewrite->parent = this;
    children["p2mp-tunnel-rewrite"] = p2mp_tunnel_rewrite;

    p2p_tunnel_rewrite->parent = this;
    children["p2p-tunnel-rewrite"] = p2p_tunnel_rewrite;

    yang_name = "tunnel-rewrite"; yang_parent_name = "failed-rewrite";
}

MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::~TunnelRewrite_()
{
}

bool MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::has_data() const
{
    return fec_ctype.is_set
	|| (p2mp_tunnel_rewrite !=  nullptr && p2mp_tunnel_rewrite->has_data())
	|| (p2p_tunnel_rewrite !=  nullptr && p2p_tunnel_rewrite->has_data());
}

bool MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_ctype.operation)
	|| (p2mp_tunnel_rewrite !=  nullptr && p2mp_tunnel_rewrite->has_operation())
	|| (p2p_tunnel_rewrite !=  nullptr && p2p_tunnel_rewrite->has_operation());
}

std::string MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-rewrite";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelRewrite_' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.operation)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "p2mp-tunnel-rewrite")
    {
        if(p2mp_tunnel_rewrite != nullptr)
        {
            children["p2mp-tunnel-rewrite"] = p2mp_tunnel_rewrite;
        }
        else
        {
            p2mp_tunnel_rewrite = std::make_shared<MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite>();
            p2mp_tunnel_rewrite->parent = this;
            children["p2mp-tunnel-rewrite"] = p2mp_tunnel_rewrite;
        }
        return children.at("p2mp-tunnel-rewrite");
    }

    if(child_yang_name == "p2p-tunnel-rewrite")
    {
        if(p2p_tunnel_rewrite != nullptr)
        {
            children["p2p-tunnel-rewrite"] = p2p_tunnel_rewrite;
        }
        else
        {
            p2p_tunnel_rewrite = std::make_shared<MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite>();
            p2p_tunnel_rewrite->parent = this;
            children["p2p-tunnel-rewrite"] = p2p_tunnel_rewrite;
        }
        return children.at("p2p-tunnel-rewrite");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::get_children()
{
    if(children.find("p2mp-tunnel-rewrite") == children.end())
    {
        if(p2mp_tunnel_rewrite != nullptr)
        {
            children["p2mp-tunnel-rewrite"] = p2mp_tunnel_rewrite;
        }
    }

    if(children.find("p2p-tunnel-rewrite") == children.end())
    {
        if(p2p_tunnel_rewrite != nullptr)
        {
            children["p2p-tunnel-rewrite"] = p2p_tunnel_rewrite;
        }
    }

    return children;
}

void MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
    }
}

MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::P2PTunnelRewrite()
    :
    backup_active{YType::boolean, "backup-active"},
    backup_tunnel_name{YType::str, "backup-tunnel-name"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    local_label{YType::uint32, "local-label"},
    original_input_interface{YType::str, "original-input-interface"},
    output_interface_name{YType::str, "output-interface-name"},
    previous_hop_address{YType::str, "previous-hop-address"},
    source_pe{YType::str, "source-pe"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    backup_tunnel_rewrite(std::make_shared<MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite>())
	,primary_s2l(std::make_shared<MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L>())
{
    backup_tunnel_rewrite->parent = this;
    children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;

    primary_s2l->parent = this;
    children["primary-s2l"] = primary_s2l;

    yang_name = "p2p-tunnel-rewrite"; yang_parent_name = "tunnel-rewrite";
}

MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::~P2PTunnelRewrite()
{
}

bool MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::has_data() const
{
    return backup_active.is_set
	|| backup_tunnel_name.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| local_label.is_set
	|| original_input_interface.is_set
	|| output_interface_name.is_set
	|| previous_hop_address.is_set
	|| source_pe.is_set
	|| tunnel_id.is_set
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_data())
	|| (primary_s2l !=  nullptr && primary_s2l->has_data());
}

bool MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_active.operation)
	|| is_set(backup_tunnel_name.operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(local_label.operation)
	|| is_set(original_input_interface.operation)
	|| is_set(output_interface_name.operation)
	|| is_set(previous_hop_address.operation)
	|| is_set(source_pe.operation)
	|| is_set(tunnel_id.operation)
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_operation())
	|| (primary_s2l !=  nullptr && primary_s2l->has_operation());
}

std::string MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-tunnel-rewrite";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'P2PTunnelRewrite' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_active.is_set || is_set(backup_active.operation)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.operation)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (original_input_interface.is_set || is_set(original_input_interface.operation)) leaf_name_data.push_back(original_input_interface.get_name_leafdata());
    if (output_interface_name.is_set || is_set(output_interface_name.operation)) leaf_name_data.push_back(output_interface_name.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.operation)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());
    if (source_pe.is_set || is_set(source_pe.operation)) leaf_name_data.push_back(source_pe.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-tunnel-rewrite")
    {
        if(backup_tunnel_rewrite != nullptr)
        {
            children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
        }
        else
        {
            backup_tunnel_rewrite = std::make_shared<MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite>();
            backup_tunnel_rewrite->parent = this;
            children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
        }
        return children.at("backup-tunnel-rewrite");
    }

    if(child_yang_name == "primary-s2l")
    {
        if(primary_s2l != nullptr)
        {
            children["primary-s2l"] = primary_s2l;
        }
        else
        {
            primary_s2l = std::make_shared<MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L>();
            primary_s2l->parent = this;
            children["primary-s2l"] = primary_s2l;
        }
        return children.at("primary-s2l");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::get_children()
{
    if(children.find("backup-tunnel-rewrite") == children.end())
    {
        if(backup_tunnel_rewrite != nullptr)
        {
            children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
        }
    }

    if(children.find("primary-s2l") == children.end())
    {
        if(primary_s2l != nullptr)
        {
            children["primary-s2l"] = primary_s2l;
        }
    }

    return children;
}

void MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-active")
    {
        backup_active = value;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface = value;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name = value;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
    }
    if(value_path == "source-pe")
    {
        source_pe = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::PrimaryS2L()
    :
    bandwidth_accounting_requested{YType::boolean, "bandwidth-accounting-requested"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"},
    parent_interface_name{YType::str, "parent-interface-name"},
    physica_interface_name{YType::str, "physica-interface-name"},
    sr_label_stack{YType::uint32, "sr-label-stack"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
{
    yang_name = "primary-s2l"; yang_parent_name = "p2p-tunnel-rewrite";
}

MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::~PrimaryS2L()
{
}

bool MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::has_data() const
{
    for (auto const & leaf : sr_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bandwidth_accounting_requested.is_set
	|| next_hop_address.is_set
	|| out_label.is_set
	|| parent_interface_name.is_set
	|| physica_interface_name.is_set
	|| tunnel_interface_name.is_set;
}

bool MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::has_operation() const
{
    for (auto const & leaf : sr_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth_accounting_requested.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(out_label.operation)
	|| is_set(parent_interface_name.operation)
	|| is_set(physica_interface_name.operation)
	|| is_set(sr_label_stack.operation)
	|| is_set(tunnel_interface_name.operation);
}

std::string MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-s2l";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrimaryS2L' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_accounting_requested.is_set || is_set(bandwidth_accounting_requested.operation)) leaf_name_data.push_back(bandwidth_accounting_requested.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.operation)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (physica_interface_name.is_set || is_set(physica_interface_name.operation)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.operation)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());

    auto sr_label_stack_name_datas = sr_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sr_label_stack_name_datas.begin(), sr_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_children()
{
    return children;
}

void MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-accounting-requested")
    {
        bandwidth_accounting_requested = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "out-label")
    {
        out_label = value;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
    }
    if(value_path == "sr-label-stack")
    {
        sr_label_stack.append(value);
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
    }
}

MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::BackupTunnelRewrite()
    :
    bandwidth_accounting_requested{YType::boolean, "bandwidth-accounting-requested"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"},
    parent_interface_name{YType::str, "parent-interface-name"},
    physica_interface_name{YType::str, "physica-interface-name"},
    sr_label_stack{YType::uint32, "sr-label-stack"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
{
    yang_name = "backup-tunnel-rewrite"; yang_parent_name = "p2p-tunnel-rewrite";
}

MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::~BackupTunnelRewrite()
{
}

bool MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::has_data() const
{
    for (auto const & leaf : sr_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bandwidth_accounting_requested.is_set
	|| next_hop_address.is_set
	|| out_label.is_set
	|| parent_interface_name.is_set
	|| physica_interface_name.is_set
	|| tunnel_interface_name.is_set;
}

bool MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::has_operation() const
{
    for (auto const & leaf : sr_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth_accounting_requested.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(out_label.operation)
	|| is_set(parent_interface_name.operation)
	|| is_set(physica_interface_name.operation)
	|| is_set(sr_label_stack.operation)
	|| is_set(tunnel_interface_name.operation);
}

std::string MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel-rewrite";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupTunnelRewrite' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_accounting_requested.is_set || is_set(bandwidth_accounting_requested.operation)) leaf_name_data.push_back(bandwidth_accounting_requested.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.operation)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (physica_interface_name.is_set || is_set(physica_interface_name.operation)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.operation)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());

    auto sr_label_stack_name_datas = sr_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sr_label_stack_name_datas.begin(), sr_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_children()
{
    return children;
}

void MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-accounting-requested")
    {
        bandwidth_accounting_requested = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "out-label")
    {
        out_label = value;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
    }
    if(value_path == "sr-label-stack")
    {
        sr_label_stack.append(value);
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
    }
}

MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::P2MpTunnelRewrite()
    :
    local_label{YType::uint32, "local-label"}
{
    yang_name = "p2mp-tunnel-rewrite"; yang_parent_name = "tunnel-rewrite";
}

MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::~P2MpTunnelRewrite()
{
}

bool MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::has_data() const
{
    return local_label.is_set;
}

bool MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::has_operation() const
{
    return is_set(operation)
	|| is_set(local_label.operation);
}

std::string MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-tunnel-rewrite";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'P2MpTunnelRewrite' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_children()
{
    return children;
}

void MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::FailedRewrite::TunnelRewrite_::P2MpTunnelRewrite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-label")
    {
        local_label = value;
    }
}

MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::PendingRewrite()
    :
    timestamp{YType::uint32, "timestamp"}
    	,
    tunnel_rewrite(std::make_shared<MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_>())
{
    tunnel_rewrite->parent = this;
    children["tunnel-rewrite"] = tunnel_rewrite;

    yang_name = "pending-rewrite"; yang_parent_name = "tunnel-rewrite";
}

MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::~PendingRewrite()
{
}

bool MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::has_data() const
{
    return timestamp.is_set
	|| (tunnel_rewrite !=  nullptr && tunnel_rewrite->has_data());
}

bool MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::has_operation() const
{
    return is_set(operation)
	|| is_set(timestamp.operation)
	|| (tunnel_rewrite !=  nullptr && tunnel_rewrite->has_operation());
}

std::string MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pending-rewrite";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PendingRewrite' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel-rewrite")
    {
        if(tunnel_rewrite != nullptr)
        {
            children["tunnel-rewrite"] = tunnel_rewrite;
        }
        else
        {
            tunnel_rewrite = std::make_shared<MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_>();
            tunnel_rewrite->parent = this;
            children["tunnel-rewrite"] = tunnel_rewrite;
        }
        return children.at("tunnel-rewrite");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::get_children()
{
    if(children.find("tunnel-rewrite") == children.end())
    {
        if(tunnel_rewrite != nullptr)
        {
            children["tunnel-rewrite"] = tunnel_rewrite;
        }
    }

    return children;
}

void MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
}

MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::TunnelRewrite_()
    :
    fec_ctype{YType::enumeration, "fec-ctype"}
    	,
    p2mp_tunnel_rewrite(std::make_shared<MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite>())
	,p2p_tunnel_rewrite(std::make_shared<MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite>())
{
    p2mp_tunnel_rewrite->parent = this;
    children["p2mp-tunnel-rewrite"] = p2mp_tunnel_rewrite;

    p2p_tunnel_rewrite->parent = this;
    children["p2p-tunnel-rewrite"] = p2p_tunnel_rewrite;

    yang_name = "tunnel-rewrite"; yang_parent_name = "pending-rewrite";
}

MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::~TunnelRewrite_()
{
}

bool MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::has_data() const
{
    return fec_ctype.is_set
	|| (p2mp_tunnel_rewrite !=  nullptr && p2mp_tunnel_rewrite->has_data())
	|| (p2p_tunnel_rewrite !=  nullptr && p2p_tunnel_rewrite->has_data());
}

bool MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_ctype.operation)
	|| (p2mp_tunnel_rewrite !=  nullptr && p2mp_tunnel_rewrite->has_operation())
	|| (p2p_tunnel_rewrite !=  nullptr && p2p_tunnel_rewrite->has_operation());
}

std::string MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-rewrite";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelRewrite_' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.operation)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "p2mp-tunnel-rewrite")
    {
        if(p2mp_tunnel_rewrite != nullptr)
        {
            children["p2mp-tunnel-rewrite"] = p2mp_tunnel_rewrite;
        }
        else
        {
            p2mp_tunnel_rewrite = std::make_shared<MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite>();
            p2mp_tunnel_rewrite->parent = this;
            children["p2mp-tunnel-rewrite"] = p2mp_tunnel_rewrite;
        }
        return children.at("p2mp-tunnel-rewrite");
    }

    if(child_yang_name == "p2p-tunnel-rewrite")
    {
        if(p2p_tunnel_rewrite != nullptr)
        {
            children["p2p-tunnel-rewrite"] = p2p_tunnel_rewrite;
        }
        else
        {
            p2p_tunnel_rewrite = std::make_shared<MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite>();
            p2p_tunnel_rewrite->parent = this;
            children["p2p-tunnel-rewrite"] = p2p_tunnel_rewrite;
        }
        return children.at("p2p-tunnel-rewrite");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::get_children()
{
    if(children.find("p2mp-tunnel-rewrite") == children.end())
    {
        if(p2mp_tunnel_rewrite != nullptr)
        {
            children["p2mp-tunnel-rewrite"] = p2mp_tunnel_rewrite;
        }
    }

    if(children.find("p2p-tunnel-rewrite") == children.end())
    {
        if(p2p_tunnel_rewrite != nullptr)
        {
            children["p2p-tunnel-rewrite"] = p2p_tunnel_rewrite;
        }
    }

    return children;
}

void MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
    }
}

MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::P2PTunnelRewrite()
    :
    backup_active{YType::boolean, "backup-active"},
    backup_tunnel_name{YType::str, "backup-tunnel-name"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    local_label{YType::uint32, "local-label"},
    original_input_interface{YType::str, "original-input-interface"},
    output_interface_name{YType::str, "output-interface-name"},
    previous_hop_address{YType::str, "previous-hop-address"},
    source_pe{YType::str, "source-pe"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    backup_tunnel_rewrite(std::make_shared<MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite>())
	,primary_s2l(std::make_shared<MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L>())
{
    backup_tunnel_rewrite->parent = this;
    children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;

    primary_s2l->parent = this;
    children["primary-s2l"] = primary_s2l;

    yang_name = "p2p-tunnel-rewrite"; yang_parent_name = "tunnel-rewrite";
}

MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::~P2PTunnelRewrite()
{
}

bool MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::has_data() const
{
    return backup_active.is_set
	|| backup_tunnel_name.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| local_label.is_set
	|| original_input_interface.is_set
	|| output_interface_name.is_set
	|| previous_hop_address.is_set
	|| source_pe.is_set
	|| tunnel_id.is_set
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_data())
	|| (primary_s2l !=  nullptr && primary_s2l->has_data());
}

bool MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_active.operation)
	|| is_set(backup_tunnel_name.operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(local_label.operation)
	|| is_set(original_input_interface.operation)
	|| is_set(output_interface_name.operation)
	|| is_set(previous_hop_address.operation)
	|| is_set(source_pe.operation)
	|| is_set(tunnel_id.operation)
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_operation())
	|| (primary_s2l !=  nullptr && primary_s2l->has_operation());
}

std::string MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-tunnel-rewrite";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'P2PTunnelRewrite' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_active.is_set || is_set(backup_active.operation)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.operation)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (original_input_interface.is_set || is_set(original_input_interface.operation)) leaf_name_data.push_back(original_input_interface.get_name_leafdata());
    if (output_interface_name.is_set || is_set(output_interface_name.operation)) leaf_name_data.push_back(output_interface_name.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.operation)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());
    if (source_pe.is_set || is_set(source_pe.operation)) leaf_name_data.push_back(source_pe.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-tunnel-rewrite")
    {
        if(backup_tunnel_rewrite != nullptr)
        {
            children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
        }
        else
        {
            backup_tunnel_rewrite = std::make_shared<MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite>();
            backup_tunnel_rewrite->parent = this;
            children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
        }
        return children.at("backup-tunnel-rewrite");
    }

    if(child_yang_name == "primary-s2l")
    {
        if(primary_s2l != nullptr)
        {
            children["primary-s2l"] = primary_s2l;
        }
        else
        {
            primary_s2l = std::make_shared<MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L>();
            primary_s2l->parent = this;
            children["primary-s2l"] = primary_s2l;
        }
        return children.at("primary-s2l");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::get_children()
{
    if(children.find("backup-tunnel-rewrite") == children.end())
    {
        if(backup_tunnel_rewrite != nullptr)
        {
            children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
        }
    }

    if(children.find("primary-s2l") == children.end())
    {
        if(primary_s2l != nullptr)
        {
            children["primary-s2l"] = primary_s2l;
        }
    }

    return children;
}

void MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-active")
    {
        backup_active = value;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface = value;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name = value;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
    }
    if(value_path == "source-pe")
    {
        source_pe = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::PrimaryS2L()
    :
    bandwidth_accounting_requested{YType::boolean, "bandwidth-accounting-requested"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"},
    parent_interface_name{YType::str, "parent-interface-name"},
    physica_interface_name{YType::str, "physica-interface-name"},
    sr_label_stack{YType::uint32, "sr-label-stack"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
{
    yang_name = "primary-s2l"; yang_parent_name = "p2p-tunnel-rewrite";
}

MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::~PrimaryS2L()
{
}

bool MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::has_data() const
{
    for (auto const & leaf : sr_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bandwidth_accounting_requested.is_set
	|| next_hop_address.is_set
	|| out_label.is_set
	|| parent_interface_name.is_set
	|| physica_interface_name.is_set
	|| tunnel_interface_name.is_set;
}

bool MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::has_operation() const
{
    for (auto const & leaf : sr_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth_accounting_requested.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(out_label.operation)
	|| is_set(parent_interface_name.operation)
	|| is_set(physica_interface_name.operation)
	|| is_set(sr_label_stack.operation)
	|| is_set(tunnel_interface_name.operation);
}

std::string MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-s2l";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrimaryS2L' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_accounting_requested.is_set || is_set(bandwidth_accounting_requested.operation)) leaf_name_data.push_back(bandwidth_accounting_requested.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.operation)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (physica_interface_name.is_set || is_set(physica_interface_name.operation)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.operation)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());

    auto sr_label_stack_name_datas = sr_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sr_label_stack_name_datas.begin(), sr_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::get_children()
{
    return children;
}

void MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::PrimaryS2L::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-accounting-requested")
    {
        bandwidth_accounting_requested = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "out-label")
    {
        out_label = value;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
    }
    if(value_path == "sr-label-stack")
    {
        sr_label_stack.append(value);
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
    }
}

MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::BackupTunnelRewrite()
    :
    bandwidth_accounting_requested{YType::boolean, "bandwidth-accounting-requested"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"},
    parent_interface_name{YType::str, "parent-interface-name"},
    physica_interface_name{YType::str, "physica-interface-name"},
    sr_label_stack{YType::uint32, "sr-label-stack"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
{
    yang_name = "backup-tunnel-rewrite"; yang_parent_name = "p2p-tunnel-rewrite";
}

MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::~BackupTunnelRewrite()
{
}

bool MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::has_data() const
{
    for (auto const & leaf : sr_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bandwidth_accounting_requested.is_set
	|| next_hop_address.is_set
	|| out_label.is_set
	|| parent_interface_name.is_set
	|| physica_interface_name.is_set
	|| tunnel_interface_name.is_set;
}

bool MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::has_operation() const
{
    for (auto const & leaf : sr_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth_accounting_requested.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(out_label.operation)
	|| is_set(parent_interface_name.operation)
	|| is_set(physica_interface_name.operation)
	|| is_set(sr_label_stack.operation)
	|| is_set(tunnel_interface_name.operation);
}

std::string MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel-rewrite";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupTunnelRewrite' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_accounting_requested.is_set || is_set(bandwidth_accounting_requested.operation)) leaf_name_data.push_back(bandwidth_accounting_requested.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.operation)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (physica_interface_name.is_set || is_set(physica_interface_name.operation)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.operation)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());

    auto sr_label_stack_name_datas = sr_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sr_label_stack_name_datas.begin(), sr_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::get_children()
{
    return children;
}

void MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2PTunnelRewrite::BackupTunnelRewrite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-accounting-requested")
    {
        bandwidth_accounting_requested = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "out-label")
    {
        out_label = value;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
    }
    if(value_path == "sr-label-stack")
    {
        sr_label_stack.append(value);
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
    }
}

MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::P2MpTunnelRewrite()
    :
    local_label{YType::uint32, "local-label"}
{
    yang_name = "p2mp-tunnel-rewrite"; yang_parent_name = "tunnel-rewrite";
}

MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::~P2MpTunnelRewrite()
{
}

bool MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::has_data() const
{
    return local_label.is_set;
}

bool MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::has_operation() const
{
    return is_set(operation)
	|| is_set(local_label.operation);
}

std::string MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-tunnel-rewrite";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'P2MpTunnelRewrite' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::get_children()
{
    return children;
}

void MplsTeStandby::P2Mp::TunnelRewrites::TunnelRewrite::PendingRewrite::TunnelRewrite_::P2MpTunnelRewrite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-label")
    {
        local_label = value;
    }
}

MplsTeStandby::P2Mp::CollaboratorTimers::CollaboratorTimers()
{
    yang_name = "collaborator-timers"; yang_parent_name = "p2mp";
}

MplsTeStandby::P2Mp::CollaboratorTimers::~CollaboratorTimers()
{
}

bool MplsTeStandby::P2Mp::CollaboratorTimers::has_data() const
{
    for (std::size_t index=0; index<p2mp_timer.size(); index++)
    {
        if(p2mp_timer[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::P2Mp::CollaboratorTimers::has_operation() const
{
    for (std::size_t index=0; index<p2mp_timer.size(); index++)
    {
        if(p2mp_timer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::P2Mp::CollaboratorTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collaborator-timers";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::CollaboratorTimers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/p2mp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::CollaboratorTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "p2mp-timer")
    {
        for(auto const & c : p2mp_timer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2Mp::CollaboratorTimers::P2MpTimer>();
        c->parent = this;
        p2mp_timer.push_back(std::move(c));
        children[segment_path] = p2mp_timer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::CollaboratorTimers::get_children()
{
    for (auto const & c : p2mp_timer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::P2Mp::CollaboratorTimers::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::P2Mp::CollaboratorTimers::P2MpTimer::P2MpTimer()
    :
    duration{YType::uint32, "duration"},
    expiry_time{YType::uint32, "expiry-time"},
    is_running{YType::boolean, "is-running"},
    start_time{YType::uint32, "start-time"},
    stop_time{YType::uint32, "stop-time"},
    timer_name{YType::str, "timer-name"},
    timer_type{YType::enumeration, "timer-type"}
{
    yang_name = "p2mp-timer"; yang_parent_name = "collaborator-timers";
}

MplsTeStandby::P2Mp::CollaboratorTimers::P2MpTimer::~P2MpTimer()
{
}

bool MplsTeStandby::P2Mp::CollaboratorTimers::P2MpTimer::has_data() const
{
    return duration.is_set
	|| expiry_time.is_set
	|| is_running.is_set
	|| start_time.is_set
	|| stop_time.is_set
	|| timer_name.is_set
	|| timer_type.is_set;
}

bool MplsTeStandby::P2Mp::CollaboratorTimers::P2MpTimer::has_operation() const
{
    return is_set(operation)
	|| is_set(duration.operation)
	|| is_set(expiry_time.operation)
	|| is_set(is_running.operation)
	|| is_set(start_time.operation)
	|| is_set(stop_time.operation)
	|| is_set(timer_name.operation)
	|| is_set(timer_type.operation);
}

std::string MplsTeStandby::P2Mp::CollaboratorTimers::P2MpTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-timer";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::CollaboratorTimers::P2MpTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/p2mp/collaborator-timers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.operation)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (expiry_time.is_set || is_set(expiry_time.operation)) leaf_name_data.push_back(expiry_time.get_name_leafdata());
    if (is_running.is_set || is_set(is_running.operation)) leaf_name_data.push_back(is_running.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.operation)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (stop_time.is_set || is_set(stop_time.operation)) leaf_name_data.push_back(stop_time.get_name_leafdata());
    if (timer_name.is_set || is_set(timer_name.operation)) leaf_name_data.push_back(timer_name.get_name_leafdata());
    if (timer_type.is_set || is_set(timer_type.operation)) leaf_name_data.push_back(timer_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::CollaboratorTimers::P2MpTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::CollaboratorTimers::P2MpTimer::get_children()
{
    return children;
}

void MplsTeStandby::P2Mp::CollaboratorTimers::P2MpTimer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duration")
    {
        duration = value;
    }
    if(value_path == "expiry-time")
    {
        expiry_time = value;
    }
    if(value_path == "is-running")
    {
        is_running = value;
    }
    if(value_path == "start-time")
    {
        start_time = value;
    }
    if(value_path == "stop-time")
    {
        stop_time = value;
    }
    if(value_path == "timer-name")
    {
        timer_name = value;
    }
    if(value_path == "timer-type")
    {
        timer_type = value;
    }
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrites()
{
    yang_name = "forwarding-output-label-rewrites"; yang_parent_name = "p2mp";
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::~ForwardingOutputLabelRewrites()
{
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::has_data() const
{
    for (std::size_t index=0; index<forwarding_output_label_rewrite.size(); index++)
    {
        if(forwarding_output_label_rewrite[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::has_operation() const
{
    for (std::size_t index=0; index<forwarding_output_label_rewrite.size(); index++)
    {
        if(forwarding_output_label_rewrite[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-output-label-rewrites";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/p2mp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "forwarding-output-label-rewrite")
    {
        for(auto const & c : forwarding_output_label_rewrite)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite>();
        c->parent = this;
        forwarding_output_label_rewrite.push_back(std::move(c));
        children[segment_path] = forwarding_output_label_rewrite.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::get_children()
{
    for (auto const & c : forwarding_output_label_rewrite)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::ForwardingOutputLabelRewrite()
    :
    ctype{YType::enumeration, "ctype"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsp_id{YType::int32, "lsp-id"},
    next_hop_address{YType::str, "next-hop-address"},
    p2mp_id{YType::int32, "p2mp-id"},
    previous_hop_address{YType::str, "previous-hop-address"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::int32, "tunnel-id"},
    backup_tunnel_name{YType::str, "backup-tunnel-name"},
    is_segment_routing{YType::boolean, "is-segment-routing"},
    original_input_interface{YType::str, "original-input-interface"},
    output_interface_name{YType::str, "output-interface-name"}
    	,
    s2l_output_rewrite(std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite>())
{
    s2l_output_rewrite->parent = this;
    children["s2l-output-rewrite"] = s2l_output_rewrite;

    yang_name = "forwarding-output-label-rewrite"; yang_parent_name = "forwarding-output-label-rewrites";
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::~ForwardingOutputLabelRewrite()
{
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::has_data() const
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
    return ctype.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| lsp_id.is_set
	|| next_hop_address.is_set
	|| p2mp_id.is_set
	|| previous_hop_address.is_set
	|| source_address.is_set
	|| tunnel_id.is_set
	|| backup_tunnel_name.is_set
	|| is_segment_routing.is_set
	|| original_input_interface.is_set
	|| output_interface_name.is_set
	|| (s2l_output_rewrite !=  nullptr && s2l_output_rewrite->has_data());
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::has_operation() const
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
    return is_set(operation)
	|| is_set(ctype.operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(lsp_id.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(previous_hop_address.operation)
	|| is_set(source_address.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(backup_tunnel_name.operation)
	|| is_set(is_segment_routing.operation)
	|| is_set(original_input_interface.operation)
	|| is_set(output_interface_name.operation)
	|| (s2l_output_rewrite !=  nullptr && s2l_output_rewrite->has_operation());
}

std::string MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-output-label-rewrite" <<"[ctype='" <<ctype <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[lsp-id='" <<lsp_id <<"']" <<"[next-hop-address='" <<next_hop_address <<"']" <<"[p2mp-id='" <<p2mp_id <<"']" <<"[previous-hop-address='" <<previous_hop_address <<"']" <<"[source-address='" <<source_address <<"']" <<"[tunnel-id='" <<tunnel_id <<"']";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/p2mp/forwarding-output-label-rewrites/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.operation)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.operation)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.operation)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());
    if (is_segment_routing.is_set || is_set(is_segment_routing.operation)) leaf_name_data.push_back(is_segment_routing.get_name_leafdata());
    if (original_input_interface.is_set || is_set(original_input_interface.operation)) leaf_name_data.push_back(original_input_interface.get_name_leafdata());
    if (output_interface_name.is_set || is_set(output_interface_name.operation)) leaf_name_data.push_back(output_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "s2l")
    {
        for(auto const & c : s2l)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L>();
        c->parent = this;
        s2l.push_back(std::move(c));
        children[segment_path] = s2l.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "s2l-output-rewrite")
    {
        if(s2l_output_rewrite != nullptr)
        {
            children["s2l-output-rewrite"] = s2l_output_rewrite;
        }
        else
        {
            s2l_output_rewrite = std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite>();
            s2l_output_rewrite->parent = this;
            children["s2l-output-rewrite"] = s2l_output_rewrite;
        }
        return children.at("s2l-output-rewrite");
    }

    if(child_yang_name == "s2lsr-path")
    {
        for(auto const & c : s2lsr_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath>();
        c->parent = this;
        s2lsr_path.push_back(std::move(c));
        children[segment_path] = s2lsr_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::get_children()
{
    for (auto const & c : s2l)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("s2l-output-rewrite") == children.end())
    {
        if(s2l_output_rewrite != nullptr)
        {
            children["s2l-output-rewrite"] = s2l_output_rewrite;
        }
    }

    for (auto const & c : s2lsr_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ctype")
    {
        ctype = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
    }
    if(value_path == "is-segment-routing")
    {
        is_segment_routing = value;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface = value;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name = value;
    }
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::S2LOutputRewrite()
    :
    failed_rewrite(std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite>())
	,pending_rewrite(std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite>())
	,subfamily(std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily>())
	,successful_rewrite(std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite>())
{
    failed_rewrite->parent = this;
    children["failed-rewrite"] = failed_rewrite;

    pending_rewrite->parent = this;
    children["pending-rewrite"] = pending_rewrite;

    subfamily->parent = this;
    children["subfamily"] = subfamily;

    successful_rewrite->parent = this;
    children["successful-rewrite"] = successful_rewrite;

    yang_name = "s2l-output-rewrite"; yang_parent_name = "forwarding-output-label-rewrite";
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::~S2LOutputRewrite()
{
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::has_data() const
{
    return (failed_rewrite !=  nullptr && failed_rewrite->has_data())
	|| (pending_rewrite !=  nullptr && pending_rewrite->has_data())
	|| (subfamily !=  nullptr && subfamily->has_data())
	|| (successful_rewrite !=  nullptr && successful_rewrite->has_data());
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::has_operation() const
{
    return is_set(operation)
	|| (failed_rewrite !=  nullptr && failed_rewrite->has_operation())
	|| (pending_rewrite !=  nullptr && pending_rewrite->has_operation())
	|| (subfamily !=  nullptr && subfamily->has_operation())
	|| (successful_rewrite !=  nullptr && successful_rewrite->has_operation());
}

std::string MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-output-rewrite";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2LOutputRewrite' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "failed-rewrite")
    {
        if(failed_rewrite != nullptr)
        {
            children["failed-rewrite"] = failed_rewrite;
        }
        else
        {
            failed_rewrite = std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite>();
            failed_rewrite->parent = this;
            children["failed-rewrite"] = failed_rewrite;
        }
        return children.at("failed-rewrite");
    }

    if(child_yang_name == "pending-rewrite")
    {
        if(pending_rewrite != nullptr)
        {
            children["pending-rewrite"] = pending_rewrite;
        }
        else
        {
            pending_rewrite = std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite>();
            pending_rewrite->parent = this;
            children["pending-rewrite"] = pending_rewrite;
        }
        return children.at("pending-rewrite");
    }

    if(child_yang_name == "subfamily")
    {
        if(subfamily != nullptr)
        {
            children["subfamily"] = subfamily;
        }
        else
        {
            subfamily = std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily>();
            subfamily->parent = this;
            children["subfamily"] = subfamily;
        }
        return children.at("subfamily");
    }

    if(child_yang_name == "successful-rewrite")
    {
        if(successful_rewrite != nullptr)
        {
            children["successful-rewrite"] = successful_rewrite;
        }
        else
        {
            successful_rewrite = std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite>();
            successful_rewrite->parent = this;
            children["successful-rewrite"] = successful_rewrite;
        }
        return children.at("successful-rewrite");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::get_children()
{
    if(children.find("failed-rewrite") == children.end())
    {
        if(failed_rewrite != nullptr)
        {
            children["failed-rewrite"] = failed_rewrite;
        }
    }

    if(children.find("pending-rewrite") == children.end())
    {
        if(pending_rewrite != nullptr)
        {
            children["pending-rewrite"] = pending_rewrite;
        }
    }

    if(children.find("subfamily") == children.end())
    {
        if(subfamily != nullptr)
        {
            children["subfamily"] = subfamily;
        }
    }

    if(children.find("successful-rewrite") == children.end())
    {
        if(successful_rewrite != nullptr)
        {
            children["successful-rewrite"] = successful_rewrite;
        }
    }

    return children;
}

void MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::Subfamily()
    :
    next_hop_address{YType::str, "next-hop-address"},
    previous_hop_address{YType::str, "previous-hop-address"}
    	,
    lsp_fec(std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec>())
{
    lsp_fec->parent = this;
    children["lsp-fec"] = lsp_fec;

    yang_name = "subfamily"; yang_parent_name = "s2l-output-rewrite";
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::~Subfamily()
{
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::has_data() const
{
    return next_hop_address.is_set
	|| previous_hop_address.is_set
	|| (lsp_fec !=  nullptr && lsp_fec->has_data());
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_address.operation)
	|| is_set(previous_hop_address.operation)
	|| (lsp_fec !=  nullptr && lsp_fec->has_operation());
}

std::string MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subfamily";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Subfamily' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.operation)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-fec")
    {
        if(lsp_fec != nullptr)
        {
            children["lsp-fec"] = lsp_fec;
        }
        else
        {
            lsp_fec = std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec>();
            lsp_fec->parent = this;
            children["lsp-fec"] = lsp_fec;
        }
        return children.at("lsp-fec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::get_children()
{
    if(children.find("lsp-fec") == children.end())
    {
        if(lsp_fec != nullptr)
        {
            children["lsp-fec"] = lsp_fec;
        }
    }

    return children;
}

void MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
    }
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::LspFec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;
    children["fec-destination-info"] = fec_destination_info;

    yang_name = "lsp-fec"; yang_parent_name = "subfamily";
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::~LspFec()
{
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_extended_tunnel_id.operation)
	|| is_set(fec_lsp_id.operation)
	|| is_set(fec_source.operation)
	|| is_set(fec_tunnel_id.operation)
	|| is_set(fec_vrf.operation)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-fec";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspFec' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.operation)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_lsp_id.is_set || is_set(fec_lsp_id.operation)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.operation)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.operation)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.operation)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
        else
        {
            fec_destination_info = std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo>();
            fec_destination_info->parent = this;
            children["fec-destination-info"] = fec_destination_info;
        }
        return children.at("fec-destination-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::get_children()
{
    if(children.find("fec-destination-info") == children.end())
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
    }

    return children;
}

void MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
    }
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{
    yang_name = "fec-destination-info"; yang_parent_name = "lsp-fec";
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_ctype.operation)
	|| is_set(fec_destination_p2mp_id.operation)
	|| is_set(p2p_lsp_destination.operation);
}

std::string MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FecDestinationInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.operation)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.operation)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.operation)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::get_children()
{
    return children;
}

void MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::Subfamily::LspFec::FecDestinationInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
    }
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::SuccessfulRewrite()
    :
    backup_active{YType::boolean, "backup-active"},
    explicit_null{YType::enumeration, "explicit-null"},
    label{YType::uint32, "label"},
    out_rewrite_role{YType::enumeration, "out-rewrite-role"},
    protocol_transported{YType::uint16, "protocol-transported"},
    s2l_source{YType::str, "s2l-source"},
    timestamp{YType::uint32, "timestamp"}
    	,
    backup_tunnel_rewrite(std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite>())
	,primary_s2l(std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L>())
{
    backup_tunnel_rewrite->parent = this;
    children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;

    primary_s2l->parent = this;
    children["primary-s2l"] = primary_s2l;

    yang_name = "successful-rewrite"; yang_parent_name = "s2l-output-rewrite";
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::~SuccessfulRewrite()
{
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::has_data() const
{
    return backup_active.is_set
	|| explicit_null.is_set
	|| label.is_set
	|| out_rewrite_role.is_set
	|| protocol_transported.is_set
	|| s2l_source.is_set
	|| timestamp.is_set
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_data())
	|| (primary_s2l !=  nullptr && primary_s2l->has_data());
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_active.operation)
	|| is_set(explicit_null.operation)
	|| is_set(label.operation)
	|| is_set(out_rewrite_role.operation)
	|| is_set(protocol_transported.operation)
	|| is_set(s2l_source.operation)
	|| is_set(timestamp.operation)
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_operation())
	|| (primary_s2l !=  nullptr && primary_s2l->has_operation());
}

std::string MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "successful-rewrite";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SuccessfulRewrite' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_active.is_set || is_set(backup_active.operation)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (explicit_null.is_set || is_set(explicit_null.operation)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (out_rewrite_role.is_set || is_set(out_rewrite_role.operation)) leaf_name_data.push_back(out_rewrite_role.get_name_leafdata());
    if (protocol_transported.is_set || is_set(protocol_transported.operation)) leaf_name_data.push_back(protocol_transported.get_name_leafdata());
    if (s2l_source.is_set || is_set(s2l_source.operation)) leaf_name_data.push_back(s2l_source.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-tunnel-rewrite")
    {
        if(backup_tunnel_rewrite != nullptr)
        {
            children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
        }
        else
        {
            backup_tunnel_rewrite = std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite>();
            backup_tunnel_rewrite->parent = this;
            children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
        }
        return children.at("backup-tunnel-rewrite");
    }

    if(child_yang_name == "primary-s2l")
    {
        if(primary_s2l != nullptr)
        {
            children["primary-s2l"] = primary_s2l;
        }
        else
        {
            primary_s2l = std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L>();
            primary_s2l->parent = this;
            children["primary-s2l"] = primary_s2l;
        }
        return children.at("primary-s2l");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::get_children()
{
    if(children.find("backup-tunnel-rewrite") == children.end())
    {
        if(backup_tunnel_rewrite != nullptr)
        {
            children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
        }
    }

    if(children.find("primary-s2l") == children.end())
    {
        if(primary_s2l != nullptr)
        {
            children["primary-s2l"] = primary_s2l;
        }
    }

    return children;
}

void MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-active")
    {
        backup_active = value;
    }
    if(value_path == "explicit-null")
    {
        explicit_null = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "out-rewrite-role")
    {
        out_rewrite_role = value;
    }
    if(value_path == "protocol-transported")
    {
        protocol_transported = value;
    }
    if(value_path == "s2l-source")
    {
        s2l_source = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::PrimaryS2L()
    :
    bandwidth_accounting_requested{YType::boolean, "bandwidth-accounting-requested"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"},
    parent_interface_name{YType::str, "parent-interface-name"},
    physica_interface_name{YType::str, "physica-interface-name"},
    sr_label_stack{YType::uint32, "sr-label-stack"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
{
    yang_name = "primary-s2l"; yang_parent_name = "successful-rewrite";
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::~PrimaryS2L()
{
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::has_data() const
{
    for (auto const & leaf : sr_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bandwidth_accounting_requested.is_set
	|| next_hop_address.is_set
	|| out_label.is_set
	|| parent_interface_name.is_set
	|| physica_interface_name.is_set
	|| tunnel_interface_name.is_set;
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::has_operation() const
{
    for (auto const & leaf : sr_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth_accounting_requested.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(out_label.operation)
	|| is_set(parent_interface_name.operation)
	|| is_set(physica_interface_name.operation)
	|| is_set(sr_label_stack.operation)
	|| is_set(tunnel_interface_name.operation);
}

std::string MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-s2l";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrimaryS2L' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_accounting_requested.is_set || is_set(bandwidth_accounting_requested.operation)) leaf_name_data.push_back(bandwidth_accounting_requested.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.operation)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (physica_interface_name.is_set || is_set(physica_interface_name.operation)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.operation)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());

    auto sr_label_stack_name_datas = sr_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sr_label_stack_name_datas.begin(), sr_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::get_children()
{
    return children;
}

void MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::PrimaryS2L::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-accounting-requested")
    {
        bandwidth_accounting_requested = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "out-label")
    {
        out_label = value;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
    }
    if(value_path == "sr-label-stack")
    {
        sr_label_stack.append(value);
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
    }
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::BackupTunnelRewrite()
    :
    bandwidth_accounting_requested{YType::boolean, "bandwidth-accounting-requested"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"},
    parent_interface_name{YType::str, "parent-interface-name"},
    physica_interface_name{YType::str, "physica-interface-name"},
    sr_label_stack{YType::uint32, "sr-label-stack"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
{
    yang_name = "backup-tunnel-rewrite"; yang_parent_name = "successful-rewrite";
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::~BackupTunnelRewrite()
{
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::has_data() const
{
    for (auto const & leaf : sr_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bandwidth_accounting_requested.is_set
	|| next_hop_address.is_set
	|| out_label.is_set
	|| parent_interface_name.is_set
	|| physica_interface_name.is_set
	|| tunnel_interface_name.is_set;
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::has_operation() const
{
    for (auto const & leaf : sr_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth_accounting_requested.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(out_label.operation)
	|| is_set(parent_interface_name.operation)
	|| is_set(physica_interface_name.operation)
	|| is_set(sr_label_stack.operation)
	|| is_set(tunnel_interface_name.operation);
}

std::string MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel-rewrite";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupTunnelRewrite' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_accounting_requested.is_set || is_set(bandwidth_accounting_requested.operation)) leaf_name_data.push_back(bandwidth_accounting_requested.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.operation)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (physica_interface_name.is_set || is_set(physica_interface_name.operation)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.operation)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());

    auto sr_label_stack_name_datas = sr_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sr_label_stack_name_datas.begin(), sr_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::get_children()
{
    return children;
}

void MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::SuccessfulRewrite::BackupTunnelRewrite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-accounting-requested")
    {
        bandwidth_accounting_requested = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "out-label")
    {
        out_label = value;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
    }
    if(value_path == "sr-label-stack")
    {
        sr_label_stack.append(value);
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
    }
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::FailedRewrite()
    :
    backup_active{YType::boolean, "backup-active"},
    explicit_null{YType::enumeration, "explicit-null"},
    label{YType::uint32, "label"},
    out_rewrite_role{YType::enumeration, "out-rewrite-role"},
    protocol_transported{YType::uint16, "protocol-transported"},
    s2l_source{YType::str, "s2l-source"},
    timestamp{YType::uint32, "timestamp"}
    	,
    backup_tunnel_rewrite(std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite>())
	,primary_s2l(std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L>())
{
    backup_tunnel_rewrite->parent = this;
    children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;

    primary_s2l->parent = this;
    children["primary-s2l"] = primary_s2l;

    yang_name = "failed-rewrite"; yang_parent_name = "s2l-output-rewrite";
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::~FailedRewrite()
{
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::has_data() const
{
    return backup_active.is_set
	|| explicit_null.is_set
	|| label.is_set
	|| out_rewrite_role.is_set
	|| protocol_transported.is_set
	|| s2l_source.is_set
	|| timestamp.is_set
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_data())
	|| (primary_s2l !=  nullptr && primary_s2l->has_data());
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_active.operation)
	|| is_set(explicit_null.operation)
	|| is_set(label.operation)
	|| is_set(out_rewrite_role.operation)
	|| is_set(protocol_transported.operation)
	|| is_set(s2l_source.operation)
	|| is_set(timestamp.operation)
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_operation())
	|| (primary_s2l !=  nullptr && primary_s2l->has_operation());
}

std::string MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failed-rewrite";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FailedRewrite' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_active.is_set || is_set(backup_active.operation)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (explicit_null.is_set || is_set(explicit_null.operation)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (out_rewrite_role.is_set || is_set(out_rewrite_role.operation)) leaf_name_data.push_back(out_rewrite_role.get_name_leafdata());
    if (protocol_transported.is_set || is_set(protocol_transported.operation)) leaf_name_data.push_back(protocol_transported.get_name_leafdata());
    if (s2l_source.is_set || is_set(s2l_source.operation)) leaf_name_data.push_back(s2l_source.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-tunnel-rewrite")
    {
        if(backup_tunnel_rewrite != nullptr)
        {
            children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
        }
        else
        {
            backup_tunnel_rewrite = std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite>();
            backup_tunnel_rewrite->parent = this;
            children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
        }
        return children.at("backup-tunnel-rewrite");
    }

    if(child_yang_name == "primary-s2l")
    {
        if(primary_s2l != nullptr)
        {
            children["primary-s2l"] = primary_s2l;
        }
        else
        {
            primary_s2l = std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L>();
            primary_s2l->parent = this;
            children["primary-s2l"] = primary_s2l;
        }
        return children.at("primary-s2l");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::get_children()
{
    if(children.find("backup-tunnel-rewrite") == children.end())
    {
        if(backup_tunnel_rewrite != nullptr)
        {
            children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
        }
    }

    if(children.find("primary-s2l") == children.end())
    {
        if(primary_s2l != nullptr)
        {
            children["primary-s2l"] = primary_s2l;
        }
    }

    return children;
}

void MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-active")
    {
        backup_active = value;
    }
    if(value_path == "explicit-null")
    {
        explicit_null = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "out-rewrite-role")
    {
        out_rewrite_role = value;
    }
    if(value_path == "protocol-transported")
    {
        protocol_transported = value;
    }
    if(value_path == "s2l-source")
    {
        s2l_source = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::PrimaryS2L()
    :
    bandwidth_accounting_requested{YType::boolean, "bandwidth-accounting-requested"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"},
    parent_interface_name{YType::str, "parent-interface-name"},
    physica_interface_name{YType::str, "physica-interface-name"},
    sr_label_stack{YType::uint32, "sr-label-stack"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
{
    yang_name = "primary-s2l"; yang_parent_name = "failed-rewrite";
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::~PrimaryS2L()
{
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::has_data() const
{
    for (auto const & leaf : sr_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bandwidth_accounting_requested.is_set
	|| next_hop_address.is_set
	|| out_label.is_set
	|| parent_interface_name.is_set
	|| physica_interface_name.is_set
	|| tunnel_interface_name.is_set;
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::has_operation() const
{
    for (auto const & leaf : sr_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth_accounting_requested.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(out_label.operation)
	|| is_set(parent_interface_name.operation)
	|| is_set(physica_interface_name.operation)
	|| is_set(sr_label_stack.operation)
	|| is_set(tunnel_interface_name.operation);
}

std::string MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-s2l";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrimaryS2L' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_accounting_requested.is_set || is_set(bandwidth_accounting_requested.operation)) leaf_name_data.push_back(bandwidth_accounting_requested.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.operation)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (physica_interface_name.is_set || is_set(physica_interface_name.operation)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.operation)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());

    auto sr_label_stack_name_datas = sr_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sr_label_stack_name_datas.begin(), sr_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::get_children()
{
    return children;
}

void MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::PrimaryS2L::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-accounting-requested")
    {
        bandwidth_accounting_requested = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "out-label")
    {
        out_label = value;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
    }
    if(value_path == "sr-label-stack")
    {
        sr_label_stack.append(value);
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
    }
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::BackupTunnelRewrite()
    :
    bandwidth_accounting_requested{YType::boolean, "bandwidth-accounting-requested"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"},
    parent_interface_name{YType::str, "parent-interface-name"},
    physica_interface_name{YType::str, "physica-interface-name"},
    sr_label_stack{YType::uint32, "sr-label-stack"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
{
    yang_name = "backup-tunnel-rewrite"; yang_parent_name = "failed-rewrite";
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::~BackupTunnelRewrite()
{
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::has_data() const
{
    for (auto const & leaf : sr_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bandwidth_accounting_requested.is_set
	|| next_hop_address.is_set
	|| out_label.is_set
	|| parent_interface_name.is_set
	|| physica_interface_name.is_set
	|| tunnel_interface_name.is_set;
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::has_operation() const
{
    for (auto const & leaf : sr_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth_accounting_requested.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(out_label.operation)
	|| is_set(parent_interface_name.operation)
	|| is_set(physica_interface_name.operation)
	|| is_set(sr_label_stack.operation)
	|| is_set(tunnel_interface_name.operation);
}

std::string MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel-rewrite";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupTunnelRewrite' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_accounting_requested.is_set || is_set(bandwidth_accounting_requested.operation)) leaf_name_data.push_back(bandwidth_accounting_requested.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.operation)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (physica_interface_name.is_set || is_set(physica_interface_name.operation)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.operation)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());

    auto sr_label_stack_name_datas = sr_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sr_label_stack_name_datas.begin(), sr_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::get_children()
{
    return children;
}

void MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::FailedRewrite::BackupTunnelRewrite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-accounting-requested")
    {
        bandwidth_accounting_requested = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "out-label")
    {
        out_label = value;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
    }
    if(value_path == "sr-label-stack")
    {
        sr_label_stack.append(value);
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
    }
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PendingRewrite()
    :
    backup_active{YType::boolean, "backup-active"},
    explicit_null{YType::enumeration, "explicit-null"},
    label{YType::uint32, "label"},
    out_rewrite_role{YType::enumeration, "out-rewrite-role"},
    protocol_transported{YType::uint16, "protocol-transported"},
    s2l_source{YType::str, "s2l-source"},
    timestamp{YType::uint32, "timestamp"}
    	,
    backup_tunnel_rewrite(std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite>())
	,primary_s2l(std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L>())
{
    backup_tunnel_rewrite->parent = this;
    children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;

    primary_s2l->parent = this;
    children["primary-s2l"] = primary_s2l;

    yang_name = "pending-rewrite"; yang_parent_name = "s2l-output-rewrite";
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::~PendingRewrite()
{
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::has_data() const
{
    return backup_active.is_set
	|| explicit_null.is_set
	|| label.is_set
	|| out_rewrite_role.is_set
	|| protocol_transported.is_set
	|| s2l_source.is_set
	|| timestamp.is_set
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_data())
	|| (primary_s2l !=  nullptr && primary_s2l->has_data());
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_active.operation)
	|| is_set(explicit_null.operation)
	|| is_set(label.operation)
	|| is_set(out_rewrite_role.operation)
	|| is_set(protocol_transported.operation)
	|| is_set(s2l_source.operation)
	|| is_set(timestamp.operation)
	|| (backup_tunnel_rewrite !=  nullptr && backup_tunnel_rewrite->has_operation())
	|| (primary_s2l !=  nullptr && primary_s2l->has_operation());
}

std::string MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pending-rewrite";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PendingRewrite' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_active.is_set || is_set(backup_active.operation)) leaf_name_data.push_back(backup_active.get_name_leafdata());
    if (explicit_null.is_set || is_set(explicit_null.operation)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (out_rewrite_role.is_set || is_set(out_rewrite_role.operation)) leaf_name_data.push_back(out_rewrite_role.get_name_leafdata());
    if (protocol_transported.is_set || is_set(protocol_transported.operation)) leaf_name_data.push_back(protocol_transported.get_name_leafdata());
    if (s2l_source.is_set || is_set(s2l_source.operation)) leaf_name_data.push_back(s2l_source.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-tunnel-rewrite")
    {
        if(backup_tunnel_rewrite != nullptr)
        {
            children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
        }
        else
        {
            backup_tunnel_rewrite = std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite>();
            backup_tunnel_rewrite->parent = this;
            children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
        }
        return children.at("backup-tunnel-rewrite");
    }

    if(child_yang_name == "primary-s2l")
    {
        if(primary_s2l != nullptr)
        {
            children["primary-s2l"] = primary_s2l;
        }
        else
        {
            primary_s2l = std::make_shared<MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L>();
            primary_s2l->parent = this;
            children["primary-s2l"] = primary_s2l;
        }
        return children.at("primary-s2l");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::get_children()
{
    if(children.find("backup-tunnel-rewrite") == children.end())
    {
        if(backup_tunnel_rewrite != nullptr)
        {
            children["backup-tunnel-rewrite"] = backup_tunnel_rewrite;
        }
    }

    if(children.find("primary-s2l") == children.end())
    {
        if(primary_s2l != nullptr)
        {
            children["primary-s2l"] = primary_s2l;
        }
    }

    return children;
}

void MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-active")
    {
        backup_active = value;
    }
    if(value_path == "explicit-null")
    {
        explicit_null = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "out-rewrite-role")
    {
        out_rewrite_role = value;
    }
    if(value_path == "protocol-transported")
    {
        protocol_transported = value;
    }
    if(value_path == "s2l-source")
    {
        s2l_source = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::PrimaryS2L()
    :
    bandwidth_accounting_requested{YType::boolean, "bandwidth-accounting-requested"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"},
    parent_interface_name{YType::str, "parent-interface-name"},
    physica_interface_name{YType::str, "physica-interface-name"},
    sr_label_stack{YType::uint32, "sr-label-stack"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
{
    yang_name = "primary-s2l"; yang_parent_name = "pending-rewrite";
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::~PrimaryS2L()
{
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::has_data() const
{
    for (auto const & leaf : sr_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bandwidth_accounting_requested.is_set
	|| next_hop_address.is_set
	|| out_label.is_set
	|| parent_interface_name.is_set
	|| physica_interface_name.is_set
	|| tunnel_interface_name.is_set;
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::has_operation() const
{
    for (auto const & leaf : sr_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth_accounting_requested.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(out_label.operation)
	|| is_set(parent_interface_name.operation)
	|| is_set(physica_interface_name.operation)
	|| is_set(sr_label_stack.operation)
	|| is_set(tunnel_interface_name.operation);
}

std::string MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-s2l";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrimaryS2L' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_accounting_requested.is_set || is_set(bandwidth_accounting_requested.operation)) leaf_name_data.push_back(bandwidth_accounting_requested.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.operation)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (physica_interface_name.is_set || is_set(physica_interface_name.operation)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.operation)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());

    auto sr_label_stack_name_datas = sr_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sr_label_stack_name_datas.begin(), sr_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::get_children()
{
    return children;
}

void MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::PrimaryS2L::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-accounting-requested")
    {
        bandwidth_accounting_requested = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "out-label")
    {
        out_label = value;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
    }
    if(value_path == "sr-label-stack")
    {
        sr_label_stack.append(value);
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
    }
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::BackupTunnelRewrite()
    :
    bandwidth_accounting_requested{YType::boolean, "bandwidth-accounting-requested"},
    next_hop_address{YType::str, "next-hop-address"},
    out_label{YType::uint32, "out-label"},
    parent_interface_name{YType::str, "parent-interface-name"},
    physica_interface_name{YType::str, "physica-interface-name"},
    sr_label_stack{YType::uint32, "sr-label-stack"},
    tunnel_interface_name{YType::str, "tunnel-interface-name"}
{
    yang_name = "backup-tunnel-rewrite"; yang_parent_name = "pending-rewrite";
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::~BackupTunnelRewrite()
{
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::has_data() const
{
    for (auto const & leaf : sr_label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bandwidth_accounting_requested.is_set
	|| next_hop_address.is_set
	|| out_label.is_set
	|| parent_interface_name.is_set
	|| physica_interface_name.is_set
	|| tunnel_interface_name.is_set;
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::has_operation() const
{
    for (auto const & leaf : sr_label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth_accounting_requested.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(out_label.operation)
	|| is_set(parent_interface_name.operation)
	|| is_set(physica_interface_name.operation)
	|| is_set(sr_label_stack.operation)
	|| is_set(tunnel_interface_name.operation);
}

std::string MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel-rewrite";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupTunnelRewrite' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_accounting_requested.is_set || is_set(bandwidth_accounting_requested.operation)) leaf_name_data.push_back(bandwidth_accounting_requested.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.operation)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (physica_interface_name.is_set || is_set(physica_interface_name.operation)) leaf_name_data.push_back(physica_interface_name.get_name_leafdata());
    if (tunnel_interface_name.is_set || is_set(tunnel_interface_name.operation)) leaf_name_data.push_back(tunnel_interface_name.get_name_leafdata());

    auto sr_label_stack_name_datas = sr_label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sr_label_stack_name_datas.begin(), sr_label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::get_children()
{
    return children;
}

void MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LOutputRewrite::PendingRewrite::BackupTunnelRewrite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-accounting-requested")
    {
        bandwidth_accounting_requested = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "out-label")
    {
        out_label = value;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
    }
    if(value_path == "physica-interface-name")
    {
        physica_interface_name = value;
    }
    if(value_path == "sr-label-stack")
    {
        sr_label_stack.append(value);
    }
    if(value_path == "tunnel-interface-name")
    {
        tunnel_interface_name = value;
    }
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::S2L()
    :
    destination_address{YType::str, "destination-address"},
    sub_group_id{YType::uint16, "sub-group-id"},
    sub_group_original_id{YType::str, "sub-group-original-id"}
{
    yang_name = "s2l"; yang_parent_name = "forwarding-output-label-rewrite";
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::~S2L()
{
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::has_data() const
{
    return destination_address.is_set
	|| sub_group_id.is_set
	|| sub_group_original_id.is_set;
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_original_id.operation);
}

std::string MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2L' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_original_id.is_set || is_set(sub_group_original_id.operation)) leaf_name_data.push_back(sub_group_original_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::get_children()
{
    return children;
}

void MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2L::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-original-id")
    {
        sub_group_original_id = value;
    }
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::S2LsrPath()
    :
    backup_path_id{YType::uint32, "backup-path-id"},
    is_backup{YType::boolean, "is-backup"},
    is_primary{YType::boolean, "is-primary"},
    next_hop{YType::str, "next-hop"},
    outgoing_interface{YType::str, "outgoing-interface"},
    outgoing_labels_stack{YType::uint32, "outgoing-labels-stack"},
    path_id{YType::uint32, "path-id"}
{
    yang_name = "s2lsr-path"; yang_parent_name = "forwarding-output-label-rewrite";
}

MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::~S2LsrPath()
{
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::has_data() const
{
    for (auto const & leaf : outgoing_labels_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return backup_path_id.is_set
	|| is_backup.is_set
	|| is_primary.is_set
	|| next_hop.is_set
	|| outgoing_interface.is_set
	|| path_id.is_set;
}

bool MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::has_operation() const
{
    for (auto const & leaf : outgoing_labels_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(backup_path_id.operation)
	|| is_set(is_backup.operation)
	|| is_set(is_primary.operation)
	|| is_set(next_hop.operation)
	|| is_set(outgoing_interface.operation)
	|| is_set(outgoing_labels_stack.operation)
	|| is_set(path_id.operation);
}

std::string MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2lsr-path";

    return path_buffer.str();

}

EntityPath MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2LsrPath' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_path_id.is_set || is_set(backup_path_id.operation)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (is_backup.is_set || is_set(is_backup.operation)) leaf_name_data.push_back(is_backup.get_name_leafdata());
    if (is_primary.is_set || is_set(is_primary.operation)) leaf_name_data.push_back(is_primary.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (outgoing_interface.is_set || is_set(outgoing_interface.operation)) leaf_name_data.push_back(outgoing_interface.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());

    auto outgoing_labels_stack_name_datas = outgoing_labels_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), outgoing_labels_stack_name_datas.begin(), outgoing_labels_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::get_children()
{
    return children;
}

void MplsTeStandby::P2Mp::ForwardingOutputLabelRewrites::ForwardingOutputLabelRewrite::S2LsrPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
    }
    if(value_path == "is-backup")
    {
        is_backup = value;
    }
    if(value_path == "is-primary")
    {
        is_primary = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "outgoing-interface")
    {
        outgoing_interface = value;
    }
    if(value_path == "outgoing-labels-stack")
    {
        outgoing_labels_stack.append(value);
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
}

MplsTeStandby::OpenConfig::OpenConfig()
    :
    lsp_counters(std::make_shared<MplsTeStandby::OpenConfig::LspCounters>())
	,lsp_states(std::make_shared<MplsTeStandby::OpenConfig::LspStates>())
{
    lsp_counters->parent = this;
    children["lsp-counters"] = lsp_counters;

    lsp_states->parent = this;
    children["lsp-states"] = lsp_states;

    yang_name = "open-config"; yang_parent_name = "mpls-te-standby";
}

MplsTeStandby::OpenConfig::~OpenConfig()
{
}

bool MplsTeStandby::OpenConfig::has_data() const
{
    return (lsp_counters !=  nullptr && lsp_counters->has_data())
	|| (lsp_states !=  nullptr && lsp_states->has_data());
}

bool MplsTeStandby::OpenConfig::has_operation() const
{
    return is_set(operation)
	|| (lsp_counters !=  nullptr && lsp_counters->has_operation())
	|| (lsp_states !=  nullptr && lsp_states->has_operation());
}

std::string MplsTeStandby::OpenConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "open-config";

    return path_buffer.str();

}

EntityPath MplsTeStandby::OpenConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::OpenConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-counters")
    {
        if(lsp_counters != nullptr)
        {
            children["lsp-counters"] = lsp_counters;
        }
        else
        {
            lsp_counters = std::make_shared<MplsTeStandby::OpenConfig::LspCounters>();
            lsp_counters->parent = this;
            children["lsp-counters"] = lsp_counters;
        }
        return children.at("lsp-counters");
    }

    if(child_yang_name == "lsp-states")
    {
        if(lsp_states != nullptr)
        {
            children["lsp-states"] = lsp_states;
        }
        else
        {
            lsp_states = std::make_shared<MplsTeStandby::OpenConfig::LspStates>();
            lsp_states->parent = this;
            children["lsp-states"] = lsp_states;
        }
        return children.at("lsp-states");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::OpenConfig::get_children()
{
    if(children.find("lsp-counters") == children.end())
    {
        if(lsp_counters != nullptr)
        {
            children["lsp-counters"] = lsp_counters;
        }
    }

    if(children.find("lsp-states") == children.end())
    {
        if(lsp_states != nullptr)
        {
            children["lsp-states"] = lsp_states;
        }
    }

    return children;
}

void MplsTeStandby::OpenConfig::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::OpenConfig::LspStates::LspStates()
{
    yang_name = "lsp-states"; yang_parent_name = "open-config";
}

MplsTeStandby::OpenConfig::LspStates::~LspStates()
{
}

bool MplsTeStandby::OpenConfig::LspStates::has_data() const
{
    for (std::size_t index=0; index<lsp_state.size(); index++)
    {
        if(lsp_state[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::OpenConfig::LspStates::has_operation() const
{
    for (std::size_t index=0; index<lsp_state.size(); index++)
    {
        if(lsp_state[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::OpenConfig::LspStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-states";

    return path_buffer.str();

}

EntityPath MplsTeStandby::OpenConfig::LspStates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/open-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::OpenConfig::LspStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-state")
    {
        for(auto const & c : lsp_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::OpenConfig::LspStates::LspState>();
        c->parent = this;
        lsp_state.push_back(std::move(c));
        children[segment_path] = lsp_state.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::OpenConfig::LspStates::get_children()
{
    for (auto const & c : lsp_state)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::OpenConfig::LspStates::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::OpenConfig::LspStates::LspState::LspState()
    :
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_type{YType::enumeration, "tunnel-type"},
    admin_status{YType::enumeration, "admin-status"},
    description{YType::str, "description"},
    hold_priority{YType::uint8, "hold-priority"},
    local_id{YType::uint32, "local-id"},
    metric{YType::enumeration, "metric"},
    name{YType::str, "name"},
    oper_status{YType::enumeration, "oper-status"},
    protection_style_requested{YType::enumeration, "protection-style-requested"},
    reoptimize_timer{YType::uint16, "reoptimize-timer"},
    role{YType::enumeration, "role"},
    setup_priority{YType::uint8, "setup-priority"},
    signaling_protocol{YType::enumeration, "signaling-protocol"},
    soft_preemption{YType::boolean, "soft-preemption"},
    source{YType::str, "source"},
    type{YType::enumeration, "type"}
{
    yang_name = "lsp-state"; yang_parent_name = "lsp-states";
}

MplsTeStandby::OpenConfig::LspStates::LspState::~LspState()
{
}

bool MplsTeStandby::OpenConfig::LspStates::LspState::has_data() const
{
    return tunnel_name.is_set
	|| tunnel_type.is_set
	|| admin_status.is_set
	|| description.is_set
	|| hold_priority.is_set
	|| local_id.is_set
	|| metric.is_set
	|| name.is_set
	|| oper_status.is_set
	|| protection_style_requested.is_set
	|| reoptimize_timer.is_set
	|| role.is_set
	|| setup_priority.is_set
	|| signaling_protocol.is_set
	|| soft_preemption.is_set
	|| source.is_set
	|| type.is_set;
}

bool MplsTeStandby::OpenConfig::LspStates::LspState::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_name.operation)
	|| is_set(tunnel_type.operation)
	|| is_set(admin_status.operation)
	|| is_set(description.operation)
	|| is_set(hold_priority.operation)
	|| is_set(local_id.operation)
	|| is_set(metric.operation)
	|| is_set(name.operation)
	|| is_set(oper_status.operation)
	|| is_set(protection_style_requested.operation)
	|| is_set(reoptimize_timer.operation)
	|| is_set(role.operation)
	|| is_set(setup_priority.operation)
	|| is_set(signaling_protocol.operation)
	|| is_set(soft_preemption.operation)
	|| is_set(source.operation)
	|| is_set(type.operation);
}

std::string MplsTeStandby::OpenConfig::LspStates::LspState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-state" <<"[tunnel-name='" <<tunnel_name <<"']" <<"[tunnel-type='" <<tunnel_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTeStandby::OpenConfig::LspStates::LspState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/open-config/lsp-states/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_type.is_set || is_set(tunnel_type.operation)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.operation)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (local_id.is_set || is_set(local_id.operation)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (oper_status.is_set || is_set(oper_status.operation)) leaf_name_data.push_back(oper_status.get_name_leafdata());
    if (protection_style_requested.is_set || is_set(protection_style_requested.operation)) leaf_name_data.push_back(protection_style_requested.get_name_leafdata());
    if (reoptimize_timer.is_set || is_set(reoptimize_timer.operation)) leaf_name_data.push_back(reoptimize_timer.get_name_leafdata());
    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (signaling_protocol.is_set || is_set(signaling_protocol.operation)) leaf_name_data.push_back(signaling_protocol.get_name_leafdata());
    if (soft_preemption.is_set || is_set(soft_preemption.operation)) leaf_name_data.push_back(soft_preemption.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::OpenConfig::LspStates::LspState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::OpenConfig::LspStates::LspState::get_children()
{
    return children;
}

void MplsTeStandby::OpenConfig::LspStates::LspState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "local-id")
    {
        local_id = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "oper-status")
    {
        oper_status = value;
    }
    if(value_path == "protection-style-requested")
    {
        protection_style_requested = value;
    }
    if(value_path == "reoptimize-timer")
    {
        reoptimize_timer = value;
    }
    if(value_path == "role")
    {
        role = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol = value;
    }
    if(value_path == "soft-preemption")
    {
        soft_preemption = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTeStandby::OpenConfig::LspCounters::LspCounters()
{
    yang_name = "lsp-counters"; yang_parent_name = "open-config";
}

MplsTeStandby::OpenConfig::LspCounters::~LspCounters()
{
}

bool MplsTeStandby::OpenConfig::LspCounters::has_data() const
{
    for (std::size_t index=0; index<lsp_counter.size(); index++)
    {
        if(lsp_counter[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::OpenConfig::LspCounters::has_operation() const
{
    for (std::size_t index=0; index<lsp_counter.size(); index++)
    {
        if(lsp_counter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::OpenConfig::LspCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-counters";

    return path_buffer.str();

}

EntityPath MplsTeStandby::OpenConfig::LspCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/open-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::OpenConfig::LspCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-counter")
    {
        for(auto const & c : lsp_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::OpenConfig::LspCounters::LspCounter>();
        c->parent = this;
        lsp_counter.push_back(std::move(c));
        children[segment_path] = lsp_counter.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::OpenConfig::LspCounters::get_children()
{
    for (auto const & c : lsp_counter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::OpenConfig::LspCounters::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::OpenConfig::LspCounters::LspCounter::LspCounter()
    :
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_type{YType::enumeration, "tunnel-type"},
    bytes{YType::uint64, "bytes"},
    current_path_time{YType::str, "current-path-time"},
    name{YType::str, "name"},
    next_reoptimization_time{YType::str, "next-reoptimization-time"},
    online_time{YType::str, "online-time"},
    packets{YType::uint64, "packets"},
    path_changes{YType::uint64, "path-changes"},
    state_changes{YType::uint64, "state-changes"},
    type{YType::enumeration, "type"}
{
    yang_name = "lsp-counter"; yang_parent_name = "lsp-counters";
}

MplsTeStandby::OpenConfig::LspCounters::LspCounter::~LspCounter()
{
}

bool MplsTeStandby::OpenConfig::LspCounters::LspCounter::has_data() const
{
    return tunnel_name.is_set
	|| tunnel_type.is_set
	|| bytes.is_set
	|| current_path_time.is_set
	|| name.is_set
	|| next_reoptimization_time.is_set
	|| online_time.is_set
	|| packets.is_set
	|| path_changes.is_set
	|| state_changes.is_set
	|| type.is_set;
}

bool MplsTeStandby::OpenConfig::LspCounters::LspCounter::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_name.operation)
	|| is_set(tunnel_type.operation)
	|| is_set(bytes.operation)
	|| is_set(current_path_time.operation)
	|| is_set(name.operation)
	|| is_set(next_reoptimization_time.operation)
	|| is_set(online_time.operation)
	|| is_set(packets.operation)
	|| is_set(path_changes.operation)
	|| is_set(state_changes.operation)
	|| is_set(type.operation);
}

std::string MplsTeStandby::OpenConfig::LspCounters::LspCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-counter" <<"[tunnel-name='" <<tunnel_name <<"']" <<"[tunnel-type='" <<tunnel_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTeStandby::OpenConfig::LspCounters::LspCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/open-config/lsp-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_type.is_set || is_set(tunnel_type.operation)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (current_path_time.is_set || is_set(current_path_time.operation)) leaf_name_data.push_back(current_path_time.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (next_reoptimization_time.is_set || is_set(next_reoptimization_time.operation)) leaf_name_data.push_back(next_reoptimization_time.get_name_leafdata());
    if (online_time.is_set || is_set(online_time.operation)) leaf_name_data.push_back(online_time.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (path_changes.is_set || is_set(path_changes.operation)) leaf_name_data.push_back(path_changes.get_name_leafdata());
    if (state_changes.is_set || is_set(state_changes.operation)) leaf_name_data.push_back(state_changes.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::OpenConfig::LspCounters::LspCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::OpenConfig::LspCounters::LspCounter::get_children()
{
    return children;
}

void MplsTeStandby::OpenConfig::LspCounters::LspCounter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
    }
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "current-path-time")
    {
        current_path_time = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "next-reoptimization-time")
    {
        next_reoptimization_time = value;
    }
    if(value_path == "online-time")
    {
        online_time = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
    if(value_path == "path-changes")
    {
        path_changes = value;
    }
    if(value_path == "state-changes")
    {
        state_changes = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTeStandby::LspOutOfResources::LspOutOfResources()
    :
    summary(std::make_shared<MplsTeStandby::LspOutOfResources::Summary>())
{
    summary->parent = this;
    children["summary"] = summary;

    yang_name = "lsp-out-of-resources"; yang_parent_name = "mpls-te-standby";
}

MplsTeStandby::LspOutOfResources::~LspOutOfResources()
{
}

bool MplsTeStandby::LspOutOfResources::has_data() const
{
    return (summary !=  nullptr && summary->has_data());
}

bool MplsTeStandby::LspOutOfResources::has_operation() const
{
    return is_set(operation)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsTeStandby::LspOutOfResources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-out-of-resources";

    return path_buffer.str();

}

EntityPath MplsTeStandby::LspOutOfResources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::LspOutOfResources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<MplsTeStandby::LspOutOfResources::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::LspOutOfResources::get_children()
{
    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    return children;
}

void MplsTeStandby::LspOutOfResources::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::LspOutOfResources::Summary::Summary()
    :
    lsp_oor_green_recovery_time{YType::uint32, "lsp-oor-green-recovery-time"},
    lsp_oor_state{YType::enumeration, "lsp-oor-state"},
    lsp_oor_timestamp{YType::uint32, "lsp-oor-timestamp"},
    transit_lsp_total_count{YType::uint32, "transit-lsp-total-count"},
    transit_lsp_unprotected_count{YType::uint32, "transit-lsp-unprotected-count"}
{
    yang_name = "summary"; yang_parent_name = "lsp-out-of-resources";
}

MplsTeStandby::LspOutOfResources::Summary::~Summary()
{
}

bool MplsTeStandby::LspOutOfResources::Summary::has_data() const
{
    for (std::size_t index=0; index<lsp_oor_state_xr.size(); index++)
    {
        if(lsp_oor_state_xr[index]->has_data())
            return true;
    }
    return lsp_oor_green_recovery_time.is_set
	|| lsp_oor_state.is_set
	|| lsp_oor_timestamp.is_set
	|| transit_lsp_total_count.is_set
	|| transit_lsp_unprotected_count.is_set;
}

bool MplsTeStandby::LspOutOfResources::Summary::has_operation() const
{
    for (std::size_t index=0; index<lsp_oor_state_xr.size(); index++)
    {
        if(lsp_oor_state_xr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(lsp_oor_green_recovery_time.operation)
	|| is_set(lsp_oor_state.operation)
	|| is_set(lsp_oor_timestamp.operation)
	|| is_set(transit_lsp_total_count.operation)
	|| is_set(transit_lsp_unprotected_count.operation);
}

std::string MplsTeStandby::LspOutOfResources::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath MplsTeStandby::LspOutOfResources::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/lsp-out-of-resources/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_oor_green_recovery_time.is_set || is_set(lsp_oor_green_recovery_time.operation)) leaf_name_data.push_back(lsp_oor_green_recovery_time.get_name_leafdata());
    if (lsp_oor_state.is_set || is_set(lsp_oor_state.operation)) leaf_name_data.push_back(lsp_oor_state.get_name_leafdata());
    if (lsp_oor_timestamp.is_set || is_set(lsp_oor_timestamp.operation)) leaf_name_data.push_back(lsp_oor_timestamp.get_name_leafdata());
    if (transit_lsp_total_count.is_set || is_set(transit_lsp_total_count.operation)) leaf_name_data.push_back(transit_lsp_total_count.get_name_leafdata());
    if (transit_lsp_unprotected_count.is_set || is_set(transit_lsp_unprotected_count.operation)) leaf_name_data.push_back(transit_lsp_unprotected_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::LspOutOfResources::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-oor-state-xr")
    {
        for(auto const & c : lsp_oor_state_xr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr>();
        c->parent = this;
        lsp_oor_state_xr.push_back(std::move(c));
        children[segment_path] = lsp_oor_state_xr.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::LspOutOfResources::Summary::get_children()
{
    for (auto const & c : lsp_oor_state_xr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::LspOutOfResources::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsp-oor-green-recovery-time")
    {
        lsp_oor_green_recovery_time = value;
    }
    if(value_path == "lsp-oor-state")
    {
        lsp_oor_state = value;
    }
    if(value_path == "lsp-oor-timestamp")
    {
        lsp_oor_timestamp = value;
    }
    if(value_path == "transit-lsp-total-count")
    {
        transit_lsp_total_count = value;
    }
    if(value_path == "transit-lsp-unprotected-count")
    {
        transit_lsp_unprotected_count = value;
    }
}

MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::LspOorStateXr()
    :
    accept_reopt{YType::boolean, "accept-reopt"},
    available_bw_percentage{YType::uint32, "available-bw-percentage"},
    lsp_oor_state{YType::enumeration, "lsp-oor-state"},
    minimum_lsp_bandwidth{YType::uint32, "minimum-lsp-bandwidth"},
    te_metric_penalty{YType::uint32, "te-metric-penalty"},
    threshold_transit_all{YType::uint32, "threshold-transit-all"},
    threshold_transit_unprotected{YType::uint32, "threshold-transit-unprotected"},
    transition_duration{YType::uint32, "transition-duration"}
    	,
    statistics(std::make_shared<MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "lsp-oor-state-xr"; yang_parent_name = "summary";
}

MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::~LspOorStateXr()
{
}

bool MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::has_data() const
{
    return accept_reopt.is_set
	|| available_bw_percentage.is_set
	|| lsp_oor_state.is_set
	|| minimum_lsp_bandwidth.is_set
	|| te_metric_penalty.is_set
	|| threshold_transit_all.is_set
	|| threshold_transit_unprotected.is_set
	|| transition_duration.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_reopt.operation)
	|| is_set(available_bw_percentage.operation)
	|| is_set(lsp_oor_state.operation)
	|| is_set(minimum_lsp_bandwidth.operation)
	|| is_set(te_metric_penalty.operation)
	|| is_set(threshold_transit_all.operation)
	|| is_set(threshold_transit_unprotected.operation)
	|| is_set(transition_duration.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-oor-state-xr";

    return path_buffer.str();

}

EntityPath MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/lsp-out-of-resources/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_reopt.is_set || is_set(accept_reopt.operation)) leaf_name_data.push_back(accept_reopt.get_name_leafdata());
    if (available_bw_percentage.is_set || is_set(available_bw_percentage.operation)) leaf_name_data.push_back(available_bw_percentage.get_name_leafdata());
    if (lsp_oor_state.is_set || is_set(lsp_oor_state.operation)) leaf_name_data.push_back(lsp_oor_state.get_name_leafdata());
    if (minimum_lsp_bandwidth.is_set || is_set(minimum_lsp_bandwidth.operation)) leaf_name_data.push_back(minimum_lsp_bandwidth.get_name_leafdata());
    if (te_metric_penalty.is_set || is_set(te_metric_penalty.operation)) leaf_name_data.push_back(te_metric_penalty.get_name_leafdata());
    if (threshold_transit_all.is_set || is_set(threshold_transit_all.operation)) leaf_name_data.push_back(threshold_transit_all.get_name_leafdata());
    if (threshold_transit_unprotected.is_set || is_set(threshold_transit_unprotected.operation)) leaf_name_data.push_back(threshold_transit_unprotected.get_name_leafdata());
    if (transition_duration.is_set || is_set(transition_duration.operation)) leaf_name_data.push_back(transition_duration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::get_children()
{
    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-reopt")
    {
        accept_reopt = value;
    }
    if(value_path == "available-bw-percentage")
    {
        available_bw_percentage = value;
    }
    if(value_path == "lsp-oor-state")
    {
        lsp_oor_state = value;
    }
    if(value_path == "minimum-lsp-bandwidth")
    {
        minimum_lsp_bandwidth = value;
    }
    if(value_path == "te-metric-penalty")
    {
        te_metric_penalty = value;
    }
    if(value_path == "threshold-transit-all")
    {
        threshold_transit_all = value;
    }
    if(value_path == "threshold-transit-unprotected")
    {
        threshold_transit_unprotected = value;
    }
    if(value_path == "transition-duration")
    {
        transition_duration = value;
    }
}

MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::Statistics::Statistics()
    :
    accepted_ls_ps_number{YType::uint32, "accepted-ls-ps-number"},
    accepted_reopt_ls_ps_number{YType::uint32, "accepted-reopt-ls-ps-number"},
    rejected_ls_ps_number{YType::uint32, "rejected-ls-ps-number"},
    rejected_reopt_ls_ps_number{YType::uint32, "rejected-reopt-ls-ps-number"},
    transitions{YType::uint32, "transitions"}
{
    yang_name = "statistics"; yang_parent_name = "lsp-oor-state-xr";
}

MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::Statistics::~Statistics()
{
}

bool MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::Statistics::has_data() const
{
    return accepted_ls_ps_number.is_set
	|| accepted_reopt_ls_ps_number.is_set
	|| rejected_ls_ps_number.is_set
	|| rejected_reopt_ls_ps_number.is_set
	|| transitions.is_set;
}

bool MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_ls_ps_number.operation)
	|| is_set(accepted_reopt_ls_ps_number.operation)
	|| is_set(rejected_ls_ps_number.operation)
	|| is_set(rejected_reopt_ls_ps_number.operation)
	|| is_set(transitions.operation);
}

std::string MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/lsp-out-of-resources/summary/lsp-oor-state-xr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_ls_ps_number.is_set || is_set(accepted_ls_ps_number.operation)) leaf_name_data.push_back(accepted_ls_ps_number.get_name_leafdata());
    if (accepted_reopt_ls_ps_number.is_set || is_set(accepted_reopt_ls_ps_number.operation)) leaf_name_data.push_back(accepted_reopt_ls_ps_number.get_name_leafdata());
    if (rejected_ls_ps_number.is_set || is_set(rejected_ls_ps_number.operation)) leaf_name_data.push_back(rejected_ls_ps_number.get_name_leafdata());
    if (rejected_reopt_ls_ps_number.is_set || is_set(rejected_reopt_ls_ps_number.operation)) leaf_name_data.push_back(rejected_reopt_ls_ps_number.get_name_leafdata());
    if (transitions.is_set || is_set(transitions.operation)) leaf_name_data.push_back(transitions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::Statistics::get_children()
{
    return children;
}

void MplsTeStandby::LspOutOfResources::Summary::LspOorStateXr::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-ls-ps-number")
    {
        accepted_ls_ps_number = value;
    }
    if(value_path == "accepted-reopt-ls-ps-number")
    {
        accepted_reopt_ls_ps_number = value;
    }
    if(value_path == "rejected-ls-ps-number")
    {
        rejected_ls_ps_number = value;
    }
    if(value_path == "rejected-reopt-ls-ps-number")
    {
        rejected_reopt_ls_ps_number = value;
    }
    if(value_path == "transitions")
    {
        transitions = value;
    }
}

MplsTeStandby::Bfd::Bfd()
    :
    counters(std::make_shared<MplsTeStandby::Bfd::Counters>())
	,head_infos(std::make_shared<MplsTeStandby::Bfd::HeadInfos>())
	,links(std::make_shared<MplsTeStandby::Bfd::Links>())
	,summary(std::make_shared<MplsTeStandby::Bfd::Summary>())
	,tail_infos(std::make_shared<MplsTeStandby::Bfd::TailInfos>())
{
    counters->parent = this;
    children["counters"] = counters;

    head_infos->parent = this;
    children["head-infos"] = head_infos;

    links->parent = this;
    children["links"] = links;

    summary->parent = this;
    children["summary"] = summary;

    tail_infos->parent = this;
    children["tail-infos"] = tail_infos;

    yang_name = "bfd"; yang_parent_name = "mpls-te-standby";
}

MplsTeStandby::Bfd::~Bfd()
{
}

bool MplsTeStandby::Bfd::has_data() const
{
    return (counters !=  nullptr && counters->has_data())
	|| (head_infos !=  nullptr && head_infos->has_data())
	|| (links !=  nullptr && links->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (tail_infos !=  nullptr && tail_infos->has_data());
}

bool MplsTeStandby::Bfd::has_operation() const
{
    return is_set(operation)
	|| (counters !=  nullptr && counters->has_operation())
	|| (head_infos !=  nullptr && head_infos->has_operation())
	|| (links !=  nullptr && links->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (tail_infos !=  nullptr && tail_infos->has_operation());
}

std::string MplsTeStandby::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "counters")
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
        else
        {
            counters = std::make_shared<MplsTeStandby::Bfd::Counters>();
            counters->parent = this;
            children["counters"] = counters;
        }
        return children.at("counters");
    }

    if(child_yang_name == "head-infos")
    {
        if(head_infos != nullptr)
        {
            children["head-infos"] = head_infos;
        }
        else
        {
            head_infos = std::make_shared<MplsTeStandby::Bfd::HeadInfos>();
            head_infos->parent = this;
            children["head-infos"] = head_infos;
        }
        return children.at("head-infos");
    }

    if(child_yang_name == "links")
    {
        if(links != nullptr)
        {
            children["links"] = links;
        }
        else
        {
            links = std::make_shared<MplsTeStandby::Bfd::Links>();
            links->parent = this;
            children["links"] = links;
        }
        return children.at("links");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<MplsTeStandby::Bfd::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    if(child_yang_name == "tail-infos")
    {
        if(tail_infos != nullptr)
        {
            children["tail-infos"] = tail_infos;
        }
        else
        {
            tail_infos = std::make_shared<MplsTeStandby::Bfd::TailInfos>();
            tail_infos->parent = this;
            children["tail-infos"] = tail_infos;
        }
        return children.at("tail-infos");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Bfd::get_children()
{
    if(children.find("counters") == children.end())
    {
        if(counters != nullptr)
        {
            children["counters"] = counters;
        }
    }

    if(children.find("head-infos") == children.end())
    {
        if(head_infos != nullptr)
        {
            children["head-infos"] = head_infos;
        }
    }

    if(children.find("links") == children.end())
    {
        if(links != nullptr)
        {
            children["links"] = links;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    if(children.find("tail-infos") == children.end())
    {
        if(tail_infos != nullptr)
        {
            children["tail-infos"] = tail_infos;
        }
    }

    return children;
}

void MplsTeStandby::Bfd::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::Bfd::HeadInfos::HeadInfos()
{
    yang_name = "head-infos"; yang_parent_name = "bfd";
}

MplsTeStandby::Bfd::HeadInfos::~HeadInfos()
{
}

bool MplsTeStandby::Bfd::HeadInfos::has_data() const
{
    for (std::size_t index=0; index<head_info.size(); index++)
    {
        if(head_info[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::Bfd::HeadInfos::has_operation() const
{
    for (std::size_t index=0; index<head_info.size(); index++)
    {
        if(head_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::Bfd::HeadInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-infos";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Bfd::HeadInfos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::HeadInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "head-info")
    {
        for(auto const & c : head_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::Bfd::HeadInfos::HeadInfo>();
        c->parent = this;
        head_info.push_back(std::move(c));
        children[segment_path] = head_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Bfd::HeadInfos::get_children()
{
    for (auto const & c : head_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::Bfd::HeadInfos::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::Bfd::HeadInfos::HeadInfo::HeadInfo()
    :
    tunnel_name{YType::str, "tunnel-name"},
    destination_address{YType::str, "destination-address"},
    lspbfd_type{YType::enumeration, "lspbfd-type"},
    tunnel_name_xr{YType::str, "tunnel-name-xr"}
    	,
    current_lspbfd_info(std::make_shared<MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo>())
	,reoptimized_lspbfd_info(std::make_shared<MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo>())
	,standby_lspbfd_info(std::make_shared<MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo>())
{
    current_lspbfd_info->parent = this;
    children["current-lspbfd-info"] = current_lspbfd_info;

    reoptimized_lspbfd_info->parent = this;
    children["reoptimized-lspbfd-info"] = reoptimized_lspbfd_info;

    standby_lspbfd_info->parent = this;
    children["standby-lspbfd-info"] = standby_lspbfd_info;

    yang_name = "head-info"; yang_parent_name = "head-infos";
}

MplsTeStandby::Bfd::HeadInfos::HeadInfo::~HeadInfo()
{
}

bool MplsTeStandby::Bfd::HeadInfos::HeadInfo::has_data() const
{
    return tunnel_name.is_set
	|| destination_address.is_set
	|| lspbfd_type.is_set
	|| tunnel_name_xr.is_set
	|| (current_lspbfd_info !=  nullptr && current_lspbfd_info->has_data())
	|| (reoptimized_lspbfd_info !=  nullptr && reoptimized_lspbfd_info->has_data())
	|| (standby_lspbfd_info !=  nullptr && standby_lspbfd_info->has_data());
}

bool MplsTeStandby::Bfd::HeadInfos::HeadInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_name.operation)
	|| is_set(destination_address.operation)
	|| is_set(lspbfd_type.operation)
	|| is_set(tunnel_name_xr.operation)
	|| (current_lspbfd_info !=  nullptr && current_lspbfd_info->has_operation())
	|| (reoptimized_lspbfd_info !=  nullptr && reoptimized_lspbfd_info->has_operation())
	|| (standby_lspbfd_info !=  nullptr && standby_lspbfd_info->has_operation());
}

std::string MplsTeStandby::Bfd::HeadInfos::HeadInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-info" <<"[tunnel-name='" <<tunnel_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Bfd::HeadInfos::HeadInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/head-infos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (lspbfd_type.is_set || is_set(lspbfd_type.operation)) leaf_name_data.push_back(lspbfd_type.get_name_leafdata());
    if (tunnel_name_xr.is_set || is_set(tunnel_name_xr.operation)) leaf_name_data.push_back(tunnel_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::HeadInfos::HeadInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "current-lspbfd-info")
    {
        if(current_lspbfd_info != nullptr)
        {
            children["current-lspbfd-info"] = current_lspbfd_info;
        }
        else
        {
            current_lspbfd_info = std::make_shared<MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo>();
            current_lspbfd_info->parent = this;
            children["current-lspbfd-info"] = current_lspbfd_info;
        }
        return children.at("current-lspbfd-info");
    }

    if(child_yang_name == "reoptimized-lspbfd-info")
    {
        if(reoptimized_lspbfd_info != nullptr)
        {
            children["reoptimized-lspbfd-info"] = reoptimized_lspbfd_info;
        }
        else
        {
            reoptimized_lspbfd_info = std::make_shared<MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo>();
            reoptimized_lspbfd_info->parent = this;
            children["reoptimized-lspbfd-info"] = reoptimized_lspbfd_info;
        }
        return children.at("reoptimized-lspbfd-info");
    }

    if(child_yang_name == "standby-lspbfd-info")
    {
        if(standby_lspbfd_info != nullptr)
        {
            children["standby-lspbfd-info"] = standby_lspbfd_info;
        }
        else
        {
            standby_lspbfd_info = std::make_shared<MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo>();
            standby_lspbfd_info->parent = this;
            children["standby-lspbfd-info"] = standby_lspbfd_info;
        }
        return children.at("standby-lspbfd-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Bfd::HeadInfos::HeadInfo::get_children()
{
    if(children.find("current-lspbfd-info") == children.end())
    {
        if(current_lspbfd_info != nullptr)
        {
            children["current-lspbfd-info"] = current_lspbfd_info;
        }
    }

    if(children.find("reoptimized-lspbfd-info") == children.end())
    {
        if(reoptimized_lspbfd_info != nullptr)
        {
            children["reoptimized-lspbfd-info"] = reoptimized_lspbfd_info;
        }
    }

    if(children.find("standby-lspbfd-info") == children.end())
    {
        if(standby_lspbfd_info != nullptr)
        {
            children["standby-lspbfd-info"] = standby_lspbfd_info;
        }
    }

    return children;
}

void MplsTeStandby::Bfd::HeadInfos::HeadInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "lspbfd-type")
    {
        lspbfd_type = value;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr = value;
    }
}

MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::CurrentLspbfdInfo()
    :
    bfd_session_state{YType::enumeration, "bfd-session-state"},
    lsp_id{YType::uint16, "lsp-id"}
{
    yang_name = "current-lspbfd-info"; yang_parent_name = "head-info";
}

MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::~CurrentLspbfdInfo()
{
}

bool MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::has_data() const
{
    return bfd_session_state.is_set
	|| lsp_id.is_set;
}

bool MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_session_state.operation)
	|| is_set(lsp_id.operation);
}

std::string MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-lspbfd-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CurrentLspbfdInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_session_state.is_set || is_set(bfd_session_state.operation)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::get_children()
{
    return children;
}

void MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
}

MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::StandbyLspbfdInfo()
    :
    bfd_session_state{YType::enumeration, "bfd-session-state"},
    lsp_id{YType::uint16, "lsp-id"}
{
    yang_name = "standby-lspbfd-info"; yang_parent_name = "head-info";
}

MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::~StandbyLspbfdInfo()
{
}

bool MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::has_data() const
{
    return bfd_session_state.is_set
	|| lsp_id.is_set;
}

bool MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_session_state.operation)
	|| is_set(lsp_id.operation);
}

std::string MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-lspbfd-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StandbyLspbfdInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_session_state.is_set || is_set(bfd_session_state.operation)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::get_children()
{
    return children;
}

void MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
}

MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::ReoptimizedLspbfdInfo()
    :
    bfd_session_state{YType::enumeration, "bfd-session-state"},
    lsp_id{YType::uint16, "lsp-id"}
{
    yang_name = "reoptimized-lspbfd-info"; yang_parent_name = "head-info";
}

MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::~ReoptimizedLspbfdInfo()
{
}

bool MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::has_data() const
{
    return bfd_session_state.is_set
	|| lsp_id.is_set;
}

bool MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_session_state.operation)
	|| is_set(lsp_id.operation);
}

std::string MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reoptimized-lspbfd-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReoptimizedLspbfdInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_session_state.is_set || is_set(bfd_session_state.operation)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::get_children()
{
    return children;
}

void MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
}

MplsTeStandby::Bfd::Links::Links()
{
    yang_name = "links"; yang_parent_name = "bfd";
}

MplsTeStandby::Bfd::Links::~Links()
{
}

bool MplsTeStandby::Bfd::Links::has_data() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::Bfd::Links::has_operation() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::Bfd::Links::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "links";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Bfd::Links::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::Links::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link")
    {
        for(auto const & c : link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::Bfd::Links::Link>();
        c->parent = this;
        link.push_back(std::move(c));
        children[segment_path] = link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Bfd::Links::get_children()
{
    for (auto const & c : link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::Bfd::Links::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::Bfd::Links::Link::Link()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "link"; yang_parent_name = "links";
}

MplsTeStandby::Bfd::Links::Link::~Link()
{
}

bool MplsTeStandby::Bfd::Links::Link::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return interface_name.is_set;
}

bool MplsTeStandby::Bfd::Links::Link::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string MplsTeStandby::Bfd::Links::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Bfd::Links::Link::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/links/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::Links::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::Bfd::Links::Link::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Bfd::Links::Link::get_children()
{
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::Bfd::Links::Link::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

MplsTeStandby::Bfd::Links::Link::Neighbor::Neighbor()
    :
    is_bfd_up{YType::boolean, "is-bfd-up"},
    neighbor_address{YType::str, "neighbor-address"}
{
    yang_name = "neighbor"; yang_parent_name = "link";
}

MplsTeStandby::Bfd::Links::Link::Neighbor::~Neighbor()
{
}

bool MplsTeStandby::Bfd::Links::Link::Neighbor::has_data() const
{
    return is_bfd_up.is_set
	|| neighbor_address.is_set;
}

bool MplsTeStandby::Bfd::Links::Link::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(is_bfd_up.operation)
	|| is_set(neighbor_address.operation);
}

std::string MplsTeStandby::Bfd::Links::Link::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Bfd::Links::Link::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bfd_up.is_set || is_set(is_bfd_up.operation)) leaf_name_data.push_back(is_bfd_up.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::Links::Link::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Bfd::Links::Link::Neighbor::get_children()
{
    return children;
}

void MplsTeStandby::Bfd::Links::Link::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-bfd-up")
    {
        is_bfd_up = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
}

MplsTeStandby::Bfd::TailInfos::TailInfos()
{
    yang_name = "tail-infos"; yang_parent_name = "bfd";
}

MplsTeStandby::Bfd::TailInfos::~TailInfos()
{
}

bool MplsTeStandby::Bfd::TailInfos::has_data() const
{
    for (std::size_t index=0; index<tail_info.size(); index++)
    {
        if(tail_info[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::Bfd::TailInfos::has_operation() const
{
    for (std::size_t index=0; index<tail_info.size(); index++)
    {
        if(tail_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::Bfd::TailInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tail-infos";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Bfd::TailInfos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::TailInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tail-info")
    {
        for(auto const & c : tail_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::Bfd::TailInfos::TailInfo>();
        c->parent = this;
        tail_info.push_back(std::move(c));
        children[segment_path] = tail_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Bfd::TailInfos::get_children()
{
    for (auto const & c : tail_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::Bfd::TailInfos::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::Bfd::TailInfos::TailInfo::TailInfo()
    :
    bfd_session_state{YType::enumeration, "bfd-session-state"},
    ctype{YType::enumeration, "ctype"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsp_id{YType::int32, "lsp-id"},
    p2mp_id{YType::int32, "p2mp-id"},
    signaled_name{YType::str, "signaled-name"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::int32, "tunnel-id"}
    	,
    lsp_fec(std::make_shared<MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec>())
{
    lsp_fec->parent = this;
    children["lsp-fec"] = lsp_fec;

    yang_name = "tail-info"; yang_parent_name = "tail-infos";
}

MplsTeStandby::Bfd::TailInfos::TailInfo::~TailInfo()
{
}

bool MplsTeStandby::Bfd::TailInfos::TailInfo::has_data() const
{
    return bfd_session_state.is_set
	|| ctype.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| lsp_id.is_set
	|| p2mp_id.is_set
	|| signaled_name.is_set
	|| source_address.is_set
	|| tunnel_id.is_set
	|| (lsp_fec !=  nullptr && lsp_fec->has_data());
}

bool MplsTeStandby::Bfd::TailInfos::TailInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_session_state.operation)
	|| is_set(ctype.operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(lsp_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(signaled_name.operation)
	|| is_set(source_address.operation)
	|| is_set(tunnel_id.operation)
	|| (lsp_fec !=  nullptr && lsp_fec->has_operation());
}

std::string MplsTeStandby::Bfd::TailInfos::TailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tail-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Bfd::TailInfos::TailInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/tail-infos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_session_state.is_set || is_set(bfd_session_state.operation)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());
    if (ctype.is_set || is_set(ctype.operation)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.operation)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::TailInfos::TailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-fec")
    {
        if(lsp_fec != nullptr)
        {
            children["lsp-fec"] = lsp_fec;
        }
        else
        {
            lsp_fec = std::make_shared<MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec>();
            lsp_fec->parent = this;
            children["lsp-fec"] = lsp_fec;
        }
        return children.at("lsp-fec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Bfd::TailInfos::TailInfo::get_children()
{
    if(children.find("lsp-fec") == children.end())
    {
        if(lsp_fec != nullptr)
        {
            children["lsp-fec"] = lsp_fec;
        }
    }

    return children;
}

void MplsTeStandby::Bfd::TailInfos::TailInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
    }
    if(value_path == "ctype")
    {
        ctype = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::LspFec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;
    children["fec-destination-info"] = fec_destination_info;

    yang_name = "lsp-fec"; yang_parent_name = "tail-info";
}

MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::~LspFec()
{
}

bool MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_extended_tunnel_id.operation)
	|| is_set(fec_lsp_id.operation)
	|| is_set(fec_source.operation)
	|| is_set(fec_tunnel_id.operation)
	|| is_set(fec_vrf.operation)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-fec";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/tail-infos/tail-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.operation)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_lsp_id.is_set || is_set(fec_lsp_id.operation)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.operation)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.operation)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.operation)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
        else
        {
            fec_destination_info = std::make_shared<MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo>();
            fec_destination_info->parent = this;
            children["fec-destination-info"] = fec_destination_info;
        }
        return children.at("fec-destination-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::get_children()
{
    if(children.find("fec-destination-info") == children.end())
    {
        if(fec_destination_info != nullptr)
        {
            children["fec-destination-info"] = fec_destination_info;
        }
    }

    return children;
}

void MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
    }
}

MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{
    yang_name = "fec-destination-info"; yang_parent_name = "lsp-fec";
}

MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_ctype.operation)
	|| is_set(fec_destination_p2mp_id.operation)
	|| is_set(p2p_lsp_destination.operation);
}

std::string MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/tail-infos/tail-info/lsp-fec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.operation)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.operation)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.operation)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::get_children()
{
    return children;
}

void MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
    }
}

MplsTeStandby::Bfd::Summary::Summary()
    :
    head_lsp_count_sbfd_session_created{YType::uint16, "head-lsp-count-sbfd-session-created"},
    head_lsp_count_sbfd_up{YType::uint16, "head-lsp-count-sbfd-up"},
    head_lsp_count_session_created{YType::uint16, "head-lsp-count-session-created"},
    head_lsp_count_up{YType::uint16, "head-lsp-count-up"},
    link_count_bfd_enabled{YType::uint16, "link-count-bfd-enabled"},
    link_count_session_created{YType::uint16, "link-count-session-created"},
    link_count_session_up{YType::uint16, "link-count-session-up"},
    tail_lsp_count_session_created{YType::uint16, "tail-lsp-count-session-created"},
    tail_lsp_count_session_up{YType::uint16, "tail-lsp-count-session-up"},
    tunnel_count_bfd_enabled{YType::uint16, "tunnel-count-bfd-enabled"},
    tunnel_count_sbfd_enabled{YType::uint16, "tunnel-count-sbfd-enabled"},
    tunnel_count_sbfd_session_up{YType::uint16, "tunnel-count-sbfd-session-up"},
    tunnel_count_session_up{YType::uint16, "tunnel-count-session-up"},
    tunnel_count_total{YType::uint16, "tunnel-count-total"}
{
    yang_name = "summary"; yang_parent_name = "bfd";
}

MplsTeStandby::Bfd::Summary::~Summary()
{
}

bool MplsTeStandby::Bfd::Summary::has_data() const
{
    return head_lsp_count_sbfd_session_created.is_set
	|| head_lsp_count_sbfd_up.is_set
	|| head_lsp_count_session_created.is_set
	|| head_lsp_count_up.is_set
	|| link_count_bfd_enabled.is_set
	|| link_count_session_created.is_set
	|| link_count_session_up.is_set
	|| tail_lsp_count_session_created.is_set
	|| tail_lsp_count_session_up.is_set
	|| tunnel_count_bfd_enabled.is_set
	|| tunnel_count_sbfd_enabled.is_set
	|| tunnel_count_sbfd_session_up.is_set
	|| tunnel_count_session_up.is_set
	|| tunnel_count_total.is_set;
}

bool MplsTeStandby::Bfd::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(head_lsp_count_sbfd_session_created.operation)
	|| is_set(head_lsp_count_sbfd_up.operation)
	|| is_set(head_lsp_count_session_created.operation)
	|| is_set(head_lsp_count_up.operation)
	|| is_set(link_count_bfd_enabled.operation)
	|| is_set(link_count_session_created.operation)
	|| is_set(link_count_session_up.operation)
	|| is_set(tail_lsp_count_session_created.operation)
	|| is_set(tail_lsp_count_session_up.operation)
	|| is_set(tunnel_count_bfd_enabled.operation)
	|| is_set(tunnel_count_sbfd_enabled.operation)
	|| is_set(tunnel_count_sbfd_session_up.operation)
	|| is_set(tunnel_count_session_up.operation)
	|| is_set(tunnel_count_total.operation);
}

std::string MplsTeStandby::Bfd::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Bfd::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (head_lsp_count_sbfd_session_created.is_set || is_set(head_lsp_count_sbfd_session_created.operation)) leaf_name_data.push_back(head_lsp_count_sbfd_session_created.get_name_leafdata());
    if (head_lsp_count_sbfd_up.is_set || is_set(head_lsp_count_sbfd_up.operation)) leaf_name_data.push_back(head_lsp_count_sbfd_up.get_name_leafdata());
    if (head_lsp_count_session_created.is_set || is_set(head_lsp_count_session_created.operation)) leaf_name_data.push_back(head_lsp_count_session_created.get_name_leafdata());
    if (head_lsp_count_up.is_set || is_set(head_lsp_count_up.operation)) leaf_name_data.push_back(head_lsp_count_up.get_name_leafdata());
    if (link_count_bfd_enabled.is_set || is_set(link_count_bfd_enabled.operation)) leaf_name_data.push_back(link_count_bfd_enabled.get_name_leafdata());
    if (link_count_session_created.is_set || is_set(link_count_session_created.operation)) leaf_name_data.push_back(link_count_session_created.get_name_leafdata());
    if (link_count_session_up.is_set || is_set(link_count_session_up.operation)) leaf_name_data.push_back(link_count_session_up.get_name_leafdata());
    if (tail_lsp_count_session_created.is_set || is_set(tail_lsp_count_session_created.operation)) leaf_name_data.push_back(tail_lsp_count_session_created.get_name_leafdata());
    if (tail_lsp_count_session_up.is_set || is_set(tail_lsp_count_session_up.operation)) leaf_name_data.push_back(tail_lsp_count_session_up.get_name_leafdata());
    if (tunnel_count_bfd_enabled.is_set || is_set(tunnel_count_bfd_enabled.operation)) leaf_name_data.push_back(tunnel_count_bfd_enabled.get_name_leafdata());
    if (tunnel_count_sbfd_enabled.is_set || is_set(tunnel_count_sbfd_enabled.operation)) leaf_name_data.push_back(tunnel_count_sbfd_enabled.get_name_leafdata());
    if (tunnel_count_sbfd_session_up.is_set || is_set(tunnel_count_sbfd_session_up.operation)) leaf_name_data.push_back(tunnel_count_sbfd_session_up.get_name_leafdata());
    if (tunnel_count_session_up.is_set || is_set(tunnel_count_session_up.operation)) leaf_name_data.push_back(tunnel_count_session_up.get_name_leafdata());
    if (tunnel_count_total.is_set || is_set(tunnel_count_total.operation)) leaf_name_data.push_back(tunnel_count_total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Bfd::Summary::get_children()
{
    return children;
}

void MplsTeStandby::Bfd::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "head-lsp-count-sbfd-session-created")
    {
        head_lsp_count_sbfd_session_created = value;
    }
    if(value_path == "head-lsp-count-sbfd-up")
    {
        head_lsp_count_sbfd_up = value;
    }
    if(value_path == "head-lsp-count-session-created")
    {
        head_lsp_count_session_created = value;
    }
    if(value_path == "head-lsp-count-up")
    {
        head_lsp_count_up = value;
    }
    if(value_path == "link-count-bfd-enabled")
    {
        link_count_bfd_enabled = value;
    }
    if(value_path == "link-count-session-created")
    {
        link_count_session_created = value;
    }
    if(value_path == "link-count-session-up")
    {
        link_count_session_up = value;
    }
    if(value_path == "tail-lsp-count-session-created")
    {
        tail_lsp_count_session_created = value;
    }
    if(value_path == "tail-lsp-count-session-up")
    {
        tail_lsp_count_session_up = value;
    }
    if(value_path == "tunnel-count-bfd-enabled")
    {
        tunnel_count_bfd_enabled = value;
    }
    if(value_path == "tunnel-count-sbfd-enabled")
    {
        tunnel_count_sbfd_enabled = value;
    }
    if(value_path == "tunnel-count-sbfd-session-up")
    {
        tunnel_count_sbfd_session_up = value;
    }
    if(value_path == "tunnel-count-session-up")
    {
        tunnel_count_session_up = value;
    }
    if(value_path == "tunnel-count-total")
    {
        tunnel_count_total = value;
    }
}

MplsTeStandby::Bfd::Counters::Counters()
    :
    last_cleared_timestamp{YType::uint32, "last-cleared-timestamp"}
    	,
    bf_do_lm_counters(std::make_shared<MplsTeStandby::Bfd::Counters::BfDoLmCounters>())
	,bfd_over_lsp_head_counters(std::make_shared<MplsTeStandby::Bfd::Counters::BfdOverLspHeadCounters>())
	,bfd_over_lsp_tail_counters(std::make_shared<MplsTeStandby::Bfd::Counters::BfdOverLspTailCounters>())
	,sbfd_over_lsp_head_counters(std::make_shared<MplsTeStandby::Bfd::Counters::SbfdOverLspHeadCounters>())
{
    bf_do_lm_counters->parent = this;
    children["bf-do-lm-counters"] = bf_do_lm_counters;

    bfd_over_lsp_head_counters->parent = this;
    children["bfd-over-lsp-head-counters"] = bfd_over_lsp_head_counters;

    bfd_over_lsp_tail_counters->parent = this;
    children["bfd-over-lsp-tail-counters"] = bfd_over_lsp_tail_counters;

    sbfd_over_lsp_head_counters->parent = this;
    children["sbfd-over-lsp-head-counters"] = sbfd_over_lsp_head_counters;

    yang_name = "counters"; yang_parent_name = "bfd";
}

MplsTeStandby::Bfd::Counters::~Counters()
{
}

bool MplsTeStandby::Bfd::Counters::has_data() const
{
    return last_cleared_timestamp.is_set
	|| (bf_do_lm_counters !=  nullptr && bf_do_lm_counters->has_data())
	|| (bfd_over_lsp_head_counters !=  nullptr && bfd_over_lsp_head_counters->has_data())
	|| (bfd_over_lsp_tail_counters !=  nullptr && bfd_over_lsp_tail_counters->has_data())
	|| (sbfd_over_lsp_head_counters !=  nullptr && sbfd_over_lsp_head_counters->has_data());
}

bool MplsTeStandby::Bfd::Counters::has_operation() const
{
    return is_set(operation)
	|| is_set(last_cleared_timestamp.operation)
	|| (bf_do_lm_counters !=  nullptr && bf_do_lm_counters->has_operation())
	|| (bfd_over_lsp_head_counters !=  nullptr && bfd_over_lsp_head_counters->has_operation())
	|| (bfd_over_lsp_tail_counters !=  nullptr && bfd_over_lsp_tail_counters->has_operation())
	|| (sbfd_over_lsp_head_counters !=  nullptr && sbfd_over_lsp_head_counters->has_operation());
}

std::string MplsTeStandby::Bfd::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Bfd::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.operation)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bf-do-lm-counters")
    {
        if(bf_do_lm_counters != nullptr)
        {
            children["bf-do-lm-counters"] = bf_do_lm_counters;
        }
        else
        {
            bf_do_lm_counters = std::make_shared<MplsTeStandby::Bfd::Counters::BfDoLmCounters>();
            bf_do_lm_counters->parent = this;
            children["bf-do-lm-counters"] = bf_do_lm_counters;
        }
        return children.at("bf-do-lm-counters");
    }

    if(child_yang_name == "bfd-over-lsp-head-counters")
    {
        if(bfd_over_lsp_head_counters != nullptr)
        {
            children["bfd-over-lsp-head-counters"] = bfd_over_lsp_head_counters;
        }
        else
        {
            bfd_over_lsp_head_counters = std::make_shared<MplsTeStandby::Bfd::Counters::BfdOverLspHeadCounters>();
            bfd_over_lsp_head_counters->parent = this;
            children["bfd-over-lsp-head-counters"] = bfd_over_lsp_head_counters;
        }
        return children.at("bfd-over-lsp-head-counters");
    }

    if(child_yang_name == "bfd-over-lsp-tail-counters")
    {
        if(bfd_over_lsp_tail_counters != nullptr)
        {
            children["bfd-over-lsp-tail-counters"] = bfd_over_lsp_tail_counters;
        }
        else
        {
            bfd_over_lsp_tail_counters = std::make_shared<MplsTeStandby::Bfd::Counters::BfdOverLspTailCounters>();
            bfd_over_lsp_tail_counters->parent = this;
            children["bfd-over-lsp-tail-counters"] = bfd_over_lsp_tail_counters;
        }
        return children.at("bfd-over-lsp-tail-counters");
    }

    if(child_yang_name == "sbfd-over-lsp-head-counters")
    {
        if(sbfd_over_lsp_head_counters != nullptr)
        {
            children["sbfd-over-lsp-head-counters"] = sbfd_over_lsp_head_counters;
        }
        else
        {
            sbfd_over_lsp_head_counters = std::make_shared<MplsTeStandby::Bfd::Counters::SbfdOverLspHeadCounters>();
            sbfd_over_lsp_head_counters->parent = this;
            children["sbfd-over-lsp-head-counters"] = sbfd_over_lsp_head_counters;
        }
        return children.at("sbfd-over-lsp-head-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Bfd::Counters::get_children()
{
    if(children.find("bf-do-lm-counters") == children.end())
    {
        if(bf_do_lm_counters != nullptr)
        {
            children["bf-do-lm-counters"] = bf_do_lm_counters;
        }
    }

    if(children.find("bfd-over-lsp-head-counters") == children.end())
    {
        if(bfd_over_lsp_head_counters != nullptr)
        {
            children["bfd-over-lsp-head-counters"] = bfd_over_lsp_head_counters;
        }
    }

    if(children.find("bfd-over-lsp-tail-counters") == children.end())
    {
        if(bfd_over_lsp_tail_counters != nullptr)
        {
            children["bfd-over-lsp-tail-counters"] = bfd_over_lsp_tail_counters;
        }
    }

    if(children.find("sbfd-over-lsp-head-counters") == children.end())
    {
        if(sbfd_over_lsp_head_counters != nullptr)
        {
            children["sbfd-over-lsp-head-counters"] = sbfd_over_lsp_head_counters;
        }
    }

    return children;
}

void MplsTeStandby::Bfd::Counters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
    }
}

MplsTeStandby::Bfd::Counters::BfdOverLspHeadCounters::BfdOverLspHeadCounters()
    :
    session_admin_down_events{YType::uint32, "session-admin-down-events"},
    session_create_events{YType::uint32, "session-create-events"},
    session_create_timeout_events{YType::uint32, "session-create-timeout-events"},
    session_creation_failed_events{YType::uint32, "session-creation-failed-events"},
    session_down_events{YType::uint32, "session-down-events"},
    session_gracefully_delete_events{YType::uint32, "session-gracefully-delete-events"},
    session_non_gracefully_delete_events{YType::uint32, "session-non-gracefully-delete-events"},
    session_replay_events{YType::uint32, "session-replay-events"},
    session_up_events{YType::uint32, "session-up-events"}
{
    yang_name = "bfd-over-lsp-head-counters"; yang_parent_name = "counters";
}

MplsTeStandby::Bfd::Counters::BfdOverLspHeadCounters::~BfdOverLspHeadCounters()
{
}

bool MplsTeStandby::Bfd::Counters::BfdOverLspHeadCounters::has_data() const
{
    return session_admin_down_events.is_set
	|| session_create_events.is_set
	|| session_create_timeout_events.is_set
	|| session_creation_failed_events.is_set
	|| session_down_events.is_set
	|| session_gracefully_delete_events.is_set
	|| session_non_gracefully_delete_events.is_set
	|| session_replay_events.is_set
	|| session_up_events.is_set;
}

bool MplsTeStandby::Bfd::Counters::BfdOverLspHeadCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(session_admin_down_events.operation)
	|| is_set(session_create_events.operation)
	|| is_set(session_create_timeout_events.operation)
	|| is_set(session_creation_failed_events.operation)
	|| is_set(session_down_events.operation)
	|| is_set(session_gracefully_delete_events.operation)
	|| is_set(session_non_gracefully_delete_events.operation)
	|| is_set(session_replay_events.operation)
	|| is_set(session_up_events.operation);
}

std::string MplsTeStandby::Bfd::Counters::BfdOverLspHeadCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-over-lsp-head-counters";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Bfd::Counters::BfdOverLspHeadCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_admin_down_events.is_set || is_set(session_admin_down_events.operation)) leaf_name_data.push_back(session_admin_down_events.get_name_leafdata());
    if (session_create_events.is_set || is_set(session_create_events.operation)) leaf_name_data.push_back(session_create_events.get_name_leafdata());
    if (session_create_timeout_events.is_set || is_set(session_create_timeout_events.operation)) leaf_name_data.push_back(session_create_timeout_events.get_name_leafdata());
    if (session_creation_failed_events.is_set || is_set(session_creation_failed_events.operation)) leaf_name_data.push_back(session_creation_failed_events.get_name_leafdata());
    if (session_down_events.is_set || is_set(session_down_events.operation)) leaf_name_data.push_back(session_down_events.get_name_leafdata());
    if (session_gracefully_delete_events.is_set || is_set(session_gracefully_delete_events.operation)) leaf_name_data.push_back(session_gracefully_delete_events.get_name_leafdata());
    if (session_non_gracefully_delete_events.is_set || is_set(session_non_gracefully_delete_events.operation)) leaf_name_data.push_back(session_non_gracefully_delete_events.get_name_leafdata());
    if (session_replay_events.is_set || is_set(session_replay_events.operation)) leaf_name_data.push_back(session_replay_events.get_name_leafdata());
    if (session_up_events.is_set || is_set(session_up_events.operation)) leaf_name_data.push_back(session_up_events.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::Counters::BfdOverLspHeadCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Bfd::Counters::BfdOverLspHeadCounters::get_children()
{
    return children;
}

void MplsTeStandby::Bfd::Counters::BfdOverLspHeadCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events = value;
    }
    if(value_path == "session-create-events")
    {
        session_create_events = value;
    }
    if(value_path == "session-create-timeout-events")
    {
        session_create_timeout_events = value;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events = value;
    }
    if(value_path == "session-down-events")
    {
        session_down_events = value;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events = value;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events = value;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events = value;
    }
    if(value_path == "session-up-events")
    {
        session_up_events = value;
    }
}

MplsTeStandby::Bfd::Counters::SbfdOverLspHeadCounters::SbfdOverLspHeadCounters()
    :
    session_admin_down_events{YType::uint32, "session-admin-down-events"},
    session_create_events{YType::uint32, "session-create-events"},
    session_create_timeout_events{YType::uint32, "session-create-timeout-events"},
    session_creation_failed_events{YType::uint32, "session-creation-failed-events"},
    session_down_events{YType::uint32, "session-down-events"},
    session_gracefully_delete_events{YType::uint32, "session-gracefully-delete-events"},
    session_non_gracefully_delete_events{YType::uint32, "session-non-gracefully-delete-events"},
    session_replay_events{YType::uint32, "session-replay-events"},
    session_up_events{YType::uint32, "session-up-events"}
{
    yang_name = "sbfd-over-lsp-head-counters"; yang_parent_name = "counters";
}

MplsTeStandby::Bfd::Counters::SbfdOverLspHeadCounters::~SbfdOverLspHeadCounters()
{
}

bool MplsTeStandby::Bfd::Counters::SbfdOverLspHeadCounters::has_data() const
{
    return session_admin_down_events.is_set
	|| session_create_events.is_set
	|| session_create_timeout_events.is_set
	|| session_creation_failed_events.is_set
	|| session_down_events.is_set
	|| session_gracefully_delete_events.is_set
	|| session_non_gracefully_delete_events.is_set
	|| session_replay_events.is_set
	|| session_up_events.is_set;
}

bool MplsTeStandby::Bfd::Counters::SbfdOverLspHeadCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(session_admin_down_events.operation)
	|| is_set(session_create_events.operation)
	|| is_set(session_create_timeout_events.operation)
	|| is_set(session_creation_failed_events.operation)
	|| is_set(session_down_events.operation)
	|| is_set(session_gracefully_delete_events.operation)
	|| is_set(session_non_gracefully_delete_events.operation)
	|| is_set(session_replay_events.operation)
	|| is_set(session_up_events.operation);
}

std::string MplsTeStandby::Bfd::Counters::SbfdOverLspHeadCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sbfd-over-lsp-head-counters";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Bfd::Counters::SbfdOverLspHeadCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_admin_down_events.is_set || is_set(session_admin_down_events.operation)) leaf_name_data.push_back(session_admin_down_events.get_name_leafdata());
    if (session_create_events.is_set || is_set(session_create_events.operation)) leaf_name_data.push_back(session_create_events.get_name_leafdata());
    if (session_create_timeout_events.is_set || is_set(session_create_timeout_events.operation)) leaf_name_data.push_back(session_create_timeout_events.get_name_leafdata());
    if (session_creation_failed_events.is_set || is_set(session_creation_failed_events.operation)) leaf_name_data.push_back(session_creation_failed_events.get_name_leafdata());
    if (session_down_events.is_set || is_set(session_down_events.operation)) leaf_name_data.push_back(session_down_events.get_name_leafdata());
    if (session_gracefully_delete_events.is_set || is_set(session_gracefully_delete_events.operation)) leaf_name_data.push_back(session_gracefully_delete_events.get_name_leafdata());
    if (session_non_gracefully_delete_events.is_set || is_set(session_non_gracefully_delete_events.operation)) leaf_name_data.push_back(session_non_gracefully_delete_events.get_name_leafdata());
    if (session_replay_events.is_set || is_set(session_replay_events.operation)) leaf_name_data.push_back(session_replay_events.get_name_leafdata());
    if (session_up_events.is_set || is_set(session_up_events.operation)) leaf_name_data.push_back(session_up_events.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::Counters::SbfdOverLspHeadCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Bfd::Counters::SbfdOverLspHeadCounters::get_children()
{
    return children;
}

void MplsTeStandby::Bfd::Counters::SbfdOverLspHeadCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events = value;
    }
    if(value_path == "session-create-events")
    {
        session_create_events = value;
    }
    if(value_path == "session-create-timeout-events")
    {
        session_create_timeout_events = value;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events = value;
    }
    if(value_path == "session-down-events")
    {
        session_down_events = value;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events = value;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events = value;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events = value;
    }
    if(value_path == "session-up-events")
    {
        session_up_events = value;
    }
}

MplsTeStandby::Bfd::Counters::BfdOverLspTailCounters::BfdOverLspTailCounters()
    :
    session_admin_down_events{YType::uint32, "session-admin-down-events"},
    session_create_events{YType::uint32, "session-create-events"},
    session_creation_failed_events{YType::uint32, "session-creation-failed-events"},
    session_down_events{YType::uint32, "session-down-events"},
    session_gracefully_delete_events{YType::uint32, "session-gracefully-delete-events"},
    session_non_gracefully_delete_events{YType::uint32, "session-non-gracefully-delete-events"},
    session_replay_events{YType::uint32, "session-replay-events"},
    session_up_events{YType::uint32, "session-up-events"}
{
    yang_name = "bfd-over-lsp-tail-counters"; yang_parent_name = "counters";
}

MplsTeStandby::Bfd::Counters::BfdOverLspTailCounters::~BfdOverLspTailCounters()
{
}

bool MplsTeStandby::Bfd::Counters::BfdOverLspTailCounters::has_data() const
{
    return session_admin_down_events.is_set
	|| session_create_events.is_set
	|| session_creation_failed_events.is_set
	|| session_down_events.is_set
	|| session_gracefully_delete_events.is_set
	|| session_non_gracefully_delete_events.is_set
	|| session_replay_events.is_set
	|| session_up_events.is_set;
}

bool MplsTeStandby::Bfd::Counters::BfdOverLspTailCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(session_admin_down_events.operation)
	|| is_set(session_create_events.operation)
	|| is_set(session_creation_failed_events.operation)
	|| is_set(session_down_events.operation)
	|| is_set(session_gracefully_delete_events.operation)
	|| is_set(session_non_gracefully_delete_events.operation)
	|| is_set(session_replay_events.operation)
	|| is_set(session_up_events.operation);
}

std::string MplsTeStandby::Bfd::Counters::BfdOverLspTailCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-over-lsp-tail-counters";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Bfd::Counters::BfdOverLspTailCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_admin_down_events.is_set || is_set(session_admin_down_events.operation)) leaf_name_data.push_back(session_admin_down_events.get_name_leafdata());
    if (session_create_events.is_set || is_set(session_create_events.operation)) leaf_name_data.push_back(session_create_events.get_name_leafdata());
    if (session_creation_failed_events.is_set || is_set(session_creation_failed_events.operation)) leaf_name_data.push_back(session_creation_failed_events.get_name_leafdata());
    if (session_down_events.is_set || is_set(session_down_events.operation)) leaf_name_data.push_back(session_down_events.get_name_leafdata());
    if (session_gracefully_delete_events.is_set || is_set(session_gracefully_delete_events.operation)) leaf_name_data.push_back(session_gracefully_delete_events.get_name_leafdata());
    if (session_non_gracefully_delete_events.is_set || is_set(session_non_gracefully_delete_events.operation)) leaf_name_data.push_back(session_non_gracefully_delete_events.get_name_leafdata());
    if (session_replay_events.is_set || is_set(session_replay_events.operation)) leaf_name_data.push_back(session_replay_events.get_name_leafdata());
    if (session_up_events.is_set || is_set(session_up_events.operation)) leaf_name_data.push_back(session_up_events.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::Counters::BfdOverLspTailCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Bfd::Counters::BfdOverLspTailCounters::get_children()
{
    return children;
}

void MplsTeStandby::Bfd::Counters::BfdOverLspTailCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events = value;
    }
    if(value_path == "session-create-events")
    {
        session_create_events = value;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events = value;
    }
    if(value_path == "session-down-events")
    {
        session_down_events = value;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events = value;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events = value;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events = value;
    }
    if(value_path == "session-up-events")
    {
        session_up_events = value;
    }
}

MplsTeStandby::Bfd::Counters::BfDoLmCounters::BfDoLmCounters()
    :
    session_admin_down_events{YType::uint32, "session-admin-down-events"},
    session_create_events{YType::uint32, "session-create-events"},
    session_creation_failed_events{YType::uint32, "session-creation-failed-events"},
    session_down_events{YType::uint32, "session-down-events"},
    session_gracefully_delete_events{YType::uint32, "session-gracefully-delete-events"},
    session_non_gracefully_delete_events{YType::uint32, "session-non-gracefully-delete-events"},
    session_replay_events{YType::uint32, "session-replay-events"},
    session_up_events{YType::uint32, "session-up-events"}
{
    yang_name = "bf-do-lm-counters"; yang_parent_name = "counters";
}

MplsTeStandby::Bfd::Counters::BfDoLmCounters::~BfDoLmCounters()
{
}

bool MplsTeStandby::Bfd::Counters::BfDoLmCounters::has_data() const
{
    return session_admin_down_events.is_set
	|| session_create_events.is_set
	|| session_creation_failed_events.is_set
	|| session_down_events.is_set
	|| session_gracefully_delete_events.is_set
	|| session_non_gracefully_delete_events.is_set
	|| session_replay_events.is_set
	|| session_up_events.is_set;
}

bool MplsTeStandby::Bfd::Counters::BfDoLmCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(session_admin_down_events.operation)
	|| is_set(session_create_events.operation)
	|| is_set(session_creation_failed_events.operation)
	|| is_set(session_down_events.operation)
	|| is_set(session_gracefully_delete_events.operation)
	|| is_set(session_non_gracefully_delete_events.operation)
	|| is_set(session_replay_events.operation)
	|| is_set(session_up_events.operation);
}

std::string MplsTeStandby::Bfd::Counters::BfDoLmCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bf-do-lm-counters";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Bfd::Counters::BfDoLmCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_admin_down_events.is_set || is_set(session_admin_down_events.operation)) leaf_name_data.push_back(session_admin_down_events.get_name_leafdata());
    if (session_create_events.is_set || is_set(session_create_events.operation)) leaf_name_data.push_back(session_create_events.get_name_leafdata());
    if (session_creation_failed_events.is_set || is_set(session_creation_failed_events.operation)) leaf_name_data.push_back(session_creation_failed_events.get_name_leafdata());
    if (session_down_events.is_set || is_set(session_down_events.operation)) leaf_name_data.push_back(session_down_events.get_name_leafdata());
    if (session_gracefully_delete_events.is_set || is_set(session_gracefully_delete_events.operation)) leaf_name_data.push_back(session_gracefully_delete_events.get_name_leafdata());
    if (session_non_gracefully_delete_events.is_set || is_set(session_non_gracefully_delete_events.operation)) leaf_name_data.push_back(session_non_gracefully_delete_events.get_name_leafdata());
    if (session_replay_events.is_set || is_set(session_replay_events.operation)) leaf_name_data.push_back(session_replay_events.get_name_leafdata());
    if (session_up_events.is_set || is_set(session_up_events.operation)) leaf_name_data.push_back(session_up_events.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::Counters::BfDoLmCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Bfd::Counters::BfDoLmCounters::get_children()
{
    return children;
}

void MplsTeStandby::Bfd::Counters::BfDoLmCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events = value;
    }
    if(value_path == "session-create-events")
    {
        session_create_events = value;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events = value;
    }
    if(value_path == "session-down-events")
    {
        session_down_events = value;
    }
    if(value_path == "session-gracefully-delete-events")
    {
        session_gracefully_delete_events = value;
    }
    if(value_path == "session-non-gracefully-delete-events")
    {
        session_non_gracefully_delete_events = value;
    }
    if(value_path == "session-replay-events")
    {
        session_replay_events = value;
    }
    if(value_path == "session-up-events")
    {
        session_up_events = value;
    }
}

MplsTeStandby::Nsr::Nsr()
    :
    detail(std::make_shared<MplsTeStandby::Nsr::Detail>())
	,status(std::make_shared<MplsTeStandby::Nsr::Status>())
{
    detail->parent = this;
    children["detail"] = detail;

    status->parent = this;
    children["status"] = status;

    yang_name = "nsr"; yang_parent_name = "mpls-te-standby";
}

MplsTeStandby::Nsr::~Nsr()
{
}

bool MplsTeStandby::Nsr::has_data() const
{
    return (detail !=  nullptr && detail->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool MplsTeStandby::Nsr::has_operation() const
{
    return is_set(operation)
	|| (detail !=  nullptr && detail->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string MplsTeStandby::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail")
    {
        if(detail != nullptr)
        {
            children["detail"] = detail;
        }
        else
        {
            detail = std::make_shared<MplsTeStandby::Nsr::Detail>();
            detail->parent = this;
            children["detail"] = detail;
        }
        return children.at("detail");
    }

    if(child_yang_name == "status")
    {
        if(status != nullptr)
        {
            children["status"] = status;
        }
        else
        {
            status = std::make_shared<MplsTeStandby::Nsr::Status>();
            status->parent = this;
            children["status"] = status;
        }
        return children.at("status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::get_children()
{
    if(children.find("detail") == children.end())
    {
        if(detail != nullptr)
        {
            children["detail"] = detail;
        }
    }

    if(children.find("status") == children.end())
    {
        if(status != nullptr)
        {
            children["status"] = status;
        }
    }

    return children;
}

void MplsTeStandby::Nsr::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::Nsr::Status::Status()
    :
    role{YType::enumeration, "role"}
    	,
    sync_status_information(std::make_shared<MplsTeStandby::Nsr::Status::SyncStatusInformation>())
{
    sync_status_information->parent = this;
    children["sync-status-information"] = sync_status_information;

    yang_name = "status"; yang_parent_name = "nsr";
}

MplsTeStandby::Nsr::Status::~Status()
{
}

bool MplsTeStandby::Nsr::Status::has_data() const
{
    return role.is_set
	|| (sync_status_information !=  nullptr && sync_status_information->has_data());
}

bool MplsTeStandby::Nsr::Status::has_operation() const
{
    return is_set(operation)
	|| is_set(role.operation)
	|| (sync_status_information !=  nullptr && sync_status_information->has_operation());
}

std::string MplsTeStandby::Nsr::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::Status::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/nsr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sync-status-information")
    {
        if(sync_status_information != nullptr)
        {
            children["sync-status-information"] = sync_status_information;
        }
        else
        {
            sync_status_information = std::make_shared<MplsTeStandby::Nsr::Status::SyncStatusInformation>();
            sync_status_information->parent = this;
            children["sync-status-information"] = sync_status_information;
        }
        return children.at("sync-status-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::Status::get_children()
{
    if(children.find("sync-status-information") == children.end())
    {
        if(sync_status_information != nullptr)
        {
            children["sync-status-information"] = sync_status_information;
        }
    }

    return children;
}

void MplsTeStandby::Nsr::Status::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "role")
    {
        role = value;
    }
}

MplsTeStandby::Nsr::Status::SyncStatusInformation::SyncStatusInformation()
    :
    sync_show_type{YType::enumeration, "sync-show-type"}
    	,
    master_sync_information(std::make_shared<MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation>())
	,slave_sync_information(std::make_shared<MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation>())
{
    master_sync_information->parent = this;
    children["master-sync-information"] = master_sync_information;

    slave_sync_information->parent = this;
    children["slave-sync-information"] = slave_sync_information;

    yang_name = "sync-status-information"; yang_parent_name = "status";
}

MplsTeStandby::Nsr::Status::SyncStatusInformation::~SyncStatusInformation()
{
}

bool MplsTeStandby::Nsr::Status::SyncStatusInformation::has_data() const
{
    return sync_show_type.is_set
	|| (master_sync_information !=  nullptr && master_sync_information->has_data())
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_data());
}

bool MplsTeStandby::Nsr::Status::SyncStatusInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(sync_show_type.operation)
	|| (master_sync_information !=  nullptr && master_sync_information->has_operation())
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_operation());
}

std::string MplsTeStandby::Nsr::Status::SyncStatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-status-information";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::Status::SyncStatusInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/nsr/status/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_show_type.is_set || is_set(sync_show_type.operation)) leaf_name_data.push_back(sync_show_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::Status::SyncStatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "master-sync-information")
    {
        if(master_sync_information != nullptr)
        {
            children["master-sync-information"] = master_sync_information;
        }
        else
        {
            master_sync_information = std::make_shared<MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation>();
            master_sync_information->parent = this;
            children["master-sync-information"] = master_sync_information;
        }
        return children.at("master-sync-information");
    }

    if(child_yang_name == "slave-sync-information")
    {
        if(slave_sync_information != nullptr)
        {
            children["slave-sync-information"] = slave_sync_information;
        }
        else
        {
            slave_sync_information = std::make_shared<MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation>();
            slave_sync_information->parent = this;
            children["slave-sync-information"] = slave_sync_information;
        }
        return children.at("slave-sync-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::Status::SyncStatusInformation::get_children()
{
    if(children.find("master-sync-information") == children.end())
    {
        if(master_sync_information != nullptr)
        {
            children["master-sync-information"] = master_sync_information;
        }
    }

    if(children.find("slave-sync-information") == children.end())
    {
        if(slave_sync_information != nullptr)
        {
            children["slave-sync-information"] = slave_sync_information;
        }
    }

    return children;
}

void MplsTeStandby::Nsr::Status::SyncStatusInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type = value;
    }
}

MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::SlaveSyncInformation()
    :
    insync_sub_ls_ps{YType::uint32, "insync-sub-ls-ps"},
    insync_tunnels{YType::uint32, "insync-tunnels"},
    pending_sub_ls_ps{YType::uint32, "pending-sub-ls-ps"},
    pending_tunnels{YType::uint32, "pending-tunnels"}
    	,
    idt(std::make_shared<MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt>())
{
    idt->parent = this;
    children["idt"] = idt;

    yang_name = "slave-sync-information"; yang_parent_name = "sync-status-information";
}

MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::~SlaveSyncInformation()
{
}

bool MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::has_data() const
{
    for (std::size_t index=0; index<s2l_pending.size(); index++)
    {
        if(s2l_pending[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vif_pending.size(); index++)
    {
        if(vif_pending[index]->has_data())
            return true;
    }
    return insync_sub_ls_ps.is_set
	|| insync_tunnels.is_set
	|| pending_sub_ls_ps.is_set
	|| pending_tunnels.is_set
	|| (idt !=  nullptr && idt->has_data());
}

bool MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::has_operation() const
{
    for (std::size_t index=0; index<s2l_pending.size(); index++)
    {
        if(s2l_pending[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vif_pending.size(); index++)
    {
        if(vif_pending[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(insync_sub_ls_ps.operation)
	|| is_set(insync_tunnels.operation)
	|| is_set(pending_sub_ls_ps.operation)
	|| is_set(pending_tunnels.operation)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-sync-information";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/nsr/status/sync-status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insync_sub_ls_ps.is_set || is_set(insync_sub_ls_ps.operation)) leaf_name_data.push_back(insync_sub_ls_ps.get_name_leafdata());
    if (insync_tunnels.is_set || is_set(insync_tunnels.operation)) leaf_name_data.push_back(insync_tunnels.get_name_leafdata());
    if (pending_sub_ls_ps.is_set || is_set(pending_sub_ls_ps.operation)) leaf_name_data.push_back(pending_sub_ls_ps.get_name_leafdata());
    if (pending_tunnels.is_set || is_set(pending_tunnels.operation)) leaf_name_data.push_back(pending_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "idt")
    {
        if(idt != nullptr)
        {
            children["idt"] = idt;
        }
        else
        {
            idt = std::make_shared<MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt>();
            idt->parent = this;
            children["idt"] = idt;
        }
        return children.at("idt");
    }

    if(child_yang_name == "s2l-pending")
    {
        for(auto const & c : s2l_pending)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending>();
        c->parent = this;
        s2l_pending.push_back(std::move(c));
        children[segment_path] = s2l_pending.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vif-pending")
    {
        for(auto const & c : vif_pending)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending>();
        c->parent = this;
        vif_pending.push_back(std::move(c));
        children[segment_path] = vif_pending.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::get_children()
{
    if(children.find("idt") == children.end())
    {
        if(idt != nullptr)
        {
            children["idt"] = idt;
        }
    }

    for (auto const & c : s2l_pending)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vif_pending)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps = value;
    }
    if(value_path == "insync-tunnels")
    {
        insync_tunnels = value;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps = value;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels = value;
    }
}

MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    children["current-idt-info"] = current_idt_info;

    previous_idt_status->parent = this;
    children["previous-idt-status"] = previous_idt_status;

    yang_name = "idt"; yang_parent_name = "slave-sync-information";
}

MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::~Idt()
{
}

bool MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::has_operation() const
{
    return is_set(operation)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/nsr/status/sync-status-information/slave-sync-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info != nullptr)
        {
            children["current-idt-info"] = current_idt_info;
        }
        else
        {
            current_idt_info = std::make_shared<MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>();
            current_idt_info->parent = this;
            children["current-idt-info"] = current_idt_info;
        }
        return children.at("current-idt-info");
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status != nullptr)
        {
            children["previous-idt-status"] = previous_idt_status;
        }
        else
        {
            previous_idt_status = std::make_shared<MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>();
            previous_idt_status->parent = this;
            children["previous-idt-status"] = previous_idt_status;
        }
        return children.at("previous-idt-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_children()
{
    if(children.find("current-idt-info") == children.end())
    {
        if(current_idt_info != nullptr)
        {
            children["current-idt-info"] = current_idt_info;
        }
    }

    if(children.find("previous-idt-status") == children.end())
    {
        if(previous_idt_status != nullptr)
        {
            children["previous-idt-status"] = previous_idt_status;
        }
    }

    return children;
}

void MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "current-idt-info"; yang_parent_name = "idt";
}

MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(is_ready_status.operation)
	|| is_set(reason.operation)
	|| is_set(withdraw_time.operation);
}

std::string MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/nsr/status/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.operation)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_children()
{
    return children;
}

void MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "previous-idt-status"; yang_parent_name = "idt";
}

MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(is_ready_status.operation)
	|| is_set(reason.operation)
	|| is_set(withdraw_time.operation);
}

std::string MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/nsr/status/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.operation)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_children()
{
    return children;
}

void MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::VifPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    tunnel_name{YType::str, "tunnel-name"}
{
    yang_name = "vif-pending"; yang_parent_name = "slave-sync-information";
}

MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::~VifPending()
{
}

bool MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::has_data() const
{
    return pending_reason.is_set
	|| tunnel_name.is_set;
}

bool MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::has_operation() const
{
    return is_set(operation)
	|| is_set(pending_reason.operation)
	|| is_set(tunnel_name.operation);
}

std::string MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vif-pending";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/nsr/status/sync-status-information/slave-sync-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.operation)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_children()
{
    return children;
}

void MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::S2LPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    s2l_role{YType::enumeration, "s2l-role"},
    signaled_name{YType::str, "signaled-name"}
{
    yang_name = "s2l-pending"; yang_parent_name = "slave-sync-information";
}

MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::~S2LPending()
{
}

bool MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_data() const
{
    return pending_reason.is_set
	|| s2l_role.is_set
	|| signaled_name.is_set;
}

bool MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_operation() const
{
    return is_set(operation)
	|| is_set(pending_reason.operation)
	|| is_set(s2l_role.operation)
	|| is_set(signaled_name.operation);
}

std::string MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-pending";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/nsr/status/sync-status-information/slave-sync-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.operation)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (s2l_role.is_set || is_set(s2l_role.operation)) leaf_name_data.push_back(s2l_role.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.operation)) leaf_name_data.push_back(signaled_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_children()
{
    return children;
}

void MplsTeStandby::Nsr::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
    }
    if(value_path == "s2l-role")
    {
        s2l_role = value;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
    }
}

MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::MasterSyncInformation()
    :
    idt(std::make_shared<MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt>())
{
    idt->parent = this;
    children["idt"] = idt;

    yang_name = "master-sync-information"; yang_parent_name = "sync-status-information";
}

MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::~MasterSyncInformation()
{
}

bool MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::has_data() const
{
    return (idt !=  nullptr && idt->has_data());
}

bool MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::has_operation() const
{
    return is_set(operation)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master-sync-information";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/nsr/status/sync-status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "idt")
    {
        if(idt != nullptr)
        {
            children["idt"] = idt;
        }
        else
        {
            idt = std::make_shared<MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt>();
            idt->parent = this;
            children["idt"] = idt;
        }
        return children.at("idt");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::get_children()
{
    if(children.find("idt") == children.end())
    {
        if(idt != nullptr)
        {
            children["idt"] = idt;
        }
    }

    return children;
}

void MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    children["current-idt-info"] = current_idt_info;

    previous_idt_status->parent = this;
    children["previous-idt-status"] = previous_idt_status;

    yang_name = "idt"; yang_parent_name = "master-sync-information";
}

MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::~Idt()
{
}

bool MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::has_operation() const
{
    return is_set(operation)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/nsr/status/sync-status-information/master-sync-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info != nullptr)
        {
            children["current-idt-info"] = current_idt_info;
        }
        else
        {
            current_idt_info = std::make_shared<MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>();
            current_idt_info->parent = this;
            children["current-idt-info"] = current_idt_info;
        }
        return children.at("current-idt-info");
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status != nullptr)
        {
            children["previous-idt-status"] = previous_idt_status;
        }
        else
        {
            previous_idt_status = std::make_shared<MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>();
            previous_idt_status->parent = this;
            children["previous-idt-status"] = previous_idt_status;
        }
        return children.at("previous-idt-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_children()
{
    if(children.find("current-idt-info") == children.end())
    {
        if(current_idt_info != nullptr)
        {
            children["current-idt-info"] = current_idt_info;
        }
    }

    if(children.find("previous-idt-status") == children.end())
    {
        if(previous_idt_status != nullptr)
        {
            children["previous-idt-status"] = previous_idt_status;
        }
    }

    return children;
}

void MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "current-idt-info"; yang_parent_name = "idt";
}

MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(is_ready_status.operation)
	|| is_set(reason.operation)
	|| is_set(withdraw_time.operation);
}

std::string MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/nsr/status/sync-status-information/master-sync-information/idt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.operation)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_children()
{
    return children;
}

void MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "previous-idt-status"; yang_parent_name = "idt";
}

MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(is_ready_status.operation)
	|| is_set(reason.operation)
	|| is_set(withdraw_time.operation);
}

std::string MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/nsr/status/sync-status-information/master-sync-information/idt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.operation)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_children()
{
    return children;
}

void MplsTeStandby::Nsr::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

MplsTeStandby::Nsr::Detail::Detail()
    :
    role{YType::enumeration, "role"}
    	,
    sync_status_information(std::make_shared<MplsTeStandby::Nsr::Detail::SyncStatusInformation>())
{
    sync_status_information->parent = this;
    children["sync-status-information"] = sync_status_information;

    yang_name = "detail"; yang_parent_name = "nsr";
}

MplsTeStandby::Nsr::Detail::~Detail()
{
}

bool MplsTeStandby::Nsr::Detail::has_data() const
{
    return role.is_set
	|| (sync_status_information !=  nullptr && sync_status_information->has_data());
}

bool MplsTeStandby::Nsr::Detail::has_operation() const
{
    return is_set(operation)
	|| is_set(role.operation)
	|| (sync_status_information !=  nullptr && sync_status_information->has_operation());
}

std::string MplsTeStandby::Nsr::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::Detail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/nsr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sync-status-information")
    {
        if(sync_status_information != nullptr)
        {
            children["sync-status-information"] = sync_status_information;
        }
        else
        {
            sync_status_information = std::make_shared<MplsTeStandby::Nsr::Detail::SyncStatusInformation>();
            sync_status_information->parent = this;
            children["sync-status-information"] = sync_status_information;
        }
        return children.at("sync-status-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::Detail::get_children()
{
    if(children.find("sync-status-information") == children.end())
    {
        if(sync_status_information != nullptr)
        {
            children["sync-status-information"] = sync_status_information;
        }
    }

    return children;
}

void MplsTeStandby::Nsr::Detail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "role")
    {
        role = value;
    }
}

MplsTeStandby::Nsr::Detail::SyncStatusInformation::SyncStatusInformation()
    :
    sync_show_type{YType::enumeration, "sync-show-type"}
    	,
    master_sync_information(std::make_shared<MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation>())
	,slave_sync_information(std::make_shared<MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation>())
{
    master_sync_information->parent = this;
    children["master-sync-information"] = master_sync_information;

    slave_sync_information->parent = this;
    children["slave-sync-information"] = slave_sync_information;

    yang_name = "sync-status-information"; yang_parent_name = "detail";
}

MplsTeStandby::Nsr::Detail::SyncStatusInformation::~SyncStatusInformation()
{
}

bool MplsTeStandby::Nsr::Detail::SyncStatusInformation::has_data() const
{
    return sync_show_type.is_set
	|| (master_sync_information !=  nullptr && master_sync_information->has_data())
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_data());
}

bool MplsTeStandby::Nsr::Detail::SyncStatusInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(sync_show_type.operation)
	|| (master_sync_information !=  nullptr && master_sync_information->has_operation())
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_operation());
}

std::string MplsTeStandby::Nsr::Detail::SyncStatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-status-information";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::Detail::SyncStatusInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/nsr/detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_show_type.is_set || is_set(sync_show_type.operation)) leaf_name_data.push_back(sync_show_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::Detail::SyncStatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "master-sync-information")
    {
        if(master_sync_information != nullptr)
        {
            children["master-sync-information"] = master_sync_information;
        }
        else
        {
            master_sync_information = std::make_shared<MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation>();
            master_sync_information->parent = this;
            children["master-sync-information"] = master_sync_information;
        }
        return children.at("master-sync-information");
    }

    if(child_yang_name == "slave-sync-information")
    {
        if(slave_sync_information != nullptr)
        {
            children["slave-sync-information"] = slave_sync_information;
        }
        else
        {
            slave_sync_information = std::make_shared<MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation>();
            slave_sync_information->parent = this;
            children["slave-sync-information"] = slave_sync_information;
        }
        return children.at("slave-sync-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::Detail::SyncStatusInformation::get_children()
{
    if(children.find("master-sync-information") == children.end())
    {
        if(master_sync_information != nullptr)
        {
            children["master-sync-information"] = master_sync_information;
        }
    }

    if(children.find("slave-sync-information") == children.end())
    {
        if(slave_sync_information != nullptr)
        {
            children["slave-sync-information"] = slave_sync_information;
        }
    }

    return children;
}

void MplsTeStandby::Nsr::Detail::SyncStatusInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type = value;
    }
}

MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::SlaveSyncInformation()
    :
    insync_sub_ls_ps{YType::uint32, "insync-sub-ls-ps"},
    insync_tunnels{YType::uint32, "insync-tunnels"},
    pending_sub_ls_ps{YType::uint32, "pending-sub-ls-ps"},
    pending_tunnels{YType::uint32, "pending-tunnels"}
    	,
    idt(std::make_shared<MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt>())
{
    idt->parent = this;
    children["idt"] = idt;

    yang_name = "slave-sync-information"; yang_parent_name = "sync-status-information";
}

MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::~SlaveSyncInformation()
{
}

bool MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::has_data() const
{
    for (std::size_t index=0; index<s2l_pending.size(); index++)
    {
        if(s2l_pending[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vif_pending.size(); index++)
    {
        if(vif_pending[index]->has_data())
            return true;
    }
    return insync_sub_ls_ps.is_set
	|| insync_tunnels.is_set
	|| pending_sub_ls_ps.is_set
	|| pending_tunnels.is_set
	|| (idt !=  nullptr && idt->has_data());
}

bool MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::has_operation() const
{
    for (std::size_t index=0; index<s2l_pending.size(); index++)
    {
        if(s2l_pending[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vif_pending.size(); index++)
    {
        if(vif_pending[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(insync_sub_ls_ps.operation)
	|| is_set(insync_tunnels.operation)
	|| is_set(pending_sub_ls_ps.operation)
	|| is_set(pending_tunnels.operation)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-sync-information";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/nsr/detail/sync-status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insync_sub_ls_ps.is_set || is_set(insync_sub_ls_ps.operation)) leaf_name_data.push_back(insync_sub_ls_ps.get_name_leafdata());
    if (insync_tunnels.is_set || is_set(insync_tunnels.operation)) leaf_name_data.push_back(insync_tunnels.get_name_leafdata());
    if (pending_sub_ls_ps.is_set || is_set(pending_sub_ls_ps.operation)) leaf_name_data.push_back(pending_sub_ls_ps.get_name_leafdata());
    if (pending_tunnels.is_set || is_set(pending_tunnels.operation)) leaf_name_data.push_back(pending_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "idt")
    {
        if(idt != nullptr)
        {
            children["idt"] = idt;
        }
        else
        {
            idt = std::make_shared<MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt>();
            idt->parent = this;
            children["idt"] = idt;
        }
        return children.at("idt");
    }

    if(child_yang_name == "s2l-pending")
    {
        for(auto const & c : s2l_pending)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending>();
        c->parent = this;
        s2l_pending.push_back(std::move(c));
        children[segment_path] = s2l_pending.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vif-pending")
    {
        for(auto const & c : vif_pending)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending>();
        c->parent = this;
        vif_pending.push_back(std::move(c));
        children[segment_path] = vif_pending.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::get_children()
{
    if(children.find("idt") == children.end())
    {
        if(idt != nullptr)
        {
            children["idt"] = idt;
        }
    }

    for (auto const & c : s2l_pending)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : vif_pending)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps = value;
    }
    if(value_path == "insync-tunnels")
    {
        insync_tunnels = value;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps = value;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels = value;
    }
}

MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    children["current-idt-info"] = current_idt_info;

    previous_idt_status->parent = this;
    children["previous-idt-status"] = previous_idt_status;

    yang_name = "idt"; yang_parent_name = "slave-sync-information";
}

MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::~Idt()
{
}

bool MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_operation() const
{
    return is_set(operation)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/nsr/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info != nullptr)
        {
            children["current-idt-info"] = current_idt_info;
        }
        else
        {
            current_idt_info = std::make_shared<MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>();
            current_idt_info->parent = this;
            children["current-idt-info"] = current_idt_info;
        }
        return children.at("current-idt-info");
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status != nullptr)
        {
            children["previous-idt-status"] = previous_idt_status;
        }
        else
        {
            previous_idt_status = std::make_shared<MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>();
            previous_idt_status->parent = this;
            children["previous-idt-status"] = previous_idt_status;
        }
        return children.at("previous-idt-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_children()
{
    if(children.find("current-idt-info") == children.end())
    {
        if(current_idt_info != nullptr)
        {
            children["current-idt-info"] = current_idt_info;
        }
    }

    if(children.find("previous-idt-status") == children.end())
    {
        if(previous_idt_status != nullptr)
        {
            children["previous-idt-status"] = previous_idt_status;
        }
    }

    return children;
}

void MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "current-idt-info"; yang_parent_name = "idt";
}

MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(is_ready_status.operation)
	|| is_set(reason.operation)
	|| is_set(withdraw_time.operation);
}

std::string MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/nsr/detail/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.operation)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_children()
{
    return children;
}

void MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "previous-idt-status"; yang_parent_name = "idt";
}

MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(is_ready_status.operation)
	|| is_set(reason.operation)
	|| is_set(withdraw_time.operation);
}

std::string MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/nsr/detail/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.operation)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_children()
{
    return children;
}

void MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::VifPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    tunnel_name{YType::str, "tunnel-name"}
{
    yang_name = "vif-pending"; yang_parent_name = "slave-sync-information";
}

MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::~VifPending()
{
}

bool MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_data() const
{
    return pending_reason.is_set
	|| tunnel_name.is_set;
}

bool MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_operation() const
{
    return is_set(operation)
	|| is_set(pending_reason.operation)
	|| is_set(tunnel_name.operation);
}

std::string MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vif-pending";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/nsr/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.operation)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_children()
{
    return children;
}

void MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::S2LPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    s2l_role{YType::enumeration, "s2l-role"},
    signaled_name{YType::str, "signaled-name"}
{
    yang_name = "s2l-pending"; yang_parent_name = "slave-sync-information";
}

MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::~S2LPending()
{
}

bool MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_data() const
{
    return pending_reason.is_set
	|| s2l_role.is_set
	|| signaled_name.is_set;
}

bool MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_operation() const
{
    return is_set(operation)
	|| is_set(pending_reason.operation)
	|| is_set(s2l_role.operation)
	|| is_set(signaled_name.operation);
}

std::string MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-pending";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/nsr/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.operation)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (s2l_role.is_set || is_set(s2l_role.operation)) leaf_name_data.push_back(s2l_role.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.operation)) leaf_name_data.push_back(signaled_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_children()
{
    return children;
}

void MplsTeStandby::Nsr::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
    }
    if(value_path == "s2l-role")
    {
        s2l_role = value;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
    }
}

MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::MasterSyncInformation()
    :
    idt(std::make_shared<MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt>())
{
    idt->parent = this;
    children["idt"] = idt;

    yang_name = "master-sync-information"; yang_parent_name = "sync-status-information";
}

MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::~MasterSyncInformation()
{
}

bool MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::has_data() const
{
    return (idt !=  nullptr && idt->has_data());
}

bool MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::has_operation() const
{
    return is_set(operation)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master-sync-information";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/nsr/detail/sync-status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "idt")
    {
        if(idt != nullptr)
        {
            children["idt"] = idt;
        }
        else
        {
            idt = std::make_shared<MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt>();
            idt->parent = this;
            children["idt"] = idt;
        }
        return children.at("idt");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::get_children()
{
    if(children.find("idt") == children.end())
    {
        if(idt != nullptr)
        {
            children["idt"] = idt;
        }
    }

    return children;
}

void MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    children["current-idt-info"] = current_idt_info;

    previous_idt_status->parent = this;
    children["previous-idt-status"] = previous_idt_status;

    yang_name = "idt"; yang_parent_name = "master-sync-information";
}

MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::~Idt()
{
}

bool MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_operation() const
{
    return is_set(operation)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/nsr/detail/sync-status-information/master-sync-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info != nullptr)
        {
            children["current-idt-info"] = current_idt_info;
        }
        else
        {
            current_idt_info = std::make_shared<MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>();
            current_idt_info->parent = this;
            children["current-idt-info"] = current_idt_info;
        }
        return children.at("current-idt-info");
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status != nullptr)
        {
            children["previous-idt-status"] = previous_idt_status;
        }
        else
        {
            previous_idt_status = std::make_shared<MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>();
            previous_idt_status->parent = this;
            children["previous-idt-status"] = previous_idt_status;
        }
        return children.at("previous-idt-status");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_children()
{
    if(children.find("current-idt-info") == children.end())
    {
        if(current_idt_info != nullptr)
        {
            children["current-idt-info"] = current_idt_info;
        }
    }

    if(children.find("previous-idt-status") == children.end())
    {
        if(previous_idt_status != nullptr)
        {
            children["previous-idt-status"] = previous_idt_status;
        }
    }

    return children;
}

void MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "current-idt-info"; yang_parent_name = "idt";
}

MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(is_ready_status.operation)
	|| is_set(reason.operation)
	|| is_set(withdraw_time.operation);
}

std::string MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/nsr/detail/sync-status-information/master-sync-information/idt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.operation)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_children()
{
    return children;
}

void MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "previous-idt-status"; yang_parent_name = "idt";
}

MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(is_ready_status.operation)
	|| is_set(reason.operation)
	|| is_set(withdraw_time.operation);
}

std::string MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";

    return path_buffer.str();

}

EntityPath MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/nsr/detail/sync-status-information/master-sync-information/idt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.operation)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_children()
{
    return children;
}

void MplsTeStandby::Nsr::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

MplsTeStandby::AutoTunnelServices::AutoTunnelServices()
    :
    sr_policy_entries(std::make_shared<MplsTeStandby::AutoTunnelServices::SrPolicyEntries>())
{
    sr_policy_entries->parent = this;
    children["sr-policy-entries"] = sr_policy_entries;

    yang_name = "auto-tunnel-services"; yang_parent_name = "mpls-te-standby";
}

MplsTeStandby::AutoTunnelServices::~AutoTunnelServices()
{
}

bool MplsTeStandby::AutoTunnelServices::has_data() const
{
    return (sr_policy_entries !=  nullptr && sr_policy_entries->has_data());
}

bool MplsTeStandby::AutoTunnelServices::has_operation() const
{
    return is_set(operation)
	|| (sr_policy_entries !=  nullptr && sr_policy_entries->has_operation());
}

std::string MplsTeStandby::AutoTunnelServices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-tunnel-services";

    return path_buffer.str();

}

EntityPath MplsTeStandby::AutoTunnelServices::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnelServices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-policy-entries")
    {
        if(sr_policy_entries != nullptr)
        {
            children["sr-policy-entries"] = sr_policy_entries;
        }
        else
        {
            sr_policy_entries = std::make_shared<MplsTeStandby::AutoTunnelServices::SrPolicyEntries>();
            sr_policy_entries->parent = this;
            children["sr-policy-entries"] = sr_policy_entries;
        }
        return children.at("sr-policy-entries");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::AutoTunnelServices::get_children()
{
    if(children.find("sr-policy-entries") == children.end())
    {
        if(sr_policy_entries != nullptr)
        {
            children["sr-policy-entries"] = sr_policy_entries;
        }
    }

    return children;
}

void MplsTeStandby::AutoTunnelServices::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntries()
{
    yang_name = "sr-policy-entries"; yang_parent_name = "auto-tunnel-services";
}

MplsTeStandby::AutoTunnelServices::SrPolicyEntries::~SrPolicyEntries()
{
}

bool MplsTeStandby::AutoTunnelServices::SrPolicyEntries::has_data() const
{
    for (std::size_t index=0; index<sr_policy_entry.size(); index++)
    {
        if(sr_policy_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::AutoTunnelServices::SrPolicyEntries::has_operation() const
{
    for (std::size_t index=0; index<sr_policy_entry.size(); index++)
    {
        if(sr_policy_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::AutoTunnelServices::SrPolicyEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-entries";

    return path_buffer.str();

}

EntityPath MplsTeStandby::AutoTunnelServices::SrPolicyEntries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel-services/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnelServices::SrPolicyEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-policy-entry")
    {
        for(auto const & c : sr_policy_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry>();
        c->parent = this;
        sr_policy_entry.push_back(std::move(c));
        children[segment_path] = sr_policy_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::AutoTunnelServices::SrPolicyEntries::get_children()
{
    for (auto const & c : sr_policy_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::AutoTunnelServices::SrPolicyEntries::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::SrPolicyEntry()
    :
    client_id{YType::int32, "client-id"},
    color{YType::int32, "color"},
    distinguisher{YType::int32, "distinguisher"},
    end_point{YType::str, "end-point"},
    allocated_binding_sid{YType::uint32, "allocated-binding-sid"},
    binding_sid_context_id{YType::uint32, "binding-sid-context-id"},
    binding_sid_request_pending{YType::boolean, "binding-sid-request-pending"},
    client_id_xr{YType::uint32, "client-id-xr"},
    client_name{YType::str, "client-name"},
    color_xr{YType::uint32, "color-xr"},
    creation_time{YType::uint64, "creation-time"},
    distinguisher_xr{YType::uint32, "distinguisher-xr"},
    ipv6_caps{YType::boolean, "ipv6-caps"},
    is_stale{YType::boolean, "is-stale"},
    is_synced{YType::boolean, "is-synced"},
    notify_state_is_active{YType::boolean, "notify-state-is-active"},
    notify_time{YType::uint32, "notify-time"},
    policy_active{YType::boolean, "policy-active"},
    requested_binding_sid{YType::uint32, "requested-binding-sid"},
    rewrite_done{YType::boolean, "rewrite-done"},
    rewrite_request_pending{YType::boolean, "rewrite-request-pending"},
    sr_policy_id{YType::uint32, "sr-policy-id"}
    	,
    end_point_xr(std::make_shared<MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr>())
{
    end_point_xr->parent = this;
    children["end-point-xr"] = end_point_xr;

    yang_name = "sr-policy-entry"; yang_parent_name = "sr-policy-entries";
}

MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::~SrPolicyEntry()
{
}

bool MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::has_data() const
{
    for (std::size_t index=0; index<explicit_path.size(); index++)
    {
        if(explicit_path[index]->has_data())
            return true;
    }
    return client_id.is_set
	|| color.is_set
	|| distinguisher.is_set
	|| end_point.is_set
	|| allocated_binding_sid.is_set
	|| binding_sid_context_id.is_set
	|| binding_sid_request_pending.is_set
	|| client_id_xr.is_set
	|| client_name.is_set
	|| color_xr.is_set
	|| creation_time.is_set
	|| distinguisher_xr.is_set
	|| ipv6_caps.is_set
	|| is_stale.is_set
	|| is_synced.is_set
	|| notify_state_is_active.is_set
	|| notify_time.is_set
	|| policy_active.is_set
	|| requested_binding_sid.is_set
	|| rewrite_done.is_set
	|| rewrite_request_pending.is_set
	|| sr_policy_id.is_set
	|| (end_point_xr !=  nullptr && end_point_xr->has_data());
}

bool MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::has_operation() const
{
    for (std::size_t index=0; index<explicit_path.size(); index++)
    {
        if(explicit_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(client_id.operation)
	|| is_set(color.operation)
	|| is_set(distinguisher.operation)
	|| is_set(end_point.operation)
	|| is_set(allocated_binding_sid.operation)
	|| is_set(binding_sid_context_id.operation)
	|| is_set(binding_sid_request_pending.operation)
	|| is_set(client_id_xr.operation)
	|| is_set(client_name.operation)
	|| is_set(color_xr.operation)
	|| is_set(creation_time.operation)
	|| is_set(distinguisher_xr.operation)
	|| is_set(ipv6_caps.operation)
	|| is_set(is_stale.operation)
	|| is_set(is_synced.operation)
	|| is_set(notify_state_is_active.operation)
	|| is_set(notify_time.operation)
	|| is_set(policy_active.operation)
	|| is_set(requested_binding_sid.operation)
	|| is_set(rewrite_done.operation)
	|| is_set(rewrite_request_pending.operation)
	|| is_set(sr_policy_id.operation)
	|| (end_point_xr !=  nullptr && end_point_xr->has_operation());
}

std::string MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-entry" <<"[client-id='" <<client_id <<"']" <<"[color='" <<color <<"']" <<"[distinguisher='" <<distinguisher <<"']" <<"[end-point='" <<end_point <<"']";

    return path_buffer.str();

}

EntityPath MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel-services/sr-policy-entries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (color.is_set || is_set(color.operation)) leaf_name_data.push_back(color.get_name_leafdata());
    if (distinguisher.is_set || is_set(distinguisher.operation)) leaf_name_data.push_back(distinguisher.get_name_leafdata());
    if (end_point.is_set || is_set(end_point.operation)) leaf_name_data.push_back(end_point.get_name_leafdata());
    if (allocated_binding_sid.is_set || is_set(allocated_binding_sid.operation)) leaf_name_data.push_back(allocated_binding_sid.get_name_leafdata());
    if (binding_sid_context_id.is_set || is_set(binding_sid_context_id.operation)) leaf_name_data.push_back(binding_sid_context_id.get_name_leafdata());
    if (binding_sid_request_pending.is_set || is_set(binding_sid_request_pending.operation)) leaf_name_data.push_back(binding_sid_request_pending.get_name_leafdata());
    if (client_id_xr.is_set || is_set(client_id_xr.operation)) leaf_name_data.push_back(client_id_xr.get_name_leafdata());
    if (client_name.is_set || is_set(client_name.operation)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (color_xr.is_set || is_set(color_xr.operation)) leaf_name_data.push_back(color_xr.get_name_leafdata());
    if (creation_time.is_set || is_set(creation_time.operation)) leaf_name_data.push_back(creation_time.get_name_leafdata());
    if (distinguisher_xr.is_set || is_set(distinguisher_xr.operation)) leaf_name_data.push_back(distinguisher_xr.get_name_leafdata());
    if (ipv6_caps.is_set || is_set(ipv6_caps.operation)) leaf_name_data.push_back(ipv6_caps.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.operation)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (is_synced.is_set || is_set(is_synced.operation)) leaf_name_data.push_back(is_synced.get_name_leafdata());
    if (notify_state_is_active.is_set || is_set(notify_state_is_active.operation)) leaf_name_data.push_back(notify_state_is_active.get_name_leafdata());
    if (notify_time.is_set || is_set(notify_time.operation)) leaf_name_data.push_back(notify_time.get_name_leafdata());
    if (policy_active.is_set || is_set(policy_active.operation)) leaf_name_data.push_back(policy_active.get_name_leafdata());
    if (requested_binding_sid.is_set || is_set(requested_binding_sid.operation)) leaf_name_data.push_back(requested_binding_sid.get_name_leafdata());
    if (rewrite_done.is_set || is_set(rewrite_done.operation)) leaf_name_data.push_back(rewrite_done.get_name_leafdata());
    if (rewrite_request_pending.is_set || is_set(rewrite_request_pending.operation)) leaf_name_data.push_back(rewrite_request_pending.get_name_leafdata());
    if (sr_policy_id.is_set || is_set(sr_policy_id.operation)) leaf_name_data.push_back(sr_policy_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "end-point-xr")
    {
        if(end_point_xr != nullptr)
        {
            children["end-point-xr"] = end_point_xr;
        }
        else
        {
            end_point_xr = std::make_shared<MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr>();
            end_point_xr->parent = this;
            children["end-point-xr"] = end_point_xr;
        }
        return children.at("end-point-xr");
    }

    if(child_yang_name == "explicit-path")
    {
        for(auto const & c : explicit_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath>();
        c->parent = this;
        explicit_path.push_back(std::move(c));
        children[segment_path] = explicit_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::get_children()
{
    if(children.find("end-point-xr") == children.end())
    {
        if(end_point_xr != nullptr)
        {
            children["end-point-xr"] = end_point_xr;
        }
    }

    for (auto const & c : explicit_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "color")
    {
        color = value;
    }
    if(value_path == "distinguisher")
    {
        distinguisher = value;
    }
    if(value_path == "end-point")
    {
        end_point = value;
    }
    if(value_path == "allocated-binding-sid")
    {
        allocated_binding_sid = value;
    }
    if(value_path == "binding-sid-context-id")
    {
        binding_sid_context_id = value;
    }
    if(value_path == "binding-sid-request-pending")
    {
        binding_sid_request_pending = value;
    }
    if(value_path == "client-id-xr")
    {
        client_id_xr = value;
    }
    if(value_path == "client-name")
    {
        client_name = value;
    }
    if(value_path == "color-xr")
    {
        color_xr = value;
    }
    if(value_path == "creation-time")
    {
        creation_time = value;
    }
    if(value_path == "distinguisher-xr")
    {
        distinguisher_xr = value;
    }
    if(value_path == "ipv6-caps")
    {
        ipv6_caps = value;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
    }
    if(value_path == "is-synced")
    {
        is_synced = value;
    }
    if(value_path == "notify-state-is-active")
    {
        notify_state_is_active = value;
    }
    if(value_path == "notify-time")
    {
        notify_time = value;
    }
    if(value_path == "policy-active")
    {
        policy_active = value;
    }
    if(value_path == "requested-binding-sid")
    {
        requested_binding_sid = value;
    }
    if(value_path == "rewrite-done")
    {
        rewrite_done = value;
    }
    if(value_path == "rewrite-request-pending")
    {
        rewrite_request_pending = value;
    }
    if(value_path == "sr-policy-id")
    {
        sr_policy_id = value;
    }
}

MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::EndPointXr()
    :
    address_family_type{YType::enumeration, "address-family-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "end-point-xr"; yang_parent_name = "sr-policy-entry";
}

MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::~EndPointXr()
{
}

bool MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::has_data() const
{
    return address_family_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family_type.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "end-point-xr";

    return path_buffer.str();

}

EntityPath MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EndPointXr' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_type.is_set || is_set(address_family_type.operation)) leaf_name_data.push_back(address_family_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::get_children()
{
    return children;
}

void MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family-type")
    {
        address_family_type = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::ExplicitPath()
    :
    context_id{YType::uint32, "context-id"},
    is_stale{YType::boolean, "is-stale"},
    is_synced{YType::boolean, "is-synced"},
    path_weight{YType::uint32, "path-weight"},
    programmed_in_fib{YType::boolean, "programmed-in-fib"}
    	,
    tunnel_info(std::make_shared<MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo>())
{
    tunnel_info->parent = this;
    children["tunnel-info"] = tunnel_info;

    yang_name = "explicit-path"; yang_parent_name = "sr-policy-entry";
}

MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::~ExplicitPath()
{
}

bool MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::has_data() const
{
    for (std::size_t index=0; index<hops.size(); index++)
    {
        if(hops[index]->has_data())
            return true;
    }
    return context_id.is_set
	|| is_stale.is_set
	|| is_synced.is_set
	|| path_weight.is_set
	|| programmed_in_fib.is_set
	|| (tunnel_info !=  nullptr && tunnel_info->has_data());
}

bool MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::has_operation() const
{
    for (std::size_t index=0; index<hops.size(); index++)
    {
        if(hops[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(context_id.operation)
	|| is_set(is_stale.operation)
	|| is_set(is_synced.operation)
	|| is_set(path_weight.operation)
	|| is_set(programmed_in_fib.operation)
	|| (tunnel_info !=  nullptr && tunnel_info->has_operation());
}

std::string MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-path";

    return path_buffer.str();

}

EntityPath MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExplicitPath' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_id.is_set || is_set(context_id.operation)) leaf_name_data.push_back(context_id.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.operation)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (is_synced.is_set || is_set(is_synced.operation)) leaf_name_data.push_back(is_synced.get_name_leafdata());
    if (path_weight.is_set || is_set(path_weight.operation)) leaf_name_data.push_back(path_weight.get_name_leafdata());
    if (programmed_in_fib.is_set || is_set(programmed_in_fib.operation)) leaf_name_data.push_back(programmed_in_fib.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hops")
    {
        for(auto const & c : hops)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops>();
        c->parent = this;
        hops.push_back(std::move(c));
        children[segment_path] = hops.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel-info")
    {
        if(tunnel_info != nullptr)
        {
            children["tunnel-info"] = tunnel_info;
        }
        else
        {
            tunnel_info = std::make_shared<MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo>();
            tunnel_info->parent = this;
            children["tunnel-info"] = tunnel_info;
        }
        return children.at("tunnel-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::get_children()
{
    for (auto const & c : hops)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("tunnel-info") == children.end())
    {
        if(tunnel_info != nullptr)
        {
            children["tunnel-info"] = tunnel_info;
        }
    }

    return children;
}

void MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "context-id")
    {
        context_id = value;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
    }
    if(value_path == "is-synced")
    {
        is_synced = value;
    }
    if(value_path == "path-weight")
    {
        path_weight = value;
    }
    if(value_path == "programmed-in-fib")
    {
        programmed_in_fib = value;
    }
}

MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::TunnelInfo()
    :
    ipv6_caps{YType::boolean, "ipv6-caps"},
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_up{YType::boolean, "tunnel-up"}
{
    yang_name = "tunnel-info"; yang_parent_name = "explicit-path";
}

MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::~TunnelInfo()
{
}

bool MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::has_data() const
{
    return ipv6_caps.is_set
	|| tunnel_id.is_set
	|| tunnel_up.is_set;
}

bool MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_caps.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(tunnel_up.operation);
}

std::string MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_caps.is_set || is_set(ipv6_caps.operation)) leaf_name_data.push_back(ipv6_caps.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_up.is_set || is_set(tunnel_up.operation)) leaf_name_data.push_back(tunnel_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::get_children()
{
    return children;
}

void MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-caps")
    {
        ipv6_caps = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "tunnel-up")
    {
        tunnel_up = value;
    }
}

MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::Hops()
    :
    hop_type{YType::enumeration, "hop-type"},
    ipv4_address{YType::str, "ipv4-address"},
    mpls_label{YType::uint32, "mpls-label"}
{
    yang_name = "hops"; yang_parent_name = "explicit-path";
}

MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::~Hops()
{
}

bool MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::has_data() const
{
    return hop_type.is_set
	|| ipv4_address.is_set
	|| mpls_label.is_set;
}

bool MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::has_operation() const
{
    return is_set(operation)
	|| is_set(hop_type.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(mpls_label.operation);
}

std::string MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hops";

    return path_buffer.str();

}

EntityPath MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hops' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_type.is_set || is_set(hop_type.operation)) leaf_name_data.push_back(hop_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.operation)) leaf_name_data.push_back(mpls_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::get_children()
{
    return children;
}

void MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hop-type")
    {
        hop_type = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
    }
}

MplsTeStandby::AffinityMap::AffinityMap()
{
    yang_name = "affinity-map"; yang_parent_name = "mpls-te-standby";
}

MplsTeStandby::AffinityMap::~AffinityMap()
{
}

bool MplsTeStandby::AffinityMap::has_data() const
{
    for (std::size_t index=0; index<affinity_map_array.size(); index++)
    {
        if(affinity_map_array[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::AffinityMap::has_operation() const
{
    for (std::size_t index=0; index<affinity_map_array.size(); index++)
    {
        if(affinity_map_array[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::AffinityMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-map";

    return path_buffer.str();

}

EntityPath MplsTeStandby::AffinityMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AffinityMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity-map-array")
    {
        for(auto const & c : affinity_map_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::AffinityMap::AffinityMapArray>();
        c->parent = this;
        affinity_map_array.push_back(std::move(c));
        children[segment_path] = affinity_map_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::AffinityMap::get_children()
{
    for (auto const & c : affinity_map_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::AffinityMap::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::AffinityMap::AffinityMapArray::AffinityMapArray()
    :
    affinity_bit_position{YType::uint8, "affinity-bit-position"},
    affinity_extended_value{YType::uint32, "affinity-extended-value"},
    affinity_name{YType::str, "affinity-name"},
    affinity_table_id{YType::enumeration, "affinity-table-id"},
    affinity_value{YType::uint32, "affinity-value"}
{
    yang_name = "affinity-map-array"; yang_parent_name = "affinity-map";
}

MplsTeStandby::AffinityMap::AffinityMapArray::~AffinityMapArray()
{
}

bool MplsTeStandby::AffinityMap::AffinityMapArray::has_data() const
{
    for (auto const & leaf : affinity_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return affinity_bit_position.is_set
	|| affinity_name.is_set
	|| affinity_table_id.is_set
	|| affinity_value.is_set;
}

bool MplsTeStandby::AffinityMap::AffinityMapArray::has_operation() const
{
    for (auto const & leaf : affinity_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bit_position.operation)
	|| is_set(affinity_extended_value.operation)
	|| is_set(affinity_name.operation)
	|| is_set(affinity_table_id.operation)
	|| is_set(affinity_value.operation);
}

std::string MplsTeStandby::AffinityMap::AffinityMapArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-map-array";

    return path_buffer.str();

}

EntityPath MplsTeStandby::AffinityMap::AffinityMapArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/affinity-map/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bit_position.is_set || is_set(affinity_bit_position.operation)) leaf_name_data.push_back(affinity_bit_position.get_name_leafdata());
    if (affinity_name.is_set || is_set(affinity_name.operation)) leaf_name_data.push_back(affinity_name.get_name_leafdata());
    if (affinity_table_id.is_set || is_set(affinity_table_id.operation)) leaf_name_data.push_back(affinity_table_id.get_name_leafdata());
    if (affinity_value.is_set || is_set(affinity_value.operation)) leaf_name_data.push_back(affinity_value.get_name_leafdata());

    auto affinity_extended_value_name_datas = affinity_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), affinity_extended_value_name_datas.begin(), affinity_extended_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AffinityMap::AffinityMapArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::AffinityMap::AffinityMapArray::get_children()
{
    return children;
}

void MplsTeStandby::AffinityMap::AffinityMapArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bit-position")
    {
        affinity_bit_position = value;
    }
    if(value_path == "affinity-extended-value")
    {
        affinity_extended_value.append(value);
    }
    if(value_path == "affinity-name")
    {
        affinity_name = value;
    }
    if(value_path == "affinity-table-id")
    {
        affinity_table_id = value;
    }
    if(value_path == "affinity-value")
    {
        affinity_value = value;
    }
}

MplsTeStandby::TopologyBriefs::TopologyBriefs()
{
    yang_name = "topology-briefs"; yang_parent_name = "mpls-te-standby";
}

MplsTeStandby::TopologyBriefs::~TopologyBriefs()
{
}

bool MplsTeStandby::TopologyBriefs::has_data() const
{
    for (std::size_t index=0; index<topology_brief.size(); index++)
    {
        if(topology_brief[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::TopologyBriefs::has_operation() const
{
    for (std::size_t index=0; index<topology_brief.size(); index++)
    {
        if(topology_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::TopologyBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-briefs";

    return path_buffer.str();

}

EntityPath MplsTeStandby::TopologyBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "topology-brief")
    {
        for(auto const & c : topology_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief>();
        c->parent = this;
        topology_brief.push_back(std::move(c));
        children[segment_path] = topology_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::TopologyBriefs::get_children()
{
    for (auto const & c : topology_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::TopologyBriefs::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyBrief()
    :
    area{YType::int32, "area"},
    igp_id{YType::str, "igp-id"},
    igp_node_id{YType::str, "igp-node-id"},
    protocol{YType::enumeration, "protocol"},
    topology_node_type{YType::enumeration, "topology-node-type"},
    topology_node_overloaded{YType::boolean, "topology-node-overloaded"},
    topology_node_te_router_id{YType::str, "topology-node-te-router-id"}
    	,
    topology_node_sid_and_srbg(std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg>())
{
    topology_node_sid_and_srbg->parent = this;
    children["topology-node-sid-and-srbg"] = topology_node_sid_and_srbg;

    yang_name = "topology-brief"; yang_parent_name = "topology-briefs";
}

MplsTeStandby::TopologyBriefs::TopologyBrief::~TopologyBrief()
{
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::has_data() const
{
    for (std::size_t index=0; index<topology_node_link.size(); index++)
    {
        if(topology_node_link[index]->has_data())
            return true;
    }
    return area.is_set
	|| igp_id.is_set
	|| igp_node_id.is_set
	|| protocol.is_set
	|| topology_node_type.is_set
	|| topology_node_overloaded.is_set
	|| topology_node_te_router_id.is_set
	|| (topology_node_sid_and_srbg !=  nullptr && topology_node_sid_and_srbg->has_data());
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::has_operation() const
{
    for (std::size_t index=0; index<topology_node_link.size(); index++)
    {
        if(topology_node_link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(area.operation)
	|| is_set(igp_id.operation)
	|| is_set(igp_node_id.operation)
	|| is_set(protocol.operation)
	|| is_set(topology_node_type.operation)
	|| is_set(topology_node_overloaded.operation)
	|| is_set(topology_node_te_router_id.operation)
	|| (topology_node_sid_and_srbg !=  nullptr && topology_node_sid_and_srbg->has_operation());
}

std::string MplsTeStandby::TopologyBriefs::TopologyBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-brief" <<"[area='" <<area <<"']" <<"[igp-id='" <<igp_id <<"']" <<"[igp-node-id='" <<igp_node_id <<"']" <<"[protocol='" <<protocol <<"']" <<"[topology-node-type='" <<topology_node_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTeStandby::TopologyBriefs::TopologyBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology-briefs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (igp_id.is_set || is_set(igp_id.operation)) leaf_name_data.push_back(igp_id.get_name_leafdata());
    if (igp_node_id.is_set || is_set(igp_node_id.operation)) leaf_name_data.push_back(igp_node_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (topology_node_type.is_set || is_set(topology_node_type.operation)) leaf_name_data.push_back(topology_node_type.get_name_leafdata());
    if (topology_node_overloaded.is_set || is_set(topology_node_overloaded.operation)) leaf_name_data.push_back(topology_node_overloaded.get_name_leafdata());
    if (topology_node_te_router_id.is_set || is_set(topology_node_te_router_id.operation)) leaf_name_data.push_back(topology_node_te_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyBriefs::TopologyBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "topology-node-link")
    {
        for(auto const & c : topology_node_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink>();
        c->parent = this;
        topology_node_link.push_back(std::move(c));
        children[segment_path] = topology_node_link.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "topology-node-sid-and-srbg")
    {
        if(topology_node_sid_and_srbg != nullptr)
        {
            children["topology-node-sid-and-srbg"] = topology_node_sid_and_srbg;
        }
        else
        {
            topology_node_sid_and_srbg = std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg>();
            topology_node_sid_and_srbg->parent = this;
            children["topology-node-sid-and-srbg"] = topology_node_sid_and_srbg;
        }
        return children.at("topology-node-sid-and-srbg");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::TopologyBriefs::TopologyBrief::get_children()
{
    for (auto const & c : topology_node_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("topology-node-sid-and-srbg") == children.end())
    {
        if(topology_node_sid_and_srbg != nullptr)
        {
            children["topology-node-sid-and-srbg"] = topology_node_sid_and_srbg;
        }
    }

    return children;
}

void MplsTeStandby::TopologyBriefs::TopologyBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "igp-id")
    {
        igp_id = value;
    }
    if(value_path == "igp-node-id")
    {
        igp_node_id = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "topology-node-type")
    {
        topology_node_type = value;
    }
    if(value_path == "topology-node-overloaded")
    {
        topology_node_overloaded = value;
    }
    if(value_path == "topology-node-te-router-id")
    {
        topology_node_te_router_id = value;
    }
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg::TopologyNodeSidAndSrbg()
    :
    segment_id{YType::uint32, "segment-id"},
    segment_id_local_absolute_value{YType::uint32, "segment-id-local-absolute-value"},
    srgb_size{YType::uint32, "srgb-size"},
    srgb_start{YType::uint32, "srgb-start"}
{
    yang_name = "topology-node-sid-and-srbg"; yang_parent_name = "topology-brief";
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg::~TopologyNodeSidAndSrbg()
{
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg::has_data() const
{
    return segment_id.is_set
	|| segment_id_local_absolute_value.is_set
	|| srgb_size.is_set
	|| srgb_start.is_set;
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg::has_operation() const
{
    return is_set(operation)
	|| is_set(segment_id.operation)
	|| is_set(segment_id_local_absolute_value.operation)
	|| is_set(srgb_size.operation)
	|| is_set(srgb_start.operation);
}

std::string MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-node-sid-and-srbg";

    return path_buffer.str();

}

EntityPath MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyNodeSidAndSrbg' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_id.is_set || is_set(segment_id.operation)) leaf_name_data.push_back(segment_id.get_name_leafdata());
    if (segment_id_local_absolute_value.is_set || is_set(segment_id_local_absolute_value.operation)) leaf_name_data.push_back(segment_id_local_absolute_value.get_name_leafdata());
    if (srgb_size.is_set || is_set(srgb_size.operation)) leaf_name_data.push_back(srgb_size.get_name_leafdata());
    if (srgb_start.is_set || is_set(srgb_start.operation)) leaf_name_data.push_back(srgb_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg::get_children()
{
    return children;
}

void MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeSidAndSrbg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "segment-id")
    {
        segment_id = value;
    }
    if(value_path == "segment-id-local-absolute-value")
    {
        segment_id_local_absolute_value = value;
    }
    if(value_path == "srgb-size")
    {
        srgb_size = value;
    }
    if(value_path == "srgb-start")
    {
        srgb_start = value;
    }
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyNodeLink()
    :
    topology_link_affinity_bits{YType::uint32, "topology-link-affinity-bits"},
    topology_link_bandwidth_model{YType::enumeration, "topology-link-bandwidth-model"},
    topology_link_encoding{YType::uint8, "topology-link-encoding"},
    topology_link_extended_affinity_bit{YType::uint32, "topology-link-extended-affinity-bit"},
    topology_link_fragment_id{YType::uint32, "topology-link-fragment-id"},
    topology_link_igp_metric{YType::uint32, "topology-link-igp-metric"},
    topology_link_interface_address{YType::str, "topology-link-interface-address"},
    topology_link_interface_id{YType::uint32, "topology-link-interface-id"},
    topology_link_neighbor_address{YType::str, "topology-link-neighbor-address"},
    topology_link_neighbor_generation{YType::uint32, "topology-link-neighbor-generation"},
    topology_link_neighbor_id{YType::uint32, "topology-link-neighbor-id"},
    topology_link_neighbor_node_id{YType::uint32, "topology-link-neighbor-node-id"},
    topology_link_neighbor_system_id{YType::str, "topology-link-neighbor-system-id"},
    topology_link_switching_capability{YType::uint8, "topology-link-switching-capability"},
    topology_link_te_metric{YType::uint32, "topology-link-te-metric"},
    topology_link_type{YType::enumeration, "topology-link-type"},
    topology_link_uni_delay{YType::uint32, "topology-link-uni-delay"}
    	,
    odu_link_capabilities(std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities>())
	,topology_link_bandwidth(std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth>())
{
    odu_link_capabilities->parent = this;
    children["odu-link-capabilities"] = odu_link_capabilities;

    topology_link_bandwidth->parent = this;
    children["topology-link-bandwidth"] = topology_link_bandwidth;

    yang_name = "topology-node-link"; yang_parent_name = "topology-brief";
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::~TopologyNodeLink()
{
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::has_data() const
{
    for (std::size_t index=0; index<adjacency_sid.size(); index++)
    {
        if(adjacency_sid[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (auto const & leaf : topology_link_extended_affinity_bit.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return topology_link_affinity_bits.is_set
	|| topology_link_bandwidth_model.is_set
	|| topology_link_encoding.is_set
	|| topology_link_fragment_id.is_set
	|| topology_link_igp_metric.is_set
	|| topology_link_interface_address.is_set
	|| topology_link_interface_id.is_set
	|| topology_link_neighbor_address.is_set
	|| topology_link_neighbor_generation.is_set
	|| topology_link_neighbor_id.is_set
	|| topology_link_neighbor_node_id.is_set
	|| topology_link_neighbor_system_id.is_set
	|| topology_link_switching_capability.is_set
	|| topology_link_te_metric.is_set
	|| topology_link_type.is_set
	|| topology_link_uni_delay.is_set
	|| (odu_link_capabilities !=  nullptr && odu_link_capabilities->has_data())
	|| (topology_link_bandwidth !=  nullptr && topology_link_bandwidth->has_data());
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::has_operation() const
{
    for (std::size_t index=0; index<adjacency_sid.size(); index++)
    {
        if(adjacency_sid[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (auto const & leaf : topology_link_extended_affinity_bit.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(topology_link_affinity_bits.operation)
	|| is_set(topology_link_bandwidth_model.operation)
	|| is_set(topology_link_encoding.operation)
	|| is_set(topology_link_extended_affinity_bit.operation)
	|| is_set(topology_link_fragment_id.operation)
	|| is_set(topology_link_igp_metric.operation)
	|| is_set(topology_link_interface_address.operation)
	|| is_set(topology_link_interface_id.operation)
	|| is_set(topology_link_neighbor_address.operation)
	|| is_set(topology_link_neighbor_generation.operation)
	|| is_set(topology_link_neighbor_id.operation)
	|| is_set(topology_link_neighbor_node_id.operation)
	|| is_set(topology_link_neighbor_system_id.operation)
	|| is_set(topology_link_switching_capability.operation)
	|| is_set(topology_link_te_metric.operation)
	|| is_set(topology_link_type.operation)
	|| is_set(topology_link_uni_delay.operation)
	|| (odu_link_capabilities !=  nullptr && odu_link_capabilities->has_operation())
	|| (topology_link_bandwidth !=  nullptr && topology_link_bandwidth->has_operation());
}

std::string MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-node-link";

    return path_buffer.str();

}

EntityPath MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyNodeLink' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_link_affinity_bits.is_set || is_set(topology_link_affinity_bits.operation)) leaf_name_data.push_back(topology_link_affinity_bits.get_name_leafdata());
    if (topology_link_bandwidth_model.is_set || is_set(topology_link_bandwidth_model.operation)) leaf_name_data.push_back(topology_link_bandwidth_model.get_name_leafdata());
    if (topology_link_encoding.is_set || is_set(topology_link_encoding.operation)) leaf_name_data.push_back(topology_link_encoding.get_name_leafdata());
    if (topology_link_fragment_id.is_set || is_set(topology_link_fragment_id.operation)) leaf_name_data.push_back(topology_link_fragment_id.get_name_leafdata());
    if (topology_link_igp_metric.is_set || is_set(topology_link_igp_metric.operation)) leaf_name_data.push_back(topology_link_igp_metric.get_name_leafdata());
    if (topology_link_interface_address.is_set || is_set(topology_link_interface_address.operation)) leaf_name_data.push_back(topology_link_interface_address.get_name_leafdata());
    if (topology_link_interface_id.is_set || is_set(topology_link_interface_id.operation)) leaf_name_data.push_back(topology_link_interface_id.get_name_leafdata());
    if (topology_link_neighbor_address.is_set || is_set(topology_link_neighbor_address.operation)) leaf_name_data.push_back(topology_link_neighbor_address.get_name_leafdata());
    if (topology_link_neighbor_generation.is_set || is_set(topology_link_neighbor_generation.operation)) leaf_name_data.push_back(topology_link_neighbor_generation.get_name_leafdata());
    if (topology_link_neighbor_id.is_set || is_set(topology_link_neighbor_id.operation)) leaf_name_data.push_back(topology_link_neighbor_id.get_name_leafdata());
    if (topology_link_neighbor_node_id.is_set || is_set(topology_link_neighbor_node_id.operation)) leaf_name_data.push_back(topology_link_neighbor_node_id.get_name_leafdata());
    if (topology_link_neighbor_system_id.is_set || is_set(topology_link_neighbor_system_id.operation)) leaf_name_data.push_back(topology_link_neighbor_system_id.get_name_leafdata());
    if (topology_link_switching_capability.is_set || is_set(topology_link_switching_capability.operation)) leaf_name_data.push_back(topology_link_switching_capability.get_name_leafdata());
    if (topology_link_te_metric.is_set || is_set(topology_link_te_metric.operation)) leaf_name_data.push_back(topology_link_te_metric.get_name_leafdata());
    if (topology_link_type.is_set || is_set(topology_link_type.operation)) leaf_name_data.push_back(topology_link_type.get_name_leafdata());
    if (topology_link_uni_delay.is_set || is_set(topology_link_uni_delay.operation)) leaf_name_data.push_back(topology_link_uni_delay.get_name_leafdata());

    auto topology_link_extended_affinity_bit_name_datas = topology_link_extended_affinity_bit.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), topology_link_extended_affinity_bit_name_datas.begin(), topology_link_extended_affinity_bit_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-sid")
    {
        for(auto const & c : adjacency_sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid>();
        c->parent = this;
        adjacency_sid.push_back(std::move(c));
        children[segment_path] = adjacency_sid.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "odu-link-capabilities")
    {
        if(odu_link_capabilities != nullptr)
        {
            children["odu-link-capabilities"] = odu_link_capabilities;
        }
        else
        {
            odu_link_capabilities = std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities>();
            odu_link_capabilities->parent = this;
            children["odu-link-capabilities"] = odu_link_capabilities;
        }
        return children.at("odu-link-capabilities");
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        for(auto const & c : shared_risk_link_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(std::move(c));
        children[segment_path] = shared_risk_link_group.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "topology-link-bandwidth")
    {
        if(topology_link_bandwidth != nullptr)
        {
            children["topology-link-bandwidth"] = topology_link_bandwidth;
        }
        else
        {
            topology_link_bandwidth = std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth>();
            topology_link_bandwidth->parent = this;
            children["topology-link-bandwidth"] = topology_link_bandwidth;
        }
        return children.at("topology-link-bandwidth");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::get_children()
{
    for (auto const & c : adjacency_sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("odu-link-capabilities") == children.end())
    {
        if(odu_link_capabilities != nullptr)
        {
            children["odu-link-capabilities"] = odu_link_capabilities;
        }
    }

    for (auto const & c : shared_risk_link_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("topology-link-bandwidth") == children.end())
    {
        if(topology_link_bandwidth != nullptr)
        {
            children["topology-link-bandwidth"] = topology_link_bandwidth;
        }
    }

    return children;
}

void MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "topology-link-affinity-bits")
    {
        topology_link_affinity_bits = value;
    }
    if(value_path == "topology-link-bandwidth-model")
    {
        topology_link_bandwidth_model = value;
    }
    if(value_path == "topology-link-encoding")
    {
        topology_link_encoding = value;
    }
    if(value_path == "topology-link-extended-affinity-bit")
    {
        topology_link_extended_affinity_bit.append(value);
    }
    if(value_path == "topology-link-fragment-id")
    {
        topology_link_fragment_id = value;
    }
    if(value_path == "topology-link-igp-metric")
    {
        topology_link_igp_metric = value;
    }
    if(value_path == "topology-link-interface-address")
    {
        topology_link_interface_address = value;
    }
    if(value_path == "topology-link-interface-id")
    {
        topology_link_interface_id = value;
    }
    if(value_path == "topology-link-neighbor-address")
    {
        topology_link_neighbor_address = value;
    }
    if(value_path == "topology-link-neighbor-generation")
    {
        topology_link_neighbor_generation = value;
    }
    if(value_path == "topology-link-neighbor-id")
    {
        topology_link_neighbor_id = value;
    }
    if(value_path == "topology-link-neighbor-node-id")
    {
        topology_link_neighbor_node_id = value;
    }
    if(value_path == "topology-link-neighbor-system-id")
    {
        topology_link_neighbor_system_id = value;
    }
    if(value_path == "topology-link-switching-capability")
    {
        topology_link_switching_capability = value;
    }
    if(value_path == "topology-link-te-metric")
    {
        topology_link_te_metric = value;
    }
    if(value_path == "topology-link-type")
    {
        topology_link_type = value;
    }
    if(value_path == "topology-link-uni-delay")
    {
        topology_link_uni_delay = value;
    }
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidth()
    :
    bandwidth_migration_mode{YType::enumeration, "bandwidth-migration-mode"}
    	,
    topology_link_bandwidth_prestandard(std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard>())
	,topology_link_bandwidth_standard(std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard>())
{
    topology_link_bandwidth_prestandard->parent = this;
    children["topology-link-bandwidth-prestandard"] = topology_link_bandwidth_prestandard;

    topology_link_bandwidth_standard->parent = this;
    children["topology-link-bandwidth-standard"] = topology_link_bandwidth_standard;

    yang_name = "topology-link-bandwidth"; yang_parent_name = "topology-node-link";
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::~TopologyLinkBandwidth()
{
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::has_data() const
{
    return bandwidth_migration_mode.is_set
	|| (topology_link_bandwidth_prestandard !=  nullptr && topology_link_bandwidth_prestandard->has_data())
	|| (topology_link_bandwidth_standard !=  nullptr && topology_link_bandwidth_standard->has_data());
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_migration_mode.operation)
	|| (topology_link_bandwidth_prestandard !=  nullptr && topology_link_bandwidth_prestandard->has_operation())
	|| (topology_link_bandwidth_standard !=  nullptr && topology_link_bandwidth_standard->has_operation());
}

std::string MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-bandwidth";

    return path_buffer.str();

}

EntityPath MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyLinkBandwidth' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_migration_mode.is_set || is_set(bandwidth_migration_mode.operation)) leaf_name_data.push_back(bandwidth_migration_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "topology-link-bandwidth-prestandard")
    {
        if(topology_link_bandwidth_prestandard != nullptr)
        {
            children["topology-link-bandwidth-prestandard"] = topology_link_bandwidth_prestandard;
        }
        else
        {
            topology_link_bandwidth_prestandard = std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard>();
            topology_link_bandwidth_prestandard->parent = this;
            children["topology-link-bandwidth-prestandard"] = topology_link_bandwidth_prestandard;
        }
        return children.at("topology-link-bandwidth-prestandard");
    }

    if(child_yang_name == "topology-link-bandwidth-standard")
    {
        if(topology_link_bandwidth_standard != nullptr)
        {
            children["topology-link-bandwidth-standard"] = topology_link_bandwidth_standard;
        }
        else
        {
            topology_link_bandwidth_standard = std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard>();
            topology_link_bandwidth_standard->parent = this;
            children["topology-link-bandwidth-standard"] = topology_link_bandwidth_standard;
        }
        return children.at("topology-link-bandwidth-standard");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::get_children()
{
    if(children.find("topology-link-bandwidth-prestandard") == children.end())
    {
        if(topology_link_bandwidth_prestandard != nullptr)
        {
            children["topology-link-bandwidth-prestandard"] = topology_link_bandwidth_prestandard;
        }
    }

    if(children.find("topology-link-bandwidth-standard") == children.end())
    {
        if(topology_link_bandwidth_standard != nullptr)
        {
            children["topology-link-bandwidth-standard"] = topology_link_bandwidth_standard;
        }
    }

    return children;
}

void MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-migration-mode")
    {
        bandwidth_migration_mode = value;
    }
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkBandwidthPrestandard()
    :
    topology_link_prestandard_bandwidth_physical{YType::uint32, "topology-link-prestandard-bandwidth-physical"},
    topology_link_prestandard_bandwidth_reservation_global{YType::uint32, "topology-link-prestandard-bandwidth-reservation-global"},
    topology_link_prestandard_bandwidth_reservation_subpool{YType::uint32, "topology-link-prestandard-bandwidth-reservation-subpool"}
    	,
    topology_link_prestandard_bandwidth_detail(std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail>())
{
    topology_link_prestandard_bandwidth_detail->parent = this;
    children["topology-link-prestandard-bandwidth-detail"] = topology_link_prestandard_bandwidth_detail;

    yang_name = "topology-link-bandwidth-prestandard"; yang_parent_name = "topology-link-bandwidth";
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::~TopologyLinkBandwidthPrestandard()
{
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::has_data() const
{
    return topology_link_prestandard_bandwidth_physical.is_set
	|| topology_link_prestandard_bandwidth_reservation_global.is_set
	|| topology_link_prestandard_bandwidth_reservation_subpool.is_set
	|| (topology_link_prestandard_bandwidth_detail !=  nullptr && topology_link_prestandard_bandwidth_detail->has_data());
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::has_operation() const
{
    return is_set(operation)
	|| is_set(topology_link_prestandard_bandwidth_physical.operation)
	|| is_set(topology_link_prestandard_bandwidth_reservation_global.operation)
	|| is_set(topology_link_prestandard_bandwidth_reservation_subpool.operation)
	|| (topology_link_prestandard_bandwidth_detail !=  nullptr && topology_link_prestandard_bandwidth_detail->has_operation());
}

std::string MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-bandwidth-prestandard";

    return path_buffer.str();

}

EntityPath MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyLinkBandwidthPrestandard' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_link_prestandard_bandwidth_physical.is_set || is_set(topology_link_prestandard_bandwidth_physical.operation)) leaf_name_data.push_back(topology_link_prestandard_bandwidth_physical.get_name_leafdata());
    if (topology_link_prestandard_bandwidth_reservation_global.is_set || is_set(topology_link_prestandard_bandwidth_reservation_global.operation)) leaf_name_data.push_back(topology_link_prestandard_bandwidth_reservation_global.get_name_leafdata());
    if (topology_link_prestandard_bandwidth_reservation_subpool.is_set || is_set(topology_link_prestandard_bandwidth_reservation_subpool.operation)) leaf_name_data.push_back(topology_link_prestandard_bandwidth_reservation_subpool.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "topology-link-prestandard-bandwidth-detail")
    {
        if(topology_link_prestandard_bandwidth_detail != nullptr)
        {
            children["topology-link-prestandard-bandwidth-detail"] = topology_link_prestandard_bandwidth_detail;
        }
        else
        {
            topology_link_prestandard_bandwidth_detail = std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail>();
            topology_link_prestandard_bandwidth_detail->parent = this;
            children["topology-link-prestandard-bandwidth-detail"] = topology_link_prestandard_bandwidth_detail;
        }
        return children.at("topology-link-prestandard-bandwidth-detail");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::get_children()
{
    if(children.find("topology-link-prestandard-bandwidth-detail") == children.end())
    {
        if(topology_link_prestandard_bandwidth_detail != nullptr)
        {
            children["topology-link-prestandard-bandwidth-detail"] = topology_link_prestandard_bandwidth_detail;
        }
    }

    return children;
}

void MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "topology-link-prestandard-bandwidth-physical")
    {
        topology_link_prestandard_bandwidth_physical = value;
    }
    if(value_path == "topology-link-prestandard-bandwidth-reservation-global")
    {
        topology_link_prestandard_bandwidth_reservation_global = value;
    }
    if(value_path == "topology-link-prestandard-bandwidth-reservation-subpool")
    {
        topology_link_prestandard_bandwidth_reservation_subpool = value;
    }
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthDetail()
    :
    topology_link_prestandard_bandwidth_allocated{YType::uint32, "topology-link-prestandard-bandwidth-allocated"},
    topology_link_prestandard_bandwidth_available_global{YType::uint32, "topology-link-prestandard-bandwidth-available-global"},
    topology_link_prestandard_bandwidth_available_subpool{YType::uint32, "topology-link-prestandard-bandwidth-available-subpool"}
{
    yang_name = "topology-link-prestandard-bandwidth-detail"; yang_parent_name = "topology-link-bandwidth-prestandard";
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::~TopologyLinkPrestandardBandwidthDetail()
{
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::has_data() const
{
    for (auto const & leaf : topology_link_prestandard_bandwidth_allocated.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : topology_link_prestandard_bandwidth_available_global.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : topology_link_prestandard_bandwidth_available_subpool.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::has_operation() const
{
    for (auto const & leaf : topology_link_prestandard_bandwidth_allocated.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : topology_link_prestandard_bandwidth_available_global.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : topology_link_prestandard_bandwidth_available_subpool.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(topology_link_prestandard_bandwidth_allocated.operation)
	|| is_set(topology_link_prestandard_bandwidth_available_global.operation)
	|| is_set(topology_link_prestandard_bandwidth_available_subpool.operation);
}

std::string MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-prestandard-bandwidth-detail";

    return path_buffer.str();

}

EntityPath MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyLinkPrestandardBandwidthDetail' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto topology_link_prestandard_bandwidth_allocated_name_datas = topology_link_prestandard_bandwidth_allocated.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), topology_link_prestandard_bandwidth_allocated_name_datas.begin(), topology_link_prestandard_bandwidth_allocated_name_datas.end());
    auto topology_link_prestandard_bandwidth_available_global_name_datas = topology_link_prestandard_bandwidth_available_global.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), topology_link_prestandard_bandwidth_available_global_name_datas.begin(), topology_link_prestandard_bandwidth_available_global_name_datas.end());
    auto topology_link_prestandard_bandwidth_available_subpool_name_datas = topology_link_prestandard_bandwidth_available_subpool.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), topology_link_prestandard_bandwidth_available_subpool_name_datas.begin(), topology_link_prestandard_bandwidth_available_subpool_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::get_children()
{
    return children;
}

void MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "topology-link-prestandard-bandwidth-allocated")
    {
        topology_link_prestandard_bandwidth_allocated.append(value);
    }
    if(value_path == "topology-link-prestandard-bandwidth-available-global")
    {
        topology_link_prestandard_bandwidth_available_global.append(value);
    }
    if(value_path == "topology-link-prestandard-bandwidth-available-subpool")
    {
        topology_link_prestandard_bandwidth_available_subpool.append(value);
    }
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopologyLinkBandwidthStandard()
    :
    topo_link_std_bw_physical{YType::uint32, "topo-link-std-bw-physical"},
    topo_link_std_bw_res_max{YType::uint32, "topo-link-std-bw-res-max"},
    topo_link_std_bw_res_pool0{YType::uint32, "topo-link-std-bw-res-pool0"},
    topo_link_std_bw_res_pool1{YType::uint32, "topo-link-std-bw-res-pool1"}
    	,
    topo_link_std_bw_detail(std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail>())
{
    topo_link_std_bw_detail->parent = this;
    children["topo-link-std-bw-detail"] = topo_link_std_bw_detail;

    yang_name = "topology-link-bandwidth-standard"; yang_parent_name = "topology-link-bandwidth";
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::~TopologyLinkBandwidthStandard()
{
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::has_data() const
{
    return topo_link_std_bw_physical.is_set
	|| topo_link_std_bw_res_max.is_set
	|| topo_link_std_bw_res_pool0.is_set
	|| topo_link_std_bw_res_pool1.is_set
	|| (topo_link_std_bw_detail !=  nullptr && topo_link_std_bw_detail->has_data());
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::has_operation() const
{
    return is_set(operation)
	|| is_set(topo_link_std_bw_physical.operation)
	|| is_set(topo_link_std_bw_res_max.operation)
	|| is_set(topo_link_std_bw_res_pool0.operation)
	|| is_set(topo_link_std_bw_res_pool1.operation)
	|| (topo_link_std_bw_detail !=  nullptr && topo_link_std_bw_detail->has_operation());
}

std::string MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-bandwidth-standard";

    return path_buffer.str();

}

EntityPath MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyLinkBandwidthStandard' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topo_link_std_bw_physical.is_set || is_set(topo_link_std_bw_physical.operation)) leaf_name_data.push_back(topo_link_std_bw_physical.get_name_leafdata());
    if (topo_link_std_bw_res_max.is_set || is_set(topo_link_std_bw_res_max.operation)) leaf_name_data.push_back(topo_link_std_bw_res_max.get_name_leafdata());
    if (topo_link_std_bw_res_pool0.is_set || is_set(topo_link_std_bw_res_pool0.operation)) leaf_name_data.push_back(topo_link_std_bw_res_pool0.get_name_leafdata());
    if (topo_link_std_bw_res_pool1.is_set || is_set(topo_link_std_bw_res_pool1.operation)) leaf_name_data.push_back(topo_link_std_bw_res_pool1.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "topo-link-std-bw-detail")
    {
        if(topo_link_std_bw_detail != nullptr)
        {
            children["topo-link-std-bw-detail"] = topo_link_std_bw_detail;
        }
        else
        {
            topo_link_std_bw_detail = std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail>();
            topo_link_std_bw_detail->parent = this;
            children["topo-link-std-bw-detail"] = topo_link_std_bw_detail;
        }
        return children.at("topo-link-std-bw-detail");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::get_children()
{
    if(children.find("topo-link-std-bw-detail") == children.end())
    {
        if(topo_link_std_bw_detail != nullptr)
        {
            children["topo-link-std-bw-detail"] = topo_link_std_bw_detail;
        }
    }

    return children;
}

void MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "topo-link-std-bw-physical")
    {
        topo_link_std_bw_physical = value;
    }
    if(value_path == "topo-link-std-bw-res-max")
    {
        topo_link_std_bw_res_max = value;
    }
    if(value_path == "topo-link-std-bw-res-pool0")
    {
        topo_link_std_bw_res_pool0 = value;
    }
    if(value_path == "topo-link-std-bw-res-pool1")
    {
        topo_link_std_bw_res_pool1 = value;
    }
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwDetail()
    :
    topo_link_std_bw_allocated{YType::uint32, "topo-link-std-bw-allocated"},
    topo_link_std_bw_available{YType::uint32, "topo-link-std-bw-available"}
{
    yang_name = "topo-link-std-bw-detail"; yang_parent_name = "topology-link-bandwidth-standard";
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::~TopoLinkStdBwDetail()
{
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::has_data() const
{
    for (auto const & leaf : topo_link_std_bw_allocated.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : topo_link_std_bw_available.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::has_operation() const
{
    for (auto const & leaf : topo_link_std_bw_allocated.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : topo_link_std_bw_available.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(topo_link_std_bw_allocated.operation)
	|| is_set(topo_link_std_bw_available.operation);
}

std::string MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topo-link-std-bw-detail";

    return path_buffer.str();

}

EntityPath MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopoLinkStdBwDetail' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto topo_link_std_bw_allocated_name_datas = topo_link_std_bw_allocated.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), topo_link_std_bw_allocated_name_datas.begin(), topo_link_std_bw_allocated_name_datas.end());
    auto topo_link_std_bw_available_name_datas = topo_link_std_bw_available.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), topo_link_std_bw_available_name_datas.begin(), topo_link_std_bw_available_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::get_children()
{
    return children;
}

void MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "topo-link-std-bw-allocated")
    {
        topo_link_std_bw_allocated.append(value);
    }
    if(value_path == "topo-link-std-bw-available")
    {
        topo_link_std_bw_available.append(value);
    }
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduLinkCapabilities()
    :
    max_lsp_bandwidth{YType::uint32, "max-lsp-bandwidth"}
{
    yang_name = "odu-link-capabilities"; yang_parent_name = "topology-node-link";
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::~OduLinkCapabilities()
{
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::has_data() const
{
    for (std::size_t index=0; index<odu_capability.size(); index++)
    {
        if(odu_capability[index]->has_data())
            return true;
    }
    for (auto const & leaf : max_lsp_bandwidth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::has_operation() const
{
    for (std::size_t index=0; index<odu_capability.size(); index++)
    {
        if(odu_capability[index]->has_operation())
            return true;
    }
    for (auto const & leaf : max_lsp_bandwidth.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(max_lsp_bandwidth.operation);
}

std::string MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-link-capabilities";

    return path_buffer.str();

}

EntityPath MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduLinkCapabilities' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto max_lsp_bandwidth_name_datas = max_lsp_bandwidth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_lsp_bandwidth_name_datas.begin(), max_lsp_bandwidth_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "odu-capability")
    {
        for(auto const & c : odu_capability)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability>();
        c->parent = this;
        odu_capability.push_back(std::move(c));
        children[segment_path] = odu_capability.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::get_children()
{
    for (auto const & c : odu_capability)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-lsp-bandwidth")
    {
        max_lsp_bandwidth.append(value);
    }
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::OduCapability()
    :
    lcas_capable{YType::boolean, "lcas-capable"},
    signal_type{YType::enumeration, "signal-type"},
    stage1{YType::enumeration, "stage1"},
    stage2{YType::enumeration, "stage2"},
    stage3{YType::enumeration, "stage3"},
    stage4{YType::enumeration, "stage4"},
    switchable{YType::boolean, "switchable"},
    terminable{YType::boolean, "terminable"},
    tsg1p25{YType::boolean, "tsg1p25"},
    tsg2p5{YType::boolean, "tsg2p5"},
    vcat_capable{YType::boolean, "vcat-capable"}
    	,
    bandwidth_info(std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo>())
{
    bandwidth_info->parent = this;
    children["bandwidth-info"] = bandwidth_info;

    yang_name = "odu-capability"; yang_parent_name = "odu-link-capabilities";
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::~OduCapability()
{
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::has_data() const
{
    return lcas_capable.is_set
	|| signal_type.is_set
	|| stage1.is_set
	|| stage2.is_set
	|| stage3.is_set
	|| stage4.is_set
	|| switchable.is_set
	|| terminable.is_set
	|| tsg1p25.is_set
	|| tsg2p5.is_set
	|| vcat_capable.is_set
	|| (bandwidth_info !=  nullptr && bandwidth_info->has_data());
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::has_operation() const
{
    return is_set(operation)
	|| is_set(lcas_capable.operation)
	|| is_set(signal_type.operation)
	|| is_set(stage1.operation)
	|| is_set(stage2.operation)
	|| is_set(stage3.operation)
	|| is_set(stage4.operation)
	|| is_set(switchable.operation)
	|| is_set(terminable.operation)
	|| is_set(tsg1p25.operation)
	|| is_set(tsg2p5.operation)
	|| is_set(vcat_capable.operation)
	|| (bandwidth_info !=  nullptr && bandwidth_info->has_operation());
}

std::string MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-capability";

    return path_buffer.str();

}

EntityPath MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduCapability' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lcas_capable.is_set || is_set(lcas_capable.operation)) leaf_name_data.push_back(lcas_capable.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.operation)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage1.is_set || is_set(stage1.operation)) leaf_name_data.push_back(stage1.get_name_leafdata());
    if (stage2.is_set || is_set(stage2.operation)) leaf_name_data.push_back(stage2.get_name_leafdata());
    if (stage3.is_set || is_set(stage3.operation)) leaf_name_data.push_back(stage3.get_name_leafdata());
    if (stage4.is_set || is_set(stage4.operation)) leaf_name_data.push_back(stage4.get_name_leafdata());
    if (switchable.is_set || is_set(switchable.operation)) leaf_name_data.push_back(switchable.get_name_leafdata());
    if (terminable.is_set || is_set(terminable.operation)) leaf_name_data.push_back(terminable.get_name_leafdata());
    if (tsg1p25.is_set || is_set(tsg1p25.operation)) leaf_name_data.push_back(tsg1p25.get_name_leafdata());
    if (tsg2p5.is_set || is_set(tsg2p5.operation)) leaf_name_data.push_back(tsg2p5.get_name_leafdata());
    if (vcat_capable.is_set || is_set(vcat_capable.operation)) leaf_name_data.push_back(vcat_capable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-info")
    {
        if(bandwidth_info != nullptr)
        {
            children["bandwidth-info"] = bandwidth_info;
        }
        else
        {
            bandwidth_info = std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo>();
            bandwidth_info->parent = this;
            children["bandwidth-info"] = bandwidth_info;
        }
        return children.at("bandwidth-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::get_children()
{
    if(children.find("bandwidth-info") == children.end())
    {
        if(bandwidth_info != nullptr)
        {
            children["bandwidth-info"] = bandwidth_info;
        }
    }

    return children;
}

void MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lcas-capable")
    {
        lcas_capable = value;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
    }
    if(value_path == "stage1")
    {
        stage1 = value;
    }
    if(value_path == "stage2")
    {
        stage2 = value;
    }
    if(value_path == "stage3")
    {
        stage3 = value;
    }
    if(value_path == "stage4")
    {
        stage4 = value;
    }
    if(value_path == "switchable")
    {
        switchable = value;
    }
    if(value_path == "terminable")
    {
        terminable = value;
    }
    if(value_path == "tsg1p25")
    {
        tsg1p25 = value;
    }
    if(value_path == "tsg2p5")
    {
        tsg2p5 = value;
    }
    if(value_path == "vcat-capable")
    {
        vcat_capable = value;
    }
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::BandwidthInfo()
    :
    type{YType::enumeration, "type"}
    	,
    fixed(std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed>())
	,flex(std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex>())
{
    fixed->parent = this;
    children["fixed"] = fixed;

    flex->parent = this;
    children["flex"] = flex;

    yang_name = "bandwidth-info"; yang_parent_name = "odu-capability";
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::~BandwidthInfo()
{
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_data() const
{
    return type.is_set
	|| (fixed !=  nullptr && fixed->has_data())
	|| (flex !=  nullptr && flex->has_data());
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (fixed !=  nullptr && fixed->has_operation())
	|| (flex !=  nullptr && flex->has_operation());
}

std::string MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-info";

    return path_buffer.str();

}

EntityPath MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fixed")
    {
        if(fixed != nullptr)
        {
            children["fixed"] = fixed;
        }
        else
        {
            fixed = std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed>();
            fixed->parent = this;
            children["fixed"] = fixed;
        }
        return children.at("fixed");
    }

    if(child_yang_name == "flex")
    {
        if(flex != nullptr)
        {
            children["flex"] = flex;
        }
        else
        {
            flex = std::make_shared<MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex>();
            flex->parent = this;
            children["flex"] = flex;
        }
        return children.at("flex");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_children()
{
    if(children.find("fixed") == children.end())
    {
        if(fixed != nullptr)
        {
            children["fixed"] = fixed;
        }
    }

    if(children.find("flex") == children.end())
    {
        if(flex != nullptr)
        {
            children["flex"] = flex;
        }
    }

    return children;
}

void MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::Fixed()
    :
    maximum_od_us{YType::uint8, "maximum-od-us"},
    unreserved_od_us{YType::uint8, "unreserved-od-us"}
{
    yang_name = "fixed"; yang_parent_name = "bandwidth-info";
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::~Fixed()
{
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_data() const
{
    return maximum_od_us.is_set
	|| unreserved_od_us.is_set;
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_od_us.operation)
	|| is_set(unreserved_od_us.operation);
}

std::string MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed";

    return path_buffer.str();

}

EntityPath MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fixed' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_od_us.is_set || is_set(maximum_od_us.operation)) leaf_name_data.push_back(maximum_od_us.get_name_leafdata());
    if (unreserved_od_us.is_set || is_set(unreserved_od_us.operation)) leaf_name_data.push_back(unreserved_od_us.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_children()
{
    return children;
}

void MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-od-us")
    {
        maximum_od_us = value;
    }
    if(value_path == "unreserved-od-us")
    {
        unreserved_od_us = value;
    }
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::Flex()
    :
    max_bandwidth{YType::uint32, "max-bandwidth"},
    max_lsp_bandwidth{YType::uint32, "max-lsp-bandwidth"},
    unreserved_bandwidth{YType::uint32, "unreserved-bandwidth"}
{
    yang_name = "flex"; yang_parent_name = "bandwidth-info";
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::~Flex()
{
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_data() const
{
    return max_bandwidth.is_set
	|| max_lsp_bandwidth.is_set
	|| unreserved_bandwidth.is_set;
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_operation() const
{
    return is_set(operation)
	|| is_set(max_bandwidth.operation)
	|| is_set(max_lsp_bandwidth.operation)
	|| is_set(unreserved_bandwidth.operation);
}

std::string MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex";

    return path_buffer.str();

}

EntityPath MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flex' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_bandwidth.is_set || is_set(max_bandwidth.operation)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_lsp_bandwidth.is_set || is_set(max_lsp_bandwidth.operation)) leaf_name_data.push_back(max_lsp_bandwidth.get_name_leafdata());
    if (unreserved_bandwidth.is_set || is_set(unreserved_bandwidth.operation)) leaf_name_data.push_back(unreserved_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_children()
{
    return children;
}

void MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
    }
    if(value_path == "max-lsp-bandwidth")
    {
        max_lsp_bandwidth = value;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth = value;
    }
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{
    yang_name = "shared-risk-link-group"; yang_parent_name = "topology-node-link";
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(shared_risk_group.operation)
	|| is_set(srlg_name.operation);
}

std::string MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";

    return path_buffer.str();

}

EntityPath MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SharedRiskLinkGroup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.operation)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.operation)) leaf_name_data.push_back(srlg_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup::get_children()
{
    return children;
}

void MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::SharedRiskLinkGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
    }
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::AdjacencySid()
    :
    adjacency_sid{YType::uint32, "adjacency-sid"},
    flag_b{YType::boolean, "flag-b"},
    flag_f{YType::boolean, "flag-f"},
    flag_l{YType::boolean, "flag-l"},
    flag_s{YType::boolean, "flag-s"},
    flag_v{YType::boolean, "flag-v"},
    link_type{YType::enumeration, "link-type"},
    local_addr{YType::str, "local-addr"},
    nbr_node_igpid{YType::str, "nbr-node-igpid"},
    nbr_node_te_router_id{YType::str, "nbr-node-te-router-id"},
    remote_addr{YType::str, "remote-addr"}
{
    yang_name = "adjacency-sid"; yang_parent_name = "topology-node-link";
}

MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::~AdjacencySid()
{
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::has_data() const
{
    return adjacency_sid.is_set
	|| flag_b.is_set
	|| flag_f.is_set
	|| flag_l.is_set
	|| flag_s.is_set
	|| flag_v.is_set
	|| link_type.is_set
	|| local_addr.is_set
	|| nbr_node_igpid.is_set
	|| nbr_node_te_router_id.is_set
	|| remote_addr.is_set;
}

bool MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::has_operation() const
{
    return is_set(operation)
	|| is_set(adjacency_sid.operation)
	|| is_set(flag_b.operation)
	|| is_set(flag_f.operation)
	|| is_set(flag_l.operation)
	|| is_set(flag_s.operation)
	|| is_set(flag_v.operation)
	|| is_set(link_type.operation)
	|| is_set(local_addr.operation)
	|| is_set(nbr_node_igpid.operation)
	|| is_set(nbr_node_te_router_id.operation)
	|| is_set(remote_addr.operation);
}

std::string MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";

    return path_buffer.str();

}

EntityPath MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySid' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid.is_set || is_set(adjacency_sid.operation)) leaf_name_data.push_back(adjacency_sid.get_name_leafdata());
    if (flag_b.is_set || is_set(flag_b.operation)) leaf_name_data.push_back(flag_b.get_name_leafdata());
    if (flag_f.is_set || is_set(flag_f.operation)) leaf_name_data.push_back(flag_f.get_name_leafdata());
    if (flag_l.is_set || is_set(flag_l.operation)) leaf_name_data.push_back(flag_l.get_name_leafdata());
    if (flag_s.is_set || is_set(flag_s.operation)) leaf_name_data.push_back(flag_s.get_name_leafdata());
    if (flag_v.is_set || is_set(flag_v.operation)) leaf_name_data.push_back(flag_v.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.operation)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.operation)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (nbr_node_igpid.is_set || is_set(nbr_node_igpid.operation)) leaf_name_data.push_back(nbr_node_igpid.get_name_leafdata());
    if (nbr_node_te_router_id.is_set || is_set(nbr_node_te_router_id.operation)) leaf_name_data.push_back(nbr_node_te_router_id.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.operation)) leaf_name_data.push_back(remote_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::get_children()
{
    return children;
}

void MplsTeStandby::TopologyBriefs::TopologyBrief::TopologyNodeLink::AdjacencySid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-sid")
    {
        adjacency_sid = value;
    }
    if(value_path == "flag-b")
    {
        flag_b = value;
    }
    if(value_path == "flag-f")
    {
        flag_f = value;
    }
    if(value_path == "flag-l")
    {
        flag_l = value;
    }
    if(value_path == "flag-s")
    {
        flag_s = value;
    }
    if(value_path == "flag-v")
    {
        flag_v = value;
    }
    if(value_path == "link-type")
    {
        link_type = value;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
    }
    if(value_path == "nbr-node-igpid")
    {
        nbr_node_igpid = value;
    }
    if(value_path == "nbr-node-te-router-id")
    {
        nbr_node_te_router_id = value;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
    }
}


}
}

