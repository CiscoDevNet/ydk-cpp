
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_24.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_25.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-automesh";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::Logging()
    :
    all_logging_enabled{YType::boolean, "all-logging-enabled"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"}
{
    yang_name = "logging"; yang_parent_name = "attribute-set-automesh";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::~Logging()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_data() const
{
    return all_logging_enabled.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| lsp_re_opt.is_set
	|| lsp_re_route.is_set
	|| lsp_state.is_set
	|| s2l_state.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(all_logging_enabled.operation)
	|| is_set(lsp_bandwidth_change.operation)
	|| is_set(lsp_insufficient_bw.operation)
	|| is_set(lsp_pcalc_failure_logging_enabled.operation)
	|| is_set(lsp_re_opt.operation)
	|| is_set(lsp_re_route.operation)
	|| is_set(lsp_state.operation)
	|| is_set(s2l_state.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.operation)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.operation)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.operation)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.operation)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.operation)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.operation)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.operation)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.operation)) leaf_name_data.push_back(s2l_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::AttributeSetXro()
    :
    xro(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro>())
{
    xro->parent = this;
    children["xro"] = xro;

    yang_name = "attribute-set-xro"; yang_parent_name = "attribute-set-union";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::~AttributeSetXro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::has_data() const
{
    return (xro !=  nullptr && xro->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::has_operation() const
{
    return is_set(operation)
	|| (xro !=  nullptr && xro->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-xro";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetXro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "xro")
    {
        if(xro != nullptr)
        {
            children["xro"] = xro;
        }
        else
        {
            xro = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro>();
            xro->parent = this;
            children["xro"] = xro;
        }
        return children.at("xro");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::get_children()
{
    if(children.find("xro") == children.end())
    {
        if(xro != nullptr)
        {
            children["xro"] = xro;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::Xro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
{
    yang_name = "xro"; yang_parent_name = "attribute-set-xro";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::~Xro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_data() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mutual_diversity_flag.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Xro' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mutual_diversity_flag.is_set || is_set(mutual_diversity_flag.operation)) leaf_name_data.push_back(mutual_diversity_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "xro-subobject")
    {
        for(auto const & c : xro_subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject>();
        c->parent = this;
        xro_subobject.push_back(std::move(c));
        children[segment_path] = xro_subobject.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_children()
{
    for (auto const & c : xro_subobject)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
    	,
    as_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>())
	,ipv4_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>())
	,ipv6_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>())
	,lsp_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>())
	,srlg_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>())
	,unnumbered_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>())
{
    as_subobject->parent = this;
    children["as-subobject"] = as_subobject;

    ipv4_subobject->parent = this;
    children["ipv4-subobject"] = ipv4_subobject;

    ipv6_subobject->parent = this;
    children["ipv6-subobject"] = ipv6_subobject;

    lsp_subobject->parent = this;
    children["lsp-subobject"] = lsp_subobject;

    srlg_subobject->parent = this;
    children["srlg-subobject"] = srlg_subobject;

    unnumbered_subobject->parent = this;
    children["unnumbered-subobject"] = unnumbered_subobject;

    yang_name = "xro-subobject"; yang_parent_name = "xro";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::~XroSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_data() const
{
    return type.is_set
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (as_subobject !=  nullptr && as_subobject->has_operation())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_operation())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_operation())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_operation())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_operation())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'XroSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "as-subobject")
    {
        if(as_subobject != nullptr)
        {
            children["as-subobject"] = as_subobject;
        }
        else
        {
            as_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>();
            as_subobject->parent = this;
            children["as-subobject"] = as_subobject;
        }
        return children.at("as-subobject");
    }

    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject != nullptr)
        {
            children["ipv4-subobject"] = ipv4_subobject;
        }
        else
        {
            ipv4_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>();
            ipv4_subobject->parent = this;
            children["ipv4-subobject"] = ipv4_subobject;
        }
        return children.at("ipv4-subobject");
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject != nullptr)
        {
            children["ipv6-subobject"] = ipv6_subobject;
        }
        else
        {
            ipv6_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>();
            ipv6_subobject->parent = this;
            children["ipv6-subobject"] = ipv6_subobject;
        }
        return children.at("ipv6-subobject");
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject != nullptr)
        {
            children["lsp-subobject"] = lsp_subobject;
        }
        else
        {
            lsp_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>();
            lsp_subobject->parent = this;
            children["lsp-subobject"] = lsp_subobject;
        }
        return children.at("lsp-subobject");
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject != nullptr)
        {
            children["srlg-subobject"] = srlg_subobject;
        }
        else
        {
            srlg_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>();
            srlg_subobject->parent = this;
            children["srlg-subobject"] = srlg_subobject;
        }
        return children.at("srlg-subobject");
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject != nullptr)
        {
            children["unnumbered-subobject"] = unnumbered_subobject;
        }
        else
        {
            unnumbered_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>();
            unnumbered_subobject->parent = this;
            children["unnumbered-subobject"] = unnumbered_subobject;
        }
        return children.at("unnumbered-subobject");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_children()
{
    if(children.find("as-subobject") == children.end())
    {
        if(as_subobject != nullptr)
        {
            children["as-subobject"] = as_subobject;
        }
    }

    if(children.find("ipv4-subobject") == children.end())
    {
        if(ipv4_subobject != nullptr)
        {
            children["ipv4-subobject"] = ipv4_subobject;
        }
    }

    if(children.find("ipv6-subobject") == children.end())
    {
        if(ipv6_subobject != nullptr)
        {
            children["ipv6-subobject"] = ipv6_subobject;
        }
    }

    if(children.find("lsp-subobject") == children.end())
    {
        if(lsp_subobject != nullptr)
        {
            children["lsp-subobject"] = lsp_subobject;
        }
    }

    if(children.find("srlg-subobject") == children.end())
    {
        if(srlg_subobject != nullptr)
        {
            children["srlg-subobject"] = srlg_subobject;
        }
    }

    if(children.find("unnumbered-subobject") == children.end())
    {
        if(unnumbered_subobject != nullptr)
        {
            children["unnumbered-subobject"] = unnumbered_subobject;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{
    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(prefix_len.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Subobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.operation)) leaf_name_data.push_back(prefix_len.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{
    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(prefix_len.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Subobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.operation)) leaf_name_data.push_back(prefix_len.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    interface_id{YType::uint32, "interface-id"},
    te_router_id{YType::str, "te-router-id"}
{
    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_data() const
{
    return attribute.is_set
	|| exclusion_type.is_set
	|| interface_id.is_set
	|| te_router_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(interface_id.operation)
	|| is_set(te_router_id.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnnumberedSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.operation)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (te_router_id.is_set || is_set(te_router_id.operation)) leaf_name_data.push_back(te_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
    }
    if(value_path == "te-router-id")
    {
        te_router_id = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{
    yang_name = "as-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_data() const
{
    return as_number.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::SrlgSubobject()
    :
    exclusion_type{YType::enumeration, "exclusion-type"},
    srlg_id{YType::uint32, "srlg-id"}
{
    yang_name = "srlg-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::~SrlgSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_data() const
{
    return exclusion_type.is_set
	|| srlg_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(exclusion_type.operation)
	|| is_set(srlg_id.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (srlg_id.is_set || is_set(srlg_id.operation)) leaf_name_data.push_back(srlg_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "srlg-id")
    {
        srlg_id = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::LspSubobject()
    :
    destination_node_exception{YType::boolean, "destination-node-exception"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    ignore_lsp_id{YType::boolean, "ignore-lsp-id"},
    penultimate_node_exception{YType::boolean, "penultimate-node-exception"},
    processing_node_exception{YType::boolean, "processing-node-exception"}
    	,
    fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>())
{
    fec->parent = this;
    children["fec"] = fec;

    yang_name = "lsp-subobject"; yang_parent_name = "xro-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::~LspSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_data() const
{
    return destination_node_exception.is_set
	|| exclusion_type.is_set
	|| ignore_lsp_id.is_set
	|| penultimate_node_exception.is_set
	|| processing_node_exception.is_set
	|| (fec !=  nullptr && fec->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_node_exception.operation)
	|| is_set(exclusion_type.operation)
	|| is_set(ignore_lsp_id.operation)
	|| is_set(penultimate_node_exception.operation)
	|| is_set(processing_node_exception.operation)
	|| (fec !=  nullptr && fec->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-subobject";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspSubobject' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_node_exception.is_set || is_set(destination_node_exception.operation)) leaf_name_data.push_back(destination_node_exception.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.operation)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (ignore_lsp_id.is_set || is_set(ignore_lsp_id.operation)) leaf_name_data.push_back(ignore_lsp_id.get_name_leafdata());
    if (penultimate_node_exception.is_set || is_set(penultimate_node_exception.operation)) leaf_name_data.push_back(penultimate_node_exception.get_name_leafdata());
    if (processing_node_exception.is_set || is_set(processing_node_exception.operation)) leaf_name_data.push_back(processing_node_exception.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fec")
    {
        if(fec != nullptr)
        {
            children["fec"] = fec;
        }
        else
        {
            fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>();
            fec->parent = this;
            children["fec"] = fec;
        }
        return children.at("fec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_children()
{
    if(children.find("fec") == children.end())
    {
        if(fec != nullptr)
        {
            children["fec"] = fec;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-node-exception")
    {
        destination_node_exception = value;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
    }
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id = value;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception = value;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::Fec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;
    children["fec-destination-info"] = fec_destination_info;

    yang_name = "fec"; yang_parent_name = "lsp-subobject";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::~Fec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_extended_tunnel_id.operation)
	|| is_set(fec_lsp_id.operation)
	|| is_set(fec_source.operation)
	|| is_set(fec_tunnel_id.operation)
	|| is_set(fec_vrf.operation)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fec' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            fec_destination_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>();
            fec_destination_info->parent = this;
            children["fec-destination-info"] = fec_destination_info;
        }
        return children.at("fec-destination-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_children()
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_value(const std::string & value_path, std::string value)
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

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{
    yang_name = "fec-destination-info"; yang_parent_name = "fec";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(fec_ctype.operation)
	|| is_set(fec_destination_p2mp_id.operation)
	|| is_set(p2p_lsp_destination.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_value(const std::string & value_path, std::string value)
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

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::AttributeSetP2Mpte()
    :
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    fast_reroute{YType::boolean, "fast-reroute"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    hold_priority{YType::uint8, "hold-priority"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    setup_priority{YType::uint8, "setup-priority"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    yang_name = "attribute-set-p2mpte"; yang_parent_name = "attribute-set-union";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::~AttributeSetP2Mpte()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_data() const
{
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| fast_reroute.is_set
	|| frr_bandwidth_protection.is_set
	|| hold_priority.is_set
	|| is_affinity_configured.is_set
	|| is_bandwidth_configured.is_set
	|| is_priority_configured.is_set
	|| setup_priority.is_set
	|| (affinity !=  nullptr && affinity->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_operation() const
{
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(configured_bandwidth.operation)
	|| is_set(dste_class_type.operation)
	|| is_set(fast_reroute.operation)
	|| is_set(frr_bandwidth_protection.operation)
	|| is_set(hold_priority.operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_bandwidth_configured.operation)
	|| is_set(is_priority_configured.operation)
	|| is_set(setup_priority.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2mpte";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetP2Mpte' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_bandwidth.is_set || is_set(configured_bandwidth.operation)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.operation)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (fast_reroute.is_set || is_set(fast_reroute.operation)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.operation)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.operation)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.operation)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-p2mpte";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::AttributeSetApsPp()
    :
    hold_off_time{YType::uint32, "hold-off-time"},
    path_prot_profile_type{YType::enumeration, "path-prot-profile-type"},
    protection_mode{YType::enumeration, "protection-mode"},
    protection_type{YType::enumeration, "protection-type"},
    restoration_style{YType::enumeration, "restoration-style"},
    snc_mode{YType::enumeration, "snc-mode"},
    tcm_id{YType::uint32, "tcm-id"},
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"}
    	,
    revert_schedule(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>())
{
    revert_schedule->parent = this;
    children["revert-schedule"] = revert_schedule;

    yang_name = "attribute-set-aps-pp"; yang_parent_name = "attribute-set-union";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::~AttributeSetApsPp()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::has_data() const
{
    return hold_off_time.is_set
	|| path_prot_profile_type.is_set
	|| protection_mode.is_set
	|| protection_type.is_set
	|| restoration_style.is_set
	|| snc_mode.is_set
	|| tcm_id.is_set
	|| wait_to_restore_time.is_set
	|| (revert_schedule !=  nullptr && revert_schedule->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_off_time.operation)
	|| is_set(path_prot_profile_type.operation)
	|| is_set(protection_mode.operation)
	|| is_set(protection_type.operation)
	|| is_set(restoration_style.operation)
	|| is_set(snc_mode.operation)
	|| is_set(tcm_id.operation)
	|| is_set(wait_to_restore_time.operation)
	|| (revert_schedule !=  nullptr && revert_schedule->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-aps-pp";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetApsPp' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_off_time.is_set || is_set(hold_off_time.operation)) leaf_name_data.push_back(hold_off_time.get_name_leafdata());
    if (path_prot_profile_type.is_set || is_set(path_prot_profile_type.operation)) leaf_name_data.push_back(path_prot_profile_type.get_name_leafdata());
    if (protection_mode.is_set || is_set(protection_mode.operation)) leaf_name_data.push_back(protection_mode.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.operation)) leaf_name_data.push_back(protection_type.get_name_leafdata());
    if (restoration_style.is_set || is_set(restoration_style.operation)) leaf_name_data.push_back(restoration_style.get_name_leafdata());
    if (snc_mode.is_set || is_set(snc_mode.operation)) leaf_name_data.push_back(snc_mode.get_name_leafdata());
    if (tcm_id.is_set || is_set(tcm_id.operation)) leaf_name_data.push_back(tcm_id.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.operation)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "revert-schedule")
    {
        if(revert_schedule != nullptr)
        {
            children["revert-schedule"] = revert_schedule;
        }
        else
        {
            revert_schedule = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>();
            revert_schedule->parent = this;
            children["revert-schedule"] = revert_schedule;
        }
        return children.at("revert-schedule");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::get_children()
{
    if(children.find("revert-schedule") == children.end())
    {
        if(revert_schedule != nullptr)
        {
            children["revert-schedule"] = revert_schedule;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-off-time")
    {
        hold_off_time = value;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type = value;
    }
    if(value_path == "protection-mode")
    {
        protection_mode = value;
    }
    if(value_path == "protection-type")
    {
        protection_type = value;
    }
    if(value_path == "restoration-style")
    {
        restoration_style = value;
    }
    if(value_path == "snc-mode")
    {
        snc_mode = value;
    }
    if(value_path == "tcm-id")
    {
        tcm_id = value;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::RevertSchedule()
    :
    duration{YType::uint32, "duration"},
    max_tries{YType::uint32, "max-tries"},
    schedule_date{YType::uint32, "schedule-date"},
    schedule_frequency{YType::enumeration, "schedule-frequency"},
    schedulename{YType::str, "schedulename"}
{
    yang_name = "revert-schedule"; yang_parent_name = "attribute-set-aps-pp";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::~RevertSchedule()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_data() const
{
    return duration.is_set
	|| max_tries.is_set
	|| schedule_date.is_set
	|| schedule_frequency.is_set
	|| schedulename.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_operation() const
{
    return is_set(operation)
	|| is_set(duration.operation)
	|| is_set(max_tries.operation)
	|| is_set(schedule_date.operation)
	|| is_set(schedule_frequency.operation)
	|| is_set(schedulename.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RevertSchedule' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.operation)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (max_tries.is_set || is_set(max_tries.operation)) leaf_name_data.push_back(max_tries.get_name_leafdata());
    if (schedule_date.is_set || is_set(schedule_date.operation)) leaf_name_data.push_back(schedule_date.get_name_leafdata());
    if (schedule_frequency.is_set || is_set(schedule_frequency.operation)) leaf_name_data.push_back(schedule_frequency.get_name_leafdata());
    if (schedulename.is_set || is_set(schedulename.operation)) leaf_name_data.push_back(schedulename.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duration")
    {
        duration = value;
    }
    if(value_path == "max-tries")
    {
        max_tries = value;
    }
    if(value_path == "schedule-date")
    {
        schedule_date = value;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency = value;
    }
    if(value_path == "schedulename")
    {
        schedulename = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::AttributeSetP2PTe()
    :
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_path_select_configured{YType::boolean, "is-path-select-configured"},
    is_path_selection_metric_configured{YType::boolean, "is-path-selection-metric-configured"},
    is_path_selection_segment_routing_adjacency_protection_configured{YType::boolean, "is-path-selection-segment-routing-adjacency-protection-configured"},
    is_path_selection_segment_routing_margin_configured{YType::boolean, "is-path-selection-segment-routing-margin-configured"},
    is_path_selection_segment_routing_margin_relative{YType::boolean, "is-path-selection-segment-routing-margin-relative"},
    is_path_selection_segment_routing_segment_limit_configured{YType::boolean, "is-path-selection-segment-routing-segment-limit-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    is_prepend_list_configured{YType::boolean, "is-prepend-list-configured"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_selection_invalidation_action{YType::enumeration, "path-selection-invalidation-action"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    path_selection_segment_routing_adjacency_protection{YType::enumeration, "path-selection-segment-routing-adjacency-protection"},
    path_selection_segment_routing_margin{YType::uint32, "path-selection-segment-routing-margin"},
    path_selection_segment_routing_segment_limit{YType::uint32, "path-selection-segment-routing-segment-limit"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    tunnel_id{YType::uint16, "tunnel-id"}
    	,
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>())
	,logging(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>())
	,prepend_list(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    logging->parent = this;
    children["logging"] = logging;

    prepend_list->parent = this;
    children["prepend-list"] = prepend_list;

    yang_name = "attribute-set-p2p-te"; yang_parent_name = "attribute-set-union";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::~AttributeSetP2PTe()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_data() const
{
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_affinity_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_path_select_configured.is_set
	|| is_path_selection_metric_configured.is_set
	|| is_path_selection_segment_routing_adjacency_protection_configured.is_set
	|| is_path_selection_segment_routing_margin_configured.is_set
	|| is_path_selection_segment_routing_margin_relative.is_set
	|| is_path_selection_segment_routing_segment_limit_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| is_prepend_list_configured.is_set
	|| path_invalidation_timeout.is_set
	|| path_selection_invalidation_action.is_set
	|| path_selection_metric.is_set
	|| path_selection_segment_routing_adjacency_protection.is_set
	|| path_selection_segment_routing_margin.is_set
	|| path_selection_segment_routing_segment_limit.is_set
	|| pcebd_group_id.is_set
	|| pcebd_source_address.is_set
	|| pcedp_group_id.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (prepend_list !=  nullptr && prepend_list->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_operation() const
{
    for (auto const & leaf : tunnel_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(is_affinity_configured.operation)
	|| is_set(is_path_invalidation_action_configured.operation)
	|| is_set(is_path_invalidation_timeout_configured.operation)
	|| is_set(is_path_select_configured.operation)
	|| is_set(is_path_selection_metric_configured.operation)
	|| is_set(is_path_selection_segment_routing_adjacency_protection_configured.operation)
	|| is_set(is_path_selection_segment_routing_margin_configured.operation)
	|| is_set(is_path_selection_segment_routing_margin_relative.operation)
	|| is_set(is_path_selection_segment_routing_segment_limit_configured.operation)
	|| is_set(is_pce_configured.operation)
	|| is_set(is_pce_disj_group_id_configured.operation)
	|| is_set(is_pce_disj_source_configured.operation)
	|| is_set(is_pce_disj_type_configured.operation)
	|| is_set(is_pceb_dj_source_configured.operation)
	|| is_set(is_pcebd_group_id_configured.operation)
	|| is_set(is_prepend_list_configured.operation)
	|| is_set(path_invalidation_timeout.operation)
	|| is_set(path_selection_invalidation_action.operation)
	|| is_set(path_selection_metric.operation)
	|| is_set(path_selection_segment_routing_adjacency_protection.operation)
	|| is_set(path_selection_segment_routing_margin.operation)
	|| is_set(path_selection_segment_routing_segment_limit.operation)
	|| is_set(pcebd_group_id.operation)
	|| is_set(pcebd_source_address.operation)
	|| is_set(pcedp_group_id.operation)
	|| is_set(pcedp_source_address.operation)
	|| is_set(pcedp_type.operation)
	|| is_set(tunnel_id.operation)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (prepend_list !=  nullptr && prepend_list->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2p-te";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeSetP2PTe' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_affinity_configured.is_set || is_set(is_affinity_configured.operation)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.operation)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.operation)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_path_select_configured.is_set || is_set(is_path_select_configured.operation)) leaf_name_data.push_back(is_path_select_configured.get_name_leafdata());
    if (is_path_selection_metric_configured.is_set || is_set(is_path_selection_metric_configured.operation)) leaf_name_data.push_back(is_path_selection_metric_configured.get_name_leafdata());
    if (is_path_selection_segment_routing_adjacency_protection_configured.is_set || is_set(is_path_selection_segment_routing_adjacency_protection_configured.operation)) leaf_name_data.push_back(is_path_selection_segment_routing_adjacency_protection_configured.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_configured.is_set || is_set(is_path_selection_segment_routing_margin_configured.operation)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_configured.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_relative.is_set || is_set(is_path_selection_segment_routing_margin_relative.operation)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_relative.get_name_leafdata());
    if (is_path_selection_segment_routing_segment_limit_configured.is_set || is_set(is_path_selection_segment_routing_segment_limit_configured.operation)) leaf_name_data.push_back(is_path_selection_segment_routing_segment_limit_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.operation)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.operation)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.operation)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.operation)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.operation)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.operation)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (is_prepend_list_configured.is_set || is_set(is_prepend_list_configured.operation)) leaf_name_data.push_back(is_prepend_list_configured.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.operation)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_selection_invalidation_action.is_set || is_set(path_selection_invalidation_action.operation)) leaf_name_data.push_back(path_selection_invalidation_action.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.operation)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (path_selection_segment_routing_adjacency_protection.is_set || is_set(path_selection_segment_routing_adjacency_protection.operation)) leaf_name_data.push_back(path_selection_segment_routing_adjacency_protection.get_name_leafdata());
    if (path_selection_segment_routing_margin.is_set || is_set(path_selection_segment_routing_margin.operation)) leaf_name_data.push_back(path_selection_segment_routing_margin.get_name_leafdata());
    if (path_selection_segment_routing_segment_limit.is_set || is_set(path_selection_segment_routing_segment_limit.operation)) leaf_name_data.push_back(path_selection_segment_routing_segment_limit.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.operation)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.operation)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.operation)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.operation)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.operation)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());

    auto tunnel_id_name_datas = tunnel_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tunnel_id_name_datas.begin(), tunnel_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    if(child_yang_name == "prepend-list")
    {
        if(prepend_list != nullptr)
        {
            children["prepend-list"] = prepend_list;
        }
        else
        {
            prepend_list = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>();
            prepend_list->parent = this;
            children["prepend-list"] = prepend_list;
        }
        return children.at("prepend-list");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    if(children.find("prepend-list") == children.end())
    {
        if(prepend_list != nullptr)
        {
            children["prepend-list"] = prepend_list;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
    }
    if(value_path == "is-path-select-configured")
    {
        is_path_select_configured = value;
    }
    if(value_path == "is-path-selection-metric-configured")
    {
        is_path_selection_metric_configured = value;
    }
    if(value_path == "is-path-selection-segment-routing-adjacency-protection-configured")
    {
        is_path_selection_segment_routing_adjacency_protection_configured = value;
    }
    if(value_path == "is-path-selection-segment-routing-margin-configured")
    {
        is_path_selection_segment_routing_margin_configured = value;
    }
    if(value_path == "is-path-selection-segment-routing-margin-relative")
    {
        is_path_selection_segment_routing_margin_relative = value;
    }
    if(value_path == "is-path-selection-segment-routing-segment-limit-configured")
    {
        is_path_selection_segment_routing_segment_limit_configured = value;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
    }
    if(value_path == "is-prepend-list-configured")
    {
        is_prepend_list_configured = value;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
    }
    if(value_path == "path-selection-invalidation-action")
    {
        path_selection_invalidation_action = value;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection = value;
    }
    if(value_path == "path-selection-segment-routing-margin")
    {
        path_selection_segment_routing_margin = value;
    }
    if(value_path == "path-selection-segment-routing-segment-limit")
    {
        path_selection_segment_routing_segment_limit = value;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.append(value);
    }
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Affinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NamedAffinity' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::Logging()
    :
    all_logging_enabled{YType::boolean, "all-logging-enabled"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"}
{
    yang_name = "logging"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::~Logging()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_data() const
{
    return all_logging_enabled.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| lsp_re_opt.is_set
	|| lsp_re_route.is_set
	|| lsp_state.is_set
	|| s2l_state.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(all_logging_enabled.operation)
	|| is_set(lsp_bandwidth_change.operation)
	|| is_set(lsp_insufficient_bw.operation)
	|| is_set(lsp_pcalc_failure_logging_enabled.operation)
	|| is_set(lsp_re_opt.operation)
	|| is_set(lsp_re_route.operation)
	|| is_set(lsp_state.operation)
	|| is_set(s2l_state.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logging' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.operation)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.operation)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.operation)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.operation)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.operation)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.operation)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.operation)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.operation)) leaf_name_data.push_back(s2l_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependList()
{
    yang_name = "prepend-list"; yang_parent_name = "attribute-set-p2p-te";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::~PrependList()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_data() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_operation() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-list";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrependList' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prepend-entry")
    {
        for(auto const & c : prepend_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry>();
        c->parent = this;
        prepend_entry.push_back(std::move(c));
        children[segment_path] = prepend_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_children()
{
    for (auto const & c : prepend_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::PrependEntry()
    :
    index_{YType::uint32, "index"},
    next_label{YType::uint32, "next-label"},
    type{YType::enumeration, "type"}
{
    yang_name = "prepend-entry"; yang_parent_name = "prepend-list";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::~PrependEntry()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_data() const
{
    return index_.is_set
	|| next_label.is_set
	|| type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(next_label.operation)
	|| is_set(type.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-entry";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrependEntry' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (next_label.is_set || is_set(next_label.operation)) leaf_name_data.push_back(next_label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "next-label")
    {
        next_label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::PathCalculationError()
    :
    error_message{YType::str, "error-message"},
    log_time{YType::uint32, "log-time"},
    lsp_mode{YType::enumeration, "lsp-mode"}
{
    yang_name = "path-calculation-error"; yang_parent_name = "path-option";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::~PathCalculationError()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::has_data() const
{
    return error_message.is_set
	|| log_time.is_set
	|| lsp_mode.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::has_operation() const
{
    return is_set(operation)
	|| is_set(error_message.operation)
	|| is_set(log_time.operation)
	|| is_set(lsp_mode.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-calculation-error";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathCalculationError' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.operation)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.operation)) leaf_name_data.push_back(log_time.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.operation)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error-message")
    {
        error_message = value;
    }
    if(value_path == "log-time")
    {
        log_time = value;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::RemergeError()
    :
    error_message{YType::str, "error-message"},
    log_time{YType::uint32, "log-time"},
    lsp_mode{YType::enumeration, "lsp-mode"}
{
    yang_name = "remerge-error"; yang_parent_name = "path-option";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::~RemergeError()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::has_data() const
{
    return error_message.is_set
	|| log_time.is_set
	|| lsp_mode.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::has_operation() const
{
    return is_set(operation)
	|| is_set(error_message.operation)
	|| is_set(log_time.operation)
	|| is_set(lsp_mode.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remerge-error";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemergeError' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.operation)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.operation)) leaf_name_data.push_back(log_time.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.operation)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error-message")
    {
        error_message = value;
    }
    if(value_path == "log-time")
    {
        log_time = value;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
    }
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::SignallingError()
    :
    error{YType::uint8, "error"},
    error_message{YType::str, "error-message"},
    error_node{YType::uint32, "error-node"},
    log_time{YType::uint32, "log-time"},
    lsp_mode{YType::enumeration, "lsp-mode"},
    reverse_lsp{YType::boolean, "reverse-lsp"},
    signalling_lsp_id{YType::uint16, "signalling-lsp-id"},
    sub_code{YType::uint16, "sub-code"}
{
    yang_name = "signalling-error"; yang_parent_name = "path-option";
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::~SignallingError()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::has_data() const
{
    return error.is_set
	|| error_message.is_set
	|| error_node.is_set
	|| log_time.is_set
	|| lsp_mode.is_set
	|| reverse_lsp.is_set
	|| signalling_lsp_id.is_set
	|| sub_code.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::has_operation() const
{
    return is_set(operation)
	|| is_set(error.operation)
	|| is_set(error_message.operation)
	|| is_set(error_node.operation)
	|| is_set(log_time.operation)
	|| is_set(lsp_mode.operation)
	|| is_set(reverse_lsp.operation)
	|| is_set(signalling_lsp_id.operation)
	|| is_set(sub_code.operation);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling-error";

    return path_buffer.str();

}

EntityPath MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SignallingError' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (error_message.is_set || is_set(error_message.operation)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (error_node.is_set || is_set(error_node.operation)) leaf_name_data.push_back(error_node.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.operation)) leaf_name_data.push_back(log_time.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.operation)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());
    if (reverse_lsp.is_set || is_set(reverse_lsp.operation)) leaf_name_data.push_back(reverse_lsp.get_name_leafdata());
    if (signalling_lsp_id.is_set || is_set(signalling_lsp_id.operation)) leaf_name_data.push_back(signalling_lsp_id.get_name_leafdata());
    if (sub_code.is_set || is_set(sub_code.operation)) leaf_name_data.push_back(sub_code.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::get_children()
{
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "error-message")
    {
        error_message = value;
    }
    if(value_path == "error-node")
    {
        error_node = value;
    }
    if(value_path == "log-time")
    {
        log_time = value;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
    }
    if(value_path == "reverse-lsp")
    {
        reverse_lsp = value;
    }
    if(value_path == "signalling-lsp-id")
    {
        signalling_lsp_id = value;
    }
    if(value_path == "sub-code")
    {
        sub_code = value;
    }
}

MplsTe::TopologyNodes::TopologyNodes()
{
    yang_name = "topology-nodes"; yang_parent_name = "mpls-te";
}

MplsTe::TopologyNodes::~TopologyNodes()
{
}

bool MplsTe::TopologyNodes::has_data() const
{
    for (std::size_t index=0; index<topology_node.size(); index++)
    {
        if(topology_node[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::TopologyNodes::has_operation() const
{
    for (std::size_t index=0; index<topology_node.size(); index++)
    {
        if(topology_node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::TopologyNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-nodes";

    return path_buffer.str();

}

EntityPath MplsTe::TopologyNodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::TopologyNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "topology-node")
    {
        for(auto const & c : topology_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::TopologyNodes::TopologyNode>();
        c->parent = this;
        topology_node.push_back(std::move(c));
        children[segment_path] = topology_node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TopologyNodes::get_children()
{
    for (auto const & c : topology_node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::TopologyNodes::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::TopologyNodes::TopologyNode::TopologyNode()
    :
    area{YType::int32, "area"},
    igp_id{YType::str, "igp-id"},
    igp_node_id{YType::str, "igp-node-id"},
    protocol{YType::enumeration, "protocol"},
    topology_node_type{YType::enumeration, "topology-node-type"},
    topology_node_overloaded{YType::boolean, "topology-node-overloaded"},
    topology_node_te_router_id{YType::str, "topology-node-te-router-id"}
    	,
    topology_node_sid_and_srbg(std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg>())
{
    topology_node_sid_and_srbg->parent = this;
    children["topology-node-sid-and-srbg"] = topology_node_sid_and_srbg;

    yang_name = "topology-node"; yang_parent_name = "topology-nodes";
}

MplsTe::TopologyNodes::TopologyNode::~TopologyNode()
{
}

bool MplsTe::TopologyNodes::TopologyNode::has_data() const
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

bool MplsTe::TopologyNodes::TopologyNode::has_operation() const
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

std::string MplsTe::TopologyNodes::TopologyNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-node" <<"[area='" <<area <<"']" <<"[igp-id='" <<igp_id <<"']" <<"[igp-node-id='" <<igp_node_id <<"']" <<"[protocol='" <<protocol <<"']" <<"[topology-node-type='" <<topology_node_type <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::TopologyNodes::TopologyNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology-nodes/" << get_segment_path();
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

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink>();
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
            topology_node_sid_and_srbg = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg>();
            topology_node_sid_and_srbg->parent = this;
            children["topology-node-sid-and-srbg"] = topology_node_sid_and_srbg;
        }
        return children.at("topology-node-sid-and-srbg");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TopologyNodes::TopologyNode::get_children()
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

void MplsTe::TopologyNodes::TopologyNode::set_value(const std::string & value_path, std::string value)
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

MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::TopologyNodeSidAndSrbg()
    :
    segment_id{YType::uint32, "segment-id"},
    segment_id_local_absolute_value{YType::uint32, "segment-id-local-absolute-value"},
    srgb_size{YType::uint32, "srgb-size"},
    srgb_start{YType::uint32, "srgb-start"}
{
    yang_name = "topology-node-sid-and-srbg"; yang_parent_name = "topology-node";
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::~TopologyNodeSidAndSrbg()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::has_data() const
{
    return segment_id.is_set
	|| segment_id_local_absolute_value.is_set
	|| srgb_size.is_set
	|| srgb_start.is_set;
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::has_operation() const
{
    return is_set(operation)
	|| is_set(segment_id.operation)
	|| is_set(segment_id_local_absolute_value.operation)
	|| is_set(srgb_size.operation)
	|| is_set(srgb_start.operation);
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-node-sid-and-srbg";

    return path_buffer.str();

}

EntityPath MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::get_children()
{
    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::set_value(const std::string & value_path, std::string value)
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

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyNodeLink()
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
    odu_link_capabilities(std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities>())
	,topology_link_bandwidth(std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth>())
{
    odu_link_capabilities->parent = this;
    children["odu-link-capabilities"] = odu_link_capabilities;

    topology_link_bandwidth->parent = this;
    children["topology-link-bandwidth"] = topology_link_bandwidth;

    yang_name = "topology-node-link"; yang_parent_name = "topology-node";
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::~TopologyNodeLink()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::has_data() const
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

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::has_operation() const
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

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-node-link";

    return path_buffer.str();

}

EntityPath MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid>();
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
            odu_link_capabilities = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities>();
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
        auto c = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup>();
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
            topology_link_bandwidth = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth>();
            topology_link_bandwidth->parent = this;
            children["topology-link-bandwidth"] = topology_link_bandwidth;
        }
        return children.at("topology-link-bandwidth");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::get_children()
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

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::set_value(const std::string & value_path, std::string value)
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

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidth()
    :
    bandwidth_migration_mode{YType::enumeration, "bandwidth-migration-mode"}
    	,
    topology_link_bandwidth_prestandard(std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard>())
	,topology_link_bandwidth_standard(std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard>())
{
    topology_link_bandwidth_prestandard->parent = this;
    children["topology-link-bandwidth-prestandard"] = topology_link_bandwidth_prestandard;

    topology_link_bandwidth_standard->parent = this;
    children["topology-link-bandwidth-standard"] = topology_link_bandwidth_standard;

    yang_name = "topology-link-bandwidth"; yang_parent_name = "topology-node-link";
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::~TopologyLinkBandwidth()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::has_data() const
{
    return bandwidth_migration_mode.is_set
	|| (topology_link_bandwidth_prestandard !=  nullptr && topology_link_bandwidth_prestandard->has_data())
	|| (topology_link_bandwidth_standard !=  nullptr && topology_link_bandwidth_standard->has_data());
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_migration_mode.operation)
	|| (topology_link_bandwidth_prestandard !=  nullptr && topology_link_bandwidth_prestandard->has_operation())
	|| (topology_link_bandwidth_standard !=  nullptr && topology_link_bandwidth_standard->has_operation());
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-bandwidth";

    return path_buffer.str();

}

EntityPath MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            topology_link_bandwidth_prestandard = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard>();
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
            topology_link_bandwidth_standard = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard>();
            topology_link_bandwidth_standard->parent = this;
            children["topology-link-bandwidth-standard"] = topology_link_bandwidth_standard;
        }
        return children.at("topology-link-bandwidth-standard");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::get_children()
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

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-migration-mode")
    {
        bandwidth_migration_mode = value;
    }
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkBandwidthPrestandard()
    :
    topology_link_prestandard_bandwidth_physical{YType::uint32, "topology-link-prestandard-bandwidth-physical"},
    topology_link_prestandard_bandwidth_reservation_global{YType::uint32, "topology-link-prestandard-bandwidth-reservation-global"},
    topology_link_prestandard_bandwidth_reservation_subpool{YType::uint32, "topology-link-prestandard-bandwidth-reservation-subpool"}
    	,
    topology_link_prestandard_bandwidth_detail(std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail>())
{
    topology_link_prestandard_bandwidth_detail->parent = this;
    children["topology-link-prestandard-bandwidth-detail"] = topology_link_prestandard_bandwidth_detail;

    yang_name = "topology-link-bandwidth-prestandard"; yang_parent_name = "topology-link-bandwidth";
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::~TopologyLinkBandwidthPrestandard()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::has_data() const
{
    return topology_link_prestandard_bandwidth_physical.is_set
	|| topology_link_prestandard_bandwidth_reservation_global.is_set
	|| topology_link_prestandard_bandwidth_reservation_subpool.is_set
	|| (topology_link_prestandard_bandwidth_detail !=  nullptr && topology_link_prestandard_bandwidth_detail->has_data());
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::has_operation() const
{
    return is_set(operation)
	|| is_set(topology_link_prestandard_bandwidth_physical.operation)
	|| is_set(topology_link_prestandard_bandwidth_reservation_global.operation)
	|| is_set(topology_link_prestandard_bandwidth_reservation_subpool.operation)
	|| (topology_link_prestandard_bandwidth_detail !=  nullptr && topology_link_prestandard_bandwidth_detail->has_operation());
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-bandwidth-prestandard";

    return path_buffer.str();

}

EntityPath MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            topology_link_prestandard_bandwidth_detail = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail>();
            topology_link_prestandard_bandwidth_detail->parent = this;
            children["topology-link-prestandard-bandwidth-detail"] = topology_link_prestandard_bandwidth_detail;
        }
        return children.at("topology-link-prestandard-bandwidth-detail");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::get_children()
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

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::set_value(const std::string & value_path, std::string value)
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

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthDetail()
    :
    topology_link_prestandard_bandwidth_allocated{YType::uint32, "topology-link-prestandard-bandwidth-allocated"},
    topology_link_prestandard_bandwidth_available_global{YType::uint32, "topology-link-prestandard-bandwidth-available-global"},
    topology_link_prestandard_bandwidth_available_subpool{YType::uint32, "topology-link-prestandard-bandwidth-available-subpool"}
{
    yang_name = "topology-link-prestandard-bandwidth-detail"; yang_parent_name = "topology-link-bandwidth-prestandard";
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::~TopologyLinkPrestandardBandwidthDetail()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::has_data() const
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

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::has_operation() const
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

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-prestandard-bandwidth-detail";

    return path_buffer.str();

}

EntityPath MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::get_children()
{
    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::set_value(const std::string & value_path, std::string value)
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

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopologyLinkBandwidthStandard()
    :
    topo_link_std_bw_physical{YType::uint32, "topo-link-std-bw-physical"},
    topo_link_std_bw_res_max{YType::uint32, "topo-link-std-bw-res-max"},
    topo_link_std_bw_res_pool0{YType::uint32, "topo-link-std-bw-res-pool0"},
    topo_link_std_bw_res_pool1{YType::uint32, "topo-link-std-bw-res-pool1"}
    	,
    topo_link_std_bw_detail(std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail>())
{
    topo_link_std_bw_detail->parent = this;
    children["topo-link-std-bw-detail"] = topo_link_std_bw_detail;

    yang_name = "topology-link-bandwidth-standard"; yang_parent_name = "topology-link-bandwidth";
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::~TopologyLinkBandwidthStandard()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::has_data() const
{
    return topo_link_std_bw_physical.is_set
	|| topo_link_std_bw_res_max.is_set
	|| topo_link_std_bw_res_pool0.is_set
	|| topo_link_std_bw_res_pool1.is_set
	|| (topo_link_std_bw_detail !=  nullptr && topo_link_std_bw_detail->has_data());
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::has_operation() const
{
    return is_set(operation)
	|| is_set(topo_link_std_bw_physical.operation)
	|| is_set(topo_link_std_bw_res_max.operation)
	|| is_set(topo_link_std_bw_res_pool0.operation)
	|| is_set(topo_link_std_bw_res_pool1.operation)
	|| (topo_link_std_bw_detail !=  nullptr && topo_link_std_bw_detail->has_operation());
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-bandwidth-standard";

    return path_buffer.str();

}

EntityPath MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            topo_link_std_bw_detail = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail>();
            topo_link_std_bw_detail->parent = this;
            children["topo-link-std-bw-detail"] = topo_link_std_bw_detail;
        }
        return children.at("topo-link-std-bw-detail");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::get_children()
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

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::set_value(const std::string & value_path, std::string value)
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

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwDetail()
    :
    topo_link_std_bw_allocated{YType::uint32, "topo-link-std-bw-allocated"},
    topo_link_std_bw_available{YType::uint32, "topo-link-std-bw-available"}
{
    yang_name = "topo-link-std-bw-detail"; yang_parent_name = "topology-link-bandwidth-standard";
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::~TopoLinkStdBwDetail()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::has_data() const
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

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::has_operation() const
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

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topo-link-std-bw-detail";

    return path_buffer.str();

}

EntityPath MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::get_children()
{
    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::set_value(const std::string & value_path, std::string value)
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

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduLinkCapabilities()
    :
    max_lsp_bandwidth{YType::uint32, "max-lsp-bandwidth"}
{
    yang_name = "odu-link-capabilities"; yang_parent_name = "topology-node-link";
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::~OduLinkCapabilities()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::has_data() const
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

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::has_operation() const
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

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-link-capabilities";

    return path_buffer.str();

}

EntityPath MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability>();
        c->parent = this;
        odu_capability.push_back(std::move(c));
        children[segment_path] = odu_capability.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::get_children()
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

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-lsp-bandwidth")
    {
        max_lsp_bandwidth.append(value);
    }
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::OduCapability()
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
    bandwidth_info(std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo>())
{
    bandwidth_info->parent = this;
    children["bandwidth-info"] = bandwidth_info;

    yang_name = "odu-capability"; yang_parent_name = "odu-link-capabilities";
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::~OduCapability()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::has_data() const
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

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::has_operation() const
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

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-capability";

    return path_buffer.str();

}

EntityPath MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            bandwidth_info = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo>();
            bandwidth_info->parent = this;
            children["bandwidth-info"] = bandwidth_info;
        }
        return children.at("bandwidth-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::get_children()
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

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::set_value(const std::string & value_path, std::string value)
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

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::BandwidthInfo()
    :
    type{YType::enumeration, "type"}
    	,
    fixed(std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed>())
	,flex(std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex>())
{
    fixed->parent = this;
    children["fixed"] = fixed;

    flex->parent = this;
    children["flex"] = flex;

    yang_name = "bandwidth-info"; yang_parent_name = "odu-capability";
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::~BandwidthInfo()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_data() const
{
    return type.is_set
	|| (fixed !=  nullptr && fixed->has_data())
	|| (flex !=  nullptr && flex->has_data());
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (fixed !=  nullptr && fixed->has_operation())
	|| (flex !=  nullptr && flex->has_operation());
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-info";

    return path_buffer.str();

}

EntityPath MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            fixed = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed>();
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
            flex = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex>();
            flex->parent = this;
            children["flex"] = flex;
        }
        return children.at("flex");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_children()
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

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::Fixed()
    :
    maximum_od_us{YType::uint8, "maximum-od-us"},
    unreserved_od_us{YType::uint8, "unreserved-od-us"}
{
    yang_name = "fixed"; yang_parent_name = "bandwidth-info";
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::~Fixed()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_data() const
{
    return maximum_od_us.is_set
	|| unreserved_od_us.is_set;
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_od_us.operation)
	|| is_set(unreserved_od_us.operation);
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed";

    return path_buffer.str();

}

EntityPath MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_children()
{
    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::set_value(const std::string & value_path, std::string value)
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

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::Flex()
    :
    max_bandwidth{YType::uint32, "max-bandwidth"},
    max_lsp_bandwidth{YType::uint32, "max-lsp-bandwidth"},
    unreserved_bandwidth{YType::uint32, "unreserved-bandwidth"}
{
    yang_name = "flex"; yang_parent_name = "bandwidth-info";
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::~Flex()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_data() const
{
    return max_bandwidth.is_set
	|| max_lsp_bandwidth.is_set
	|| unreserved_bandwidth.is_set;
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_operation() const
{
    return is_set(operation)
	|| is_set(max_bandwidth.operation)
	|| is_set(max_lsp_bandwidth.operation)
	|| is_set(unreserved_bandwidth.operation);
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex";

    return path_buffer.str();

}

EntityPath MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_children()
{
    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::set_value(const std::string & value_path, std::string value)
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

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{
    yang_name = "shared-risk-link-group"; yang_parent_name = "topology-node-link";
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(shared_risk_group.operation)
	|| is_set(srlg_name.operation);
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";

    return path_buffer.str();

}

EntityPath MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::get_children()
{
    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::set_value(const std::string & value_path, std::string value)
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

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::AdjacencySid()
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

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::~AdjacencySid()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::has_data() const
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

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::has_operation() const
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

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";

    return path_buffer.str();

}

EntityPath MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::get_children()
{
    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::set_value(const std::string & value_path, std::string value)
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

MplsTe::AnnounceTunnelsInfo::AnnounceTunnelsInfo()
    :
    all_autoroute_table(std::make_shared<MplsTe::AnnounceTunnelsInfo::AllAutorouteTable>())
	,autoroute_announce_table(std::make_shared<MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable>())
{
    all_autoroute_table->parent = this;
    children["all-autoroute-table"] = all_autoroute_table;

    autoroute_announce_table->parent = this;
    children["autoroute-announce-table"] = autoroute_announce_table;

    yang_name = "announce-tunnels-info"; yang_parent_name = "mpls-te";
}

MplsTe::AnnounceTunnelsInfo::~AnnounceTunnelsInfo()
{
}

bool MplsTe::AnnounceTunnelsInfo::has_data() const
{
    return (all_autoroute_table !=  nullptr && all_autoroute_table->has_data())
	|| (autoroute_announce_table !=  nullptr && autoroute_announce_table->has_data());
}

bool MplsTe::AnnounceTunnelsInfo::has_operation() const
{
    return is_set(operation)
	|| (all_autoroute_table !=  nullptr && all_autoroute_table->has_operation())
	|| (autoroute_announce_table !=  nullptr && autoroute_announce_table->has_operation());
}

std::string MplsTe::AnnounceTunnelsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce-tunnels-info";

    return path_buffer.str();

}

EntityPath MplsTe::AnnounceTunnelsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AnnounceTunnelsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "all-autoroute-table")
    {
        if(all_autoroute_table != nullptr)
        {
            children["all-autoroute-table"] = all_autoroute_table;
        }
        else
        {
            all_autoroute_table = std::make_shared<MplsTe::AnnounceTunnelsInfo::AllAutorouteTable>();
            all_autoroute_table->parent = this;
            children["all-autoroute-table"] = all_autoroute_table;
        }
        return children.at("all-autoroute-table");
    }

    if(child_yang_name == "autoroute-announce-table")
    {
        if(autoroute_announce_table != nullptr)
        {
            children["autoroute-announce-table"] = autoroute_announce_table;
        }
        else
        {
            autoroute_announce_table = std::make_shared<MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable>();
            autoroute_announce_table->parent = this;
            children["autoroute-announce-table"] = autoroute_announce_table;
        }
        return children.at("autoroute-announce-table");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AnnounceTunnelsInfo::get_children()
{
    if(children.find("all-autoroute-table") == children.end())
    {
        if(all_autoroute_table != nullptr)
        {
            children["all-autoroute-table"] = all_autoroute_table;
        }
    }

    if(children.find("autoroute-announce-table") == children.end())
    {
        if(autoroute_announce_table != nullptr)
        {
            children["autoroute-announce-table"] = autoroute_announce_table;
        }
    }

    return children;
}

void MplsTe::AnnounceTunnelsInfo::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AutorouteAnnounceTable()
{
    yang_name = "autoroute-announce-table"; yang_parent_name = "announce-tunnels-info";
}

MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::~AutorouteAnnounceTable()
{
}

bool MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::has_data() const
{
    for (std::size_t index=0; index<announce_dest.size(); index++)
    {
        if(announce_dest[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::has_operation() const
{
    for (std::size_t index=0; index<announce_dest.size(); index++)
    {
        if(announce_dest[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute-announce-table";

    return path_buffer.str();

}

EntityPath MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/announce-tunnels-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "announce-dest")
    {
        for(auto const & c : announce_dest)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest>();
        c->parent = this;
        announce_dest.push_back(std::move(c));
        children[segment_path] = announce_dest.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::get_children()
{
    for (auto const & c : announce_dest)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::AnnounceDest()
    :
    area{YType::int32, "area"},
    destination_address{YType::str, "destination-address"},
    igp_id{YType::str, "igp-id"},
    protocol{YType::enumeration, "protocol"},
    announced_tunnels_count{YType::uint16, "announced-tunnels-count"},
    area_format{YType::enumeration, "area-format"},
    autorouted_tunnels_count{YType::uint16, "autorouted-tunnels-count"},
    destination{YType::str, "destination"},
    forwarding_adjacency_tunnels_count{YType::uint16, "forwarding-adjacency-tunnels-count"},
    igp_area{YType::uint32, "igp-area"},
    igp_instance{YType::str, "igp-instance"},
    igp_type{YType::enumeration, "igp-type"}
{
    yang_name = "announce-dest"; yang_parent_name = "autoroute-announce-table";
}

MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::~AnnounceDest()
{
}

bool MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::has_data() const
{
    for (std::size_t index=0; index<total_tunnel.size(); index++)
    {
        if(total_tunnel[index]->has_data())
            return true;
    }
    return area.is_set
	|| destination_address.is_set
	|| igp_id.is_set
	|| protocol.is_set
	|| announced_tunnels_count.is_set
	|| area_format.is_set
	|| autorouted_tunnels_count.is_set
	|| destination.is_set
	|| forwarding_adjacency_tunnels_count.is_set
	|| igp_area.is_set
	|| igp_instance.is_set
	|| igp_type.is_set;
}

bool MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::has_operation() const
{
    for (std::size_t index=0; index<total_tunnel.size(); index++)
    {
        if(total_tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(area.operation)
	|| is_set(destination_address.operation)
	|| is_set(igp_id.operation)
	|| is_set(protocol.operation)
	|| is_set(announced_tunnels_count.operation)
	|| is_set(area_format.operation)
	|| is_set(autorouted_tunnels_count.operation)
	|| is_set(destination.operation)
	|| is_set(forwarding_adjacency_tunnels_count.operation)
	|| is_set(igp_area.operation)
	|| is_set(igp_instance.operation)
	|| is_set(igp_type.operation);
}

std::string MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce-dest" <<"[area='" <<area <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[igp-id='" <<igp_id <<"']" <<"[protocol='" <<protocol <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/announce-tunnels-info/autoroute-announce-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (igp_id.is_set || is_set(igp_id.operation)) leaf_name_data.push_back(igp_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (announced_tunnels_count.is_set || is_set(announced_tunnels_count.operation)) leaf_name_data.push_back(announced_tunnels_count.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (autorouted_tunnels_count.is_set || is_set(autorouted_tunnels_count.operation)) leaf_name_data.push_back(autorouted_tunnels_count.get_name_leafdata());
    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (forwarding_adjacency_tunnels_count.is_set || is_set(forwarding_adjacency_tunnels_count.operation)) leaf_name_data.push_back(forwarding_adjacency_tunnels_count.get_name_leafdata());
    if (igp_area.is_set || is_set(igp_area.operation)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.operation)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.operation)) leaf_name_data.push_back(igp_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "total-tunnel")
    {
        for(auto const & c : total_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel>();
        c->parent = this;
        total_tunnel.push_back(std::move(c));
        children[segment_path] = total_tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::get_children()
{
    for (auto const & c : total_tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "igp-id")
    {
        igp_id = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "announced-tunnels-count")
    {
        announced_tunnels_count = value;
    }
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "autorouted-tunnels-count")
    {
        autorouted_tunnels_count = value;
    }
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "forwarding-adjacency-tunnels-count")
    {
        forwarding_adjacency_tunnels_count = value;
    }
    if(value_path == "igp-area")
    {
        igp_area = value;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
    }
}

MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::TotalTunnel()
    :
    announce_type{YType::enumeration, "announce-type"},
    area_format{YType::enumeration, "area-format"},
    hold_time{YType::uint32, "hold-time"},
    igp_metric{YType::int32, "igp-metric"},
    is_auto_mesh_aa{YType::boolean, "is-auto-mesh-aa"},
    is_exclude_segment_routing{YType::boolean, "is-exclude-segment-routing"},
    is_sr{YType::boolean, "is-sr"},
    is_sr_strict{YType::boolean, "is-sr-strict"},
    mesh_group_idaa{YType::uint32, "mesh-group-idaa"},
    mode{YType::enumeration, "mode"},
    next_hop_address{YType::str, "next-hop-address"},
    tunnel_loadshare{YType::uint32, "tunnel-loadshare"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_sig_name{YType::str, "tunnel-sig-name"}
{
    yang_name = "total-tunnel"; yang_parent_name = "announce-dest";
}

MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::~TotalTunnel()
{
}

bool MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::has_data() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_data())
            return true;
    }
    return announce_type.is_set
	|| area_format.is_set
	|| hold_time.is_set
	|| igp_metric.is_set
	|| is_auto_mesh_aa.is_set
	|| is_exclude_segment_routing.is_set
	|| is_sr.is_set
	|| is_sr_strict.is_set
	|| mesh_group_idaa.is_set
	|| mode.is_set
	|| next_hop_address.is_set
	|| tunnel_loadshare.is_set
	|| tunnel_name.is_set
	|| tunnel_sig_name.is_set;
}

bool MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::has_operation() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(announce_type.operation)
	|| is_set(area_format.operation)
	|| is_set(hold_time.operation)
	|| is_set(igp_metric.operation)
	|| is_set(is_auto_mesh_aa.operation)
	|| is_set(is_exclude_segment_routing.operation)
	|| is_set(is_sr.operation)
	|| is_set(is_sr_strict.operation)
	|| is_set(mesh_group_idaa.operation)
	|| is_set(mode.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(tunnel_loadshare.operation)
	|| is_set(tunnel_name.operation)
	|| is_set(tunnel_sig_name.operation);
}

std::string MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-tunnel";

    return path_buffer.str();

}

EntityPath MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TotalTunnel' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announce_type.is_set || is_set(announce_type.operation)) leaf_name_data.push_back(announce_type.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.operation)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (is_auto_mesh_aa.is_set || is_set(is_auto_mesh_aa.operation)) leaf_name_data.push_back(is_auto_mesh_aa.get_name_leafdata());
    if (is_exclude_segment_routing.is_set || is_set(is_exclude_segment_routing.operation)) leaf_name_data.push_back(is_exclude_segment_routing.get_name_leafdata());
    if (is_sr.is_set || is_set(is_sr.operation)) leaf_name_data.push_back(is_sr.get_name_leafdata());
    if (is_sr_strict.is_set || is_set(is_sr_strict.operation)) leaf_name_data.push_back(is_sr_strict.get_name_leafdata());
    if (mesh_group_idaa.is_set || is_set(mesh_group_idaa.operation)) leaf_name_data.push_back(mesh_group_idaa.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (tunnel_loadshare.is_set || is_set(tunnel_loadshare.operation)) leaf_name_data.push_back(tunnel_loadshare.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_sig_name.is_set || is_set(tunnel_sig_name.operation)) leaf_name_data.push_back(tunnel_sig_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ig-ps")
    {
        for(auto const & c : ig_ps)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs>();
        c->parent = this;
        ig_ps.push_back(std::move(c));
        children[segment_path] = ig_ps.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::get_children()
{
    for (auto const & c : ig_ps)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "announce-type")
    {
        announce_type = value;
    }
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
    }
    if(value_path == "is-auto-mesh-aa")
    {
        is_auto_mesh_aa = value;
    }
    if(value_path == "is-exclude-segment-routing")
    {
        is_exclude_segment_routing = value;
    }
    if(value_path == "is-sr")
    {
        is_sr = value;
    }
    if(value_path == "is-sr-strict")
    {
        is_sr_strict = value;
    }
    if(value_path == "mesh-group-idaa")
    {
        mesh_group_idaa = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "tunnel-loadshare")
    {
        tunnel_loadshare = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name = value;
    }
}

MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::IgPs()
    :
    afi{YType::enumeration, "afi"},
    igp_area_id{YType::str, "igp-area-id"}
{
    yang_name = "ig-ps"; yang_parent_name = "total-tunnel";
}

MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::~IgPs()
{
}

bool MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::has_data() const
{
    return afi.is_set
	|| igp_area_id.is_set;
}

bool MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(igp_area_id.operation);
}

std::string MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ig-ps";

    return path_buffer.str();

}

EntityPath MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgPs' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (igp_area_id.is_set || is_set(igp_area_id.operation)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::get_children()
{
    return children;
}

void MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
    }
}

MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AllAutorouteTable()
{
    yang_name = "all-autoroute-table"; yang_parent_name = "announce-tunnels-info";
}

MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::~AllAutorouteTable()
{
}

bool MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::has_data() const
{
    for (std::size_t index=0; index<announce_dest.size(); index++)
    {
        if(announce_dest[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::has_operation() const
{
    for (std::size_t index=0; index<announce_dest.size(); index++)
    {
        if(announce_dest[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-autoroute-table";

    return path_buffer.str();

}

EntityPath MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/announce-tunnels-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "announce-dest")
    {
        for(auto const & c : announce_dest)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest>();
        c->parent = this;
        announce_dest.push_back(std::move(c));
        children[segment_path] = announce_dest.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::get_children()
{
    for (auto const & c : announce_dest)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::AnnounceDest()
    :
    area{YType::int32, "area"},
    destination_address{YType::str, "destination-address"},
    igp_id{YType::str, "igp-id"},
    protocol{YType::enumeration, "protocol"},
    announced_tunnels_count{YType::uint16, "announced-tunnels-count"},
    area_format{YType::enumeration, "area-format"},
    autorouted_tunnels_count{YType::uint16, "autorouted-tunnels-count"},
    destination{YType::str, "destination"},
    forwarding_adjacency_tunnels_count{YType::uint16, "forwarding-adjacency-tunnels-count"},
    igp_area{YType::uint32, "igp-area"},
    igp_instance{YType::str, "igp-instance"},
    igp_type{YType::enumeration, "igp-type"}
{
    yang_name = "announce-dest"; yang_parent_name = "all-autoroute-table";
}

MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::~AnnounceDest()
{
}

bool MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::has_data() const
{
    for (std::size_t index=0; index<total_tunnel.size(); index++)
    {
        if(total_tunnel[index]->has_data())
            return true;
    }
    return area.is_set
	|| destination_address.is_set
	|| igp_id.is_set
	|| protocol.is_set
	|| announced_tunnels_count.is_set
	|| area_format.is_set
	|| autorouted_tunnels_count.is_set
	|| destination.is_set
	|| forwarding_adjacency_tunnels_count.is_set
	|| igp_area.is_set
	|| igp_instance.is_set
	|| igp_type.is_set;
}

bool MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::has_operation() const
{
    for (std::size_t index=0; index<total_tunnel.size(); index++)
    {
        if(total_tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(area.operation)
	|| is_set(destination_address.operation)
	|| is_set(igp_id.operation)
	|| is_set(protocol.operation)
	|| is_set(announced_tunnels_count.operation)
	|| is_set(area_format.operation)
	|| is_set(autorouted_tunnels_count.operation)
	|| is_set(destination.operation)
	|| is_set(forwarding_adjacency_tunnels_count.operation)
	|| is_set(igp_area.operation)
	|| is_set(igp_instance.operation)
	|| is_set(igp_type.operation);
}

std::string MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce-dest" <<"[area='" <<area <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[igp-id='" <<igp_id <<"']" <<"[protocol='" <<protocol <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/announce-tunnels-info/all-autoroute-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (igp_id.is_set || is_set(igp_id.operation)) leaf_name_data.push_back(igp_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (announced_tunnels_count.is_set || is_set(announced_tunnels_count.operation)) leaf_name_data.push_back(announced_tunnels_count.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (autorouted_tunnels_count.is_set || is_set(autorouted_tunnels_count.operation)) leaf_name_data.push_back(autorouted_tunnels_count.get_name_leafdata());
    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (forwarding_adjacency_tunnels_count.is_set || is_set(forwarding_adjacency_tunnels_count.operation)) leaf_name_data.push_back(forwarding_adjacency_tunnels_count.get_name_leafdata());
    if (igp_area.is_set || is_set(igp_area.operation)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.operation)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.operation)) leaf_name_data.push_back(igp_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "total-tunnel")
    {
        for(auto const & c : total_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel>();
        c->parent = this;
        total_tunnel.push_back(std::move(c));
        children[segment_path] = total_tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::get_children()
{
    for (auto const & c : total_tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "igp-id")
    {
        igp_id = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "announced-tunnels-count")
    {
        announced_tunnels_count = value;
    }
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "autorouted-tunnels-count")
    {
        autorouted_tunnels_count = value;
    }
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "forwarding-adjacency-tunnels-count")
    {
        forwarding_adjacency_tunnels_count = value;
    }
    if(value_path == "igp-area")
    {
        igp_area = value;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
    }
}

MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::TotalTunnel()
    :
    announce_type{YType::enumeration, "announce-type"},
    area_format{YType::enumeration, "area-format"},
    hold_time{YType::uint32, "hold-time"},
    igp_metric{YType::int32, "igp-metric"},
    is_auto_mesh_aa{YType::boolean, "is-auto-mesh-aa"},
    is_exclude_segment_routing{YType::boolean, "is-exclude-segment-routing"},
    is_sr{YType::boolean, "is-sr"},
    is_sr_strict{YType::boolean, "is-sr-strict"},
    mesh_group_idaa{YType::uint32, "mesh-group-idaa"},
    mode{YType::enumeration, "mode"},
    next_hop_address{YType::str, "next-hop-address"},
    tunnel_loadshare{YType::uint32, "tunnel-loadshare"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_sig_name{YType::str, "tunnel-sig-name"}
{
    yang_name = "total-tunnel"; yang_parent_name = "announce-dest";
}

MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::~TotalTunnel()
{
}

bool MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::has_data() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_data())
            return true;
    }
    return announce_type.is_set
	|| area_format.is_set
	|| hold_time.is_set
	|| igp_metric.is_set
	|| is_auto_mesh_aa.is_set
	|| is_exclude_segment_routing.is_set
	|| is_sr.is_set
	|| is_sr_strict.is_set
	|| mesh_group_idaa.is_set
	|| mode.is_set
	|| next_hop_address.is_set
	|| tunnel_loadshare.is_set
	|| tunnel_name.is_set
	|| tunnel_sig_name.is_set;
}

bool MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::has_operation() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(announce_type.operation)
	|| is_set(area_format.operation)
	|| is_set(hold_time.operation)
	|| is_set(igp_metric.operation)
	|| is_set(is_auto_mesh_aa.operation)
	|| is_set(is_exclude_segment_routing.operation)
	|| is_set(is_sr.operation)
	|| is_set(is_sr_strict.operation)
	|| is_set(mesh_group_idaa.operation)
	|| is_set(mode.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(tunnel_loadshare.operation)
	|| is_set(tunnel_name.operation)
	|| is_set(tunnel_sig_name.operation);
}

std::string MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-tunnel";

    return path_buffer.str();

}

EntityPath MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TotalTunnel' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announce_type.is_set || is_set(announce_type.operation)) leaf_name_data.push_back(announce_type.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.operation)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (is_auto_mesh_aa.is_set || is_set(is_auto_mesh_aa.operation)) leaf_name_data.push_back(is_auto_mesh_aa.get_name_leafdata());
    if (is_exclude_segment_routing.is_set || is_set(is_exclude_segment_routing.operation)) leaf_name_data.push_back(is_exclude_segment_routing.get_name_leafdata());
    if (is_sr.is_set || is_set(is_sr.operation)) leaf_name_data.push_back(is_sr.get_name_leafdata());
    if (is_sr_strict.is_set || is_set(is_sr_strict.operation)) leaf_name_data.push_back(is_sr_strict.get_name_leafdata());
    if (mesh_group_idaa.is_set || is_set(mesh_group_idaa.operation)) leaf_name_data.push_back(mesh_group_idaa.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (tunnel_loadshare.is_set || is_set(tunnel_loadshare.operation)) leaf_name_data.push_back(tunnel_loadshare.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_sig_name.is_set || is_set(tunnel_sig_name.operation)) leaf_name_data.push_back(tunnel_sig_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ig-ps")
    {
        for(auto const & c : ig_ps)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs>();
        c->parent = this;
        ig_ps.push_back(std::move(c));
        children[segment_path] = ig_ps.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::get_children()
{
    for (auto const & c : ig_ps)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "announce-type")
    {
        announce_type = value;
    }
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
    }
    if(value_path == "is-auto-mesh-aa")
    {
        is_auto_mesh_aa = value;
    }
    if(value_path == "is-exclude-segment-routing")
    {
        is_exclude_segment_routing = value;
    }
    if(value_path == "is-sr")
    {
        is_sr = value;
    }
    if(value_path == "is-sr-strict")
    {
        is_sr_strict = value;
    }
    if(value_path == "mesh-group-idaa")
    {
        mesh_group_idaa = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "tunnel-loadshare")
    {
        tunnel_loadshare = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name = value;
    }
}

MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::IgPs()
    :
    afi{YType::enumeration, "afi"},
    igp_area_id{YType::str, "igp-area-id"}
{
    yang_name = "ig-ps"; yang_parent_name = "total-tunnel";
}

MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::~IgPs()
{
}

bool MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::has_data() const
{
    return afi.is_set
	|| igp_area_id.is_set;
}

bool MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(igp_area_id.operation);
}

std::string MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ig-ps";

    return path_buffer.str();

}

EntityPath MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgPs' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (igp_area_id.is_set || is_set(igp_area_id.operation)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::get_children()
{
    return children;
}

void MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
    }
}

MplsTe::CollaboratorTimers::CollaboratorTimers()
{
    yang_name = "collaborator-timers"; yang_parent_name = "mpls-te";
}

MplsTe::CollaboratorTimers::~CollaboratorTimers()
{
}

bool MplsTe::CollaboratorTimers::has_data() const
{
    for (std::size_t index=0; index<p2mp_timer.size(); index++)
    {
        if(p2mp_timer[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::CollaboratorTimers::has_operation() const
{
    for (std::size_t index=0; index<p2mp_timer.size(); index++)
    {
        if(p2mp_timer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::CollaboratorTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collaborator-timers";

    return path_buffer.str();

}

EntityPath MplsTe::CollaboratorTimers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::CollaboratorTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::CollaboratorTimers::P2MpTimer>();
        c->parent = this;
        p2mp_timer.push_back(std::move(c));
        children[segment_path] = p2mp_timer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::CollaboratorTimers::get_children()
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

void MplsTe::CollaboratorTimers::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::CollaboratorTimers::P2MpTimer::P2MpTimer()
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

MplsTe::CollaboratorTimers::P2MpTimer::~P2MpTimer()
{
}

bool MplsTe::CollaboratorTimers::P2MpTimer::has_data() const
{
    return duration.is_set
	|| expiry_time.is_set
	|| is_running.is_set
	|| start_time.is_set
	|| stop_time.is_set
	|| timer_name.is_set
	|| timer_type.is_set;
}

bool MplsTe::CollaboratorTimers::P2MpTimer::has_operation() const
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

std::string MplsTe::CollaboratorTimers::P2MpTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-timer";

    return path_buffer.str();

}

EntityPath MplsTe::CollaboratorTimers::P2MpTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/collaborator-timers/" << get_segment_path();
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

std::shared_ptr<Entity> MplsTe::CollaboratorTimers::P2MpTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::CollaboratorTimers::P2MpTimer::get_children()
{
    return children;
}

void MplsTe::CollaboratorTimers::P2MpTimer::set_value(const std::string & value_path, std::string value)
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

MplsTe::AutoTunnel::AutoTunnel()
    :
    backup(std::make_shared<MplsTe::AutoTunnel::Backup>())
	,mesh(std::make_shared<MplsTe::AutoTunnel::Mesh>())
	,pcc(std::make_shared<MplsTe::AutoTunnel::Pcc>())
{
    backup->parent = this;
    children["backup"] = backup;

    mesh->parent = this;
    children["mesh"] = mesh;

    pcc->parent = this;
    children["pcc"] = pcc;

    yang_name = "auto-tunnel"; yang_parent_name = "mpls-te";
}

MplsTe::AutoTunnel::~AutoTunnel()
{
}

bool MplsTe::AutoTunnel::has_data() const
{
    return (backup !=  nullptr && backup->has_data())
	|| (mesh !=  nullptr && mesh->has_data())
	|| (pcc !=  nullptr && pcc->has_data());
}

bool MplsTe::AutoTunnel::has_operation() const
{
    return is_set(operation)
	|| (backup !=  nullptr && backup->has_operation())
	|| (mesh !=  nullptr && mesh->has_operation())
	|| (pcc !=  nullptr && pcc->has_operation());
}

std::string MplsTe::AutoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-tunnel";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup")
    {
        if(backup != nullptr)
        {
            children["backup"] = backup;
        }
        else
        {
            backup = std::make_shared<MplsTe::AutoTunnel::Backup>();
            backup->parent = this;
            children["backup"] = backup;
        }
        return children.at("backup");
    }

    if(child_yang_name == "mesh")
    {
        if(mesh != nullptr)
        {
            children["mesh"] = mesh;
        }
        else
        {
            mesh = std::make_shared<MplsTe::AutoTunnel::Mesh>();
            mesh->parent = this;
            children["mesh"] = mesh;
        }
        return children.at("mesh");
    }

    if(child_yang_name == "pcc")
    {
        if(pcc != nullptr)
        {
            children["pcc"] = pcc;
        }
        else
        {
            pcc = std::make_shared<MplsTe::AutoTunnel::Pcc>();
            pcc->parent = this;
            children["pcc"] = pcc;
        }
        return children.at("pcc");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::get_children()
{
    if(children.find("backup") == children.end())
    {
        if(backup != nullptr)
        {
            children["backup"] = backup;
        }
    }

    if(children.find("mesh") == children.end())
    {
        if(mesh != nullptr)
        {
            children["mesh"] = mesh;
        }
    }

    if(children.find("pcc") == children.end())
    {
        if(pcc != nullptr)
        {
            children["pcc"] = pcc;
        }
    }

    return children;
}

void MplsTe::AutoTunnel::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::AutoTunnel::Pcc::Pcc()
    :
    summary(std::make_shared<MplsTe::AutoTunnel::Pcc::Summary>())
{
    summary->parent = this;
    children["summary"] = summary;

    yang_name = "pcc"; yang_parent_name = "auto-tunnel";
}

MplsTe::AutoTunnel::Pcc::~Pcc()
{
}

bool MplsTe::AutoTunnel::Pcc::has_data() const
{
    return (summary !=  nullptr && summary->has_data());
}

bool MplsTe::AutoTunnel::Pcc::has_operation() const
{
    return is_set(operation)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsTe::AutoTunnel::Pcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcc";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Pcc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Pcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            summary = std::make_shared<MplsTe::AutoTunnel::Pcc::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Pcc::get_children()
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

void MplsTe::AutoTunnel::Pcc::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::AutoTunnel::Pcc::Summary::Summary()
    :
    down_pcc_auto_tunnels{YType::uint32, "down-pcc-auto-tunnels"},
    pcc_auto_tunnel{YType::uint32, "pcc-auto-tunnel"},
    up_pcc_auto_tunnels{YType::uint32, "up-pcc-auto-tunnels"}
{
    yang_name = "summary"; yang_parent_name = "pcc";
}

MplsTe::AutoTunnel::Pcc::Summary::~Summary()
{
}

bool MplsTe::AutoTunnel::Pcc::Summary::has_data() const
{
    return down_pcc_auto_tunnels.is_set
	|| pcc_auto_tunnel.is_set
	|| up_pcc_auto_tunnels.is_set;
}

bool MplsTe::AutoTunnel::Pcc::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(down_pcc_auto_tunnels.operation)
	|| is_set(pcc_auto_tunnel.operation)
	|| is_set(up_pcc_auto_tunnels.operation);
}

std::string MplsTe::AutoTunnel::Pcc::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Pcc::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/pcc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_pcc_auto_tunnels.is_set || is_set(down_pcc_auto_tunnels.operation)) leaf_name_data.push_back(down_pcc_auto_tunnels.get_name_leafdata());
    if (pcc_auto_tunnel.is_set || is_set(pcc_auto_tunnel.operation)) leaf_name_data.push_back(pcc_auto_tunnel.get_name_leafdata());
    if (up_pcc_auto_tunnels.is_set || is_set(up_pcc_auto_tunnels.operation)) leaf_name_data.push_back(up_pcc_auto_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Pcc::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Pcc::Summary::get_children()
{
    return children;
}

void MplsTe::AutoTunnel::Pcc::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-pcc-auto-tunnels")
    {
        down_pcc_auto_tunnels = value;
    }
    if(value_path == "pcc-auto-tunnel")
    {
        pcc_auto_tunnel = value;
    }
    if(value_path == "up-pcc-auto-tunnels")
    {
        up_pcc_auto_tunnels = value;
    }
}

MplsTe::AutoTunnel::Mesh::Mesh()
    :
    config(std::make_shared<MplsTe::AutoTunnel::Mesh::Config>())
	,mesh_groups(std::make_shared<MplsTe::AutoTunnel::Mesh::MeshGroups>())
	,one_hop(std::make_shared<MplsTe::AutoTunnel::Mesh::OneHop>())
	,statistics(std::make_shared<MplsTe::AutoTunnel::Mesh::Statistics>())
	,summary(std::make_shared<MplsTe::AutoTunnel::Mesh::Summary>())
{
    config->parent = this;
    children["config"] = config;

    mesh_groups->parent = this;
    children["mesh-groups"] = mesh_groups;

    one_hop->parent = this;
    children["one-hop"] = one_hop;

    statistics->parent = this;
    children["statistics"] = statistics;

    summary->parent = this;
    children["summary"] = summary;

    yang_name = "mesh"; yang_parent_name = "auto-tunnel";
}

MplsTe::AutoTunnel::Mesh::~Mesh()
{
}

bool MplsTe::AutoTunnel::Mesh::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (mesh_groups !=  nullptr && mesh_groups->has_data())
	|| (one_hop !=  nullptr && one_hop->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool MplsTe::AutoTunnel::Mesh::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (mesh_groups !=  nullptr && mesh_groups->has_operation())
	|| (one_hop !=  nullptr && one_hop->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsTe::AutoTunnel::Mesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Mesh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<MplsTe::AutoTunnel::Mesh::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "mesh-groups")
    {
        if(mesh_groups != nullptr)
        {
            children["mesh-groups"] = mesh_groups;
        }
        else
        {
            mesh_groups = std::make_shared<MplsTe::AutoTunnel::Mesh::MeshGroups>();
            mesh_groups->parent = this;
            children["mesh-groups"] = mesh_groups;
        }
        return children.at("mesh-groups");
    }

    if(child_yang_name == "one-hop")
    {
        if(one_hop != nullptr)
        {
            children["one-hop"] = one_hop;
        }
        else
        {
            one_hop = std::make_shared<MplsTe::AutoTunnel::Mesh::OneHop>();
            one_hop->parent = this;
            children["one-hop"] = one_hop;
        }
        return children.at("one-hop");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<MplsTe::AutoTunnel::Mesh::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<MplsTe::AutoTunnel::Mesh::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Mesh::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("mesh-groups") == children.end())
    {
        if(mesh_groups != nullptr)
        {
            children["mesh-groups"] = mesh_groups;
        }
    }

    if(children.find("one-hop") == children.end())
    {
        if(one_hop != nullptr)
        {
            children["one-hop"] = one_hop;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    return children;
}

void MplsTe::AutoTunnel::Mesh::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroups()
{
    yang_name = "mesh-groups"; yang_parent_name = "mesh";
}

MplsTe::AutoTunnel::Mesh::MeshGroups::~MeshGroups()
{
}

bool MplsTe::AutoTunnel::Mesh::MeshGroups::has_data() const
{
    for (std::size_t index=0; index<mesh_group.size(); index++)
    {
        if(mesh_group[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::AutoTunnel::Mesh::MeshGroups::has_operation() const
{
    for (std::size_t index=0; index<mesh_group.size(); index++)
    {
        if(mesh_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::AutoTunnel::Mesh::MeshGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-groups";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Mesh::MeshGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/mesh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::MeshGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mesh-group")
    {
        for(auto const & c : mesh_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup>();
        c->parent = this;
        mesh_group.push_back(std::move(c));
        children[segment_path] = mesh_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Mesh::MeshGroups::get_children()
{
    for (auto const & c : mesh_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::AutoTunnel::Mesh::MeshGroups::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::MeshGroup()
    :
    mesh_group_id{YType::uint32, "mesh-group-id"},
    attribute_set_name{YType::str, "attribute-set-name"},
    auto_mesh_group_type{YType::enumeration, "auto-mesh-group-type"},
    auto_mesh_total_destinations{YType::uint32, "auto-mesh-total-destinations"},
    auto_mesh_tunnels{YType::uint32, "auto-mesh-tunnels"},
    destination_list_name{YType::str, "destination-list-name"},
    destination_list_type{YType::enumeration, "destination-list-type"},
    down_auto_mesh_tunnels{YType::uint32, "down-auto-mesh-tunnels"},
    frr_auto_mesh_tunnels{YType::uint32, "frr-auto-mesh-tunnels"},
    is_attribute_set_configured{YType::boolean, "is-attribute-set-configured"},
    is_attribute_set_in_db{YType::boolean, "is-attribute-set-in-db"},
    is_destination_list_configured{YType::boolean, "is-destination-list-configured"},
    is_meshgroup_disabled{YType::boolean, "is-meshgroup-disabled"},
    mesh_group_id_xr{YType::uint32, "mesh-group-id-xr"},
    remaining_time{YType::uint32, "remaining-time"},
    up_auto_mesh_tunnels{YType::uint32, "up-auto-mesh-tunnels"}
{
    yang_name = "mesh-group"; yang_parent_name = "mesh-groups";
}

MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::~MeshGroup()
{
}

bool MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::has_data() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return mesh_group_id.is_set
	|| attribute_set_name.is_set
	|| auto_mesh_group_type.is_set
	|| auto_mesh_total_destinations.is_set
	|| auto_mesh_tunnels.is_set
	|| destination_list_name.is_set
	|| destination_list_type.is_set
	|| down_auto_mesh_tunnels.is_set
	|| frr_auto_mesh_tunnels.is_set
	|| is_attribute_set_configured.is_set
	|| is_attribute_set_in_db.is_set
	|| is_destination_list_configured.is_set
	|| is_meshgroup_disabled.is_set
	|| mesh_group_id_xr.is_set
	|| remaining_time.is_set
	|| up_auto_mesh_tunnels.is_set;
}

bool MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::has_operation() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mesh_group_id.operation)
	|| is_set(attribute_set_name.operation)
	|| is_set(auto_mesh_group_type.operation)
	|| is_set(auto_mesh_total_destinations.operation)
	|| is_set(auto_mesh_tunnels.operation)
	|| is_set(destination_list_name.operation)
	|| is_set(destination_list_type.operation)
	|| is_set(down_auto_mesh_tunnels.operation)
	|| is_set(frr_auto_mesh_tunnels.operation)
	|| is_set(is_attribute_set_configured.operation)
	|| is_set(is_attribute_set_in_db.operation)
	|| is_set(is_destination_list_configured.operation)
	|| is_set(is_meshgroup_disabled.operation)
	|| is_set(mesh_group_id_xr.operation)
	|| is_set(remaining_time.operation)
	|| is_set(up_auto_mesh_tunnels.operation);
}

std::string MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group" <<"[mesh-group-id='" <<mesh_group_id <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/mesh/mesh-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mesh_group_id.is_set || is_set(mesh_group_id.operation)) leaf_name_data.push_back(mesh_group_id.get_name_leafdata());
    if (attribute_set_name.is_set || is_set(attribute_set_name.operation)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (auto_mesh_group_type.is_set || is_set(auto_mesh_group_type.operation)) leaf_name_data.push_back(auto_mesh_group_type.get_name_leafdata());
    if (auto_mesh_total_destinations.is_set || is_set(auto_mesh_total_destinations.operation)) leaf_name_data.push_back(auto_mesh_total_destinations.get_name_leafdata());
    if (auto_mesh_tunnels.is_set || is_set(auto_mesh_tunnels.operation)) leaf_name_data.push_back(auto_mesh_tunnels.get_name_leafdata());
    if (destination_list_name.is_set || is_set(destination_list_name.operation)) leaf_name_data.push_back(destination_list_name.get_name_leafdata());
    if (destination_list_type.is_set || is_set(destination_list_type.operation)) leaf_name_data.push_back(destination_list_type.get_name_leafdata());
    if (down_auto_mesh_tunnels.is_set || is_set(down_auto_mesh_tunnels.operation)) leaf_name_data.push_back(down_auto_mesh_tunnels.get_name_leafdata());
    if (frr_auto_mesh_tunnels.is_set || is_set(frr_auto_mesh_tunnels.operation)) leaf_name_data.push_back(frr_auto_mesh_tunnels.get_name_leafdata());
    if (is_attribute_set_configured.is_set || is_set(is_attribute_set_configured.operation)) leaf_name_data.push_back(is_attribute_set_configured.get_name_leafdata());
    if (is_attribute_set_in_db.is_set || is_set(is_attribute_set_in_db.operation)) leaf_name_data.push_back(is_attribute_set_in_db.get_name_leafdata());
    if (is_destination_list_configured.is_set || is_set(is_destination_list_configured.operation)) leaf_name_data.push_back(is_destination_list_configured.get_name_leafdata());
    if (is_meshgroup_disabled.is_set || is_set(is_meshgroup_disabled.operation)) leaf_name_data.push_back(is_meshgroup_disabled.get_name_leafdata());
    if (mesh_group_id_xr.is_set || is_set(mesh_group_id_xr.operation)) leaf_name_data.push_back(mesh_group_id_xr.get_name_leafdata());
    if (remaining_time.is_set || is_set(remaining_time.operation)) leaf_name_data.push_back(remaining_time.get_name_leafdata());
    if (up_auto_mesh_tunnels.is_set || is_set(up_auto_mesh_tunnels.operation)) leaf_name_data.push_back(up_auto_mesh_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination")
    {
        for(auto const & c : destination)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination>();
        c->parent = this;
        destination.push_back(std::move(c));
        children[segment_path] = destination.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_children()
{
    for (auto const & c : destination)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mesh-group-id")
    {
        mesh_group_id = value;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
    }
    if(value_path == "auto-mesh-group-type")
    {
        auto_mesh_group_type = value;
    }
    if(value_path == "auto-mesh-total-destinations")
    {
        auto_mesh_total_destinations = value;
    }
    if(value_path == "auto-mesh-tunnels")
    {
        auto_mesh_tunnels = value;
    }
    if(value_path == "destination-list-name")
    {
        destination_list_name = value;
    }
    if(value_path == "destination-list-type")
    {
        destination_list_type = value;
    }
    if(value_path == "down-auto-mesh-tunnels")
    {
        down_auto_mesh_tunnels = value;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels = value;
    }
    if(value_path == "is-attribute-set-configured")
    {
        is_attribute_set_configured = value;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db = value;
    }
    if(value_path == "is-destination-list-configured")
    {
        is_destination_list_configured = value;
    }
    if(value_path == "is-meshgroup-disabled")
    {
        is_meshgroup_disabled = value;
    }
    if(value_path == "mesh-group-id-xr")
    {
        mesh_group_id_xr = value;
    }
    if(value_path == "remaining-time")
    {
        remaining_time = value;
    }
    if(value_path == "up-auto-mesh-tunnels")
    {
        up_auto_mesh_tunnels = value;
    }
}

MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::Destination()
    :
    destination_address{YType::str, "destination-address"},
    operational_status{YType::enumeration, "operational-status"},
    remaining_time{YType::uint32, "remaining-time"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "destination"; yang_parent_name = "mesh-group";
}

MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::~Destination()
{
}

bool MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::has_data() const
{
    return destination_address.is_set
	|| operational_status.is_set
	|| remaining_time.is_set
	|| tunnel_id.is_set;
}

bool MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(operational_status.operation)
	|| is_set(remaining_time.operation)
	|| is_set(tunnel_id.operation);
}

std::string MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Destination' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (operational_status.is_set || is_set(operational_status.operation)) leaf_name_data.push_back(operational_status.get_name_leafdata());
    if (remaining_time.is_set || is_set(remaining_time.operation)) leaf_name_data.push_back(remaining_time.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::get_children()
{
    return children;
}

void MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "operational-status")
    {
        operational_status = value;
    }
    if(value_path == "remaining-time")
    {
        remaining_time = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsTe::AutoTunnel::Mesh::Statistics::Statistics()
    :
    connected{YType::uint32, "connected"},
    created{YType::uint32, "created"},
    last_cleared_time{YType::uint32, "last-cleared-time"},
    removed_in_use{YType::uint32, "removed-in-use"},
    removed_range_exceeded{YType::uint32, "removed-range-exceeded"},
    removed_unused{YType::uint32, "removed-unused"}
{
    yang_name = "statistics"; yang_parent_name = "mesh";
}

MplsTe::AutoTunnel::Mesh::Statistics::~Statistics()
{
}

bool MplsTe::AutoTunnel::Mesh::Statistics::has_data() const
{
    return connected.is_set
	|| created.is_set
	|| last_cleared_time.is_set
	|| removed_in_use.is_set
	|| removed_range_exceeded.is_set
	|| removed_unused.is_set;
}

bool MplsTe::AutoTunnel::Mesh::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(connected.operation)
	|| is_set(created.operation)
	|| is_set(last_cleared_time.operation)
	|| is_set(removed_in_use.operation)
	|| is_set(removed_range_exceeded.operation)
	|| is_set(removed_unused.operation);
}

std::string MplsTe::AutoTunnel::Mesh::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Mesh::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/mesh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected.is_set || is_set(connected.operation)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (created.is_set || is_set(created.operation)) leaf_name_data.push_back(created.get_name_leafdata());
    if (last_cleared_time.is_set || is_set(last_cleared_time.operation)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());
    if (removed_in_use.is_set || is_set(removed_in_use.operation)) leaf_name_data.push_back(removed_in_use.get_name_leafdata());
    if (removed_range_exceeded.is_set || is_set(removed_range_exceeded.operation)) leaf_name_data.push_back(removed_range_exceeded.get_name_leafdata());
    if (removed_unused.is_set || is_set(removed_unused.operation)) leaf_name_data.push_back(removed_unused.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Mesh::Statistics::get_children()
{
    return children;
}

void MplsTe::AutoTunnel::Mesh::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connected")
    {
        connected = value;
    }
    if(value_path == "created")
    {
        created = value;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
    }
    if(value_path == "removed-in-use")
    {
        removed_in_use = value;
    }
    if(value_path == "removed-range-exceeded")
    {
        removed_range_exceeded = value;
    }
    if(value_path == "removed-unused")
    {
        removed_unused = value;
    }
}

MplsTe::AutoTunnel::Mesh::Summary::Summary()
    :
    auto_mesh_destinations{YType::uint32, "auto-mesh-destinations"},
    auto_mesh_groups{YType::uint32, "auto-mesh-groups"},
    auto_mesh_tunnels{YType::uint32, "auto-mesh-tunnels"},
    down_auto_mesh_tunnels{YType::uint32, "down-auto-mesh-tunnels"},
    frr_auto_mesh_tunnels{YType::uint32, "frr-auto-mesh-tunnels"},
    up_auto_mesh_tunnels{YType::uint32, "up-auto-mesh-tunnels"}
{
    yang_name = "summary"; yang_parent_name = "mesh";
}

MplsTe::AutoTunnel::Mesh::Summary::~Summary()
{
}

bool MplsTe::AutoTunnel::Mesh::Summary::has_data() const
{
    return auto_mesh_destinations.is_set
	|| auto_mesh_groups.is_set
	|| auto_mesh_tunnels.is_set
	|| down_auto_mesh_tunnels.is_set
	|| frr_auto_mesh_tunnels.is_set
	|| up_auto_mesh_tunnels.is_set;
}

bool MplsTe::AutoTunnel::Mesh::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_mesh_destinations.operation)
	|| is_set(auto_mesh_groups.operation)
	|| is_set(auto_mesh_tunnels.operation)
	|| is_set(down_auto_mesh_tunnels.operation)
	|| is_set(frr_auto_mesh_tunnels.operation)
	|| is_set(up_auto_mesh_tunnels.operation);
}

std::string MplsTe::AutoTunnel::Mesh::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Mesh::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/mesh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_mesh_destinations.is_set || is_set(auto_mesh_destinations.operation)) leaf_name_data.push_back(auto_mesh_destinations.get_name_leafdata());
    if (auto_mesh_groups.is_set || is_set(auto_mesh_groups.operation)) leaf_name_data.push_back(auto_mesh_groups.get_name_leafdata());
    if (auto_mesh_tunnels.is_set || is_set(auto_mesh_tunnels.operation)) leaf_name_data.push_back(auto_mesh_tunnels.get_name_leafdata());
    if (down_auto_mesh_tunnels.is_set || is_set(down_auto_mesh_tunnels.operation)) leaf_name_data.push_back(down_auto_mesh_tunnels.get_name_leafdata());
    if (frr_auto_mesh_tunnels.is_set || is_set(frr_auto_mesh_tunnels.operation)) leaf_name_data.push_back(frr_auto_mesh_tunnels.get_name_leafdata());
    if (up_auto_mesh_tunnels.is_set || is_set(up_auto_mesh_tunnels.operation)) leaf_name_data.push_back(up_auto_mesh_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Mesh::Summary::get_children()
{
    return children;
}

void MplsTe::AutoTunnel::Mesh::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-mesh-destinations")
    {
        auto_mesh_destinations = value;
    }
    if(value_path == "auto-mesh-groups")
    {
        auto_mesh_groups = value;
    }
    if(value_path == "auto-mesh-tunnels")
    {
        auto_mesh_tunnels = value;
    }
    if(value_path == "down-auto-mesh-tunnels")
    {
        down_auto_mesh_tunnels = value;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels = value;
    }
    if(value_path == "up-auto-mesh-tunnels")
    {
        up_auto_mesh_tunnels = value;
    }
}

MplsTe::AutoTunnel::Mesh::Config::Config()
    :
    is_configured{YType::boolean, "is-configured"},
    max_tunnel_id{YType::uint16, "max-tunnel-id"},
    min_tunnel_id{YType::uint16, "min-tunnel-id"},
    unused_removal_timeout_configured{YType::uint32, "unused-removal-timeout-configured"}
{
    yang_name = "config"; yang_parent_name = "mesh";
}

MplsTe::AutoTunnel::Mesh::Config::~Config()
{
}

bool MplsTe::AutoTunnel::Mesh::Config::has_data() const
{
    return is_configured.is_set
	|| max_tunnel_id.is_set
	|| min_tunnel_id.is_set
	|| unused_removal_timeout_configured.is_set;
}

bool MplsTe::AutoTunnel::Mesh::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(is_configured.operation)
	|| is_set(max_tunnel_id.operation)
	|| is_set(min_tunnel_id.operation)
	|| is_set(unused_removal_timeout_configured.operation);
}

std::string MplsTe::AutoTunnel::Mesh::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Mesh::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/mesh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_configured.is_set || is_set(is_configured.operation)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (max_tunnel_id.is_set || is_set(max_tunnel_id.operation)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());
    if (min_tunnel_id.is_set || is_set(min_tunnel_id.operation)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());
    if (unused_removal_timeout_configured.is_set || is_set(unused_removal_timeout_configured.operation)) leaf_name_data.push_back(unused_removal_timeout_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Mesh::Config::get_children()
{
    return children;
}

void MplsTe::AutoTunnel::Mesh::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-configured")
    {
        is_configured = value;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
    }
    if(value_path == "unused-removal-timeout-configured")
    {
        unused_removal_timeout_configured = value;
    }
}

MplsTe::AutoTunnel::Mesh::OneHop::OneHop()
    :
    interfaces(std::make_shared<MplsTe::AutoTunnel::Mesh::OneHop::Interfaces>())
	,statistics(std::make_shared<MplsTe::AutoTunnel::Mesh::OneHop::Statistics>())
	,summary(std::make_shared<MplsTe::AutoTunnel::Mesh::OneHop::Summary>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces;

    statistics->parent = this;
    children["statistics"] = statistics;

    summary->parent = this;
    children["summary"] = summary;

    yang_name = "one-hop"; yang_parent_name = "mesh";
}

MplsTe::AutoTunnel::Mesh::OneHop::~OneHop()
{
}

bool MplsTe::AutoTunnel::Mesh::OneHop::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool MplsTe::AutoTunnel::Mesh::OneHop::has_operation() const
{
    return is_set(operation)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsTe::AutoTunnel::Mesh::OneHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one-hop";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Mesh::OneHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/mesh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::OneHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<MplsTe::AutoTunnel::Mesh::OneHop::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<MplsTe::AutoTunnel::Mesh::OneHop::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<MplsTe::AutoTunnel::Mesh::OneHop::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Mesh::OneHop::get_children()
{
    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    return children;
}

void MplsTe::AutoTunnel::Mesh::OneHop::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "one-hop";
}

MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::~Interfaces()
{
}

bool MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/mesh/one-hop/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::~Interface()
{
}

bool MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set;
}

bool MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_name_xr.operation);
}

std::string MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/mesh/one-hop/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel>();
        c->parent = this;
        tunnel.push_back(std::move(c));
        children[segment_path] = tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_children()
{
    for (auto const & c : tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
}

MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::Tunnel()
    :
    destination_address{YType::str, "destination-address"},
    mesh_group_id{YType::uint32, "mesh-group-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    tunnel_lspid{YType::uint16, "tunnel-lspid"},
    tunnel_state{YType::enumeration, "tunnel-state"}
{
    yang_name = "tunnel"; yang_parent_name = "interface";
}

MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::~Tunnel()
{
}

bool MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::has_data() const
{
    return destination_address.is_set
	|| mesh_group_id.is_set
	|| tunnel_id.is_set
	|| tunnel_lspid.is_set
	|| tunnel_state.is_set;
}

bool MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(mesh_group_id.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(tunnel_lspid.operation)
	|| is_set(tunnel_state.operation);
}

std::string MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tunnel' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (mesh_group_id.is_set || is_set(mesh_group_id.operation)) leaf_name_data.push_back(mesh_group_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_lspid.is_set || is_set(tunnel_lspid.operation)) leaf_name_data.push_back(tunnel_lspid.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.operation)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::get_children()
{
    return children;
}

void MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "mesh-group-id")
    {
        mesh_group_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "tunnel-lspid")
    {
        tunnel_lspid = value;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
    }
}

MplsTe::AutoTunnel::Mesh::OneHop::Statistics::Statistics()
    :
    connected{YType::uint32, "connected"},
    created{YType::uint32, "created"},
    last_cleared_time{YType::uint32, "last-cleared-time"},
    removed_in_use{YType::uint32, "removed-in-use"},
    removed_range_exceeded{YType::uint32, "removed-range-exceeded"},
    removed_unused{YType::uint32, "removed-unused"}
{
    yang_name = "statistics"; yang_parent_name = "one-hop";
}

MplsTe::AutoTunnel::Mesh::OneHop::Statistics::~Statistics()
{
}

bool MplsTe::AutoTunnel::Mesh::OneHop::Statistics::has_data() const
{
    return connected.is_set
	|| created.is_set
	|| last_cleared_time.is_set
	|| removed_in_use.is_set
	|| removed_range_exceeded.is_set
	|| removed_unused.is_set;
}

bool MplsTe::AutoTunnel::Mesh::OneHop::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(connected.operation)
	|| is_set(created.operation)
	|| is_set(last_cleared_time.operation)
	|| is_set(removed_in_use.operation)
	|| is_set(removed_range_exceeded.operation)
	|| is_set(removed_unused.operation);
}

std::string MplsTe::AutoTunnel::Mesh::OneHop::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Mesh::OneHop::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/mesh/one-hop/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected.is_set || is_set(connected.operation)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (created.is_set || is_set(created.operation)) leaf_name_data.push_back(created.get_name_leafdata());
    if (last_cleared_time.is_set || is_set(last_cleared_time.operation)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());
    if (removed_in_use.is_set || is_set(removed_in_use.operation)) leaf_name_data.push_back(removed_in_use.get_name_leafdata());
    if (removed_range_exceeded.is_set || is_set(removed_range_exceeded.operation)) leaf_name_data.push_back(removed_range_exceeded.get_name_leafdata());
    if (removed_unused.is_set || is_set(removed_unused.operation)) leaf_name_data.push_back(removed_unused.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::OneHop::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Mesh::OneHop::Statistics::get_children()
{
    return children;
}

void MplsTe::AutoTunnel::Mesh::OneHop::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connected")
    {
        connected = value;
    }
    if(value_path == "created")
    {
        created = value;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
    }
    if(value_path == "removed-in-use")
    {
        removed_in_use = value;
    }
    if(value_path == "removed-range-exceeded")
    {
        removed_range_exceeded = value;
    }
    if(value_path == "removed-unused")
    {
        removed_unused = value;
    }
}

MplsTe::AutoTunnel::Mesh::OneHop::Summary::Summary()
    :
    auto_mesh_one_hop_destinations{YType::uint32, "auto-mesh-one-hop-destinations"},
    auto_mesh_one_hop_groups{YType::uint32, "auto-mesh-one-hop-groups"},
    auto_mesh_one_hop_tunnels{YType::uint32, "auto-mesh-one-hop-tunnels"},
    down_auto_mesh_one_hop_tunnels{YType::uint32, "down-auto-mesh-one-hop-tunnels"},
    frr_auto_mesh_tunnels{YType::uint32, "frr-auto-mesh-tunnels"},
    up_auto_mesh_one_hop_tunnels{YType::uint32, "up-auto-mesh-one-hop-tunnels"}
{
    yang_name = "summary"; yang_parent_name = "one-hop";
}

MplsTe::AutoTunnel::Mesh::OneHop::Summary::~Summary()
{
}

bool MplsTe::AutoTunnel::Mesh::OneHop::Summary::has_data() const
{
    return auto_mesh_one_hop_destinations.is_set
	|| auto_mesh_one_hop_groups.is_set
	|| auto_mesh_one_hop_tunnels.is_set
	|| down_auto_mesh_one_hop_tunnels.is_set
	|| frr_auto_mesh_tunnels.is_set
	|| up_auto_mesh_one_hop_tunnels.is_set;
}

bool MplsTe::AutoTunnel::Mesh::OneHop::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_mesh_one_hop_destinations.operation)
	|| is_set(auto_mesh_one_hop_groups.operation)
	|| is_set(auto_mesh_one_hop_tunnels.operation)
	|| is_set(down_auto_mesh_one_hop_tunnels.operation)
	|| is_set(frr_auto_mesh_tunnels.operation)
	|| is_set(up_auto_mesh_one_hop_tunnels.operation);
}

std::string MplsTe::AutoTunnel::Mesh::OneHop::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Mesh::OneHop::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/mesh/one-hop/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_mesh_one_hop_destinations.is_set || is_set(auto_mesh_one_hop_destinations.operation)) leaf_name_data.push_back(auto_mesh_one_hop_destinations.get_name_leafdata());
    if (auto_mesh_one_hop_groups.is_set || is_set(auto_mesh_one_hop_groups.operation)) leaf_name_data.push_back(auto_mesh_one_hop_groups.get_name_leafdata());
    if (auto_mesh_one_hop_tunnels.is_set || is_set(auto_mesh_one_hop_tunnels.operation)) leaf_name_data.push_back(auto_mesh_one_hop_tunnels.get_name_leafdata());
    if (down_auto_mesh_one_hop_tunnels.is_set || is_set(down_auto_mesh_one_hop_tunnels.operation)) leaf_name_data.push_back(down_auto_mesh_one_hop_tunnels.get_name_leafdata());
    if (frr_auto_mesh_tunnels.is_set || is_set(frr_auto_mesh_tunnels.operation)) leaf_name_data.push_back(frr_auto_mesh_tunnels.get_name_leafdata());
    if (up_auto_mesh_one_hop_tunnels.is_set || is_set(up_auto_mesh_one_hop_tunnels.operation)) leaf_name_data.push_back(up_auto_mesh_one_hop_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::OneHop::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Mesh::OneHop::Summary::get_children()
{
    return children;
}

void MplsTe::AutoTunnel::Mesh::OneHop::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-mesh-one-hop-destinations")
    {
        auto_mesh_one_hop_destinations = value;
    }
    if(value_path == "auto-mesh-one-hop-groups")
    {
        auto_mesh_one_hop_groups = value;
    }
    if(value_path == "auto-mesh-one-hop-tunnels")
    {
        auto_mesh_one_hop_tunnels = value;
    }
    if(value_path == "down-auto-mesh-one-hop-tunnels")
    {
        down_auto_mesh_one_hop_tunnels = value;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels = value;
    }
    if(value_path == "up-auto-mesh-one-hop-tunnels")
    {
        up_auto_mesh_one_hop_tunnels = value;
    }
}

MplsTe::AutoTunnel::Backup::Backup()
    :
    config(std::make_shared<MplsTe::AutoTunnel::Backup::Config>())
	,statistics(std::make_shared<MplsTe::AutoTunnel::Backup::Statistics>())
	,summary(std::make_shared<MplsTe::AutoTunnel::Backup::Summary>())
	,tunnels(std::make_shared<MplsTe::AutoTunnel::Backup::Tunnels>())
{
    config->parent = this;
    children["config"] = config;

    statistics->parent = this;
    children["statistics"] = statistics;

    summary->parent = this;
    children["summary"] = summary;

    tunnels->parent = this;
    children["tunnels"] = tunnels;

    yang_name = "backup"; yang_parent_name = "auto-tunnel";
}

MplsTe::AutoTunnel::Backup::~Backup()
{
}

bool MplsTe::AutoTunnel::Backup::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool MplsTe::AutoTunnel::Backup::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string MplsTe::AutoTunnel::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "config")
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
        else
        {
            config = std::make_shared<MplsTe::AutoTunnel::Backup::Config>();
            config->parent = this;
            children["config"] = config;
        }
        return children.at("config");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<MplsTe::AutoTunnel::Backup::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<MplsTe::AutoTunnel::Backup::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
        else
        {
            tunnels = std::make_shared<MplsTe::AutoTunnel::Backup::Tunnels>();
            tunnels->parent = this;
            children["tunnels"] = tunnels;
        }
        return children.at("tunnels");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Backup::get_children()
{
    if(children.find("config") == children.end())
    {
        if(config != nullptr)
        {
            children["config"] = config;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    if(children.find("tunnels") == children.end())
    {
        if(tunnels != nullptr)
        {
            children["tunnels"] = tunnels;
        }
    }

    return children;
}

void MplsTe::AutoTunnel::Backup::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::AutoTunnel::Backup::Tunnels::Tunnels()
{
    yang_name = "tunnels"; yang_parent_name = "backup";
}

MplsTe::AutoTunnel::Backup::Tunnels::~Tunnels()
{
}

bool MplsTe::AutoTunnel::Backup::Tunnels::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::AutoTunnel::Backup::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::AutoTunnel::Backup::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Backup::Tunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/backup/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Backup::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::AutoTunnel::Backup::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.push_back(std::move(c));
        children[segment_path] = tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Backup::Tunnels::get_children()
{
    for (auto const & c : tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::AutoTunnel::Backup::Tunnels::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::AutoTunnel::Backup::Tunnels::Tunnel::Tunnel()
    :
    backup_tunnel_name{YType::str, "backup-tunnel-name"},
    atb_protection_type{YType::enumeration, "atb-protection-type"},
    operational_status{YType::enumeration, "operational-status"},
    protected_flows{YType::uint32, "protected-flows"},
    protected_interface_name{YType::str, "protected-interface-name"},
    protected_router_id{YType::str, "protected-router-id"},
    srlg_mode{YType::enumeration, "srlg-mode"},
    tunnel_name{YType::str, "tunnel-name"}
{
    yang_name = "tunnel"; yang_parent_name = "tunnels";
}

MplsTe::AutoTunnel::Backup::Tunnels::Tunnel::~Tunnel()
{
}

bool MplsTe::AutoTunnel::Backup::Tunnels::Tunnel::has_data() const
{
    return backup_tunnel_name.is_set
	|| atb_protection_type.is_set
	|| operational_status.is_set
	|| protected_flows.is_set
	|| protected_interface_name.is_set
	|| protected_router_id.is_set
	|| srlg_mode.is_set
	|| tunnel_name.is_set;
}

bool MplsTe::AutoTunnel::Backup::Tunnels::Tunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_tunnel_name.operation)
	|| is_set(atb_protection_type.operation)
	|| is_set(operational_status.operation)
	|| is_set(protected_flows.operation)
	|| is_set(protected_interface_name.operation)
	|| is_set(protected_router_id.operation)
	|| is_set(srlg_mode.operation)
	|| is_set(tunnel_name.operation);
}

std::string MplsTe::AutoTunnel::Backup::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[backup-tunnel-name='" <<backup_tunnel_name <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Backup::Tunnels::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/backup/tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.operation)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());
    if (atb_protection_type.is_set || is_set(atb_protection_type.operation)) leaf_name_data.push_back(atb_protection_type.get_name_leafdata());
    if (operational_status.is_set || is_set(operational_status.operation)) leaf_name_data.push_back(operational_status.get_name_leafdata());
    if (protected_flows.is_set || is_set(protected_flows.operation)) leaf_name_data.push_back(protected_flows.get_name_leafdata());
    if (protected_interface_name.is_set || is_set(protected_interface_name.operation)) leaf_name_data.push_back(protected_interface_name.get_name_leafdata());
    if (protected_router_id.is_set || is_set(protected_router_id.operation)) leaf_name_data.push_back(protected_router_id.get_name_leafdata());
    if (srlg_mode.is_set || is_set(srlg_mode.operation)) leaf_name_data.push_back(srlg_mode.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Backup::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Backup::Tunnels::Tunnel::get_children()
{
    return children;
}

void MplsTe::AutoTunnel::Backup::Tunnels::Tunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
    }
    if(value_path == "atb-protection-type")
    {
        atb_protection_type = value;
    }
    if(value_path == "operational-status")
    {
        operational_status = value;
    }
    if(value_path == "protected-flows")
    {
        protected_flows = value;
    }
    if(value_path == "protected-interface-name")
    {
        protected_interface_name = value;
    }
    if(value_path == "protected-router-id")
    {
        protected_router_id = value;
    }
    if(value_path == "srlg-mode")
    {
        srlg_mode = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTe::AutoTunnel::Backup::Statistics::Statistics()
    :
    last_cleared_time{YType::uint32, "last-cleared-time"}
    	,
    connected(std::make_shared<MplsTe::AutoTunnel::Backup::Statistics::Connected>())
	,created(std::make_shared<MplsTe::AutoTunnel::Backup::Statistics::Created>())
	,removed_down(std::make_shared<MplsTe::AutoTunnel::Backup::Statistics::RemovedDown>())
	,removed_in_use(std::make_shared<MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse>())
	,removed_range_exceeded(std::make_shared<MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded>())
	,removed_unused(std::make_shared<MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused>())
{
    connected->parent = this;
    children["connected"] = connected;

    created->parent = this;
    children["created"] = created;

    removed_down->parent = this;
    children["removed-down"] = removed_down;

    removed_in_use->parent = this;
    children["removed-in-use"] = removed_in_use;

    removed_range_exceeded->parent = this;
    children["removed-range-exceeded"] = removed_range_exceeded;

    removed_unused->parent = this;
    children["removed-unused"] = removed_unused;

    yang_name = "statistics"; yang_parent_name = "backup";
}

MplsTe::AutoTunnel::Backup::Statistics::~Statistics()
{
}

bool MplsTe::AutoTunnel::Backup::Statistics::has_data() const
{
    return last_cleared_time.is_set
	|| (connected !=  nullptr && connected->has_data())
	|| (created !=  nullptr && created->has_data())
	|| (removed_down !=  nullptr && removed_down->has_data())
	|| (removed_in_use !=  nullptr && removed_in_use->has_data())
	|| (removed_range_exceeded !=  nullptr && removed_range_exceeded->has_data())
	|| (removed_unused !=  nullptr && removed_unused->has_data());
}

bool MplsTe::AutoTunnel::Backup::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(last_cleared_time.operation)
	|| (connected !=  nullptr && connected->has_operation())
	|| (created !=  nullptr && created->has_operation())
	|| (removed_down !=  nullptr && removed_down->has_operation())
	|| (removed_in_use !=  nullptr && removed_in_use->has_operation())
	|| (removed_range_exceeded !=  nullptr && removed_range_exceeded->has_operation())
	|| (removed_unused !=  nullptr && removed_unused->has_operation());
}

std::string MplsTe::AutoTunnel::Backup::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Backup::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/backup/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_time.is_set || is_set(last_cleared_time.operation)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Backup::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "connected")
    {
        if(connected != nullptr)
        {
            children["connected"] = connected;
        }
        else
        {
            connected = std::make_shared<MplsTe::AutoTunnel::Backup::Statistics::Connected>();
            connected->parent = this;
            children["connected"] = connected;
        }
        return children.at("connected");
    }

    if(child_yang_name == "created")
    {
        if(created != nullptr)
        {
            children["created"] = created;
        }
        else
        {
            created = std::make_shared<MplsTe::AutoTunnel::Backup::Statistics::Created>();
            created->parent = this;
            children["created"] = created;
        }
        return children.at("created");
    }

    if(child_yang_name == "removed-down")
    {
        if(removed_down != nullptr)
        {
            children["removed-down"] = removed_down;
        }
        else
        {
            removed_down = std::make_shared<MplsTe::AutoTunnel::Backup::Statistics::RemovedDown>();
            removed_down->parent = this;
            children["removed-down"] = removed_down;
        }
        return children.at("removed-down");
    }

    if(child_yang_name == "removed-in-use")
    {
        if(removed_in_use != nullptr)
        {
            children["removed-in-use"] = removed_in_use;
        }
        else
        {
            removed_in_use = std::make_shared<MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse>();
            removed_in_use->parent = this;
            children["removed-in-use"] = removed_in_use;
        }
        return children.at("removed-in-use");
    }

    if(child_yang_name == "removed-range-exceeded")
    {
        if(removed_range_exceeded != nullptr)
        {
            children["removed-range-exceeded"] = removed_range_exceeded;
        }
        else
        {
            removed_range_exceeded = std::make_shared<MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded>();
            removed_range_exceeded->parent = this;
            children["removed-range-exceeded"] = removed_range_exceeded;
        }
        return children.at("removed-range-exceeded");
    }

    if(child_yang_name == "removed-unused")
    {
        if(removed_unused != nullptr)
        {
            children["removed-unused"] = removed_unused;
        }
        else
        {
            removed_unused = std::make_shared<MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused>();
            removed_unused->parent = this;
            children["removed-unused"] = removed_unused;
        }
        return children.at("removed-unused");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Backup::Statistics::get_children()
{
    if(children.find("connected") == children.end())
    {
        if(connected != nullptr)
        {
            children["connected"] = connected;
        }
    }

    if(children.find("created") == children.end())
    {
        if(created != nullptr)
        {
            children["created"] = created;
        }
    }

    if(children.find("removed-down") == children.end())
    {
        if(removed_down != nullptr)
        {
            children["removed-down"] = removed_down;
        }
    }

    if(children.find("removed-in-use") == children.end())
    {
        if(removed_in_use != nullptr)
        {
            children["removed-in-use"] = removed_in_use;
        }
    }

    if(children.find("removed-range-exceeded") == children.end())
    {
        if(removed_range_exceeded != nullptr)
        {
            children["removed-range-exceeded"] = removed_range_exceeded;
        }
    }

    if(children.find("removed-unused") == children.end())
    {
        if(removed_unused != nullptr)
        {
            children["removed-unused"] = removed_unused;
        }
    }

    return children;
}

void MplsTe::AutoTunnel::Backup::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
    }
}

MplsTe::AutoTunnel::Backup::Statistics::Created::Created()
    :
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{
    yang_name = "created"; yang_parent_name = "statistics";
}

MplsTe::AutoTunnel::Backup::Statistics::Created::~Created()
{
}

bool MplsTe::AutoTunnel::Backup::Statistics::Created::has_data() const
{
    return next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsTe::AutoTunnel::Backup::Statistics::Created::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_tunnels.operation)
	|| is_set(next_next_hop_tunnels.operation)
	|| is_set(total_tunnels.operation);
}

std::string MplsTe::AutoTunnel::Backup::Statistics::Created::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "created";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Backup::Statistics::Created::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/backup/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.operation)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.operation)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.operation)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Backup::Statistics::Created::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Backup::Statistics::Created::get_children()
{
    return children;
}

void MplsTe::AutoTunnel::Backup::Statistics::Created::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels = value;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels = value;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
    }
}

MplsTe::AutoTunnel::Backup::Statistics::Connected::Connected()
    :
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{
    yang_name = "connected"; yang_parent_name = "statistics";
}

MplsTe::AutoTunnel::Backup::Statistics::Connected::~Connected()
{
}

bool MplsTe::AutoTunnel::Backup::Statistics::Connected::has_data() const
{
    return next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsTe::AutoTunnel::Backup::Statistics::Connected::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_tunnels.operation)
	|| is_set(next_next_hop_tunnels.operation)
	|| is_set(total_tunnels.operation);
}

std::string MplsTe::AutoTunnel::Backup::Statistics::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Backup::Statistics::Connected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/backup/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.operation)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.operation)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.operation)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Backup::Statistics::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Backup::Statistics::Connected::get_children()
{
    return children;
}

void MplsTe::AutoTunnel::Backup::Statistics::Connected::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels = value;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels = value;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
    }
}

MplsTe::AutoTunnel::Backup::Statistics::RemovedDown::RemovedDown()
    :
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{
    yang_name = "removed-down"; yang_parent_name = "statistics";
}

MplsTe::AutoTunnel::Backup::Statistics::RemovedDown::~RemovedDown()
{
}

bool MplsTe::AutoTunnel::Backup::Statistics::RemovedDown::has_data() const
{
    return next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsTe::AutoTunnel::Backup::Statistics::RemovedDown::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_tunnels.operation)
	|| is_set(next_next_hop_tunnels.operation)
	|| is_set(total_tunnels.operation);
}

std::string MplsTe::AutoTunnel::Backup::Statistics::RemovedDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removed-down";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Backup::Statistics::RemovedDown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/backup/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.operation)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.operation)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.operation)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Backup::Statistics::RemovedDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Backup::Statistics::RemovedDown::get_children()
{
    return children;
}

void MplsTe::AutoTunnel::Backup::Statistics::RemovedDown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels = value;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels = value;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
    }
}

MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused::RemovedUnused()
    :
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{
    yang_name = "removed-unused"; yang_parent_name = "statistics";
}

MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused::~RemovedUnused()
{
}

bool MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused::has_data() const
{
    return next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_tunnels.operation)
	|| is_set(next_next_hop_tunnels.operation)
	|| is_set(total_tunnels.operation);
}

std::string MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removed-unused";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/backup/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.operation)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.operation)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.operation)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused::get_children()
{
    return children;
}

void MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels = value;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels = value;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
    }
}

MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse::RemovedInUse()
    :
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{
    yang_name = "removed-in-use"; yang_parent_name = "statistics";
}

MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse::~RemovedInUse()
{
}

bool MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse::has_data() const
{
    return next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_tunnels.operation)
	|| is_set(next_next_hop_tunnels.operation)
	|| is_set(total_tunnels.operation);
}

std::string MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removed-in-use";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/backup/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.operation)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.operation)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.operation)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse::get_children()
{
    return children;
}

void MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels = value;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels = value;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
    }
}

MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::RemovedRangeExceeded()
    :
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{
    yang_name = "removed-range-exceeded"; yang_parent_name = "statistics";
}

MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::~RemovedRangeExceeded()
{
}

bool MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::has_data() const
{
    return next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_tunnels.operation)
	|| is_set(next_next_hop_tunnels.operation)
	|| is_set(total_tunnels.operation);
}

std::string MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removed-range-exceeded";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/backup/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.operation)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.operation)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.operation)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::get_children()
{
    return children;
}

void MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels = value;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels = value;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
    }
}

MplsTe::AutoTunnel::Backup::Summary::Summary()
    :
    autobackups{YType::uint32, "autobackups"},
    down_autobackups{YType::uint32, "down-autobackups"},
    next_hop_autobackup_protected_ls_ps{YType::uint32, "next-hop-autobackup-protected-ls-ps"},
    next_hop_autobackup_protected_s2_ls{YType::uint32, "next-hop-autobackup-protected-s2-ls"},
    next_hop_autobackup_protected_s2l_families{YType::uint32, "next-hop-autobackup-protected-s2l-families"},
    next_hop_autobackups{YType::uint32, "next-hop-autobackups"},
    next_hop_srlg_autobackup_protected_ls_ps{YType::uint32, "next-hop-srlg-autobackup-protected-ls-ps"},
    next_hop_srlg_autobackup_protected_s2_ls{YType::uint32, "next-hop-srlg-autobackup-protected-s2-ls"},
    next_hop_srlg_autobackup_protected_s2l_families{YType::uint32, "next-hop-srlg-autobackup-protected-s2l-families"},
    next_next_hop_autobackup_protected_ls_ps{YType::uint32, "next-next-hop-autobackup-protected-ls-ps"},
    next_next_hop_autobackup_protected_s2_ls{YType::uint32, "next-next-hop-autobackup-protected-s2-ls"},
    next_next_hop_autobackup_protected_s2l_families{YType::uint32, "next-next-hop-autobackup-protected-s2l-families"},
    next_next_hop_autobackups{YType::uint32, "next-next-hop-autobackups"},
    next_next_hop_srlg_autobackup_protected_ls_ps{YType::uint32, "next-next-hop-srlg-autobackup-protected-ls-ps"},
    next_next_hop_srlg_autobackup_protected_s2_ls{YType::uint32, "next-next-hop-srlg-autobackup-protected-s2-ls"},
    next_next_hop_srlg_autobackup_protected_s2l_families{YType::uint32, "next-next-hop-srlg-autobackup-protected-s2l-families"},
    srlg_preferred_autobackups{YType::uint32, "srlg-preferred-autobackups"},
    srlg_strict_autobackups{YType::uint32, "srlg-strict-autobackups"},
    srlg_weighted_autobackups{YType::uint32, "srlg-weighted-autobackups"},
    unused_autobackups{YType::uint32, "unused-autobackups"},
    up_autobackups{YType::uint32, "up-autobackups"}
{
    yang_name = "summary"; yang_parent_name = "backup";
}

MplsTe::AutoTunnel::Backup::Summary::~Summary()
{
}

bool MplsTe::AutoTunnel::Backup::Summary::has_data() const
{
    return autobackups.is_set
	|| down_autobackups.is_set
	|| next_hop_autobackup_protected_ls_ps.is_set
	|| next_hop_autobackup_protected_s2_ls.is_set
	|| next_hop_autobackup_protected_s2l_families.is_set
	|| next_hop_autobackups.is_set
	|| next_hop_srlg_autobackup_protected_ls_ps.is_set
	|| next_hop_srlg_autobackup_protected_s2_ls.is_set
	|| next_hop_srlg_autobackup_protected_s2l_families.is_set
	|| next_next_hop_autobackup_protected_ls_ps.is_set
	|| next_next_hop_autobackup_protected_s2_ls.is_set
	|| next_next_hop_autobackup_protected_s2l_families.is_set
	|| next_next_hop_autobackups.is_set
	|| next_next_hop_srlg_autobackup_protected_ls_ps.is_set
	|| next_next_hop_srlg_autobackup_protected_s2_ls.is_set
	|| next_next_hop_srlg_autobackup_protected_s2l_families.is_set
	|| srlg_preferred_autobackups.is_set
	|| srlg_strict_autobackups.is_set
	|| srlg_weighted_autobackups.is_set
	|| unused_autobackups.is_set
	|| up_autobackups.is_set;
}

bool MplsTe::AutoTunnel::Backup::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(autobackups.operation)
	|| is_set(down_autobackups.operation)
	|| is_set(next_hop_autobackup_protected_ls_ps.operation)
	|| is_set(next_hop_autobackup_protected_s2_ls.operation)
	|| is_set(next_hop_autobackup_protected_s2l_families.operation)
	|| is_set(next_hop_autobackups.operation)
	|| is_set(next_hop_srlg_autobackup_protected_ls_ps.operation)
	|| is_set(next_hop_srlg_autobackup_protected_s2_ls.operation)
	|| is_set(next_hop_srlg_autobackup_protected_s2l_families.operation)
	|| is_set(next_next_hop_autobackup_protected_ls_ps.operation)
	|| is_set(next_next_hop_autobackup_protected_s2_ls.operation)
	|| is_set(next_next_hop_autobackup_protected_s2l_families.operation)
	|| is_set(next_next_hop_autobackups.operation)
	|| is_set(next_next_hop_srlg_autobackup_protected_ls_ps.operation)
	|| is_set(next_next_hop_srlg_autobackup_protected_s2_ls.operation)
	|| is_set(next_next_hop_srlg_autobackup_protected_s2l_families.operation)
	|| is_set(srlg_preferred_autobackups.operation)
	|| is_set(srlg_strict_autobackups.operation)
	|| is_set(srlg_weighted_autobackups.operation)
	|| is_set(unused_autobackups.operation)
	|| is_set(up_autobackups.operation);
}

std::string MplsTe::AutoTunnel::Backup::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Backup::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/backup/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autobackups.is_set || is_set(autobackups.operation)) leaf_name_data.push_back(autobackups.get_name_leafdata());
    if (down_autobackups.is_set || is_set(down_autobackups.operation)) leaf_name_data.push_back(down_autobackups.get_name_leafdata());
    if (next_hop_autobackup_protected_ls_ps.is_set || is_set(next_hop_autobackup_protected_ls_ps.operation)) leaf_name_data.push_back(next_hop_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_hop_autobackup_protected_s2_ls.is_set || is_set(next_hop_autobackup_protected_s2_ls.operation)) leaf_name_data.push_back(next_hop_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_hop_autobackup_protected_s2l_families.is_set || is_set(next_hop_autobackup_protected_s2l_families.operation)) leaf_name_data.push_back(next_hop_autobackup_protected_s2l_families.get_name_leafdata());
    if (next_hop_autobackups.is_set || is_set(next_hop_autobackups.operation)) leaf_name_data.push_back(next_hop_autobackups.get_name_leafdata());
    if (next_hop_srlg_autobackup_protected_ls_ps.is_set || is_set(next_hop_srlg_autobackup_protected_ls_ps.operation)) leaf_name_data.push_back(next_hop_srlg_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_hop_srlg_autobackup_protected_s2_ls.is_set || is_set(next_hop_srlg_autobackup_protected_s2_ls.operation)) leaf_name_data.push_back(next_hop_srlg_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_hop_srlg_autobackup_protected_s2l_families.is_set || is_set(next_hop_srlg_autobackup_protected_s2l_families.operation)) leaf_name_data.push_back(next_hop_srlg_autobackup_protected_s2l_families.get_name_leafdata());
    if (next_next_hop_autobackup_protected_ls_ps.is_set || is_set(next_next_hop_autobackup_protected_ls_ps.operation)) leaf_name_data.push_back(next_next_hop_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_next_hop_autobackup_protected_s2_ls.is_set || is_set(next_next_hop_autobackup_protected_s2_ls.operation)) leaf_name_data.push_back(next_next_hop_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_next_hop_autobackup_protected_s2l_families.is_set || is_set(next_next_hop_autobackup_protected_s2l_families.operation)) leaf_name_data.push_back(next_next_hop_autobackup_protected_s2l_families.get_name_leafdata());
    if (next_next_hop_autobackups.is_set || is_set(next_next_hop_autobackups.operation)) leaf_name_data.push_back(next_next_hop_autobackups.get_name_leafdata());
    if (next_next_hop_srlg_autobackup_protected_ls_ps.is_set || is_set(next_next_hop_srlg_autobackup_protected_ls_ps.operation)) leaf_name_data.push_back(next_next_hop_srlg_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_next_hop_srlg_autobackup_protected_s2_ls.is_set || is_set(next_next_hop_srlg_autobackup_protected_s2_ls.operation)) leaf_name_data.push_back(next_next_hop_srlg_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_next_hop_srlg_autobackup_protected_s2l_families.is_set || is_set(next_next_hop_srlg_autobackup_protected_s2l_families.operation)) leaf_name_data.push_back(next_next_hop_srlg_autobackup_protected_s2l_families.get_name_leafdata());
    if (srlg_preferred_autobackups.is_set || is_set(srlg_preferred_autobackups.operation)) leaf_name_data.push_back(srlg_preferred_autobackups.get_name_leafdata());
    if (srlg_strict_autobackups.is_set || is_set(srlg_strict_autobackups.operation)) leaf_name_data.push_back(srlg_strict_autobackups.get_name_leafdata());
    if (srlg_weighted_autobackups.is_set || is_set(srlg_weighted_autobackups.operation)) leaf_name_data.push_back(srlg_weighted_autobackups.get_name_leafdata());
    if (unused_autobackups.is_set || is_set(unused_autobackups.operation)) leaf_name_data.push_back(unused_autobackups.get_name_leafdata());
    if (up_autobackups.is_set || is_set(up_autobackups.operation)) leaf_name_data.push_back(up_autobackups.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Backup::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Backup::Summary::get_children()
{
    return children;
}

void MplsTe::AutoTunnel::Backup::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "autobackups")
    {
        autobackups = value;
    }
    if(value_path == "down-autobackups")
    {
        down_autobackups = value;
    }
    if(value_path == "next-hop-autobackup-protected-ls-ps")
    {
        next_hop_autobackup_protected_ls_ps = value;
    }
    if(value_path == "next-hop-autobackup-protected-s2-ls")
    {
        next_hop_autobackup_protected_s2_ls = value;
    }
    if(value_path == "next-hop-autobackup-protected-s2l-families")
    {
        next_hop_autobackup_protected_s2l_families = value;
    }
    if(value_path == "next-hop-autobackups")
    {
        next_hop_autobackups = value;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-ls-ps")
    {
        next_hop_srlg_autobackup_protected_ls_ps = value;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-s2-ls")
    {
        next_hop_srlg_autobackup_protected_s2_ls = value;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-s2l-families")
    {
        next_hop_srlg_autobackup_protected_s2l_families = value;
    }
    if(value_path == "next-next-hop-autobackup-protected-ls-ps")
    {
        next_next_hop_autobackup_protected_ls_ps = value;
    }
    if(value_path == "next-next-hop-autobackup-protected-s2-ls")
    {
        next_next_hop_autobackup_protected_s2_ls = value;
    }
    if(value_path == "next-next-hop-autobackup-protected-s2l-families")
    {
        next_next_hop_autobackup_protected_s2l_families = value;
    }
    if(value_path == "next-next-hop-autobackups")
    {
        next_next_hop_autobackups = value;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-ls-ps")
    {
        next_next_hop_srlg_autobackup_protected_ls_ps = value;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-s2-ls")
    {
        next_next_hop_srlg_autobackup_protected_s2_ls = value;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-s2l-families")
    {
        next_next_hop_srlg_autobackup_protected_s2l_families = value;
    }
    if(value_path == "srlg-preferred-autobackups")
    {
        srlg_preferred_autobackups = value;
    }
    if(value_path == "srlg-strict-autobackups")
    {
        srlg_strict_autobackups = value;
    }
    if(value_path == "srlg-weighted-autobackups")
    {
        srlg_weighted_autobackups = value;
    }
    if(value_path == "unused-autobackups")
    {
        unused_autobackups = value;
    }
    if(value_path == "up-autobackups")
    {
        up_autobackups = value;
    }
}

MplsTe::AutoTunnel::Backup::Config::Config()
    :
    interface_count{YType::uint32, "interface-count"},
    is_configured{YType::boolean, "is-configured"},
    max_tunnel_id{YType::uint16, "max-tunnel-id"},
    min_tunnel_id{YType::uint16, "min-tunnel-id"},
    unused_removal_timeout_configured{YType::uint32, "unused-removal-timeout-configured"}
{
    yang_name = "config"; yang_parent_name = "backup";
}

MplsTe::AutoTunnel::Backup::Config::~Config()
{
}

bool MplsTe::AutoTunnel::Backup::Config::has_data() const
{
    return interface_count.is_set
	|| is_configured.is_set
	|| max_tunnel_id.is_set
	|| min_tunnel_id.is_set
	|| unused_removal_timeout_configured.is_set;
}

bool MplsTe::AutoTunnel::Backup::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_count.operation)
	|| is_set(is_configured.operation)
	|| is_set(max_tunnel_id.operation)
	|| is_set(min_tunnel_id.operation)
	|| is_set(unused_removal_timeout_configured.operation);
}

std::string MplsTe::AutoTunnel::Backup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

EntityPath MplsTe::AutoTunnel::Backup::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/backup/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_count.is_set || is_set(interface_count.operation)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (is_configured.is_set || is_set(is_configured.operation)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (max_tunnel_id.is_set || is_set(max_tunnel_id.operation)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());
    if (min_tunnel_id.is_set || is_set(min_tunnel_id.operation)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());
    if (unused_removal_timeout_configured.is_set || is_set(unused_removal_timeout_configured.operation)) leaf_name_data.push_back(unused_removal_timeout_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Backup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::AutoTunnel::Backup::Config::get_children()
{
    return children;
}

void MplsTe::AutoTunnel::Backup::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-count")
    {
        interface_count = value;
    }
    if(value_path == "is-configured")
    {
        is_configured = value;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
    }
    if(value_path == "unused-removal-timeout-configured")
    {
        unused_removal_timeout_configured = value;
    }
}

MplsTe::SoftPreemption::SoftPreemption()
    :
    statistics(std::make_shared<MplsTe::SoftPreemption::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "soft-preemption"; yang_parent_name = "mpls-te";
}

MplsTe::SoftPreemption::~SoftPreemption()
{
}

bool MplsTe::SoftPreemption::has_data() const
{
    return (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SoftPreemption::has_operation() const
{
    return is_set(operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SoftPreemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption";

    return path_buffer.str();

}

EntityPath MplsTe::SoftPreemption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SoftPreemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            statistics = std::make_shared<MplsTe::SoftPreemption::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SoftPreemption::get_children()
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

void MplsTe::SoftPreemption::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::SoftPreemption::Statistics::Statistics()
    :
    frr_triggered_soft_preempted_lsp_ss{YType::uint32, "frr-triggered-soft-preempted-lsp-ss"},
    last_cleared_timestamp{YType::uint32, "last-cleared-timestamp"},
    minimum_time_in_soft_preempted_state{YType::uint16, "minimum-time-in-soft-preempted-state"},
    path_protected_switchover_soft_preempted_ls_ps{YType::uint32, "path-protected-switchover-soft-preempted-ls-ps"},
    reoptimized_soft_preempted_ls_ps{YType::uint32, "reoptimized-soft-preempted-ls-ps"},
    soft_preempted_head_ls_ps{YType::uint32, "soft-preempted-head-ls-ps"},
    soft_preempted_ls_ps{YType::uint32, "soft-preempted-ls-ps"},
    soft_preemption_events{YType::uint32, "soft-preemption-events"},
    time_in_soft_preempted_state_avg{YType::uint16, "time-in-soft-preempted-state-avg"},
    time_in_soft_preempted_state_max{YType::uint16, "time-in-soft-preempted-state-max"},
    timed_out_soft_preempted_lsp_ss{YType::uint32, "timed-out-soft-preempted-lsp-ss"},
    torn_down_soft_preempted_ls_ps{YType::uint32, "torn-down-soft-preempted-ls-ps"},
    torndown_soft_preempted_ls_ps{YType::uint32, "torndown-soft-preempted-ls-ps"}
{
    yang_name = "statistics"; yang_parent_name = "soft-preemption";
}

MplsTe::SoftPreemption::Statistics::~Statistics()
{
}

bool MplsTe::SoftPreemption::Statistics::has_data() const
{
    return frr_triggered_soft_preempted_lsp_ss.is_set
	|| last_cleared_timestamp.is_set
	|| minimum_time_in_soft_preempted_state.is_set
	|| path_protected_switchover_soft_preempted_ls_ps.is_set
	|| reoptimized_soft_preempted_ls_ps.is_set
	|| soft_preempted_head_ls_ps.is_set
	|| soft_preempted_ls_ps.is_set
	|| soft_preemption_events.is_set
	|| time_in_soft_preempted_state_avg.is_set
	|| time_in_soft_preempted_state_max.is_set
	|| timed_out_soft_preempted_lsp_ss.is_set
	|| torn_down_soft_preempted_ls_ps.is_set
	|| torndown_soft_preempted_ls_ps.is_set;
}

bool MplsTe::SoftPreemption::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(frr_triggered_soft_preempted_lsp_ss.operation)
	|| is_set(last_cleared_timestamp.operation)
	|| is_set(minimum_time_in_soft_preempted_state.operation)
	|| is_set(path_protected_switchover_soft_preempted_ls_ps.operation)
	|| is_set(reoptimized_soft_preempted_ls_ps.operation)
	|| is_set(soft_preempted_head_ls_ps.operation)
	|| is_set(soft_preempted_ls_ps.operation)
	|| is_set(soft_preemption_events.operation)
	|| is_set(time_in_soft_preempted_state_avg.operation)
	|| is_set(time_in_soft_preempted_state_max.operation)
	|| is_set(timed_out_soft_preempted_lsp_ss.operation)
	|| is_set(torn_down_soft_preempted_ls_ps.operation)
	|| is_set(torndown_soft_preempted_ls_ps.operation);
}

std::string MplsTe::SoftPreemption::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsTe::SoftPreemption::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/soft-preemption/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_triggered_soft_preempted_lsp_ss.is_set || is_set(frr_triggered_soft_preempted_lsp_ss.operation)) leaf_name_data.push_back(frr_triggered_soft_preempted_lsp_ss.get_name_leafdata());
    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.operation)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());
    if (minimum_time_in_soft_preempted_state.is_set || is_set(minimum_time_in_soft_preempted_state.operation)) leaf_name_data.push_back(minimum_time_in_soft_preempted_state.get_name_leafdata());
    if (path_protected_switchover_soft_preempted_ls_ps.is_set || is_set(path_protected_switchover_soft_preempted_ls_ps.operation)) leaf_name_data.push_back(path_protected_switchover_soft_preempted_ls_ps.get_name_leafdata());
    if (reoptimized_soft_preempted_ls_ps.is_set || is_set(reoptimized_soft_preempted_ls_ps.operation)) leaf_name_data.push_back(reoptimized_soft_preempted_ls_ps.get_name_leafdata());
    if (soft_preempted_head_ls_ps.is_set || is_set(soft_preempted_head_ls_ps.operation)) leaf_name_data.push_back(soft_preempted_head_ls_ps.get_name_leafdata());
    if (soft_preempted_ls_ps.is_set || is_set(soft_preempted_ls_ps.operation)) leaf_name_data.push_back(soft_preempted_ls_ps.get_name_leafdata());
    if (soft_preemption_events.is_set || is_set(soft_preemption_events.operation)) leaf_name_data.push_back(soft_preemption_events.get_name_leafdata());
    if (time_in_soft_preempted_state_avg.is_set || is_set(time_in_soft_preempted_state_avg.operation)) leaf_name_data.push_back(time_in_soft_preempted_state_avg.get_name_leafdata());
    if (time_in_soft_preempted_state_max.is_set || is_set(time_in_soft_preempted_state_max.operation)) leaf_name_data.push_back(time_in_soft_preempted_state_max.get_name_leafdata());
    if (timed_out_soft_preempted_lsp_ss.is_set || is_set(timed_out_soft_preempted_lsp_ss.operation)) leaf_name_data.push_back(timed_out_soft_preempted_lsp_ss.get_name_leafdata());
    if (torn_down_soft_preempted_ls_ps.is_set || is_set(torn_down_soft_preempted_ls_ps.operation)) leaf_name_data.push_back(torn_down_soft_preempted_ls_ps.get_name_leafdata());
    if (torndown_soft_preempted_ls_ps.is_set || is_set(torndown_soft_preempted_ls_ps.operation)) leaf_name_data.push_back(torndown_soft_preempted_ls_ps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SoftPreemption::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SoftPreemption::Statistics::get_children()
{
    return children;
}

void MplsTe::SoftPreemption::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frr-triggered-soft-preempted-lsp-ss")
    {
        frr_triggered_soft_preempted_lsp_ss = value;
    }
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
    }
    if(value_path == "minimum-time-in-soft-preempted-state")
    {
        minimum_time_in_soft_preempted_state = value;
    }
    if(value_path == "path-protected-switchover-soft-preempted-ls-ps")
    {
        path_protected_switchover_soft_preempted_ls_ps = value;
    }
    if(value_path == "reoptimized-soft-preempted-ls-ps")
    {
        reoptimized_soft_preempted_ls_ps = value;
    }
    if(value_path == "soft-preempted-head-ls-ps")
    {
        soft_preempted_head_ls_ps = value;
    }
    if(value_path == "soft-preempted-ls-ps")
    {
        soft_preempted_ls_ps = value;
    }
    if(value_path == "soft-preemption-events")
    {
        soft_preemption_events = value;
    }
    if(value_path == "time-in-soft-preempted-state-avg")
    {
        time_in_soft_preempted_state_avg = value;
    }
    if(value_path == "time-in-soft-preempted-state-max")
    {
        time_in_soft_preempted_state_max = value;
    }
    if(value_path == "timed-out-soft-preempted-lsp-ss")
    {
        timed_out_soft_preempted_lsp_ss = value;
    }
    if(value_path == "torn-down-soft-preempted-ls-ps")
    {
        torn_down_soft_preempted_ls_ps = value;
    }
    if(value_path == "torndown-soft-preempted-ls-ps")
    {
        torndown_soft_preempted_ls_ps = value;
    }
}

MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestinations()
{
    yang_name = "forwarding-adjacency-destinations"; yang_parent_name = "mpls-te";
}

MplsTe::ForwardingAdjacencyDestinations::~ForwardingAdjacencyDestinations()
{
}

bool MplsTe::ForwardingAdjacencyDestinations::has_data() const
{
    for (std::size_t index=0; index<forwarding_adjacency_destination.size(); index++)
    {
        if(forwarding_adjacency_destination[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::ForwardingAdjacencyDestinations::has_operation() const
{
    for (std::size_t index=0; index<forwarding_adjacency_destination.size(); index++)
    {
        if(forwarding_adjacency_destination[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::ForwardingAdjacencyDestinations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-adjacency-destinations";

    return path_buffer.str();

}

EntityPath MplsTe::ForwardingAdjacencyDestinations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::ForwardingAdjacencyDestinations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "forwarding-adjacency-destination")
    {
        for(auto const & c : forwarding_adjacency_destination)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination>();
        c->parent = this;
        forwarding_adjacency_destination.push_back(std::move(c));
        children[segment_path] = forwarding_adjacency_destination.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::ForwardingAdjacencyDestinations::get_children()
{
    for (auto const & c : forwarding_adjacency_destination)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::ForwardingAdjacencyDestinations::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardingAdjacencyDestination()
    :
    destination_address{YType::str, "destination-address"},
    adjacencies{YType::uint32, "adjacencies"},
    destination_address_xr{YType::str, "destination-address-xr"},
    ipv6_adjacencies{YType::uint32, "ipv6-adjacencies"}
{
    yang_name = "forwarding-adjacency-destination"; yang_parent_name = "forwarding-adjacency-destinations";
}

MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::~ForwardingAdjacencyDestination()
{
}

bool MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::has_data() const
{
    for (std::size_t index=0; index<forward_adjacency.size(); index++)
    {
        if(forward_adjacency[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| adjacencies.is_set
	|| destination_address_xr.is_set
	|| ipv6_adjacencies.is_set;
}

bool MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::has_operation() const
{
    for (std::size_t index=0; index<forward_adjacency.size(); index++)
    {
        if(forward_adjacency[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(adjacencies.operation)
	|| is_set(destination_address_xr.operation)
	|| is_set(ipv6_adjacencies.operation);
}

std::string MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-adjacency-destination" <<"[destination-address='" <<destination_address <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/forwarding-adjacency-destinations/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (adjacencies.is_set || is_set(adjacencies.operation)) leaf_name_data.push_back(adjacencies.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.operation)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (ipv6_adjacencies.is_set || is_set(ipv6_adjacencies.operation)) leaf_name_data.push_back(ipv6_adjacencies.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "forward-adjacency")
    {
        for(auto const & c : forward_adjacency)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency>();
        c->parent = this;
        forward_adjacency.push_back(std::move(c));
        children[segment_path] = forward_adjacency.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::get_children()
{
    for (auto const & c : forward_adjacency)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "adjacencies")
    {
        adjacencies = value;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
    }
    if(value_path == "ipv6-adjacencies")
    {
        ipv6_adjacencies = value;
    }
}

MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::ForwardAdjacency()
    :
    hold_time{YType::uint32, "hold-time"},
    is_adjacency_up{YType::boolean, "is-adjacency-up"},
    traffic_share{YType::uint32, "traffic-share"},
    tunnel_name{YType::str, "tunnel-name"}
{
    yang_name = "forward-adjacency"; yang_parent_name = "forwarding-adjacency-destination";
}

MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::~ForwardAdjacency()
{
}

bool MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::has_data() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_data())
            return true;
    }
    return hold_time.is_set
	|| is_adjacency_up.is_set
	|| traffic_share.is_set
	|| tunnel_name.is_set;
}

bool MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::has_operation() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(hold_time.operation)
	|| is_set(is_adjacency_up.operation)
	|| is_set(traffic_share.operation)
	|| is_set(tunnel_name.operation);
}

std::string MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-adjacency";

    return path_buffer.str();

}

EntityPath MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardAdjacency' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (is_adjacency_up.is_set || is_set(is_adjacency_up.operation)) leaf_name_data.push_back(is_adjacency_up.get_name_leafdata());
    if (traffic_share.is_set || is_set(traffic_share.operation)) leaf_name_data.push_back(traffic_share.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ig-ps")
    {
        for(auto const & c : ig_ps)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs>();
        c->parent = this;
        ig_ps.push_back(std::move(c));
        children[segment_path] = ig_ps.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::get_children()
{
    for (auto const & c : ig_ps)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "is-adjacency-up")
    {
        is_adjacency_up = value;
    }
    if(value_path == "traffic-share")
    {
        traffic_share = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::IgPs()
    :
    afi{YType::enumeration, "afi"},
    igp_area_id{YType::str, "igp-area-id"}
{
    yang_name = "ig-ps"; yang_parent_name = "forward-adjacency";
}

MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::~IgPs()
{
}

bool MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::has_data() const
{
    return afi.is_set
	|| igp_area_id.is_set;
}

bool MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(igp_area_id.operation);
}

std::string MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ig-ps";

    return path_buffer.str();

}

EntityPath MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgPs' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (igp_area_id.is_set || is_set(igp_area_id.operation)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::get_children()
{
    return children;
}

void MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
    }
}

MplsTe::IgpAreas::IgpAreas()
{
    yang_name = "igp-areas"; yang_parent_name = "mpls-te";
}

MplsTe::IgpAreas::~IgpAreas()
{
}

bool MplsTe::IgpAreas::has_data() const
{
    for (std::size_t index=0; index<igp_area.size(); index++)
    {
        if(igp_area[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::IgpAreas::has_operation() const
{
    for (std::size_t index=0; index<igp_area.size(); index++)
    {
        if(igp_area[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::IgpAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-areas";

    return path_buffer.str();

}

EntityPath MplsTe::IgpAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::IgpAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "igp-area")
    {
        for(auto const & c : igp_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::IgpAreas::IgpArea>();
        c->parent = this;
        igp_area.push_back(std::move(c));
        children[segment_path] = igp_area.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::IgpAreas::get_children()
{
    for (auto const & c : igp_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::IgpAreas::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::IgpAreas::IgpArea::IgpArea()
    :
    process_tag{YType::str, "process-tag"},
    protocol{YType::enumeration, "protocol"},
    configured_te_router_id{YType::str, "configured-te-router-id"},
    connection_down_count{YType::uint32, "connection-down-count"},
    connection_up_count{YType::uint32, "connection-up-count"},
    global_router_id{YType::str, "global-router-id"},
    globall_router_id_optical{YType::str, "globall-router-id-optical"},
    igp_system_id{YType::str, "igp-system-id"},
    igp_type{YType::enumeration, "igp-type"},
    in_use_te_router_id{YType::str, "in-use-te-router-id"},
    instance_name{YType::str, "instance-name"},
    is_connection_up{YType::boolean, "is-connection-up"},
    secondary_router_id{YType::str, "secondary-router-id"}
{
    yang_name = "igp-area"; yang_parent_name = "igp-areas";
}

MplsTe::IgpAreas::IgpArea::~IgpArea()
{
}

bool MplsTe::IgpAreas::IgpArea::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    for (auto const & leaf : secondary_router_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return process_tag.is_set
	|| protocol.is_set
	|| configured_te_router_id.is_set
	|| connection_down_count.is_set
	|| connection_up_count.is_set
	|| global_router_id.is_set
	|| globall_router_id_optical.is_set
	|| igp_system_id.is_set
	|| igp_type.is_set
	|| in_use_te_router_id.is_set
	|| instance_name.is_set
	|| is_connection_up.is_set;
}

bool MplsTe::IgpAreas::IgpArea::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    for (auto const & leaf : secondary_router_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(process_tag.operation)
	|| is_set(protocol.operation)
	|| is_set(configured_te_router_id.operation)
	|| is_set(connection_down_count.operation)
	|| is_set(connection_up_count.operation)
	|| is_set(global_router_id.operation)
	|| is_set(globall_router_id_optical.operation)
	|| is_set(igp_system_id.operation)
	|| is_set(igp_type.operation)
	|| is_set(in_use_te_router_id.operation)
	|| is_set(instance_name.operation)
	|| is_set(is_connection_up.operation)
	|| is_set(secondary_router_id.operation);
}

std::string MplsTe::IgpAreas::IgpArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-area" <<"[process-tag='" <<process_tag <<"']" <<"[protocol='" <<protocol <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::IgpAreas::IgpArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/igp-areas/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_tag.is_set || is_set(process_tag.operation)) leaf_name_data.push_back(process_tag.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (configured_te_router_id.is_set || is_set(configured_te_router_id.operation)) leaf_name_data.push_back(configured_te_router_id.get_name_leafdata());
    if (connection_down_count.is_set || is_set(connection_down_count.operation)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.operation)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (global_router_id.is_set || is_set(global_router_id.operation)) leaf_name_data.push_back(global_router_id.get_name_leafdata());
    if (globall_router_id_optical.is_set || is_set(globall_router_id_optical.operation)) leaf_name_data.push_back(globall_router_id_optical.get_name_leafdata());
    if (igp_system_id.is_set || is_set(igp_system_id.operation)) leaf_name_data.push_back(igp_system_id.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.operation)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (in_use_te_router_id.is_set || is_set(in_use_te_router_id.operation)) leaf_name_data.push_back(in_use_te_router_id.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (is_connection_up.is_set || is_set(is_connection_up.operation)) leaf_name_data.push_back(is_connection_up.get_name_leafdata());

    auto secondary_router_id_name_datas = secondary_router_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), secondary_router_id_name_datas.begin(), secondary_router_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::IgpAreas::IgpArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area")
    {
        for(auto const & c : area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::IgpAreas::IgpArea::Area>();
        c->parent = this;
        area.push_back(std::move(c));
        children[segment_path] = area.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::IgpAreas::IgpArea::get_children()
{
    for (auto const & c : area)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::IgpAreas::IgpArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-tag")
    {
        process_tag = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "configured-te-router-id")
    {
        configured_te_router_id = value;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count = value;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count = value;
    }
    if(value_path == "global-router-id")
    {
        global_router_id = value;
    }
    if(value_path == "globall-router-id-optical")
    {
        globall_router_id_optical = value;
    }
    if(value_path == "igp-system-id")
    {
        igp_system_id = value;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
    }
    if(value_path == "in-use-te-router-id")
    {
        in_use_te_router_id = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up = value;
    }
    if(value_path == "secondary-router-id")
    {
        secondary_router_id.append(value);
    }
}

MplsTe::IgpAreas::IgpArea::Area::Area()
    :
    area_format{YType::enumeration, "area-format"},
    area_index{YType::uint32, "area-index"},
    area_number{YType::uint32, "area-number"},
    is_config_ready{YType::boolean, "is-config-ready"}
    	,
    active_data(std::make_shared<MplsTe::IgpAreas::IgpArea::Area::ActiveData>())
{
    active_data->parent = this;
    children["active-data"] = active_data;

    yang_name = "area"; yang_parent_name = "igp-area";
}

MplsTe::IgpAreas::IgpArea::Area::~Area()
{
}

bool MplsTe::IgpAreas::IgpArea::Area::has_data() const
{
    return area_format.is_set
	|| area_index.is_set
	|| area_number.is_set
	|| is_config_ready.is_set
	|| (active_data !=  nullptr && active_data->has_data());
}

bool MplsTe::IgpAreas::IgpArea::Area::has_operation() const
{
    return is_set(operation)
	|| is_set(area_format.operation)
	|| is_set(area_index.operation)
	|| is_set(area_number.operation)
	|| is_set(is_config_ready.operation)
	|| (active_data !=  nullptr && active_data->has_operation());
}

std::string MplsTe::IgpAreas::IgpArea::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area";

    return path_buffer.str();

}

EntityPath MplsTe::IgpAreas::IgpArea::Area::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Area' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_index.is_set || is_set(area_index.operation)) leaf_name_data.push_back(area_index.get_name_leafdata());
    if (area_number.is_set || is_set(area_number.operation)) leaf_name_data.push_back(area_number.get_name_leafdata());
    if (is_config_ready.is_set || is_set(is_config_ready.operation)) leaf_name_data.push_back(is_config_ready.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::IgpAreas::IgpArea::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "active-data")
    {
        if(active_data != nullptr)
        {
            children["active-data"] = active_data;
        }
        else
        {
            active_data = std::make_shared<MplsTe::IgpAreas::IgpArea::Area::ActiveData>();
            active_data->parent = this;
            children["active-data"] = active_data;
        }
        return children.at("active-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::IgpAreas::IgpArea::Area::get_children()
{
    if(children.find("active-data") == children.end())
    {
        if(active_data != nullptr)
        {
            children["active-data"] = active_data;
        }
    }

    return children;
}

void MplsTe::IgpAreas::IgpArea::Area::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "area-index")
    {
        area_index = value;
    }
    if(value_path == "area-number")
    {
        area_number = value;
    }
    if(value_path == "is-config-ready")
    {
        is_config_ready = value;
    }
}

MplsTe::IgpAreas::IgpArea::Area::ActiveData::ActiveData()
    :
    interfaces_count{YType::uint32, "interfaces-count"},
    link_idt_received{YType::boolean, "link-idt-received"},
    p2mp_destination_count{YType::uint32, "p2mp-destination-count"},
    p2p_autoroute_announced_count{YType::uint32, "p2p-autoroute-announced-count"},
    p2p_forwarding_adjacency_count{YType::uint32, "p2p-forwarding-adjacency-count"},
    p2p_heads_count{YType::uint32, "p2p-heads-count"},
    sr_strict{YType::boolean, "sr-strict"},
    topology_idt_received{YType::boolean, "topology-idt-received"},
    tunnel_loose_hops{YType::uint32, "tunnel-loose-hops"}
    	,
    area_statistics(std::make_shared<MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics>())
{
    area_statistics->parent = this;
    children["area-statistics"] = area_statistics;

    yang_name = "active-data"; yang_parent_name = "area";
}

MplsTe::IgpAreas::IgpArea::Area::ActiveData::~ActiveData()
{
}

bool MplsTe::IgpAreas::IgpArea::Area::ActiveData::has_data() const
{
    return interfaces_count.is_set
	|| link_idt_received.is_set
	|| p2mp_destination_count.is_set
	|| p2p_autoroute_announced_count.is_set
	|| p2p_forwarding_adjacency_count.is_set
	|| p2p_heads_count.is_set
	|| sr_strict.is_set
	|| topology_idt_received.is_set
	|| tunnel_loose_hops.is_set
	|| (area_statistics !=  nullptr && area_statistics->has_data());
}

bool MplsTe::IgpAreas::IgpArea::Area::ActiveData::has_operation() const
{
    return is_set(operation)
	|| is_set(interfaces_count.operation)
	|| is_set(link_idt_received.operation)
	|| is_set(p2mp_destination_count.operation)
	|| is_set(p2p_autoroute_announced_count.operation)
	|| is_set(p2p_forwarding_adjacency_count.operation)
	|| is_set(p2p_heads_count.operation)
	|| is_set(sr_strict.operation)
	|| is_set(topology_idt_received.operation)
	|| is_set(tunnel_loose_hops.operation)
	|| (area_statistics !=  nullptr && area_statistics->has_operation());
}

std::string MplsTe::IgpAreas::IgpArea::Area::ActiveData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-data";

    return path_buffer.str();

}

EntityPath MplsTe::IgpAreas::IgpArea::Area::ActiveData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActiveData' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interfaces_count.is_set || is_set(interfaces_count.operation)) leaf_name_data.push_back(interfaces_count.get_name_leafdata());
    if (link_idt_received.is_set || is_set(link_idt_received.operation)) leaf_name_data.push_back(link_idt_received.get_name_leafdata());
    if (p2mp_destination_count.is_set || is_set(p2mp_destination_count.operation)) leaf_name_data.push_back(p2mp_destination_count.get_name_leafdata());
    if (p2p_autoroute_announced_count.is_set || is_set(p2p_autoroute_announced_count.operation)) leaf_name_data.push_back(p2p_autoroute_announced_count.get_name_leafdata());
    if (p2p_forwarding_adjacency_count.is_set || is_set(p2p_forwarding_adjacency_count.operation)) leaf_name_data.push_back(p2p_forwarding_adjacency_count.get_name_leafdata());
    if (p2p_heads_count.is_set || is_set(p2p_heads_count.operation)) leaf_name_data.push_back(p2p_heads_count.get_name_leafdata());
    if (sr_strict.is_set || is_set(sr_strict.operation)) leaf_name_data.push_back(sr_strict.get_name_leafdata());
    if (topology_idt_received.is_set || is_set(topology_idt_received.operation)) leaf_name_data.push_back(topology_idt_received.get_name_leafdata());
    if (tunnel_loose_hops.is_set || is_set(tunnel_loose_hops.operation)) leaf_name_data.push_back(tunnel_loose_hops.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::IgpAreas::IgpArea::Area::ActiveData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-statistics")
    {
        if(area_statistics != nullptr)
        {
            children["area-statistics"] = area_statistics;
        }
        else
        {
            area_statistics = std::make_shared<MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics>();
            area_statistics->parent = this;
            children["area-statistics"] = area_statistics;
        }
        return children.at("area-statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::IgpAreas::IgpArea::Area::ActiveData::get_children()
{
    if(children.find("area-statistics") == children.end())
    {
        if(area_statistics != nullptr)
        {
            children["area-statistics"] = area_statistics;
        }
    }

    return children;
}

void MplsTe::IgpAreas::IgpArea::Area::ActiveData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interfaces-count")
    {
        interfaces_count = value;
    }
    if(value_path == "link-idt-received")
    {
        link_idt_received = value;
    }
    if(value_path == "p2mp-destination-count")
    {
        p2mp_destination_count = value;
    }
    if(value_path == "p2p-autoroute-announced-count")
    {
        p2p_autoroute_announced_count = value;
    }
    if(value_path == "p2p-forwarding-adjacency-count")
    {
        p2p_forwarding_adjacency_count = value;
    }
    if(value_path == "p2p-heads-count")
    {
        p2p_heads_count = value;
    }
    if(value_path == "sr-strict")
    {
        sr_strict = value;
    }
    if(value_path == "topology-idt-received")
    {
        topology_idt_received = value;
    }
    if(value_path == "tunnel-loose-hops")
    {
        tunnel_loose_hops = value;
    }
}

MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::AreaStatistics()
    :
    area_adjacency_announce_messages{YType::uint32, "area-adjacency-announce-messages"},
    area_adjacency_request_messages{YType::uint32, "area-adjacency-request-messages"},
    area_flood_messages{YType::uint32, "area-flood-messages"},
    area_lsa_announce_messages{YType::uint32, "area-lsa-announce-messages"},
    area_lsa_delete_messages{YType::uint32, "area-lsa-delete-messages"},
    area_lsa_fragment_announce_messages{YType::uint32, "area-lsa-fragment-announce-messages"},
    area_lsa_fragment_delete_messages{YType::uint32, "area-lsa-fragment-delete-messages"},
    area_tunnel_announce_messages{YType::uint32, "area-tunnel-announce-messages"}
{
    yang_name = "area-statistics"; yang_parent_name = "active-data";
}

MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::~AreaStatistics()
{
}

bool MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::has_data() const
{
    return area_adjacency_announce_messages.is_set
	|| area_adjacency_request_messages.is_set
	|| area_flood_messages.is_set
	|| area_lsa_announce_messages.is_set
	|| area_lsa_delete_messages.is_set
	|| area_lsa_fragment_announce_messages.is_set
	|| area_lsa_fragment_delete_messages.is_set
	|| area_tunnel_announce_messages.is_set;
}

bool MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(area_adjacency_announce_messages.operation)
	|| is_set(area_adjacency_request_messages.operation)
	|| is_set(area_flood_messages.operation)
	|| is_set(area_lsa_announce_messages.operation)
	|| is_set(area_lsa_delete_messages.operation)
	|| is_set(area_lsa_fragment_announce_messages.operation)
	|| is_set(area_lsa_fragment_delete_messages.operation)
	|| is_set(area_tunnel_announce_messages.operation);
}

std::string MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-statistics";

    return path_buffer.str();

}

EntityPath MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaStatistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_adjacency_announce_messages.is_set || is_set(area_adjacency_announce_messages.operation)) leaf_name_data.push_back(area_adjacency_announce_messages.get_name_leafdata());
    if (area_adjacency_request_messages.is_set || is_set(area_adjacency_request_messages.operation)) leaf_name_data.push_back(area_adjacency_request_messages.get_name_leafdata());
    if (area_flood_messages.is_set || is_set(area_flood_messages.operation)) leaf_name_data.push_back(area_flood_messages.get_name_leafdata());
    if (area_lsa_announce_messages.is_set || is_set(area_lsa_announce_messages.operation)) leaf_name_data.push_back(area_lsa_announce_messages.get_name_leafdata());
    if (area_lsa_delete_messages.is_set || is_set(area_lsa_delete_messages.operation)) leaf_name_data.push_back(area_lsa_delete_messages.get_name_leafdata());
    if (area_lsa_fragment_announce_messages.is_set || is_set(area_lsa_fragment_announce_messages.operation)) leaf_name_data.push_back(area_lsa_fragment_announce_messages.get_name_leafdata());
    if (area_lsa_fragment_delete_messages.is_set || is_set(area_lsa_fragment_delete_messages.operation)) leaf_name_data.push_back(area_lsa_fragment_delete_messages.get_name_leafdata());
    if (area_tunnel_announce_messages.is_set || is_set(area_tunnel_announce_messages.operation)) leaf_name_data.push_back(area_tunnel_announce_messages.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::get_children()
{
    return children;
}

void MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-adjacency-announce-messages")
    {
        area_adjacency_announce_messages = value;
    }
    if(value_path == "area-adjacency-request-messages")
    {
        area_adjacency_request_messages = value;
    }
    if(value_path == "area-flood-messages")
    {
        area_flood_messages = value;
    }
    if(value_path == "area-lsa-announce-messages")
    {
        area_lsa_announce_messages = value;
    }
    if(value_path == "area-lsa-delete-messages")
    {
        area_lsa_delete_messages = value;
    }
    if(value_path == "area-lsa-fragment-announce-messages")
    {
        area_lsa_fragment_announce_messages = value;
    }
    if(value_path == "area-lsa-fragment-delete-messages")
    {
        area_lsa_fragment_delete_messages = value;
    }
    if(value_path == "area-tunnel-announce-messages")
    {
        area_tunnel_announce_messages = value;
    }
}

MplsTe::WrapProtection::WrapProtection()
    :
    protected_lsps(std::make_shared<MplsTe::WrapProtection::ProtectedLsps>())
{
    protected_lsps->parent = this;
    children["protected-lsps"] = protected_lsps;

    yang_name = "wrap-protection"; yang_parent_name = "mpls-te";
}

MplsTe::WrapProtection::~WrapProtection()
{
}

bool MplsTe::WrapProtection::has_data() const
{
    return (protected_lsps !=  nullptr && protected_lsps->has_data());
}

bool MplsTe::WrapProtection::has_operation() const
{
    return is_set(operation)
	|| (protected_lsps !=  nullptr && protected_lsps->has_operation());
}

std::string MplsTe::WrapProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wrap-protection";

    return path_buffer.str();

}

EntityPath MplsTe::WrapProtection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::WrapProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "protected-lsps")
    {
        if(protected_lsps != nullptr)
        {
            children["protected-lsps"] = protected_lsps;
        }
        else
        {
            protected_lsps = std::make_shared<MplsTe::WrapProtection::ProtectedLsps>();
            protected_lsps->parent = this;
            children["protected-lsps"] = protected_lsps;
        }
        return children.at("protected-lsps");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::WrapProtection::get_children()
{
    if(children.find("protected-lsps") == children.end())
    {
        if(protected_lsps != nullptr)
        {
            children["protected-lsps"] = protected_lsps;
        }
    }

    return children;
}

void MplsTe::WrapProtection::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::WrapProtection::ProtectedLsps::ProtectedLsps()
{
    yang_name = "protected-lsps"; yang_parent_name = "wrap-protection";
}

MplsTe::WrapProtection::ProtectedLsps::~ProtectedLsps()
{
}

bool MplsTe::WrapProtection::ProtectedLsps::has_data() const
{
    for (std::size_t index=0; index<protected_lsp.size(); index++)
    {
        if(protected_lsp[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::WrapProtection::ProtectedLsps::has_operation() const
{
    for (std::size_t index=0; index<protected_lsp.size(); index++)
    {
        if(protected_lsp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::WrapProtection::ProtectedLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-lsps";

    return path_buffer.str();

}

EntityPath MplsTe::WrapProtection::ProtectedLsps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/wrap-protection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::WrapProtection::ProtectedLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "protected-lsp")
    {
        for(auto const & c : protected_lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp>();
        c->parent = this;
        protected_lsp.push_back(std::move(c));
        children[segment_path] = protected_lsp.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::WrapProtection::ProtectedLsps::get_children()
{
    for (auto const & c : protected_lsp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::WrapProtection::ProtectedLsps::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp::ProtectedLsp()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsp_id{YType::int32, "lsp-id"},
    p2mp_id{YType::int32, "p2mp-id"},
    session_type{YType::enumeration, "session-type"},
    source_address{YType::str, "source-address"},
    sub_group_id{YType::int32, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"},
    tunnel_id{YType::int32, "tunnel-id"},
    destination_address_xr{YType::str, "destination-address-xr"},
    extended_tunnel_id_xr{YType::str, "extended-tunnel-id-xr"},
    lsp_wrap_protection_enable{YType::boolean, "lsp-wrap-protection-enable"},
    lsp_wrap_protection_label{YType::uint32, "lsp-wrap-protection-label"},
    lsp_wrap_protection_state{YType::enumeration, "lsp-wrap-protection-state"},
    p2mp_id_xr{YType::uint32, "p2mp-id-xr"},
    reverse_egress_interface{YType::str, "reverse-egress-interface"},
    reverse_lsp_label{YType::uint32, "reverse-lsp-label"},
    source_address_xr{YType::str, "source-address-xr"},
    sub_group_id_xr{YType::uint16, "sub-group-id-xr"},
    sub_group_original_id{YType::str, "sub-group-original-id"},
    tunnel_id_xr{YType::uint16, "tunnel-id-xr"},
    tunnel_instance{YType::uint32, "tunnel-instance"},
    tunnel_name{YType::str, "tunnel-name"}
{
    yang_name = "protected-lsp"; yang_parent_name = "protected-lsps";
}

MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp::~ProtectedLsp()
{
}

bool MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp::has_data() const
{
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| lsp_id.is_set
	|| p2mp_id.is_set
	|| session_type.is_set
	|| source_address.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| tunnel_id.is_set
	|| destination_address_xr.is_set
	|| extended_tunnel_id_xr.is_set
	|| lsp_wrap_protection_enable.is_set
	|| lsp_wrap_protection_label.is_set
	|| lsp_wrap_protection_state.is_set
	|| p2mp_id_xr.is_set
	|| reverse_egress_interface.is_set
	|| reverse_lsp_label.is_set
	|| source_address_xr.is_set
	|| sub_group_id_xr.is_set
	|| sub_group_original_id.is_set
	|| tunnel_id_xr.is_set
	|| tunnel_instance.is_set
	|| tunnel_name.is_set;
}

bool MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(lsp_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(session_type.operation)
	|| is_set(source_address.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_originator.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(destination_address_xr.operation)
	|| is_set(extended_tunnel_id_xr.operation)
	|| is_set(lsp_wrap_protection_enable.operation)
	|| is_set(lsp_wrap_protection_label.operation)
	|| is_set(lsp_wrap_protection_state.operation)
	|| is_set(p2mp_id_xr.operation)
	|| is_set(reverse_egress_interface.operation)
	|| is_set(reverse_lsp_label.operation)
	|| is_set(source_address_xr.operation)
	|| is_set(sub_group_id_xr.operation)
	|| is_set(sub_group_original_id.operation)
	|| is_set(tunnel_id_xr.operation)
	|| is_set(tunnel_instance.operation)
	|| is_set(tunnel_name.operation);
}

std::string MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-lsp" <<"[destination-address='" <<destination_address <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[lsp-id='" <<lsp_id <<"']" <<"[p2mp-id='" <<p2mp_id <<"']" <<"[session-type='" <<session_type <<"']" <<"[source-address='" <<source_address <<"']" <<"[sub-group-id='" <<sub_group_id <<"']" <<"[sub-group-originator='" <<sub_group_originator <<"']" <<"[tunnel-id='" <<tunnel_id <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/wrap-protection/protected-lsps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.operation)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.operation)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (extended_tunnel_id_xr.is_set || is_set(extended_tunnel_id_xr.operation)) leaf_name_data.push_back(extended_tunnel_id_xr.get_name_leafdata());
    if (lsp_wrap_protection_enable.is_set || is_set(lsp_wrap_protection_enable.operation)) leaf_name_data.push_back(lsp_wrap_protection_enable.get_name_leafdata());
    if (lsp_wrap_protection_label.is_set || is_set(lsp_wrap_protection_label.operation)) leaf_name_data.push_back(lsp_wrap_protection_label.get_name_leafdata());
    if (lsp_wrap_protection_state.is_set || is_set(lsp_wrap_protection_state.operation)) leaf_name_data.push_back(lsp_wrap_protection_state.get_name_leafdata());
    if (p2mp_id_xr.is_set || is_set(p2mp_id_xr.operation)) leaf_name_data.push_back(p2mp_id_xr.get_name_leafdata());
    if (reverse_egress_interface.is_set || is_set(reverse_egress_interface.operation)) leaf_name_data.push_back(reverse_egress_interface.get_name_leafdata());
    if (reverse_lsp_label.is_set || is_set(reverse_lsp_label.operation)) leaf_name_data.push_back(reverse_lsp_label.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.operation)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());
    if (sub_group_id_xr.is_set || is_set(sub_group_id_xr.operation)) leaf_name_data.push_back(sub_group_id_xr.get_name_leafdata());
    if (sub_group_original_id.is_set || is_set(sub_group_original_id.operation)) leaf_name_data.push_back(sub_group_original_id.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.operation)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());
    if (tunnel_instance.is_set || is_set(tunnel_instance.operation)) leaf_name_data.push_back(tunnel_instance.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp::get_children()
{
    return children;
}

void MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp::set_value(const std::string & value_path, std::string value)
{
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
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
    }
    if(value_path == "extended-tunnel-id-xr")
    {
        extended_tunnel_id_xr = value;
    }
    if(value_path == "lsp-wrap-protection-enable")
    {
        lsp_wrap_protection_enable = value;
    }
    if(value_path == "lsp-wrap-protection-label")
    {
        lsp_wrap_protection_label = value;
    }
    if(value_path == "lsp-wrap-protection-state")
    {
        lsp_wrap_protection_state = value;
    }
    if(value_path == "p2mp-id-xr")
    {
        p2mp_id_xr = value;
    }
    if(value_path == "reverse-egress-interface")
    {
        reverse_egress_interface = value;
    }
    if(value_path == "reverse-lsp-label")
    {
        reverse_lsp_label = value;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
    }
    if(value_path == "sub-group-id-xr")
    {
        sub_group_id_xr = value;
    }
    if(value_path == "sub-group-original-id")
    {
        sub_group_original_id = value;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTe::Topology::Topology()
    :
    configured_srlgs(std::make_shared<MplsTe::Topology::ConfiguredSrlgs>())
	,destination_paths(std::make_shared<MplsTe::Topology::DestinationPaths>())
	,global(std::make_shared<MplsTe::Topology::Global>())
	,path_tunnels(std::make_shared<MplsTe::Topology::PathTunnels>())
	,srlgs(std::make_shared<MplsTe::Topology::Srlgs>())
{
    configured_srlgs->parent = this;
    children["configured-srlgs"] = configured_srlgs;

    destination_paths->parent = this;
    children["destination-paths"] = destination_paths;

    global->parent = this;
    children["global"] = global;

    path_tunnels->parent = this;
    children["path-tunnels"] = path_tunnels;

    srlgs->parent = this;
    children["srlgs"] = srlgs;

    yang_name = "topology"; yang_parent_name = "mpls-te";
}

MplsTe::Topology::~Topology()
{
}

bool MplsTe::Topology::has_data() const
{
    return (configured_srlgs !=  nullptr && configured_srlgs->has_data())
	|| (destination_paths !=  nullptr && destination_paths->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (path_tunnels !=  nullptr && path_tunnels->has_data())
	|| (srlgs !=  nullptr && srlgs->has_data());
}

bool MplsTe::Topology::has_operation() const
{
    return is_set(operation)
	|| (configured_srlgs !=  nullptr && configured_srlgs->has_operation())
	|| (destination_paths !=  nullptr && destination_paths->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (path_tunnels !=  nullptr && path_tunnels->has_operation())
	|| (srlgs !=  nullptr && srlgs->has_operation());
}

std::string MplsTe::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "configured-srlgs")
    {
        if(configured_srlgs != nullptr)
        {
            children["configured-srlgs"] = configured_srlgs;
        }
        else
        {
            configured_srlgs = std::make_shared<MplsTe::Topology::ConfiguredSrlgs>();
            configured_srlgs->parent = this;
            children["configured-srlgs"] = configured_srlgs;
        }
        return children.at("configured-srlgs");
    }

    if(child_yang_name == "destination-paths")
    {
        if(destination_paths != nullptr)
        {
            children["destination-paths"] = destination_paths;
        }
        else
        {
            destination_paths = std::make_shared<MplsTe::Topology::DestinationPaths>();
            destination_paths->parent = this;
            children["destination-paths"] = destination_paths;
        }
        return children.at("destination-paths");
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
        else
        {
            global = std::make_shared<MplsTe::Topology::Global>();
            global->parent = this;
            children["global"] = global;
        }
        return children.at("global");
    }

    if(child_yang_name == "path-tunnels")
    {
        if(path_tunnels != nullptr)
        {
            children["path-tunnels"] = path_tunnels;
        }
        else
        {
            path_tunnels = std::make_shared<MplsTe::Topology::PathTunnels>();
            path_tunnels->parent = this;
            children["path-tunnels"] = path_tunnels;
        }
        return children.at("path-tunnels");
    }

    if(child_yang_name == "srlgs")
    {
        if(srlgs != nullptr)
        {
            children["srlgs"] = srlgs;
        }
        else
        {
            srlgs = std::make_shared<MplsTe::Topology::Srlgs>();
            srlgs->parent = this;
            children["srlgs"] = srlgs;
        }
        return children.at("srlgs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::get_children()
{
    if(children.find("configured-srlgs") == children.end())
    {
        if(configured_srlgs != nullptr)
        {
            children["configured-srlgs"] = configured_srlgs;
        }
    }

    if(children.find("destination-paths") == children.end())
    {
        if(destination_paths != nullptr)
        {
            children["destination-paths"] = destination_paths;
        }
    }

    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
    }

    if(children.find("path-tunnels") == children.end())
    {
        if(path_tunnels != nullptr)
        {
            children["path-tunnels"] = path_tunnels;
        }
    }

    if(children.find("srlgs") == children.end())
    {
        if(srlgs != nullptr)
        {
            children["srlgs"] = srlgs;
        }
    }

    return children;
}

void MplsTe::Topology::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Topology::Global::Global()
    :
    hold_down_interval{YType::uint32, "hold-down-interval"},
    link_add_remove_count{YType::uint32, "link-add-remove-count"},
    local_model_id{YType::uint32, "local-model-id"}
{
    yang_name = "global"; yang_parent_name = "topology";
}

MplsTe::Topology::Global::~Global()
{
}

bool MplsTe::Topology::Global::has_data() const
{
    for (std::size_t index=0; index<areas.size(); index++)
    {
        if(areas[index]->has_data())
            return true;
    }
    return hold_down_interval.is_set
	|| link_add_remove_count.is_set
	|| local_model_id.is_set;
}

bool MplsTe::Topology::Global::has_operation() const
{
    for (std::size_t index=0; index<areas.size(); index++)
    {
        if(areas[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(hold_down_interval.operation)
	|| is_set(link_add_remove_count.operation)
	|| is_set(local_model_id.operation);
}

std::string MplsTe::Topology::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_down_interval.is_set || is_set(hold_down_interval.operation)) leaf_name_data.push_back(hold_down_interval.get_name_leafdata());
    if (link_add_remove_count.is_set || is_set(link_add_remove_count.operation)) leaf_name_data.push_back(link_add_remove_count.get_name_leafdata());
    if (local_model_id.is_set || is_set(local_model_id.operation)) leaf_name_data.push_back(local_model_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Topology::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "areas")
    {
        for(auto const & c : areas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Topology::Global::Areas>();
        c->parent = this;
        areas.push_back(std::move(c));
        children[segment_path] = areas.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::Global::get_children()
{
    for (auto const & c : areas)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::Topology::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-down-interval")
    {
        hold_down_interval = value;
    }
    if(value_path == "link-add-remove-count")
    {
        link_add_remove_count = value;
    }
    if(value_path == "local-model-id")
    {
        local_model_id = value;
    }
}

MplsTe::Topology::Global::Areas::Areas()
    :
    area_id{YType::str, "area-id"},
    node_id{YType::str, "node-id"},
    protocol{YType::enumeration, "protocol"}
    	,
    local_sid_and_srbg(std::make_shared<MplsTe::Topology::Global::Areas::LocalSidAndSrbg>())
{
    local_sid_and_srbg->parent = this;
    children["local-sid-and-srbg"] = local_sid_and_srbg;

    yang_name = "areas"; yang_parent_name = "global";
}

MplsTe::Topology::Global::Areas::~Areas()
{
}

bool MplsTe::Topology::Global::Areas::has_data() const
{
    return area_id.is_set
	|| node_id.is_set
	|| protocol.is_set
	|| (local_sid_and_srbg !=  nullptr && local_sid_and_srbg->has_data());
}

bool MplsTe::Topology::Global::Areas::has_operation() const
{
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(node_id.operation)
	|| is_set(protocol.operation)
	|| (local_sid_and_srbg !=  nullptr && local_sid_and_srbg->has_operation());
}

std::string MplsTe::Topology::Global::Areas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areas";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::Global::Areas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Topology::Global::Areas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-sid-and-srbg")
    {
        if(local_sid_and_srbg != nullptr)
        {
            children["local-sid-and-srbg"] = local_sid_and_srbg;
        }
        else
        {
            local_sid_and_srbg = std::make_shared<MplsTe::Topology::Global::Areas::LocalSidAndSrbg>();
            local_sid_and_srbg->parent = this;
            children["local-sid-and-srbg"] = local_sid_and_srbg;
        }
        return children.at("local-sid-and-srbg");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::Global::Areas::get_children()
{
    if(children.find("local-sid-and-srbg") == children.end())
    {
        if(local_sid_and_srbg != nullptr)
        {
            children["local-sid-and-srbg"] = local_sid_and_srbg;
        }
    }

    return children;
}

void MplsTe::Topology::Global::Areas::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

MplsTe::Topology::Global::Areas::LocalSidAndSrbg::LocalSidAndSrbg()
    :
    segment_id{YType::uint32, "segment-id"},
    segment_id_local_absolute_value{YType::uint32, "segment-id-local-absolute-value"},
    srgb_size{YType::uint32, "srgb-size"},
    srgb_start{YType::uint32, "srgb-start"}
{
    yang_name = "local-sid-and-srbg"; yang_parent_name = "areas";
}

MplsTe::Topology::Global::Areas::LocalSidAndSrbg::~LocalSidAndSrbg()
{
}

bool MplsTe::Topology::Global::Areas::LocalSidAndSrbg::has_data() const
{
    return segment_id.is_set
	|| segment_id_local_absolute_value.is_set
	|| srgb_size.is_set
	|| srgb_start.is_set;
}

bool MplsTe::Topology::Global::Areas::LocalSidAndSrbg::has_operation() const
{
    return is_set(operation)
	|| is_set(segment_id.operation)
	|| is_set(segment_id_local_absolute_value.operation)
	|| is_set(srgb_size.operation)
	|| is_set(srgb_start.operation);
}

std::string MplsTe::Topology::Global::Areas::LocalSidAndSrbg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-sid-and-srbg";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::Global::Areas::LocalSidAndSrbg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/global/areas/" << get_segment_path();
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

std::shared_ptr<Entity> MplsTe::Topology::Global::Areas::LocalSidAndSrbg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::Global::Areas::LocalSidAndSrbg::get_children()
{
    return children;
}

void MplsTe::Topology::Global::Areas::LocalSidAndSrbg::set_value(const std::string & value_path, std::string value)
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

MplsTe::Topology::DestinationPaths::DestinationPaths()
{
    yang_name = "destination-paths"; yang_parent_name = "topology";
}

MplsTe::Topology::DestinationPaths::~DestinationPaths()
{
}

bool MplsTe::Topology::DestinationPaths::has_data() const
{
    for (std::size_t index=0; index<destination_path.size(); index++)
    {
        if(destination_path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Topology::DestinationPaths::has_operation() const
{
    for (std::size_t index=0; index<destination_path.size(); index++)
    {
        if(destination_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::Topology::DestinationPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-paths";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::DestinationPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Topology::DestinationPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination-path")
    {
        for(auto const & c : destination_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Topology::DestinationPaths::DestinationPath>();
        c->parent = this;
        destination_path.push_back(std::move(c));
        children[segment_path] = destination_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::DestinationPaths::get_children()
{
    for (auto const & c : destination_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::Topology::DestinationPaths::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Topology::DestinationPaths::DestinationPath::DestinationPath()
    :
    accumulated_admin_weight{YType::uint64, "accumulated-admin-weight"},
    affinity_bits{YType::int32, "affinity-bits"},
    affinity_mask{YType::int32, "affinity-mask"},
    bandwidth{YType::int32, "bandwidth"},
    bandwidth_type{YType::uint64, "bandwidth-type"},
    cost_limit{YType::int32, "cost-limit"},
    destination_address{YType::str, "destination-address"},
    destination_address_xr{YType::str, "destination-address-xr"},
    exclude_srlg_address{YType::str, "exclude-srlg-address"},
    exclude_srlg_ip_address{YType::str, "exclude-srlg-ip-address"},
    hold_priority{YType::int32, "hold-priority"},
    hold_priority_xr{YType::uint32, "hold-priority-xr"},
    hop{YType::str, "hop"},
    hop_limit{YType::int32, "hop-limit"},
    igp_area{YType::int32, "igp-area"},
    igp_instance{YType::str, "igp-instance"},
    igp_type{YType::enumeration, "igp-type"},
    is_full_path{YType::boolean, "is-full-path"},
    is_partial_path{YType::boolean, "is-partial-path"},
    is_segment_routing_db_checked{YType::boolean, "is-segment-routing-db-checked"},
    is_topology_checked{YType::boolean, "is-topology-checked"},
    mininum_bandwidth{YType::uint64, "mininum-bandwidth"},
    node_hop_count{YType::uint8, "node-hop-count"},
    path_id{YType::int32, "path-id"},
    path_name{YType::str, "path-name"},
    path_type{YType::enumeration, "path-type"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    setup_priority{YType::int32, "setup-priority"},
    setup_priority_xr{YType::uint32, "setup-priority-xr"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"}
    	,
    affinity(std::make_shared<MplsTe::Topology::DestinationPaths::DestinationPath::Affinity>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    yang_name = "destination-path"; yang_parent_name = "destination-paths";
}

MplsTe::Topology::DestinationPaths::DestinationPath::~DestinationPath()
{
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::has_data() const
{
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_segment.size(); index++)
    {
        if(sr_segment[index]->has_data())
            return true;
    }
    for (auto const & leaf : hop.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return accumulated_admin_weight.is_set
	|| affinity_bits.is_set
	|| affinity_mask.is_set
	|| bandwidth.is_set
	|| bandwidth_type.is_set
	|| cost_limit.is_set
	|| destination_address.is_set
	|| destination_address_xr.is_set
	|| exclude_srlg_address.is_set
	|| exclude_srlg_ip_address.is_set
	|| hold_priority.is_set
	|| hold_priority_xr.is_set
	|| hop_limit.is_set
	|| igp_area.is_set
	|| igp_instance.is_set
	|| igp_type.is_set
	|| is_full_path.is_set
	|| is_partial_path.is_set
	|| is_segment_routing_db_checked.is_set
	|| is_topology_checked.is_set
	|| mininum_bandwidth.is_set
	|| node_hop_count.is_set
	|| path_id.is_set
	|| path_name.is_set
	|| path_type.is_set
	|| requested_bandwidth.is_set
	|| setup_priority.is_set
	|| setup_priority_xr.is_set
	|| tunnel_id_xr.is_set
	|| (affinity !=  nullptr && affinity->has_data());
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::has_operation() const
{
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_segment.size(); index++)
    {
        if(sr_segment[index]->has_operation())
            return true;
    }
    for (auto const & leaf : hop.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(accumulated_admin_weight.operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation)
	|| is_set(bandwidth.operation)
	|| is_set(bandwidth_type.operation)
	|| is_set(cost_limit.operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_address_xr.operation)
	|| is_set(exclude_srlg_address.operation)
	|| is_set(exclude_srlg_ip_address.operation)
	|| is_set(hold_priority.operation)
	|| is_set(hold_priority_xr.operation)
	|| is_set(hop.operation)
	|| is_set(hop_limit.operation)
	|| is_set(igp_area.operation)
	|| is_set(igp_instance.operation)
	|| is_set(igp_type.operation)
	|| is_set(is_full_path.operation)
	|| is_set(is_partial_path.operation)
	|| is_set(is_segment_routing_db_checked.operation)
	|| is_set(is_topology_checked.operation)
	|| is_set(mininum_bandwidth.operation)
	|| is_set(node_hop_count.operation)
	|| is_set(path_id.operation)
	|| is_set(path_name.operation)
	|| is_set(path_type.operation)
	|| is_set(requested_bandwidth.operation)
	|| is_set(setup_priority.operation)
	|| is_set(setup_priority_xr.operation)
	|| is_set(tunnel_id_xr.operation)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-path";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::DestinationPaths::DestinationPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/destination-paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accumulated_admin_weight.is_set || is_set(accumulated_admin_weight.operation)) leaf_name_data.push_back(accumulated_admin_weight.get_name_leafdata());
    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.operation)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (cost_limit.is_set || is_set(cost_limit.operation)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.operation)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (exclude_srlg_address.is_set || is_set(exclude_srlg_address.operation)) leaf_name_data.push_back(exclude_srlg_address.get_name_leafdata());
    if (exclude_srlg_ip_address.is_set || is_set(exclude_srlg_ip_address.operation)) leaf_name_data.push_back(exclude_srlg_ip_address.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (hold_priority_xr.is_set || is_set(hold_priority_xr.operation)) leaf_name_data.push_back(hold_priority_xr.get_name_leafdata());
    if (hop_limit.is_set || is_set(hop_limit.operation)) leaf_name_data.push_back(hop_limit.get_name_leafdata());
    if (igp_area.is_set || is_set(igp_area.operation)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.operation)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.operation)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (is_full_path.is_set || is_set(is_full_path.operation)) leaf_name_data.push_back(is_full_path.get_name_leafdata());
    if (is_partial_path.is_set || is_set(is_partial_path.operation)) leaf_name_data.push_back(is_partial_path.get_name_leafdata());
    if (is_segment_routing_db_checked.is_set || is_set(is_segment_routing_db_checked.operation)) leaf_name_data.push_back(is_segment_routing_db_checked.get_name_leafdata());
    if (is_topology_checked.is_set || is_set(is_topology_checked.operation)) leaf_name_data.push_back(is_topology_checked.get_name_leafdata());
    if (mininum_bandwidth.is_set || is_set(mininum_bandwidth.operation)) leaf_name_data.push_back(mininum_bandwidth.get_name_leafdata());
    if (node_hop_count.is_set || is_set(node_hop_count.operation)) leaf_name_data.push_back(node_hop_count.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_name.is_set || is_set(path_name.operation)) leaf_name_data.push_back(path_name.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.operation)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.operation)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (setup_priority_xr.is_set || is_set(setup_priority_xr.operation)) leaf_name_data.push_back(setup_priority_xr.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.operation)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());

    auto hop_name_datas = hop.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), hop_name_datas.begin(), hop_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Topology::DestinationPaths::DestinationPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTe::Topology::DestinationPaths::DestinationPath::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
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
        auto c = std::make_shared<MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(std::move(c));
        children[segment_path] = shared_risk_link_group.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-segment")
    {
        for(auto const & c : sr_segment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment>();
        c->parent = this;
        sr_segment.push_back(std::move(c));
        children[segment_path] = sr_segment.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::DestinationPaths::DestinationPath::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    for (auto const & c : shared_risk_link_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : sr_segment)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::Topology::DestinationPaths::DestinationPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accumulated-admin-weight")
    {
        accumulated_admin_weight = value;
    }
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
    }
    if(value_path == "cost-limit")
    {
        cost_limit = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
    }
    if(value_path == "exclude-srlg-address")
    {
        exclude_srlg_address = value;
    }
    if(value_path == "exclude-srlg-ip-address")
    {
        exclude_srlg_ip_address = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "hold-priority-xr")
    {
        hold_priority_xr = value;
    }
    if(value_path == "hop")
    {
        hop.append(value);
    }
    if(value_path == "hop-limit")
    {
        hop_limit = value;
    }
    if(value_path == "igp-area")
    {
        igp_area = value;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
    }
    if(value_path == "is-full-path")
    {
        is_full_path = value;
    }
    if(value_path == "is-partial-path")
    {
        is_partial_path = value;
    }
    if(value_path == "is-segment-routing-db-checked")
    {
        is_segment_routing_db_checked = value;
    }
    if(value_path == "is-topology-checked")
    {
        is_topology_checked = value;
    }
    if(value_path == "mininum-bandwidth")
    {
        mininum_bandwidth = value;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "path-name")
    {
        path_name = value;
    }
    if(value_path == "path-type")
    {
        path_type = value;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "setup-priority-xr")
    {
        setup_priority_xr = value;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
    }
}

MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "destination-path";
}

MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::~Affinity()
{
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/destination-paths/destination-path/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/destination-paths/destination-path/affinity/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{
    yang_name = "shared-risk-link-group"; yang_parent_name = "destination-path";
}

MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(shared_risk_group.operation)
	|| is_set(srlg_name.operation);
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/destination-paths/destination-path/" << get_segment_path();
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

std::shared_ptr<Entity> MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::get_children()
{
    return children;
}

void MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::set_value(const std::string & value_path, std::string value)
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

MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::SrSegment()
    :
    has_entropy_label{YType::boolean, "has-entropy-label"},
    has_ip_addresses{YType::boolean, "has-ip-addresses"},
    has_mpls_label{YType::boolean, "has-mpls-label"},
    local_addr{YType::str, "local-addr"},
    mpls_label_value{YType::uint32, "mpls-label-value"},
    remote_addr{YType::str, "remote-addr"},
    sid_type{YType::enumeration, "sid-type"}
{
    yang_name = "sr-segment"; yang_parent_name = "destination-path";
}

MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::~SrSegment()
{
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::has_data() const
{
    return has_entropy_label.is_set
	|| has_ip_addresses.is_set
	|| has_mpls_label.is_set
	|| local_addr.is_set
	|| mpls_label_value.is_set
	|| remote_addr.is_set
	|| sid_type.is_set;
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::has_operation() const
{
    return is_set(operation)
	|| is_set(has_entropy_label.operation)
	|| is_set(has_ip_addresses.operation)
	|| is_set(has_mpls_label.operation)
	|| is_set(local_addr.operation)
	|| is_set(mpls_label_value.operation)
	|| is_set(remote_addr.operation)
	|| is_set(sid_type.operation);
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-segment";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/destination-paths/destination-path/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_entropy_label.is_set || is_set(has_entropy_label.operation)) leaf_name_data.push_back(has_entropy_label.get_name_leafdata());
    if (has_ip_addresses.is_set || is_set(has_ip_addresses.operation)) leaf_name_data.push_back(has_ip_addresses.get_name_leafdata());
    if (has_mpls_label.is_set || is_set(has_mpls_label.operation)) leaf_name_data.push_back(has_mpls_label.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.operation)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (mpls_label_value.is_set || is_set(mpls_label_value.operation)) leaf_name_data.push_back(mpls_label_value.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.operation)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (sid_type.is_set || is_set(sid_type.operation)) leaf_name_data.push_back(sid_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::get_children()
{
    return children;
}

void MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "has-entropy-label")
    {
        has_entropy_label = value;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses = value;
    }
    if(value_path == "has-mpls-label")
    {
        has_mpls_label = value;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value = value;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
    }
    if(value_path == "sid-type")
    {
        sid_type = value;
    }
}

MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlgs()
{
    yang_name = "configured-srlgs"; yang_parent_name = "topology";
}

MplsTe::Topology::ConfiguredSrlgs::~ConfiguredSrlgs()
{
}

bool MplsTe::Topology::ConfiguredSrlgs::has_data() const
{
    for (std::size_t index=0; index<configured_srlg.size(); index++)
    {
        if(configured_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Topology::ConfiguredSrlgs::has_operation() const
{
    for (std::size_t index=0; index<configured_srlg.size(); index++)
    {
        if(configured_srlg[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::Topology::ConfiguredSrlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-srlgs";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::ConfiguredSrlgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Topology::ConfiguredSrlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "configured-srlg")
    {
        for(auto const & c : configured_srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg>();
        c->parent = this;
        configured_srlg.push_back(std::move(c));
        children[segment_path] = configured_srlg.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::ConfiguredSrlgs::get_children()
{
    for (auto const & c : configured_srlg)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::Topology::ConfiguredSrlgs::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::ConfiguredSrlg()
    :
    srlg_number{YType::int32, "srlg-number"},
    admin_weight{YType::uint32, "admin-weight"},
    is_admin_weight_configured{YType::boolean, "is-admin-weight-configured"},
    srlg_name{YType::str, "srlg-name"},
    srlg_number_xr{YType::uint32, "srlg-number-xr"}
{
    yang_name = "configured-srlg"; yang_parent_name = "configured-srlgs";
}

MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::~ConfiguredSrlg()
{
}

bool MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::has_data() const
{
    for (std::size_t index=0; index<srlg_link.size(); index++)
    {
        if(srlg_link[index]->has_data())
            return true;
    }
    return srlg_number.is_set
	|| admin_weight.is_set
	|| is_admin_weight_configured.is_set
	|| srlg_name.is_set
	|| srlg_number_xr.is_set;
}

bool MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::has_operation() const
{
    for (std::size_t index=0; index<srlg_link.size(); index++)
    {
        if(srlg_link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(srlg_number.operation)
	|| is_set(admin_weight.operation)
	|| is_set(is_admin_weight_configured.operation)
	|| is_set(srlg_name.operation)
	|| is_set(srlg_number_xr.operation);
}

std::string MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-srlg" <<"[srlg-number='" <<srlg_number <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/configured-srlgs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_number.is_set || is_set(srlg_number.operation)) leaf_name_data.push_back(srlg_number.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.operation)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (is_admin_weight_configured.is_set || is_set(is_admin_weight_configured.operation)) leaf_name_data.push_back(is_admin_weight_configured.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.operation)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (srlg_number_xr.is_set || is_set(srlg_number_xr.operation)) leaf_name_data.push_back(srlg_number_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "srlg-link")
    {
        for(auto const & c : srlg_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink>();
        c->parent = this;
        srlg_link.push_back(std::move(c));
        children[segment_path] = srlg_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::get_children()
{
    for (auto const & c : srlg_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srlg-number")
    {
        srlg_number = value;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
    }
    if(value_path == "is-admin-weight-configured")
    {
        is_admin_weight_configured = value;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
    }
    if(value_path == "srlg-number-xr")
    {
        srlg_number_xr = value;
    }
}

MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::SrlgLink()
    :
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"}
{
    yang_name = "srlg-link"; yang_parent_name = "configured-srlg";
}

MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::~SrlgLink()
{
}

bool MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::has_data() const
{
    return local_address.is_set
	|| remote_address.is_set;
}

bool MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::has_operation() const
{
    return is_set(operation)
	|| is_set(local_address.operation)
	|| is_set(remote_address.operation);
}

std::string MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-link";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgLink' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::get_children()
{
    return children;
}

void MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
}

MplsTe::Topology::Srlgs::Srlgs()
{
    yang_name = "srlgs"; yang_parent_name = "topology";
}

MplsTe::Topology::Srlgs::~Srlgs()
{
}

bool MplsTe::Topology::Srlgs::has_data() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Topology::Srlgs::has_operation() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::Topology::Srlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgs";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::Srlgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Topology::Srlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "srlg")
    {
        for(auto const & c : srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Topology::Srlgs::Srlg>();
        c->parent = this;
        srlg.push_back(std::move(c));
        children[segment_path] = srlg.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::Srlgs::get_children()
{
    for (auto const & c : srlg)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::Topology::Srlgs::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Topology::Srlgs::Srlg::Srlg()
    :
    srlg_number{YType::int32, "srlg-number"},
    admin_weight{YType::uint32, "admin-weight"},
    srlg_name{YType::str, "srlg-name"}
{
    yang_name = "srlg"; yang_parent_name = "srlgs";
}

MplsTe::Topology::Srlgs::Srlg::~Srlg()
{
}

bool MplsTe::Topology::Srlgs::Srlg::has_data() const
{
    for (std::size_t index=0; index<srlg_areas.size(); index++)
    {
        if(srlg_areas[index]->has_data())
            return true;
    }
    return srlg_number.is_set
	|| admin_weight.is_set
	|| srlg_name.is_set;
}

bool MplsTe::Topology::Srlgs::Srlg::has_operation() const
{
    for (std::size_t index=0; index<srlg_areas.size(); index++)
    {
        if(srlg_areas[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(srlg_number.operation)
	|| is_set(admin_weight.operation)
	|| is_set(srlg_name.operation);
}

std::string MplsTe::Topology::Srlgs::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg" <<"[srlg-number='" <<srlg_number <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::Srlgs::Srlg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/srlgs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_number.is_set || is_set(srlg_number.operation)) leaf_name_data.push_back(srlg_number.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.operation)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.operation)) leaf_name_data.push_back(srlg_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Topology::Srlgs::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "srlg-areas")
    {
        for(auto const & c : srlg_areas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Topology::Srlgs::Srlg::SrlgAreas>();
        c->parent = this;
        srlg_areas.push_back(std::move(c));
        children[segment_path] = srlg_areas.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::Srlgs::Srlg::get_children()
{
    for (auto const & c : srlg_areas)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::Topology::Srlgs::Srlg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srlg-number")
    {
        srlg_number = value;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
    }
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgAreas()
    :
    igp_area{YType::uint32, "igp-area"},
    igp_area_format{YType::enumeration, "igp-area-format"},
    igp_instance{YType::str, "igp-instance"},
    igp_type{YType::enumeration, "igp-type"}
{
    yang_name = "srlg-areas"; yang_parent_name = "srlg";
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::~SrlgAreas()
{
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::has_data() const
{
    for (std::size_t index=0; index<srlg_link.size(); index++)
    {
        if(srlg_link[index]->has_data())
            return true;
    }
    return igp_area.is_set
	|| igp_area_format.is_set
	|| igp_instance.is_set
	|| igp_type.is_set;
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::has_operation() const
{
    for (std::size_t index=0; index<srlg_link.size(); index++)
    {
        if(srlg_link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(igp_area.operation)
	|| is_set(igp_area_format.operation)
	|| is_set(igp_instance.operation)
	|| is_set(igp_type.operation);
}

std::string MplsTe::Topology::Srlgs::Srlg::SrlgAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-areas";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::Srlgs::Srlg::SrlgAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgAreas' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_area.is_set || is_set(igp_area.operation)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_area_format.is_set || is_set(igp_area_format.operation)) leaf_name_data.push_back(igp_area_format.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.operation)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.operation)) leaf_name_data.push_back(igp_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "srlg-link")
    {
        for(auto const & c : srlg_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink>();
        c->parent = this;
        srlg_link.push_back(std::move(c));
        children[segment_path] = srlg_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::Srlgs::Srlg::SrlgAreas::get_children()
{
    for (auto const & c : srlg_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "igp-area")
    {
        igp_area = value;
    }
    if(value_path == "igp-area-format")
    {
        igp_area_format = value;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
    }
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::SrlgLink()
    :
    link_address{YType::str, "link-address"},
    te_router_id{YType::str, "te-router-id"}
    	,
    link_address_generic(std::make_shared<MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric>())
{
    link_address_generic->parent = this;
    children["link-address-generic"] = link_address_generic;

    yang_name = "srlg-link"; yang_parent_name = "srlg-areas";
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::~SrlgLink()
{
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::has_data() const
{
    return link_address.is_set
	|| te_router_id.is_set
	|| (link_address_generic !=  nullptr && link_address_generic->has_data());
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::has_operation() const
{
    return is_set(operation)
	|| is_set(link_address.operation)
	|| is_set(te_router_id.operation)
	|| (link_address_generic !=  nullptr && link_address_generic->has_operation());
}

std::string MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-link";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgLink' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_address.is_set || is_set(link_address.operation)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (te_router_id.is_set || is_set(te_router_id.operation)) leaf_name_data.push_back(te_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link-address-generic")
    {
        if(link_address_generic != nullptr)
        {
            children["link-address-generic"] = link_address_generic;
        }
        else
        {
            link_address_generic = std::make_shared<MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric>();
            link_address_generic->parent = this;
            children["link-address-generic"] = link_address_generic;
        }
        return children.at("link-address-generic");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::get_children()
{
    if(children.find("link-address-generic") == children.end())
    {
        if(link_address_generic != nullptr)
        {
            children["link-address-generic"] = link_address_generic;
        }
    }

    return children;
}

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-address")
    {
        link_address = value;
    }
    if(value_path == "te-router-id")
    {
        te_router_id = value;
    }
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::LinkAddressGeneric()
    :
    te_addr(std::make_shared<MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr>())
{
    te_addr->parent = this;
    children["te-addr"] = te_addr;

    yang_name = "link-address-generic"; yang_parent_name = "srlg-link";
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::~LinkAddressGeneric()
{
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::has_data() const
{
    return (te_addr !=  nullptr && te_addr->has_data());
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::has_operation() const
{
    return is_set(operation)
	|| (te_addr !=  nullptr && te_addr->has_operation());
}

std::string MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-address-generic";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkAddressGeneric' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "te-addr")
    {
        if(te_addr != nullptr)
        {
            children["te-addr"] = te_addr;
        }
        else
        {
            te_addr = std::make_shared<MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr>();
            te_addr->parent = this;
            children["te-addr"] = te_addr;
        }
        return children.at("te-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::get_children()
{
    if(children.find("te-addr") == children.end())
    {
        if(te_addr != nullptr)
        {
            children["te-addr"] = te_addr;
        }
    }

    return children;
}

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::TeAddr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    type{YType::enumeration, "type"}
    	,
    ipv4_unnumbered_address(std::make_shared<MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress>())
{
    ipv4_unnumbered_address->parent = this;
    children["ipv4-unnumbered-address"] = ipv4_unnumbered_address;

    yang_name = "te-addr"; yang_parent_name = "link-address-generic";
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::~TeAddr()
{
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::has_data() const
{
    return ipv4_address.is_set
	|| type.is_set
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_data());
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(type.operation)
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_operation());
}

std::string MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-addr";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeAddr' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-unnumbered-address")
    {
        if(ipv4_unnumbered_address != nullptr)
        {
            children["ipv4-unnumbered-address"] = ipv4_unnumbered_address;
        }
        else
        {
            ipv4_unnumbered_address = std::make_shared<MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress>();
            ipv4_unnumbered_address->parent = this;
            children["ipv4-unnumbered-address"] = ipv4_unnumbered_address;
        }
        return children.at("ipv4-unnumbered-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::get_children()
{
    if(children.find("ipv4-unnumbered-address") == children.end())
    {
        if(ipv4_unnumbered_address != nullptr)
        {
            children["ipv4-unnumbered-address"] = ipv4_unnumbered_address;
        }
    }

    return children;
}

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::Ipv4UnnumberedAddress()
    :
    interface_index{YType::uint32, "interface-index"},
    router_id{YType::str, "router-id"}
{
    yang_name = "ipv4-unnumbered-address"; yang_parent_name = "te-addr";
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::~Ipv4UnnumberedAddress()
{
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_data() const
{
    return interface_index.is_set
	|| router_id.is_set;
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_index.operation)
	|| is_set(router_id.operation);
}

std::string MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unnumbered-address";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4UnnumberedAddress' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_index.is_set || is_set(interface_index.operation)) leaf_name_data.push_back(interface_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_children()
{
    return children;
}

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-index")
    {
        interface_index = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

MplsTe::Topology::PathTunnels::PathTunnels()
{
    yang_name = "path-tunnels"; yang_parent_name = "topology";
}

MplsTe::Topology::PathTunnels::~PathTunnels()
{
}

bool MplsTe::Topology::PathTunnels::has_data() const
{
    for (std::size_t index=0; index<path_tunnel.size(); index++)
    {
        if(path_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Topology::PathTunnels::has_operation() const
{
    for (std::size_t index=0; index<path_tunnel.size(); index++)
    {
        if(path_tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::Topology::PathTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-tunnels";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::PathTunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Topology::PathTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-tunnel")
    {
        for(auto const & c : path_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Topology::PathTunnels::PathTunnel>();
        c->parent = this;
        path_tunnel.push_back(std::move(c));
        children[segment_path] = path_tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::PathTunnels::get_children()
{
    for (auto const & c : path_tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::Topology::PathTunnels::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::Topology::PathTunnels::PathTunnel::PathTunnel()
    :
    accumulated_admin_weight{YType::uint64, "accumulated-admin-weight"},
    bandwidth_type{YType::uint64, "bandwidth-type"},
    destination_address_xr{YType::str, "destination-address-xr"},
    exclude_srlg_address{YType::str, "exclude-srlg-address"},
    hold_priority_xr{YType::uint32, "hold-priority-xr"},
    hop{YType::str, "hop"},
    is_full_path{YType::boolean, "is-full-path"},
    is_partial_path{YType::boolean, "is-partial-path"},
    is_segment_routing_db_checked{YType::boolean, "is-segment-routing-db-checked"},
    is_topology_checked{YType::boolean, "is-topology-checked"},
    mininum_bandwidth{YType::uint64, "mininum-bandwidth"},
    node_hop_count{YType::uint8, "node-hop-count"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    setup_priority_xr{YType::uint32, "setup-priority-xr"},
    tunnel_id{YType::int32, "tunnel-id"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"},
    tunnel_name{YType::str, "tunnel-name"}
    	,
    affinity(std::make_shared<MplsTe::Topology::PathTunnels::PathTunnel::Affinity>())
{
    affinity->parent = this;
    children["affinity"] = affinity;

    yang_name = "path-tunnel"; yang_parent_name = "path-tunnels";
}

MplsTe::Topology::PathTunnels::PathTunnel::~PathTunnel()
{
}

bool MplsTe::Topology::PathTunnels::PathTunnel::has_data() const
{
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_segment.size(); index++)
    {
        if(sr_segment[index]->has_data())
            return true;
    }
    for (auto const & leaf : hop.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return accumulated_admin_weight.is_set
	|| bandwidth_type.is_set
	|| destination_address_xr.is_set
	|| exclude_srlg_address.is_set
	|| hold_priority_xr.is_set
	|| is_full_path.is_set
	|| is_partial_path.is_set
	|| is_segment_routing_db_checked.is_set
	|| is_topology_checked.is_set
	|| mininum_bandwidth.is_set
	|| node_hop_count.is_set
	|| requested_bandwidth.is_set
	|| setup_priority_xr.is_set
	|| tunnel_id.is_set
	|| tunnel_id_xr.is_set
	|| tunnel_name.is_set
	|| (affinity !=  nullptr && affinity->has_data());
}

bool MplsTe::Topology::PathTunnels::PathTunnel::has_operation() const
{
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_segment.size(); index++)
    {
        if(sr_segment[index]->has_operation())
            return true;
    }
    for (auto const & leaf : hop.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(accumulated_admin_weight.operation)
	|| is_set(bandwidth_type.operation)
	|| is_set(destination_address_xr.operation)
	|| is_set(exclude_srlg_address.operation)
	|| is_set(hold_priority_xr.operation)
	|| is_set(hop.operation)
	|| is_set(is_full_path.operation)
	|| is_set(is_partial_path.operation)
	|| is_set(is_segment_routing_db_checked.operation)
	|| is_set(is_topology_checked.operation)
	|| is_set(mininum_bandwidth.operation)
	|| is_set(node_hop_count.operation)
	|| is_set(requested_bandwidth.operation)
	|| is_set(setup_priority_xr.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(tunnel_id_xr.operation)
	|| is_set(tunnel_name.operation)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-tunnel";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::PathTunnels::PathTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/path-tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accumulated_admin_weight.is_set || is_set(accumulated_admin_weight.operation)) leaf_name_data.push_back(accumulated_admin_weight.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.operation)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.operation)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (exclude_srlg_address.is_set || is_set(exclude_srlg_address.operation)) leaf_name_data.push_back(exclude_srlg_address.get_name_leafdata());
    if (hold_priority_xr.is_set || is_set(hold_priority_xr.operation)) leaf_name_data.push_back(hold_priority_xr.get_name_leafdata());
    if (is_full_path.is_set || is_set(is_full_path.operation)) leaf_name_data.push_back(is_full_path.get_name_leafdata());
    if (is_partial_path.is_set || is_set(is_partial_path.operation)) leaf_name_data.push_back(is_partial_path.get_name_leafdata());
    if (is_segment_routing_db_checked.is_set || is_set(is_segment_routing_db_checked.operation)) leaf_name_data.push_back(is_segment_routing_db_checked.get_name_leafdata());
    if (is_topology_checked.is_set || is_set(is_topology_checked.operation)) leaf_name_data.push_back(is_topology_checked.get_name_leafdata());
    if (mininum_bandwidth.is_set || is_set(mininum_bandwidth.operation)) leaf_name_data.push_back(mininum_bandwidth.get_name_leafdata());
    if (node_hop_count.is_set || is_set(node_hop_count.operation)) leaf_name_data.push_back(node_hop_count.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.operation)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (setup_priority_xr.is_set || is_set(setup_priority_xr.operation)) leaf_name_data.push_back(setup_priority_xr.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.operation)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    auto hop_name_datas = hop.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), hop_name_datas.begin(), hop_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Topology::PathTunnels::PathTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity")
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
        else
        {
            affinity = std::make_shared<MplsTe::Topology::PathTunnels::PathTunnel::Affinity>();
            affinity->parent = this;
            children["affinity"] = affinity;
        }
        return children.at("affinity");
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
        auto c = std::make_shared<MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(std::move(c));
        children[segment_path] = shared_risk_link_group.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-segment")
    {
        for(auto const & c : sr_segment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Topology::PathTunnels::PathTunnel::SrSegment>();
        c->parent = this;
        sr_segment.push_back(std::move(c));
        children[segment_path] = sr_segment.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::PathTunnels::PathTunnel::get_children()
{
    if(children.find("affinity") == children.end())
    {
        if(affinity != nullptr)
        {
            children["affinity"] = affinity;
        }
    }

    for (auto const & c : shared_risk_link_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : sr_segment)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::Topology::PathTunnels::PathTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accumulated-admin-weight")
    {
        accumulated_admin_weight = value;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
    }
    if(value_path == "exclude-srlg-address")
    {
        exclude_srlg_address = value;
    }
    if(value_path == "hold-priority-xr")
    {
        hold_priority_xr = value;
    }
    if(value_path == "hop")
    {
        hop.append(value);
    }
    if(value_path == "is-full-path")
    {
        is_full_path = value;
    }
    if(value_path == "is-partial-path")
    {
        is_partial_path = value;
    }
    if(value_path == "is-segment-routing-db-checked")
    {
        is_segment_routing_db_checked = value;
    }
    if(value_path == "is-topology-checked")
    {
        is_topology_checked = value;
    }
    if(value_path == "mininum-bandwidth")
    {
        mininum_bandwidth = value;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count = value;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
    }
    if(value_path == "setup-priority-xr")
    {
        setup_priority_xr = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTe::Topology::PathTunnels::PathTunnel::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "path-tunnel";
}

MplsTe::Topology::PathTunnels::PathTunnel::Affinity::~Affinity()
{
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::PathTunnels::PathTunnel::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/path-tunnels/path-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Topology::PathTunnels::PathTunnel::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(std::move(c));
        children[segment_path] = named_affinity.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::PathTunnels::PathTunnel::Affinity::get_children()
{
    for (auto const & c : named_affinity)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::Topology::PathTunnels::PathTunnel::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/path-tunnels/path-tunnel/affinity/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_children()
{
    return children;
}

void MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{
    yang_name = "shared-risk-link-group"; yang_parent_name = "path-tunnel";
}

MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(shared_risk_group.operation)
	|| is_set(srlg_name.operation);
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/path-tunnels/path-tunnel/" << get_segment_path();
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

std::shared_ptr<Entity> MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_children()
{
    return children;
}

void MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::set_value(const std::string & value_path, std::string value)
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

MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::SrSegment()
    :
    has_entropy_label{YType::boolean, "has-entropy-label"},
    has_ip_addresses{YType::boolean, "has-ip-addresses"},
    has_mpls_label{YType::boolean, "has-mpls-label"},
    local_addr{YType::str, "local-addr"},
    mpls_label_value{YType::uint32, "mpls-label-value"},
    remote_addr{YType::str, "remote-addr"},
    sid_type{YType::enumeration, "sid-type"}
{
    yang_name = "sr-segment"; yang_parent_name = "path-tunnel";
}

MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::~SrSegment()
{
}

bool MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::has_data() const
{
    return has_entropy_label.is_set
	|| has_ip_addresses.is_set
	|| has_mpls_label.is_set
	|| local_addr.is_set
	|| mpls_label_value.is_set
	|| remote_addr.is_set
	|| sid_type.is_set;
}

bool MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::has_operation() const
{
    return is_set(operation)
	|| is_set(has_entropy_label.operation)
	|| is_set(has_ip_addresses.operation)
	|| is_set(has_mpls_label.operation)
	|| is_set(local_addr.operation)
	|| is_set(mpls_label_value.operation)
	|| is_set(remote_addr.operation)
	|| is_set(sid_type.operation);
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-segment";

    return path_buffer.str();

}

EntityPath MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/path-tunnels/path-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_entropy_label.is_set || is_set(has_entropy_label.operation)) leaf_name_data.push_back(has_entropy_label.get_name_leafdata());
    if (has_ip_addresses.is_set || is_set(has_ip_addresses.operation)) leaf_name_data.push_back(has_ip_addresses.get_name_leafdata());
    if (has_mpls_label.is_set || is_set(has_mpls_label.operation)) leaf_name_data.push_back(has_mpls_label.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.operation)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (mpls_label_value.is_set || is_set(mpls_label_value.operation)) leaf_name_data.push_back(mpls_label_value.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.operation)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (sid_type.is_set || is_set(sid_type.operation)) leaf_name_data.push_back(sid_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::get_children()
{
    return children;
}

void MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "has-entropy-label")
    {
        has_entropy_label = value;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses = value;
    }
    if(value_path == "has-mpls-label")
    {
        has_mpls_label = value;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value = value;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
    }
    if(value_path == "sid-type")
    {
        sid_type = value;
    }
}

MplsTe::SignallingCounters::SignallingCounters()
    :
    head_signalling_counters(std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters>())
	,heads_counters(std::make_shared<MplsTe::SignallingCounters::HeadsCounters>())
	,issu(std::make_shared<MplsTe::SignallingCounters::Issu>())
	,mids_counters(std::make_shared<MplsTe::SignallingCounters::MidsCounters>())
	,remote_signalling_counters(std::make_shared<MplsTe::SignallingCounters::RemoteSignallingCounters>())
	,signalling_summary(std::make_shared<MplsTe::SignallingCounters::SignallingSummary>())
	,signallings(std::make_shared<MplsTe::SignallingCounters::Signallings>())
	,tails_counters(std::make_shared<MplsTe::SignallingCounters::TailsCounters>())
{
    head_signalling_counters->parent = this;
    children["head-signalling-counters"] = head_signalling_counters;

    heads_counters->parent = this;
    children["heads-counters"] = heads_counters;

    issu->parent = this;
    children["issu"] = issu;

    mids_counters->parent = this;
    children["mids-counters"] = mids_counters;

    remote_signalling_counters->parent = this;
    children["remote-signalling-counters"] = remote_signalling_counters;

    signalling_summary->parent = this;
    children["signalling-summary"] = signalling_summary;

    signallings->parent = this;
    children["signallings"] = signallings;

    tails_counters->parent = this;
    children["tails-counters"] = tails_counters;

    yang_name = "signalling-counters"; yang_parent_name = "mpls-te";
}

MplsTe::SignallingCounters::~SignallingCounters()
{
}

bool MplsTe::SignallingCounters::has_data() const
{
    return (head_signalling_counters !=  nullptr && head_signalling_counters->has_data())
	|| (heads_counters !=  nullptr && heads_counters->has_data())
	|| (issu !=  nullptr && issu->has_data())
	|| (mids_counters !=  nullptr && mids_counters->has_data())
	|| (remote_signalling_counters !=  nullptr && remote_signalling_counters->has_data())
	|| (signalling_summary !=  nullptr && signalling_summary->has_data())
	|| (signallings !=  nullptr && signallings->has_data())
	|| (tails_counters !=  nullptr && tails_counters->has_data());
}

bool MplsTe::SignallingCounters::has_operation() const
{
    return is_set(operation)
	|| (head_signalling_counters !=  nullptr && head_signalling_counters->has_operation())
	|| (heads_counters !=  nullptr && heads_counters->has_operation())
	|| (issu !=  nullptr && issu->has_operation())
	|| (mids_counters !=  nullptr && mids_counters->has_operation())
	|| (remote_signalling_counters !=  nullptr && remote_signalling_counters->has_operation())
	|| (signalling_summary !=  nullptr && signalling_summary->has_operation())
	|| (signallings !=  nullptr && signallings->has_operation())
	|| (tails_counters !=  nullptr && tails_counters->has_operation());
}

std::string MplsTe::SignallingCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling-counters";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "head-signalling-counters")
    {
        if(head_signalling_counters != nullptr)
        {
            children["head-signalling-counters"] = head_signalling_counters;
        }
        else
        {
            head_signalling_counters = std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters>();
            head_signalling_counters->parent = this;
            children["head-signalling-counters"] = head_signalling_counters;
        }
        return children.at("head-signalling-counters");
    }

    if(child_yang_name == "heads-counters")
    {
        if(heads_counters != nullptr)
        {
            children["heads-counters"] = heads_counters;
        }
        else
        {
            heads_counters = std::make_shared<MplsTe::SignallingCounters::HeadsCounters>();
            heads_counters->parent = this;
            children["heads-counters"] = heads_counters;
        }
        return children.at("heads-counters");
    }

    if(child_yang_name == "issu")
    {
        if(issu != nullptr)
        {
            children["issu"] = issu;
        }
        else
        {
            issu = std::make_shared<MplsTe::SignallingCounters::Issu>();
            issu->parent = this;
            children["issu"] = issu;
        }
        return children.at("issu");
    }

    if(child_yang_name == "mids-counters")
    {
        if(mids_counters != nullptr)
        {
            children["mids-counters"] = mids_counters;
        }
        else
        {
            mids_counters = std::make_shared<MplsTe::SignallingCounters::MidsCounters>();
            mids_counters->parent = this;
            children["mids-counters"] = mids_counters;
        }
        return children.at("mids-counters");
    }

    if(child_yang_name == "remote-signalling-counters")
    {
        if(remote_signalling_counters != nullptr)
        {
            children["remote-signalling-counters"] = remote_signalling_counters;
        }
        else
        {
            remote_signalling_counters = std::make_shared<MplsTe::SignallingCounters::RemoteSignallingCounters>();
            remote_signalling_counters->parent = this;
            children["remote-signalling-counters"] = remote_signalling_counters;
        }
        return children.at("remote-signalling-counters");
    }

    if(child_yang_name == "signalling-summary")
    {
        if(signalling_summary != nullptr)
        {
            children["signalling-summary"] = signalling_summary;
        }
        else
        {
            signalling_summary = std::make_shared<MplsTe::SignallingCounters::SignallingSummary>();
            signalling_summary->parent = this;
            children["signalling-summary"] = signalling_summary;
        }
        return children.at("signalling-summary");
    }

    if(child_yang_name == "signallings")
    {
        if(signallings != nullptr)
        {
            children["signallings"] = signallings;
        }
        else
        {
            signallings = std::make_shared<MplsTe::SignallingCounters::Signallings>();
            signallings->parent = this;
            children["signallings"] = signallings;
        }
        return children.at("signallings");
    }

    if(child_yang_name == "tails-counters")
    {
        if(tails_counters != nullptr)
        {
            children["tails-counters"] = tails_counters;
        }
        else
        {
            tails_counters = std::make_shared<MplsTe::SignallingCounters::TailsCounters>();
            tails_counters->parent = this;
            children["tails-counters"] = tails_counters;
        }
        return children.at("tails-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::get_children()
{
    if(children.find("head-signalling-counters") == children.end())
    {
        if(head_signalling_counters != nullptr)
        {
            children["head-signalling-counters"] = head_signalling_counters;
        }
    }

    if(children.find("heads-counters") == children.end())
    {
        if(heads_counters != nullptr)
        {
            children["heads-counters"] = heads_counters;
        }
    }

    if(children.find("issu") == children.end())
    {
        if(issu != nullptr)
        {
            children["issu"] = issu;
        }
    }

    if(children.find("mids-counters") == children.end())
    {
        if(mids_counters != nullptr)
        {
            children["mids-counters"] = mids_counters;
        }
    }

    if(children.find("remote-signalling-counters") == children.end())
    {
        if(remote_signalling_counters != nullptr)
        {
            children["remote-signalling-counters"] = remote_signalling_counters;
        }
    }

    if(children.find("signalling-summary") == children.end())
    {
        if(signalling_summary != nullptr)
        {
            children["signalling-summary"] = signalling_summary;
        }
    }

    if(children.find("signallings") == children.end())
    {
        if(signallings != nullptr)
        {
            children["signallings"] = signallings;
        }
    }

    if(children.find("tails-counters") == children.end())
    {
        if(tails_counters != nullptr)
        {
            children["tails-counters"] = tails_counters;
        }
    }

    return children;
}

void MplsTe::SignallingCounters::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::SignallingCounters::Issu::Issu()
    :
    last_cleared_timestamp{YType::uint32, "last-cleared-timestamp"},
    last_idt_states{YType::uint32, "last-idt-states"},
    role{YType::enumeration, "role"},
    total_deletions{YType::uint32, "total-deletions"},
    total_id_ts{YType::uint32, "total-id-ts"},
    total_nac_ks{YType::uint64, "total-nac-ks"},
    total_states{YType::uint32, "total-states"}
{
    yang_name = "issu"; yang_parent_name = "signalling-counters";
}

MplsTe::SignallingCounters::Issu::~Issu()
{
}

bool MplsTe::SignallingCounters::Issu::has_data() const
{
    return last_cleared_timestamp.is_set
	|| last_idt_states.is_set
	|| role.is_set
	|| total_deletions.is_set
	|| total_id_ts.is_set
	|| total_nac_ks.is_set
	|| total_states.is_set;
}

bool MplsTe::SignallingCounters::Issu::has_operation() const
{
    return is_set(operation)
	|| is_set(last_cleared_timestamp.operation)
	|| is_set(last_idt_states.operation)
	|| is_set(role.operation)
	|| is_set(total_deletions.operation)
	|| is_set(total_id_ts.operation)
	|| is_set(total_nac_ks.operation)
	|| is_set(total_states.operation);
}

std::string MplsTe::SignallingCounters::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::Issu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.operation)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());
    if (last_idt_states.is_set || is_set(last_idt_states.operation)) leaf_name_data.push_back(last_idt_states.get_name_leafdata());
    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());
    if (total_deletions.is_set || is_set(total_deletions.operation)) leaf_name_data.push_back(total_deletions.get_name_leafdata());
    if (total_id_ts.is_set || is_set(total_id_ts.operation)) leaf_name_data.push_back(total_id_ts.get_name_leafdata());
    if (total_nac_ks.is_set || is_set(total_nac_ks.operation)) leaf_name_data.push_back(total_nac_ks.get_name_leafdata());
    if (total_states.is_set || is_set(total_states.operation)) leaf_name_data.push_back(total_states.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::Issu::get_children()
{
    return children;
}

void MplsTe::SignallingCounters::Issu::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
    }
    if(value_path == "last-idt-states")
    {
        last_idt_states = value;
    }
    if(value_path == "role")
    {
        role = value;
    }
    if(value_path == "total-deletions")
    {
        total_deletions = value;
    }
    if(value_path == "total-id-ts")
    {
        total_id_ts = value;
    }
    if(value_path == "total-nac-ks")
    {
        total_nac_ks = value;
    }
    if(value_path == "total-states")
    {
        total_states = value;
    }
}

MplsTe::SignallingCounters::HeadsCounters::HeadsCounters()
{
    yang_name = "heads-counters"; yang_parent_name = "signalling-counters";
}

MplsTe::SignallingCounters::HeadsCounters::~HeadsCounters()
{
}

bool MplsTe::SignallingCounters::HeadsCounters::has_data() const
{
    for (std::size_t index=0; index<heads_counter.size(); index++)
    {
        if(heads_counter[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::SignallingCounters::HeadsCounters::has_operation() const
{
    for (std::size_t index=0; index<heads_counter.size(); index++)
    {
        if(heads_counter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::SignallingCounters::HeadsCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "heads-counters";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::HeadsCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadsCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "heads-counter")
    {
        for(auto const & c : heads_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::HeadsCounters::HeadsCounter>();
        c->parent = this;
        heads_counter.push_back(std::move(c));
        children[segment_path] = heads_counter.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::HeadsCounters::get_children()
{
    for (auto const & c : heads_counter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::SignallingCounters::HeadsCounters::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::HeadsCounter()
    :
    tunnel_id{YType::int32, "tunnel-id"},
    lsp_id{YType::uint16, "lsp-id"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_sig_name{YType::str, "tunnel-sig-name"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "heads-counter"; yang_parent_name = "heads-counters";
}

MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::~HeadsCounter()
{
}

bool MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::has_data() const
{
    for (std::size_t index=0; index<destination_statistic.size(); index++)
    {
        if(destination_statistic[index]->has_data())
            return true;
    }
    return tunnel_id.is_set
	|| lsp_id.is_set
	|| tunnel_name.is_set
	|| tunnel_sig_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::has_operation() const
{
    for (std::size_t index=0; index<destination_statistic.size(); index++)
    {
        if(destination_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(tunnel_id.operation)
	|| is_set(lsp_id.operation)
	|| is_set(tunnel_name.operation)
	|| is_set(tunnel_sig_name.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "heads-counter" <<"[tunnel-id='" <<tunnel_id <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/heads-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_sig_name.is_set || is_set(tunnel_sig_name.operation)) leaf_name_data.push_back(tunnel_sig_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination-statistic")
    {
        for(auto const & c : destination_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic>();
        c->parent = this;
        destination_statistic.push_back(std::move(c));
        children[segment_path] = destination_statistic.back();
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
            statistics = std::make_shared<MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::get_children()
{
    for (auto const & c : destination_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name = value;
    }
}

MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "heads-counter";
}

MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::Statistics::get_children()
{
    return children;
}

void MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::DestinationStatistic()
    :
    destination_address{YType::str, "destination-address"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "destination-statistic"; yang_parent_name = "heads-counter";
}

MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::~DestinationStatistic()
{
}

bool MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::has_data() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-statistic";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationStatistic' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "s2l-statistic")
    {
        for(auto const & c : s2l_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic>();
        c->parent = this;
        s2l_statistic.push_back(std::move(c));
        children[segment_path] = s2l_statistic.back();
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
            statistics = std::make_shared<MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::get_children()
{
    for (auto const & c : s2l_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
}

MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "destination-statistic";
}

MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics::get_children()
{
    return children;
}

void MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::S2LStatistic()
    :
    destination_address{YType::str, "destination-address"},
    sub_group_id{YType::uint16, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "s2l-statistic"; yang_parent_name = "destination-statistic";
}

MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::~S2LStatistic()
{
}

bool MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::has_data() const
{
    return destination_address.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_originator.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2LStatistic' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.operation)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            statistics = std::make_shared<MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::get_children()
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

void MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
    }
}

MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "s2l-statistic";
}

MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics::get_children()
{
    return children;
}

void MplsTe::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTe::SignallingCounters::MidsCounters::MidsCounters()
{
    yang_name = "mids-counters"; yang_parent_name = "signalling-counters";
}

MplsTe::SignallingCounters::MidsCounters::~MidsCounters()
{
}

bool MplsTe::SignallingCounters::MidsCounters::has_data() const
{
    for (std::size_t index=0; index<mids_counter.size(); index++)
    {
        if(mids_counter[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::SignallingCounters::MidsCounters::has_operation() const
{
    for (std::size_t index=0; index<mids_counter.size(); index++)
    {
        if(mids_counter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::SignallingCounters::MidsCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mids-counters";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::MidsCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::MidsCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mids-counter")
    {
        for(auto const & c : mids_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::MidsCounters::MidsCounter>();
        c->parent = this;
        mids_counter.push_back(std::move(c));
        children[segment_path] = mids_counter.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::MidsCounters::get_children()
{
    for (auto const & c : mids_counter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::SignallingCounters::MidsCounters::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::SignallingCounters::MidsCounters::MidsCounter::MidsCounter()
    :
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsp_id{YType::int32, "lsp-id"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::int32, "tunnel-id"},
    tunnel_name{YType::str, "tunnel-name"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::MidsCounters::MidsCounter::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "mids-counter"; yang_parent_name = "mids-counters";
}

MplsTe::SignallingCounters::MidsCounters::MidsCounter::~MidsCounter()
{
}

bool MplsTe::SignallingCounters::MidsCounters::MidsCounter::has_data() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| extended_tunnel_id.is_set
	|| lsp_id.is_set
	|| source_address.is_set
	|| tunnel_id.is_set
	|| tunnel_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::MidsCounters::MidsCounter::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(lsp_id.operation)
	|| is_set(source_address.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(tunnel_name.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::MidsCounters::MidsCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mids-counter" <<"[destination-address='" <<destination_address <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[lsp-id='" <<lsp_id <<"']" <<"[source-address='" <<source_address <<"']" <<"[tunnel-id='" <<tunnel_id <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::MidsCounters::MidsCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/mids-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::MidsCounters::MidsCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "s2l-statistic")
    {
        for(auto const & c : s2l_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic>();
        c->parent = this;
        s2l_statistic.push_back(std::move(c));
        children[segment_path] = s2l_statistic.back();
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
            statistics = std::make_shared<MplsTe::SignallingCounters::MidsCounters::MidsCounter::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::MidsCounters::MidsCounter::get_children()
{
    for (auto const & c : s2l_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void MplsTe::SignallingCounters::MidsCounters::MidsCounter::set_value(const std::string & value_path, std::string value)
{
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
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTe::SignallingCounters::MidsCounters::MidsCounter::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "mids-counter";
}

MplsTe::SignallingCounters::MidsCounters::MidsCounter::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::MidsCounters::MidsCounter::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::MidsCounters::MidsCounter::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTe::SignallingCounters::MidsCounters::MidsCounter::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::MidsCounters::MidsCounter::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::MidsCounters::MidsCounter::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::MidsCounters::MidsCounter::Statistics::get_children()
{
    return children;
}

void MplsTe::SignallingCounters::MidsCounters::MidsCounter::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::S2LStatistic()
    :
    destination_address{YType::str, "destination-address"},
    sub_group_id{YType::uint16, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "s2l-statistic"; yang_parent_name = "mids-counter";
}

MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::~S2LStatistic()
{
}

bool MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::has_data() const
{
    return destination_address.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_originator.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2LStatistic' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.operation)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            statistics = std::make_shared<MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::get_children()
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

void MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
    }
}

MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "s2l-statistic";
}

MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics::get_children()
{
    return children;
}

void MplsTe::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounters()
{
    yang_name = "head-signalling-counters"; yang_parent_name = "signalling-counters";
}

MplsTe::SignallingCounters::HeadSignallingCounters::~HeadSignallingCounters()
{
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::has_data() const
{
    for (std::size_t index=0; index<head_signalling_counter.size(); index++)
    {
        if(head_signalling_counter[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::has_operation() const
{
    for (std::size_t index=0; index<head_signalling_counter.size(); index++)
    {
        if(head_signalling_counter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-signalling-counters";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::HeadSignallingCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadSignallingCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "head-signalling-counter")
    {
        for(auto const & c : head_signalling_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter>();
        c->parent = this;
        head_signalling_counter.push_back(std::move(c));
        children[segment_path] = head_signalling_counter.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::HeadSignallingCounters::get_children()
{
    for (auto const & c : head_signalling_counter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::SignallingCounters::HeadSignallingCounters::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::HeadSignallingCounter()
    :
    ctype{YType::enumeration, "ctype"},
    tunnel_id{YType::int32, "tunnel-id"},
    lsp_id{YType::uint16, "lsp-id"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_sig_name{YType::str, "tunnel-sig-name"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "head-signalling-counter"; yang_parent_name = "head-signalling-counters";
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::~HeadSignallingCounter()
{
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::has_data() const
{
    for (std::size_t index=0; index<destination_statistic.size(); index++)
    {
        if(destination_statistic[index]->has_data())
            return true;
    }
    return ctype.is_set
	|| tunnel_id.is_set
	|| lsp_id.is_set
	|| tunnel_name.is_set
	|| tunnel_sig_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::has_operation() const
{
    for (std::size_t index=0; index<destination_statistic.size(); index++)
    {
        if(destination_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ctype.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(lsp_id.operation)
	|| is_set(tunnel_name.operation)
	|| is_set(tunnel_sig_name.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-signalling-counter" <<"[ctype='" <<ctype <<"']" <<"[tunnel-id='" <<tunnel_id <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/head-signalling-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.operation)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_sig_name.is_set || is_set(tunnel_sig_name.operation)) leaf_name_data.push_back(tunnel_sig_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination-statistic")
    {
        for(auto const & c : destination_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic>();
        c->parent = this;
        destination_statistic.push_back(std::move(c));
        children[segment_path] = destination_statistic.back();
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
            statistics = std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_children()
{
    for (auto const & c : destination_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ctype")
    {
        ctype = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name = value;
    }
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "head-signalling-counter";
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::get_children()
{
    return children;
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::DestinationStatistic()
    :
    destination_address{YType::str, "destination-address"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "destination-statistic"; yang_parent_name = "head-signalling-counter";
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::~DestinationStatistic()
{
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::has_data() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-statistic";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationStatistic' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "s2l-statistic")
    {
        for(auto const & c : s2l_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic>();
        c->parent = this;
        s2l_statistic.push_back(std::move(c));
        children[segment_path] = s2l_statistic.back();
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
            statistics = std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::get_children()
{
    for (auto const & c : s2l_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "destination-statistic";
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::get_children()
{
    return children;
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::S2LStatistic()
    :
    destination_address{YType::str, "destination-address"},
    sub_group_id{YType::uint16, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "s2l-statistic"; yang_parent_name = "destination-statistic";
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::~S2LStatistic()
{
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::has_data() const
{
    return destination_address.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_originator.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2LStatistic' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.operation)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            statistics = std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::get_children()
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

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
    }
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "s2l-statistic";
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::get_children()
{
    return children;
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounters()
{
    yang_name = "remote-signalling-counters"; yang_parent_name = "signalling-counters";
}

MplsTe::SignallingCounters::RemoteSignallingCounters::~RemoteSignallingCounters()
{
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::has_data() const
{
    for (std::size_t index=0; index<remote_signalling_counter.size(); index++)
    {
        if(remote_signalling_counter[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::has_operation() const
{
    for (std::size_t index=0; index<remote_signalling_counter.size(); index++)
    {
        if(remote_signalling_counter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::SignallingCounters::RemoteSignallingCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-signalling-counters";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::RemoteSignallingCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::RemoteSignallingCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-signalling-counter")
    {
        for(auto const & c : remote_signalling_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter>();
        c->parent = this;
        remote_signalling_counter.push_back(std::move(c));
        children[segment_path] = remote_signalling_counter.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::RemoteSignallingCounters::get_children()
{
    for (auto const & c : remote_signalling_counter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::SignallingCounters::RemoteSignallingCounters::set_value(const std::string & value_path, std::string value)
{
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::RemoteSignallingCounter()
    :
    ctype{YType::enumeration, "ctype"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsp_id{YType::int32, "lsp-id"},
    p2mp_id{YType::int32, "p2mp-id"},
    source_address{YType::str, "source-address"},
    sub_group_id{YType::int32, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"},
    tunnel_id{YType::int32, "tunnel-id"},
    tunnel_name{YType::str, "tunnel-name"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "remote-signalling-counter"; yang_parent_name = "remote-signalling-counters";
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::~RemoteSignallingCounter()
{
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::has_data() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return ctype.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| lsp_id.is_set
	|| p2mp_id.is_set
	|| source_address.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| tunnel_id.is_set
	|| tunnel_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ctype.operation)
	|| is_set(destination_address.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(lsp_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(source_address.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_originator.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(tunnel_name.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-signalling-counter" <<"[ctype='" <<ctype <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[lsp-id='" <<lsp_id <<"']" <<"[p2mp-id='" <<p2mp_id <<"']" <<"[source-address='" <<source_address <<"']" <<"[sub-group-id='" <<sub_group_id <<"']" <<"[sub-group-originator='" <<sub_group_originator <<"']" <<"[tunnel-id='" <<tunnel_id <<"']";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/remote-signalling-counters/" << get_segment_path();
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
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.operation)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "s2l-statistic")
    {
        for(auto const & c : s2l_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic>();
        c->parent = this;
        s2l_statistic.push_back(std::move(c));
        children[segment_path] = s2l_statistic.back();
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
            statistics = std::make_shared<MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_children()
{
    for (auto const & c : s2l_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "remote-signalling-counter";
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::get_children()
{
    return children;
}

void MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::S2LStatistic()
    :
    destination_address{YType::str, "destination-address"},
    sub_group_id{YType::uint16, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"}
    	,
    statistics(std::make_shared<MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "s2l-statistic"; yang_parent_name = "remote-signalling-counter";
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::~S2LStatistic()
{
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::has_data() const
{
    return destination_address.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_originator.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2LStatistic' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.operation)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            statistics = std::make_shared<MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::get_children()
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

void MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
    }
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "s2l-statistic";
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::get_children()
{
    return children;
}

void MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTe::SignallingCounters::TailsCounters::TailsCounters()
{
    yang_name = "tails-counters"; yang_parent_name = "signalling-counters";
}

MplsTe::SignallingCounters::TailsCounters::~TailsCounters()
{
}

bool MplsTe::SignallingCounters::TailsCounters::has_data() const
{
    for (std::size_t index=0; index<tails_counter.size(); index++)
    {
        if(tails_counter[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::SignallingCounters::TailsCounters::has_operation() const
{
    for (std::size_t index=0; index<tails_counter.size(); index++)
    {
        if(tails_counter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTe::SignallingCounters::TailsCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tails-counters";

    return path_buffer.str();

}

EntityPath MplsTe::SignallingCounters::TailsCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::TailsCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tails-counter")
    {
        for(auto const & c : tails_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsTe::SignallingCounters::TailsCounters::TailsCounter>();
        c->parent = this;
        tails_counter.push_back(std::move(c));
        children[segment_path] = tails_counter.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsTe::SignallingCounters::TailsCounters::get_children()
{
    for (auto const & c : tails_counter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsTe::SignallingCounters::TailsCounters::set_value(const std::string & value_path, std::string value)
{
}


}
}

