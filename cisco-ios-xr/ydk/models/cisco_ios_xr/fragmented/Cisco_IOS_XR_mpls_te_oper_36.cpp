
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_36.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_37.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::~Affinity()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_data() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        for(auto const & c : constraint_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        for(auto const & c : extended_forward_ref_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : constraint_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_forward_ref_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::Logging()
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

    yang_name = "logging"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::~Logging()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_data() const
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

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
        s2l_state.value_namespace = name_space;
        s2l_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-logging-enabled" || name == "lsp-bandwidth-change" || name == "lsp-insufficient-bw" || name == "lsp-pcalc-failure-logging-enabled" || name == "lsp-re-opt" || name == "lsp-re-route" || name == "lsp-state" || name == "s2l-state")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::MeshGroupId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mesh-group-id"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::~MeshGroupId()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::PolicyClassEntry()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "policy-class-entry"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::~PolicyClassEntry()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::AttributeSetP2Mpte()
    :
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    fast_reroute{YType::boolean, "fast-reroute"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    hold_priority{YType::uint8, "hold-priority"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    setup_priority{YType::uint8, "setup-priority"}
    	,
    affinity(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>())
{
    affinity->parent = this;

    yang_name = "attribute-set-p2mpte"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::~AttributeSetP2Mpte()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_data() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_data())
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

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(fast_reroute.yfilter)
	|| ydk::is_set(frr_bandwidth_protection.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2mpte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (fast_reroute.is_set || is_set(fast_reroute.yfilter)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.yfilter)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "tunnel-id")
    {
        for(auto const & c : tunnel_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    for (auto const & c : tunnel_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
        fast_reroute.value_namespace = name_space;
        fast_reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
        frr_bandwidth_protection.value_namespace = name_space;
        frr_bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute.yfilter = yfilter;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "tunnel-id" || name == "configured-bandwidth" || name == "dste-class-type" || name == "fast-reroute" || name == "frr-bandwidth-protection" || name == "hold-priority" || name == "is-affinity-configured" || name == "is-bandwidth-configured" || name == "is-priority-configured" || name == "setup-priority")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-p2mpte"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::~Affinity()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_data() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        for(auto const & c : constraint_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        for(auto const & c : extended_forward_ref_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : constraint_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_forward_ref_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2mpte"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::AttributeSetP2PTe()
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
    pcedp_type{YType::enumeration, "pcedp-type"}
    	,
    affinity(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>())
	,logging(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>())
	,prepend_list(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>())
{
    affinity->parent = this;
    logging->parent = this;
    prepend_list->parent = this;

    yang_name = "attribute-set-p2p-te"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::~AttributeSetP2PTe()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_data() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_data())
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

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_action_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_timeout_configured.yfilter)
	|| ydk::is_set(is_path_select_configured.yfilter)
	|| ydk::is_set(is_path_selection_metric_configured.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_adjacency_protection_configured.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_margin_configured.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_margin_relative.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_segment_limit_configured.yfilter)
	|| ydk::is_set(is_pce_configured.yfilter)
	|| ydk::is_set(is_pce_disj_group_id_configured.yfilter)
	|| ydk::is_set(is_pce_disj_source_configured.yfilter)
	|| ydk::is_set(is_pce_disj_type_configured.yfilter)
	|| ydk::is_set(is_pceb_dj_source_configured.yfilter)
	|| ydk::is_set(is_pcebd_group_id_configured.yfilter)
	|| ydk::is_set(is_prepend_list_configured.yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(path_selection_invalidation_action.yfilter)
	|| ydk::is_set(path_selection_metric.yfilter)
	|| ydk::is_set(path_selection_segment_routing_adjacency_protection.yfilter)
	|| ydk::is_set(path_selection_segment_routing_margin.yfilter)
	|| ydk::is_set(path_selection_segment_routing_segment_limit.yfilter)
	|| ydk::is_set(pcebd_group_id.yfilter)
	|| ydk::is_set(pcebd_source_address.yfilter)
	|| ydk::is_set(pcedp_group_id.yfilter)
	|| ydk::is_set(pcedp_source_address.yfilter)
	|| ydk::is_set(pcedp_type.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (prepend_list !=  nullptr && prepend_list->has_operation());
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2p-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_path_select_configured.is_set || is_set(is_path_select_configured.yfilter)) leaf_name_data.push_back(is_path_select_configured.get_name_leafdata());
    if (is_path_selection_metric_configured.is_set || is_set(is_path_selection_metric_configured.yfilter)) leaf_name_data.push_back(is_path_selection_metric_configured.get_name_leafdata());
    if (is_path_selection_segment_routing_adjacency_protection_configured.is_set || is_set(is_path_selection_segment_routing_adjacency_protection_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_adjacency_protection_configured.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_configured.is_set || is_set(is_path_selection_segment_routing_margin_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_configured.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_relative.is_set || is_set(is_path_selection_segment_routing_margin_relative.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_relative.get_name_leafdata());
    if (is_path_selection_segment_routing_segment_limit_configured.is_set || is_set(is_path_selection_segment_routing_segment_limit_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_segment_limit_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.yfilter)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.yfilter)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.yfilter)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (is_prepend_list_configured.is_set || is_set(is_prepend_list_configured.yfilter)) leaf_name_data.push_back(is_prepend_list_configured.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_selection_invalidation_action.is_set || is_set(path_selection_invalidation_action.yfilter)) leaf_name_data.push_back(path_selection_invalidation_action.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.yfilter)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (path_selection_segment_routing_adjacency_protection.is_set || is_set(path_selection_segment_routing_adjacency_protection.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_adjacency_protection.get_name_leafdata());
    if (path_selection_segment_routing_margin.is_set || is_set(path_selection_segment_routing_margin.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_margin.get_name_leafdata());
    if (path_selection_segment_routing_segment_limit.is_set || is_set(path_selection_segment_routing_segment_limit.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_segment_limit.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.yfilter)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.yfilter)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.yfilter)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.yfilter)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.yfilter)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "prepend-list")
    {
        if(prepend_list == nullptr)
        {
            prepend_list = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList>();
        }
        return prepend_list;
    }

    if(child_yang_name == "tunnel-id")
    {
        for(auto const & c : tunnel_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(prepend_list != nullptr)
    {
        children["prepend-list"] = prepend_list;
    }

    for (auto const & c : tunnel_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
        is_path_invalidation_action_configured.value_namespace = name_space;
        is_path_invalidation_action_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
        is_path_invalidation_timeout_configured.value_namespace = name_space;
        is_path_invalidation_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-select-configured")
    {
        is_path_select_configured = value;
        is_path_select_configured.value_namespace = name_space;
        is_path_select_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-metric-configured")
    {
        is_path_selection_metric_configured = value;
        is_path_selection_metric_configured.value_namespace = name_space;
        is_path_selection_metric_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-adjacency-protection-configured")
    {
        is_path_selection_segment_routing_adjacency_protection_configured = value;
        is_path_selection_segment_routing_adjacency_protection_configured.value_namespace = name_space;
        is_path_selection_segment_routing_adjacency_protection_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-margin-configured")
    {
        is_path_selection_segment_routing_margin_configured = value;
        is_path_selection_segment_routing_margin_configured.value_namespace = name_space;
        is_path_selection_segment_routing_margin_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-margin-relative")
    {
        is_path_selection_segment_routing_margin_relative = value;
        is_path_selection_segment_routing_margin_relative.value_namespace = name_space;
        is_path_selection_segment_routing_margin_relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-segment-limit-configured")
    {
        is_path_selection_segment_routing_segment_limit_configured = value;
        is_path_selection_segment_routing_segment_limit_configured.value_namespace = name_space;
        is_path_selection_segment_routing_segment_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
        is_pce_configured.value_namespace = name_space;
        is_pce_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
        is_pce_disj_group_id_configured.value_namespace = name_space;
        is_pce_disj_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
        is_pce_disj_source_configured.value_namespace = name_space;
        is_pce_disj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
        is_pce_disj_type_configured.value_namespace = name_space;
        is_pce_disj_type_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
        is_pceb_dj_source_configured.value_namespace = name_space;
        is_pceb_dj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
        is_pcebd_group_id_configured.value_namespace = name_space;
        is_pcebd_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-prepend-list-configured")
    {
        is_prepend_list_configured = value;
        is_prepend_list_configured.value_namespace = name_space;
        is_prepend_list_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-invalidation-action")
    {
        path_selection_invalidation_action = value;
        path_selection_invalidation_action.value_namespace = name_space;
        path_selection_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
        path_selection_metric.value_namespace = name_space;
        path_selection_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection = value;
        path_selection_segment_routing_adjacency_protection.value_namespace = name_space;
        path_selection_segment_routing_adjacency_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-margin")
    {
        path_selection_segment_routing_margin = value;
        path_selection_segment_routing_margin.value_namespace = name_space;
        path_selection_segment_routing_margin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-segment-limit")
    {
        path_selection_segment_routing_segment_limit = value;
        path_selection_segment_routing_segment_limit.value_namespace = name_space;
        path_selection_segment_routing_segment_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
        pcebd_group_id.value_namespace = name_space;
        pcebd_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
        pcebd_source_address.value_namespace = name_space;
        pcebd_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
        pcedp_group_id.value_namespace = name_space;
        pcedp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
        pcedp_source_address.value_namespace = name_space;
        pcedp_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
        pcedp_type.value_namespace = name_space;
        pcedp_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-select-configured")
    {
        is_path_select_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-metric-configured")
    {
        is_path_selection_metric_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-adjacency-protection-configured")
    {
        is_path_selection_segment_routing_adjacency_protection_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-margin-configured")
    {
        is_path_selection_segment_routing_margin_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-margin-relative")
    {
        is_path_selection_segment_routing_margin_relative.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-segment-limit-configured")
    {
        is_path_selection_segment_routing_segment_limit_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured.yfilter = yfilter;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "is-prepend-list-configured")
    {
        is_prepend_list_configured.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "path-selection-invalidation-action")
    {
        path_selection_invalidation_action.yfilter = yfilter;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-margin")
    {
        path_selection_segment_routing_margin.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-segment-limit")
    {
        path_selection_segment_routing_segment_limit.yfilter = yfilter;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id.yfilter = yfilter;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id.yfilter = yfilter;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "prepend-list" || name == "tunnel-id" || name == "is-affinity-configured" || name == "is-path-invalidation-action-configured" || name == "is-path-invalidation-timeout-configured" || name == "is-path-select-configured" || name == "is-path-selection-metric-configured" || name == "is-path-selection-segment-routing-adjacency-protection-configured" || name == "is-path-selection-segment-routing-margin-configured" || name == "is-path-selection-segment-routing-margin-relative" || name == "is-path-selection-segment-routing-segment-limit-configured" || name == "is-pce-configured" || name == "is-pce-disj-group-id-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "is-prepend-list-configured" || name == "path-invalidation-timeout" || name == "path-selection-invalidation-action" || name == "path-selection-metric" || name == "path-selection-segment-routing-adjacency-protection" || name == "path-selection-segment-routing-margin" || name == "path-selection-segment-routing-segment-limit" || name == "pcebd-group-id" || name == "pcebd-source-address" || name == "pcedp-group-id" || name == "pcedp-source-address" || name == "pcedp-type")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::~Affinity()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_data() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        for(auto const & c : constraint_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        for(auto const & c : extended_forward_ref_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : constraint_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_forward_ref_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::Logging()
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

    yang_name = "logging"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::~Logging()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_data() const
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

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
        s2l_state.value_namespace = name_space;
        s2l_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-logging-enabled" || name == "lsp-bandwidth-change" || name == "lsp-insufficient-bw" || name == "lsp-pcalc-failure-logging-enabled" || name == "lsp-re-opt" || name == "lsp-re-route" || name == "lsp-state" || name == "s2l-state")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependList()
{

    yang_name = "prepend-list"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::~PrependList()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_data() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_operation() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prepend-entry")
    {
        for(auto const & c : prepend_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry>();
        c->parent = this;
        prepend_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prepend_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepend-entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::PrependEntry()
    :
    index_{YType::uint32, "index"},
    next_label{YType::uint32, "next-label"},
    type{YType::enumeration, "type"}
{

    yang_name = "prepend-entry"; yang_parent_name = "prepend-list"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::~PrependEntry()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_data() const
{
    return index_.is_set
	|| next_label.is_set
	|| type.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(next_label.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (next_label.is_set || is_set(next_label.yfilter)) leaf_name_data.push_back(next_label.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-label")
    {
        next_label = value;
        next_label.value_namespace = name_space;
        next_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "next-label")
    {
        next_label.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "next-label" || name == "type")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::AttributeSetPathOption()
    :
    bandwidth_type{YType::enumeration, "bandwidth-type"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    cost_limit{YType::uint32, "cost-limit"},
    dste_class_type{YType::uint8, "dste-class-type"},
    exclude_list_name{YType::str, "exclude-list-name"},
    generation{YType::uint32, "generation"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_bfd_reverse_pat_configured{YType::boolean, "is-bfd-reverse-pat-configured"},
    is_cost_limit_configured{YType::boolean, "is-cost-limit-configured"},
    is_exclude_list_name_configured{YType::boolean, "is-exclude-list-name-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    path_invalidation_action{YType::uint32, "path-invalidation-action"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"}
    	,
    affinity(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>())
	,bfd_reverse_path(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>())
{
    affinity->parent = this;
    bfd_reverse_path->parent = this;

    yang_name = "attribute-set-path-option"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::~AttributeSetPathOption()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_data() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<version_info.size(); index++)
    {
        if(version_info[index]->has_data())
            return true;
    }
    return bandwidth_type.is_set
	|| configured_bandwidth.is_set
	|| cost_limit.is_set
	|| dste_class_type.is_set
	|| exclude_list_name.is_set
	|| generation.is_set
	|| is_affinity_configured.is_set
	|| is_bandwidth_configured.is_set
	|| is_bfd_reverse_pat_configured.is_set
	|| is_cost_limit_configured.is_set
	|| is_exclude_list_name_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| path_invalidation_action.is_set
	|| path_invalidation_timeout.is_set
	|| pcebd_group_id.is_set
	|| pcebd_source_address.is_set
	|| pcedp_group_id.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_data());
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.size(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<version_info.size(); index++)
    {
        if(version_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(cost_limit.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(exclude_list_name.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(is_bfd_reverse_pat_configured.yfilter)
	|| ydk::is_set(is_cost_limit_configured.yfilter)
	|| ydk::is_set(is_exclude_list_name_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_action_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_timeout_configured.yfilter)
	|| ydk::is_set(is_pce_configured.yfilter)
	|| ydk::is_set(is_pce_disj_group_id_configured.yfilter)
	|| ydk::is_set(is_pce_disj_source_configured.yfilter)
	|| ydk::is_set(is_pce_disj_type_configured.yfilter)
	|| ydk::is_set(is_pceb_dj_source_configured.yfilter)
	|| ydk::is_set(is_pcebd_group_id_configured.yfilter)
	|| ydk::is_set(path_invalidation_action.yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(pcebd_group_id.yfilter)
	|| ydk::is_set(pcebd_source_address.yfilter)
	|| ydk::is_set(pcedp_group_id.yfilter)
	|| ydk::is_set(pcedp_source_address.yfilter)
	|| ydk::is_set(pcedp_type.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_operation());
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-path-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (cost_limit.is_set || is_set(cost_limit.yfilter)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (exclude_list_name.is_set || is_set(exclude_list_name.yfilter)) leaf_name_data.push_back(exclude_list_name.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_bfd_reverse_pat_configured.is_set || is_set(is_bfd_reverse_pat_configured.yfilter)) leaf_name_data.push_back(is_bfd_reverse_pat_configured.get_name_leafdata());
    if (is_cost_limit_configured.is_set || is_set(is_cost_limit_configured.yfilter)) leaf_name_data.push_back(is_cost_limit_configured.get_name_leafdata());
    if (is_exclude_list_name_configured.is_set || is_set(is_exclude_list_name_configured.yfilter)) leaf_name_data.push_back(is_exclude_list_name_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.yfilter)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.yfilter)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.yfilter)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (path_invalidation_action.is_set || is_set(path_invalidation_action.yfilter)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.yfilter)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.yfilter)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.yfilter)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.yfilter)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.yfilter)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path == nullptr)
        {
            bfd_reverse_path = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>();
        }
        return bfd_reverse_path;
    }

    if(child_yang_name == "tunnel-id")
    {
        for(auto const & c : tunnel_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId>();
        c->parent = this;
        tunnel_id.push_back(c);
        return c;
    }

    if(child_yang_name == "version-info")
    {
        for(auto const & c : version_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo>();
        c->parent = this;
        version_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    if(bfd_reverse_path != nullptr)
    {
        children["bfd-reverse-path"] = bfd_reverse_path;
    }

    for (auto const & c : tunnel_id)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : version_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-limit")
    {
        cost_limit = value;
        cost_limit.value_namespace = name_space;
        cost_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name = value;
        exclude_list_name.value_namespace = name_space;
        exclude_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured = value;
        is_bfd_reverse_pat_configured.value_namespace = name_space;
        is_bfd_reverse_pat_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured = value;
        is_cost_limit_configured.value_namespace = name_space;
        is_cost_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured = value;
        is_exclude_list_name_configured.value_namespace = name_space;
        is_exclude_list_name_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
        is_path_invalidation_action_configured.value_namespace = name_space;
        is_path_invalidation_action_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
        is_path_invalidation_timeout_configured.value_namespace = name_space;
        is_path_invalidation_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
        is_pce_configured.value_namespace = name_space;
        is_pce_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
        is_pce_disj_group_id_configured.value_namespace = name_space;
        is_pce_disj_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
        is_pce_disj_source_configured.value_namespace = name_space;
        is_pce_disj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
        is_pce_disj_type_configured.value_namespace = name_space;
        is_pce_disj_type_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
        is_pceb_dj_source_configured.value_namespace = name_space;
        is_pceb_dj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
        is_pcebd_group_id_configured.value_namespace = name_space;
        is_pcebd_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
        path_invalidation_action.value_namespace = name_space;
        path_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
        pcebd_group_id.value_namespace = name_space;
        pcebd_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
        pcebd_source_address.value_namespace = name_space;
        pcebd_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
        pcedp_group_id.value_namespace = name_space;
        pcedp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
        pcedp_source_address.value_namespace = name_space;
        pcedp_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
        pcedp_type.value_namespace = name_space;
        pcedp_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "cost-limit")
    {
        cost_limit.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured.yfilter = yfilter;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured.yfilter = yfilter;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured.yfilter = yfilter;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id.yfilter = yfilter;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id.yfilter = yfilter;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "bfd-reverse-path" || name == "tunnel-id" || name == "version-info" || name == "bandwidth-type" || name == "configured-bandwidth" || name == "cost-limit" || name == "dste-class-type" || name == "exclude-list-name" || name == "generation" || name == "is-affinity-configured" || name == "is-bandwidth-configured" || name == "is-bfd-reverse-pat-configured" || name == "is-cost-limit-configured" || name == "is-exclude-list-name-configured" || name == "is-path-invalidation-action-configured" || name == "is-path-invalidation-timeout-configured" || name == "is-pce-configured" || name == "is-pce-disj-group-id-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "path-invalidation-action" || name == "path-invalidation-timeout" || name == "pcebd-group-id" || name == "pcebd-source-address" || name == "pcedp-group-id" || name == "pcedp-source-address" || name == "pcedp-type")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::~Affinity()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_data() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.size(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.size(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        for(auto const & c : constraint_extended_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        for(auto const & c : extended_forward_ref_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : constraint_extended_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_forward_ref_value)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::BfdReversePath()
    :
    binding_label{YType::uint32, "binding-label"},
    path_type{YType::enumeration, "path-type"}
{

    yang_name = "bfd-reverse-path"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::~BfdReversePath()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_data() const
{
    return binding_label.is_set
	|| path_type.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(path_type.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-label" || name == "path-type")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::VersionInfo()
    :
    attribute_type{YType::str, "attribute-type"},
    generation{YType::uint32, "generation"},
    is_default{YType::boolean, "is-default"}
{

    yang_name = "version-info"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::~VersionInfo()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_data() const
{
    return attribute_type.is_set
	|| generation.is_set
	|| is_default.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_type.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(is_default.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.yfilter)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.yfilter)) leaf_name_data.push_back(is_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-type")
    {
        attribute_type = value;
        attribute_type.value_namespace = name_space;
        attribute_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default")
    {
        is_default = value;
        is_default.value_namespace = name_space;
        is_default.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-type")
    {
        attribute_type.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
    if(value_path == "is-default")
    {
        is_default.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-type" || name == "generation" || name == "is-default")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::AttributeSetXro()
    :
    xro(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro>())
{
    xro->parent = this;

    yang_name = "attribute-set-xro"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::~AttributeSetXro()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::has_data() const
{
    return (xro !=  nullptr && xro->has_data());
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::has_operation() const
{
    return is_set(yfilter)
	|| (xro !=  nullptr && xro->has_operation());
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro")
    {
        if(xro == nullptr)
        {
            xro = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro>();
        }
        return xro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xro != nullptr)
    {
        children["xro"] = xro;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::Xro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
{

    yang_name = "xro"; yang_parent_name = "attribute-set-xro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::~Xro()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_data() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mutual_diversity_flag.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mutual_diversity_flag.is_set || is_set(mutual_diversity_flag.yfilter)) leaf_name_data.push_back(mutual_diversity_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro-subobject")
    {
        for(auto const & c : xro_subobject)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject>();
        c->parent = this;
        xro_subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xro_subobject)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
        mutual_diversity_flag.value_namespace = name_space;
        mutual_diversity_flag.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro-subobject" || name == "mutual-diversity-flag")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
    	,
    as_subobject(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>())
	,ipv4_subobject(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>())
	,ipv6_subobject(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>())
	,lsp_subobject(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>())
	,srlg_subobject(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>())
	,unnumbered_subobject(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>())
{
    as_subobject->parent = this;
    ipv4_subobject->parent = this;
    ipv6_subobject->parent = this;
    lsp_subobject->parent = this;
    srlg_subobject->parent = this;
    unnumbered_subobject->parent = this;

    yang_name = "xro-subobject"; yang_parent_name = "xro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::~XroSubobject()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_data() const
{
    return type.is_set
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data());
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (as_subobject !=  nullptr && as_subobject->has_operation())
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_operation())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_operation())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_operation())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_operation())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_operation());
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-subobject")
    {
        if(as_subobject == nullptr)
        {
            as_subobject = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>();
        }
        return as_subobject;
    }

    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject == nullptr)
        {
            ipv4_subobject = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>();
        }
        return ipv4_subobject;
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject == nullptr)
        {
            ipv6_subobject = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>();
        }
        return ipv6_subobject;
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject == nullptr)
        {
            lsp_subobject = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>();
        }
        return lsp_subobject;
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject == nullptr)
        {
            srlg_subobject = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>();
        }
        return srlg_subobject;
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject == nullptr)
        {
            unnumbered_subobject = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>();
        }
        return unnumbered_subobject;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(as_subobject != nullptr)
    {
        children["as-subobject"] = as_subobject;
    }

    if(ipv4_subobject != nullptr)
    {
        children["ipv4-subobject"] = ipv4_subobject;
    }

    if(ipv6_subobject != nullptr)
    {
        children["ipv6-subobject"] = ipv6_subobject;
    }

    if(lsp_subobject != nullptr)
    {
        children["lsp-subobject"] = lsp_subobject;
    }

    if(srlg_subobject != nullptr)
    {
        children["srlg-subobject"] = srlg_subobject;
    }

    if(unnumbered_subobject != nullptr)
    {
        children["unnumbered-subobject"] = unnumbered_subobject;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-subobject" || name == "ipv4-subobject" || name == "ipv6-subobject" || name == "lsp-subobject" || name == "srlg-subobject" || name == "unnumbered-subobject" || name == "type")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{

    yang_name = "as-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_data() const
{
    return as_number.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{

    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(prefix_len.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "attribute" || name == "exclusion-type" || name == "prefix-len")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    prefix_len{YType::uint8, "prefix-len"}
{

    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_data() const
{
    return address.is_set
	|| attribute.is_set
	|| exclusion_type.is_set
	|| prefix_len.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(prefix_len.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "attribute" || name == "exclusion-type" || name == "prefix-len")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::LspSubobject()
    :
    destination_node_exception{YType::boolean, "destination-node-exception"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    ignore_lsp_id{YType::boolean, "ignore-lsp-id"},
    penultimate_node_exception{YType::boolean, "penultimate-node-exception"},
    processing_node_exception{YType::boolean, "processing-node-exception"}
    	,
    fec(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>())
{
    fec->parent = this;

    yang_name = "lsp-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::~LspSubobject()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_data() const
{
    return destination_node_exception.is_set
	|| exclusion_type.is_set
	|| ignore_lsp_id.is_set
	|| penultimate_node_exception.is_set
	|| processing_node_exception.is_set
	|| (fec !=  nullptr && fec->has_data());
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_node_exception.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(ignore_lsp_id.yfilter)
	|| ydk::is_set(penultimate_node_exception.yfilter)
	|| ydk::is_set(processing_node_exception.yfilter)
	|| (fec !=  nullptr && fec->has_operation());
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_node_exception.is_set || is_set(destination_node_exception.yfilter)) leaf_name_data.push_back(destination_node_exception.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (ignore_lsp_id.is_set || is_set(ignore_lsp_id.yfilter)) leaf_name_data.push_back(ignore_lsp_id.get_name_leafdata());
    if (penultimate_node_exception.is_set || is_set(penultimate_node_exception.yfilter)) leaf_name_data.push_back(penultimate_node_exception.get_name_leafdata());
    if (processing_node_exception.is_set || is_set(processing_node_exception.yfilter)) leaf_name_data.push_back(processing_node_exception.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec")
    {
        if(fec == nullptr)
        {
            fec = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>();
        }
        return fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec != nullptr)
    {
        children["fec"] = fec;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-node-exception")
    {
        destination_node_exception = value;
        destination_node_exception.value_namespace = name_space;
        destination_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id = value;
        ignore_lsp_id.value_namespace = name_space;
        ignore_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception = value;
        penultimate_node_exception.value_namespace = name_space;
        penultimate_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception = value;
        processing_node_exception.value_namespace = name_space;
        processing_node_exception.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-node-exception")
    {
        destination_node_exception.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id.yfilter = yfilter;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception.yfilter = yfilter;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec" || name == "destination-node-exception" || name == "exclusion-type" || name == "ignore-lsp-id" || name == "penultimate-node-exception" || name == "processing-node-exception")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::Fec()
    :
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_source{YType::str, "fec-source"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "fec"; yang_parent_name = "lsp-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::~Fec()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_data() const
{
    return fec_extended_tunnel_id.is_set
	|| fec_lsp_id.is_set
	|| fec_source.is_set
	|| fec_tunnel_id.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
        fec_lsp_id.value_namespace = name_space;
        fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
        fec_vrf.value_namespace = name_space;
        fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-extended-tunnel-id" || name == "fec-lsp-id" || name == "fec-source" || name == "fec-tunnel-id" || name == "fec-vrf")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "fec"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| fec_destination_p2mp_id.is_set
	|| p2p_lsp_destination.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
        fec_destination_p2mp_id.value_namespace = name_space;
        fec_destination_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
        p2p_lsp_destination.value_namespace = name_space;
        p2p_lsp_destination.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "fec-destination-p2mp-id" || name == "p2p-lsp-destination")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::SrlgSubobject()
    :
    exclusion_type{YType::enumeration, "exclusion-type"},
    srlg_id{YType::uint32, "srlg-id"}
{

    yang_name = "srlg-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::~SrlgSubobject()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_data() const
{
    return exclusion_type.is_set
	|| srlg_id.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(srlg_id.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (srlg_id.is_set || is_set(srlg_id.yfilter)) leaf_name_data.push_back(srlg_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-id")
    {
        srlg_id = value;
        srlg_id.value_namespace = name_space;
        srlg_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
    if(value_path == "srlg-id")
    {
        srlg_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclusion-type" || name == "srlg-id")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"},
    interface_id{YType::uint32, "interface-id"},
    te_router_id{YType::str, "te-router-id"}
{

    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_data() const
{
    return attribute.is_set
	|| exclusion_type.is_set
	|| interface_id.is_set
	|| te_router_id.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(te_router_id.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (te_router_id.is_set || is_set(te_router_id.yfilter)) leaf_name_data.push_back(te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-router-id")
    {
        te_router_id = value;
        te_router_id.value_namespace = name_space;
        te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "te-router-id")
    {
        te_router_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute" || name == "exclusion-type" || name == "interface-id" || name == "te-router-id")
        return true;
    return false;
}

MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntries()
{

    yang_name = "auto-route-destination-entries"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoRouteDestinationEntries::~AutoRouteDestinationEntries()
{
}

bool MplsTeStandby::AutoRouteDestinationEntries::has_data() const
{
    for (std::size_t index=0; index<auto_route_destination_entry.size(); index++)
    {
        if(auto_route_destination_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::AutoRouteDestinationEntries::has_operation() const
{
    for (std::size_t index=0; index<auto_route_destination_entry.size(); index++)
    {
        if(auto_route_destination_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::AutoRouteDestinationEntries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoRouteDestinationEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-route-destination-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoRouteDestinationEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoRouteDestinationEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-route-destination-entry")
    {
        for(auto const & c : auto_route_destination_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry>();
        c->parent = this;
        auto_route_destination_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoRouteDestinationEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : auto_route_destination_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AutoRouteDestinationEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AutoRouteDestinationEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AutoRouteDestinationEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-route-destination-entry")
        return true;
    return false;
}

MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::AutoRouteDestinationEntry()
    :
    tunnel_id{YType::int32, "tunnel-id"},
    tunnel_id_xr{YType::uint16, "tunnel-id-xr"}
{

    yang_name = "auto-route-destination-entry"; yang_parent_name = "auto-route-destination-entries"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::~AutoRouteDestinationEntry()
{
}

bool MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::has_data() const
{
    for (std::size_t index=0; index<tunnel_autoroute_dest.size(); index++)
    {
        if(tunnel_autoroute_dest[index]->has_data())
            return true;
    }
    return tunnel_id.is_set
	|| tunnel_id_xr.is_set;
}

bool MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::has_operation() const
{
    for (std::size_t index=0; index<tunnel_autoroute_dest.size(); index++)
    {
        if(tunnel_autoroute_dest[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id_xr.yfilter);
}

std::string MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-route-destination-entries/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-route-destination-entry" <<"[tunnel-id='" <<tunnel_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.yfilter)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-autoroute-dest")
    {
        for(auto const & c : tunnel_autoroute_dest)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest>();
        c->parent = this;
        tunnel_autoroute_dest.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnel_autoroute_dest)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
        tunnel_id_xr.value_namespace = name_space;
        tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-autoroute-dest" || name == "tunnel-id" || name == "tunnel-id-xr")
        return true;
    return false;
}

MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::TunnelAutorouteDest()
    :
    install_time{YType::uint32, "install-time"},
    interface_handle{YType::str, "interface-handle"},
    metric{YType::uint32, "metric"},
    prefix_address{YType::str, "prefix-address"},
    prefix_length{YType::uint32, "prefix-length"}
{

    yang_name = "tunnel-autoroute-dest"; yang_parent_name = "auto-route-destination-entry"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::~TunnelAutorouteDest()
{
}

bool MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::has_data() const
{
    return install_time.is_set
	|| interface_handle.is_set
	|| metric.is_set
	|| prefix_address.is_set
	|| prefix_length.is_set;
}

bool MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(install_time.yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(prefix_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-autoroute-dest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (install_time.is_set || is_set(install_time.yfilter)) leaf_name_data.push_back(install_time.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (prefix_address.is_set || is_set(prefix_address.yfilter)) leaf_name_data.push_back(prefix_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "install-time")
    {
        install_time = value;
        install_time.value_namespace = name_space;
        install_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-address")
    {
        prefix_address = value;
        prefix_address.value_namespace = name_space;
        prefix_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "install-time")
    {
        install_time.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "prefix-address")
    {
        prefix_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "install-time" || name == "interface-handle" || name == "metric" || name == "prefix-address" || name == "prefix-length")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::AutoTunnel()
    :
    backup(std::make_shared<MplsTeStandby::AutoTunnel::Backup>())
	,mesh(std::make_shared<MplsTeStandby::AutoTunnel::Mesh>())
	,pcc(std::make_shared<MplsTeStandby::AutoTunnel::Pcc>())
{
    backup->parent = this;
    mesh->parent = this;
    pcc->parent = this;

    yang_name = "auto-tunnel"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::~AutoTunnel()
{
}

bool MplsTeStandby::AutoTunnel::has_data() const
{
    return (backup !=  nullptr && backup->has_data())
	|| (mesh !=  nullptr && mesh->has_data())
	|| (pcc !=  nullptr && pcc->has_data());
}

bool MplsTeStandby::AutoTunnel::has_operation() const
{
    return is_set(yfilter)
	|| (backup !=  nullptr && backup->has_operation())
	|| (mesh !=  nullptr && mesh->has_operation())
	|| (pcc !=  nullptr && pcc->has_operation());
}

std::string MplsTeStandby::AutoTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<MplsTeStandby::AutoTunnel::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "mesh")
    {
        if(mesh == nullptr)
        {
            mesh = std::make_shared<MplsTeStandby::AutoTunnel::Mesh>();
        }
        return mesh;
    }

    if(child_yang_name == "pcc")
    {
        if(pcc == nullptr)
        {
            pcc = std::make_shared<MplsTeStandby::AutoTunnel::Pcc>();
        }
        return pcc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(mesh != nullptr)
    {
        children["mesh"] = mesh;
    }

    if(pcc != nullptr)
    {
        children["pcc"] = pcc;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AutoTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AutoTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "mesh" || name == "pcc")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Backup()
    :
    config(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Config>())
	,statistics(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics>())
	,summary(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Summary>())
	,tunnels(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Tunnels>())
{
    config->parent = this;
    statistics->parent = this;
    summary->parent = this;
    tunnels->parent = this;

    yang_name = "backup"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Backup::~Backup()
{
}

bool MplsTeStandby::AutoTunnel::Backup::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool MplsTeStandby::AutoTunnel::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string MplsTeStandby::AutoTunnel::Backup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Config>();
        }
        return config;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Tunnels>();
        }
        return tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(tunnels != nullptr)
    {
        children["tunnels"] = tunnels;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AutoTunnel::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AutoTunnel::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "statistics" || name == "summary" || name == "tunnels")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Config::Config()
    :
    interface_count{YType::uint32, "interface-count"},
    is_configured{YType::boolean, "is-configured"},
    max_tunnel_id{YType::uint16, "max-tunnel-id"},
    min_tunnel_id{YType::uint16, "min-tunnel-id"},
    unused_removal_timeout_configured{YType::uint32, "unused-removal-timeout-configured"}
{

    yang_name = "config"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Backup::Config::~Config()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Config::has_data() const
{
    return interface_count.is_set
	|| is_configured.is_set
	|| max_tunnel_id.is_set
	|| min_tunnel_id.is_set
	|| unused_removal_timeout_configured.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(is_configured.yfilter)
	|| ydk::is_set(max_tunnel_id.yfilter)
	|| ydk::is_set(min_tunnel_id.yfilter)
	|| ydk::is_set(unused_removal_timeout_configured.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Backup::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Backup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Backup::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (is_configured.is_set || is_set(is_configured.yfilter)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (max_tunnel_id.is_set || is_set(max_tunnel_id.yfilter)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());
    if (min_tunnel_id.is_set || is_set(min_tunnel_id.yfilter)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());
    if (unused_removal_timeout_configured.is_set || is_set(unused_removal_timeout_configured.yfilter)) leaf_name_data.push_back(unused_removal_timeout_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-configured")
    {
        is_configured = value;
        is_configured.value_namespace = name_space;
        is_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
        max_tunnel_id.value_namespace = name_space;
        max_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
        min_tunnel_id.value_namespace = name_space;
        min_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unused-removal-timeout-configured")
    {
        unused_removal_timeout_configured = value;
        unused_removal_timeout_configured.value_namespace = name_space;
        unused_removal_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Backup::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "is-configured")
    {
        is_configured.yfilter = yfilter;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "unused-removal-timeout-configured")
    {
        unused_removal_timeout_configured.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Backup::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-count" || name == "is-configured" || name == "max-tunnel-id" || name == "min-tunnel-id" || name == "unused-removal-timeout-configured")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Statistics::Statistics()
    :
    last_cleared_time{YType::uint32, "last-cleared-time"}
    	,
    connected(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::Connected>())
	,created(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::Created>())
	,removed_down(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown>())
	,removed_in_use(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse>())
	,removed_range_exceeded(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded>())
	,removed_unused(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused>())
{
    connected->parent = this;
    created->parent = this;
    removed_down->parent = this;
    removed_in_use->parent = this;
    removed_range_exceeded->parent = this;
    removed_unused->parent = this;

    yang_name = "statistics"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Backup::Statistics::~Statistics()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::has_data() const
{
    return last_cleared_time.is_set
	|| (connected !=  nullptr && connected->has_data())
	|| (created !=  nullptr && created->has_data())
	|| (removed_down !=  nullptr && removed_down->has_data())
	|| (removed_in_use !=  nullptr && removed_in_use->has_data())
	|| (removed_range_exceeded !=  nullptr && removed_range_exceeded->has_data())
	|| (removed_unused !=  nullptr && removed_unused->has_data());
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_cleared_time.yfilter)
	|| (connected !=  nullptr && connected->has_operation())
	|| (created !=  nullptr && created->has_operation())
	|| (removed_down !=  nullptr && removed_down->has_operation())
	|| (removed_in_use !=  nullptr && removed_in_use->has_operation())
	|| (removed_range_exceeded !=  nullptr && removed_range_exceeded->has_operation())
	|| (removed_unused !=  nullptr && removed_unused->has_operation());
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Backup::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_time.is_set || is_set(last_cleared_time.yfilter)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "created")
    {
        if(created == nullptr)
        {
            created = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::Created>();
        }
        return created;
    }

    if(child_yang_name == "removed-down")
    {
        if(removed_down == nullptr)
        {
            removed_down = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown>();
        }
        return removed_down;
    }

    if(child_yang_name == "removed-in-use")
    {
        if(removed_in_use == nullptr)
        {
            removed_in_use = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse>();
        }
        return removed_in_use;
    }

    if(child_yang_name == "removed-range-exceeded")
    {
        if(removed_range_exceeded == nullptr)
        {
            removed_range_exceeded = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded>();
        }
        return removed_range_exceeded;
    }

    if(child_yang_name == "removed-unused")
    {
        if(removed_unused == nullptr)
        {
            removed_unused = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused>();
        }
        return removed_unused;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    if(created != nullptr)
    {
        children["created"] = created;
    }

    if(removed_down != nullptr)
    {
        children["removed-down"] = removed_down;
    }

    if(removed_in_use != nullptr)
    {
        children["removed-in-use"] = removed_in_use;
    }

    if(removed_range_exceeded != nullptr)
    {
        children["removed-range-exceeded"] = removed_range_exceeded;
    }

    if(removed_unused != nullptr)
    {
        children["removed-unused"] = removed_unused;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
        last_cleared_time.value_namespace = name_space;
        last_cleared_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-cleared-time")
    {
        last_cleared_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected" || name == "created" || name == "removed-down" || name == "removed-in-use" || name == "removed-range-exceeded" || name == "removed-unused" || name == "last-cleared-time")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::Connected()
    :
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{

    yang_name = "connected"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::~Connected()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::has_data() const
{
    return next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_tunnels.yfilter)
	|| ydk::is_set(next_next_hop_tunnels.yfilter)
	|| ydk::is_set(total_tunnels.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels = value;
        next_hop_tunnels.value_namespace = name_space;
        next_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels = value;
        next_next_hop_tunnels.value_namespace = name_space;
        next_next_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-tunnels" || name == "next-next-hop-tunnels" || name == "total-tunnels")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Statistics::Created::Created()
    :
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{

    yang_name = "created"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Backup::Statistics::Created::~Created()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::Created::has_data() const
{
    return next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::Created::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_tunnels.yfilter)
	|| ydk::is_set(next_next_hop_tunnels.yfilter)
	|| ydk::is_set(total_tunnels.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::Created::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::Created::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "created";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Backup::Statistics::Created::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Statistics::Created::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Statistics::Created::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::Created::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels = value;
        next_hop_tunnels.value_namespace = name_space;
        next_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels = value;
        next_next_hop_tunnels.value_namespace = name_space;
        next_next_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::Created::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::Created::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-tunnels" || name == "next-next-hop-tunnels" || name == "total-tunnels")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::RemovedDown()
    :
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{

    yang_name = "removed-down"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::~RemovedDown()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::has_data() const
{
    return next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_tunnels.yfilter)
	|| ydk::is_set(next_next_hop_tunnels.yfilter)
	|| ydk::is_set(total_tunnels.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removed-down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels = value;
        next_hop_tunnels.value_namespace = name_space;
        next_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels = value;
        next_next_hop_tunnels.value_namespace = name_space;
        next_next_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-tunnels" || name == "next-next-hop-tunnels" || name == "total-tunnels")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::RemovedInUse()
    :
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{

    yang_name = "removed-in-use"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::~RemovedInUse()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::has_data() const
{
    return next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_tunnels.yfilter)
	|| ydk::is_set(next_next_hop_tunnels.yfilter)
	|| ydk::is_set(total_tunnels.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removed-in-use";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels = value;
        next_hop_tunnels.value_namespace = name_space;
        next_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels = value;
        next_next_hop_tunnels.value_namespace = name_space;
        next_next_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-tunnels" || name == "next-next-hop-tunnels" || name == "total-tunnels")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::RemovedRangeExceeded()
    :
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{

    yang_name = "removed-range-exceeded"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::~RemovedRangeExceeded()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::has_data() const
{
    return next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_tunnels.yfilter)
	|| ydk::is_set(next_next_hop_tunnels.yfilter)
	|| ydk::is_set(total_tunnels.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removed-range-exceeded";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels = value;
        next_hop_tunnels.value_namespace = name_space;
        next_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels = value;
        next_next_hop_tunnels.value_namespace = name_space;
        next_next_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-tunnels" || name == "next-next-hop-tunnels" || name == "total-tunnels")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::RemovedUnused()
    :
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{

    yang_name = "removed-unused"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::~RemovedUnused()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::has_data() const
{
    return next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_tunnels.yfilter)
	|| ydk::is_set(next_next_hop_tunnels.yfilter)
	|| ydk::is_set(total_tunnels.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removed-unused";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels = value;
        next_hop_tunnels.value_namespace = name_space;
        next_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels = value;
        next_next_hop_tunnels.value_namespace = name_space;
        next_next_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-tunnels" || name == "next-next-hop-tunnels" || name == "total-tunnels")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Summary::Summary()
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

    yang_name = "summary"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Backup::Summary::~Summary()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Summary::has_data() const
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

bool MplsTeStandby::AutoTunnel::Backup::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autobackups.yfilter)
	|| ydk::is_set(down_autobackups.yfilter)
	|| ydk::is_set(next_hop_autobackup_protected_ls_ps.yfilter)
	|| ydk::is_set(next_hop_autobackup_protected_s2_ls.yfilter)
	|| ydk::is_set(next_hop_autobackup_protected_s2l_families.yfilter)
	|| ydk::is_set(next_hop_autobackups.yfilter)
	|| ydk::is_set(next_hop_srlg_autobackup_protected_ls_ps.yfilter)
	|| ydk::is_set(next_hop_srlg_autobackup_protected_s2_ls.yfilter)
	|| ydk::is_set(next_hop_srlg_autobackup_protected_s2l_families.yfilter)
	|| ydk::is_set(next_next_hop_autobackup_protected_ls_ps.yfilter)
	|| ydk::is_set(next_next_hop_autobackup_protected_s2_ls.yfilter)
	|| ydk::is_set(next_next_hop_autobackup_protected_s2l_families.yfilter)
	|| ydk::is_set(next_next_hop_autobackups.yfilter)
	|| ydk::is_set(next_next_hop_srlg_autobackup_protected_ls_ps.yfilter)
	|| ydk::is_set(next_next_hop_srlg_autobackup_protected_s2_ls.yfilter)
	|| ydk::is_set(next_next_hop_srlg_autobackup_protected_s2l_families.yfilter)
	|| ydk::is_set(srlg_preferred_autobackups.yfilter)
	|| ydk::is_set(srlg_strict_autobackups.yfilter)
	|| ydk::is_set(srlg_weighted_autobackups.yfilter)
	|| ydk::is_set(unused_autobackups.yfilter)
	|| ydk::is_set(up_autobackups.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Backup::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Backup::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Backup::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autobackups.is_set || is_set(autobackups.yfilter)) leaf_name_data.push_back(autobackups.get_name_leafdata());
    if (down_autobackups.is_set || is_set(down_autobackups.yfilter)) leaf_name_data.push_back(down_autobackups.get_name_leafdata());
    if (next_hop_autobackup_protected_ls_ps.is_set || is_set(next_hop_autobackup_protected_ls_ps.yfilter)) leaf_name_data.push_back(next_hop_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_hop_autobackup_protected_s2_ls.is_set || is_set(next_hop_autobackup_protected_s2_ls.yfilter)) leaf_name_data.push_back(next_hop_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_hop_autobackup_protected_s2l_families.is_set || is_set(next_hop_autobackup_protected_s2l_families.yfilter)) leaf_name_data.push_back(next_hop_autobackup_protected_s2l_families.get_name_leafdata());
    if (next_hop_autobackups.is_set || is_set(next_hop_autobackups.yfilter)) leaf_name_data.push_back(next_hop_autobackups.get_name_leafdata());
    if (next_hop_srlg_autobackup_protected_ls_ps.is_set || is_set(next_hop_srlg_autobackup_protected_ls_ps.yfilter)) leaf_name_data.push_back(next_hop_srlg_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_hop_srlg_autobackup_protected_s2_ls.is_set || is_set(next_hop_srlg_autobackup_protected_s2_ls.yfilter)) leaf_name_data.push_back(next_hop_srlg_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_hop_srlg_autobackup_protected_s2l_families.is_set || is_set(next_hop_srlg_autobackup_protected_s2l_families.yfilter)) leaf_name_data.push_back(next_hop_srlg_autobackup_protected_s2l_families.get_name_leafdata());
    if (next_next_hop_autobackup_protected_ls_ps.is_set || is_set(next_next_hop_autobackup_protected_ls_ps.yfilter)) leaf_name_data.push_back(next_next_hop_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_next_hop_autobackup_protected_s2_ls.is_set || is_set(next_next_hop_autobackup_protected_s2_ls.yfilter)) leaf_name_data.push_back(next_next_hop_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_next_hop_autobackup_protected_s2l_families.is_set || is_set(next_next_hop_autobackup_protected_s2l_families.yfilter)) leaf_name_data.push_back(next_next_hop_autobackup_protected_s2l_families.get_name_leafdata());
    if (next_next_hop_autobackups.is_set || is_set(next_next_hop_autobackups.yfilter)) leaf_name_data.push_back(next_next_hop_autobackups.get_name_leafdata());
    if (next_next_hop_srlg_autobackup_protected_ls_ps.is_set || is_set(next_next_hop_srlg_autobackup_protected_ls_ps.yfilter)) leaf_name_data.push_back(next_next_hop_srlg_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_next_hop_srlg_autobackup_protected_s2_ls.is_set || is_set(next_next_hop_srlg_autobackup_protected_s2_ls.yfilter)) leaf_name_data.push_back(next_next_hop_srlg_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_next_hop_srlg_autobackup_protected_s2l_families.is_set || is_set(next_next_hop_srlg_autobackup_protected_s2l_families.yfilter)) leaf_name_data.push_back(next_next_hop_srlg_autobackup_protected_s2l_families.get_name_leafdata());
    if (srlg_preferred_autobackups.is_set || is_set(srlg_preferred_autobackups.yfilter)) leaf_name_data.push_back(srlg_preferred_autobackups.get_name_leafdata());
    if (srlg_strict_autobackups.is_set || is_set(srlg_strict_autobackups.yfilter)) leaf_name_data.push_back(srlg_strict_autobackups.get_name_leafdata());
    if (srlg_weighted_autobackups.is_set || is_set(srlg_weighted_autobackups.yfilter)) leaf_name_data.push_back(srlg_weighted_autobackups.get_name_leafdata());
    if (unused_autobackups.is_set || is_set(unused_autobackups.yfilter)) leaf_name_data.push_back(unused_autobackups.get_name_leafdata());
    if (up_autobackups.is_set || is_set(up_autobackups.yfilter)) leaf_name_data.push_back(up_autobackups.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autobackups")
    {
        autobackups = value;
        autobackups.value_namespace = name_space;
        autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-autobackups")
    {
        down_autobackups = value;
        down_autobackups.value_namespace = name_space;
        down_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-autobackup-protected-ls-ps")
    {
        next_hop_autobackup_protected_ls_ps = value;
        next_hop_autobackup_protected_ls_ps.value_namespace = name_space;
        next_hop_autobackup_protected_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-autobackup-protected-s2-ls")
    {
        next_hop_autobackup_protected_s2_ls = value;
        next_hop_autobackup_protected_s2_ls.value_namespace = name_space;
        next_hop_autobackup_protected_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-autobackup-protected-s2l-families")
    {
        next_hop_autobackup_protected_s2l_families = value;
        next_hop_autobackup_protected_s2l_families.value_namespace = name_space;
        next_hop_autobackup_protected_s2l_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-autobackups")
    {
        next_hop_autobackups = value;
        next_hop_autobackups.value_namespace = name_space;
        next_hop_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-ls-ps")
    {
        next_hop_srlg_autobackup_protected_ls_ps = value;
        next_hop_srlg_autobackup_protected_ls_ps.value_namespace = name_space;
        next_hop_srlg_autobackup_protected_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-s2-ls")
    {
        next_hop_srlg_autobackup_protected_s2_ls = value;
        next_hop_srlg_autobackup_protected_s2_ls.value_namespace = name_space;
        next_hop_srlg_autobackup_protected_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-s2l-families")
    {
        next_hop_srlg_autobackup_protected_s2l_families = value;
        next_hop_srlg_autobackup_protected_s2l_families.value_namespace = name_space;
        next_hop_srlg_autobackup_protected_s2l_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-autobackup-protected-ls-ps")
    {
        next_next_hop_autobackup_protected_ls_ps = value;
        next_next_hop_autobackup_protected_ls_ps.value_namespace = name_space;
        next_next_hop_autobackup_protected_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-autobackup-protected-s2-ls")
    {
        next_next_hop_autobackup_protected_s2_ls = value;
        next_next_hop_autobackup_protected_s2_ls.value_namespace = name_space;
        next_next_hop_autobackup_protected_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-autobackup-protected-s2l-families")
    {
        next_next_hop_autobackup_protected_s2l_families = value;
        next_next_hop_autobackup_protected_s2l_families.value_namespace = name_space;
        next_next_hop_autobackup_protected_s2l_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-autobackups")
    {
        next_next_hop_autobackups = value;
        next_next_hop_autobackups.value_namespace = name_space;
        next_next_hop_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-ls-ps")
    {
        next_next_hop_srlg_autobackup_protected_ls_ps = value;
        next_next_hop_srlg_autobackup_protected_ls_ps.value_namespace = name_space;
        next_next_hop_srlg_autobackup_protected_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-s2-ls")
    {
        next_next_hop_srlg_autobackup_protected_s2_ls = value;
        next_next_hop_srlg_autobackup_protected_s2_ls.value_namespace = name_space;
        next_next_hop_srlg_autobackup_protected_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-s2l-families")
    {
        next_next_hop_srlg_autobackup_protected_s2l_families = value;
        next_next_hop_srlg_autobackup_protected_s2l_families.value_namespace = name_space;
        next_next_hop_srlg_autobackup_protected_s2l_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-preferred-autobackups")
    {
        srlg_preferred_autobackups = value;
        srlg_preferred_autobackups.value_namespace = name_space;
        srlg_preferred_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-strict-autobackups")
    {
        srlg_strict_autobackups = value;
        srlg_strict_autobackups.value_namespace = name_space;
        srlg_strict_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-weighted-autobackups")
    {
        srlg_weighted_autobackups = value;
        srlg_weighted_autobackups.value_namespace = name_space;
        srlg_weighted_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unused-autobackups")
    {
        unused_autobackups = value;
        unused_autobackups.value_namespace = name_space;
        unused_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-autobackups")
    {
        up_autobackups = value;
        up_autobackups.value_namespace = name_space;
        up_autobackups.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Backup::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autobackups")
    {
        autobackups.yfilter = yfilter;
    }
    if(value_path == "down-autobackups")
    {
        down_autobackups.yfilter = yfilter;
    }
    if(value_path == "next-hop-autobackup-protected-ls-ps")
    {
        next_hop_autobackup_protected_ls_ps.yfilter = yfilter;
    }
    if(value_path == "next-hop-autobackup-protected-s2-ls")
    {
        next_hop_autobackup_protected_s2_ls.yfilter = yfilter;
    }
    if(value_path == "next-hop-autobackup-protected-s2l-families")
    {
        next_hop_autobackup_protected_s2l_families.yfilter = yfilter;
    }
    if(value_path == "next-hop-autobackups")
    {
        next_hop_autobackups.yfilter = yfilter;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-ls-ps")
    {
        next_hop_srlg_autobackup_protected_ls_ps.yfilter = yfilter;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-s2-ls")
    {
        next_hop_srlg_autobackup_protected_s2_ls.yfilter = yfilter;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-s2l-families")
    {
        next_hop_srlg_autobackup_protected_s2l_families.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-autobackup-protected-ls-ps")
    {
        next_next_hop_autobackup_protected_ls_ps.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-autobackup-protected-s2-ls")
    {
        next_next_hop_autobackup_protected_s2_ls.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-autobackup-protected-s2l-families")
    {
        next_next_hop_autobackup_protected_s2l_families.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-autobackups")
    {
        next_next_hop_autobackups.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-ls-ps")
    {
        next_next_hop_srlg_autobackup_protected_ls_ps.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-s2-ls")
    {
        next_next_hop_srlg_autobackup_protected_s2_ls.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-s2l-families")
    {
        next_next_hop_srlg_autobackup_protected_s2l_families.yfilter = yfilter;
    }
    if(value_path == "srlg-preferred-autobackups")
    {
        srlg_preferred_autobackups.yfilter = yfilter;
    }
    if(value_path == "srlg-strict-autobackups")
    {
        srlg_strict_autobackups.yfilter = yfilter;
    }
    if(value_path == "srlg-weighted-autobackups")
    {
        srlg_weighted_autobackups.yfilter = yfilter;
    }
    if(value_path == "unused-autobackups")
    {
        unused_autobackups.yfilter = yfilter;
    }
    if(value_path == "up-autobackups")
    {
        up_autobackups.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Backup::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autobackups" || name == "down-autobackups" || name == "next-hop-autobackup-protected-ls-ps" || name == "next-hop-autobackup-protected-s2-ls" || name == "next-hop-autobackup-protected-s2l-families" || name == "next-hop-autobackups" || name == "next-hop-srlg-autobackup-protected-ls-ps" || name == "next-hop-srlg-autobackup-protected-s2-ls" || name == "next-hop-srlg-autobackup-protected-s2l-families" || name == "next-next-hop-autobackup-protected-ls-ps" || name == "next-next-hop-autobackup-protected-s2-ls" || name == "next-next-hop-autobackup-protected-s2l-families" || name == "next-next-hop-autobackups" || name == "next-next-hop-srlg-autobackup-protected-ls-ps" || name == "next-next-hop-srlg-autobackup-protected-s2-ls" || name == "next-next-hop-srlg-autobackup-protected-s2l-families" || name == "srlg-preferred-autobackups" || name == "srlg-strict-autobackups" || name == "srlg-weighted-autobackups" || name == "unused-autobackups" || name == "up-autobackups")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnels()
{

    yang_name = "tunnels"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Backup::Tunnels::~Tunnels()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Tunnels::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::AutoTunnel::Backup::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::AutoTunnel::Backup::Tunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Backup::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Backup::Tunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AutoTunnel::Backup::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AutoTunnel::Backup::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::Tunnel()
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

    yang_name = "tunnel"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::~Tunnel()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::has_data() const
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

bool MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup_tunnel_name.yfilter)
	|| ydk::is_set(atb_protection_type.yfilter)
	|| ydk::is_set(operational_status.yfilter)
	|| ydk::is_set(protected_flows.yfilter)
	|| ydk::is_set(protected_interface_name.yfilter)
	|| ydk::is_set(protected_router_id.yfilter)
	|| ydk::is_set(srlg_mode.yfilter)
	|| ydk::is_set(tunnel_name.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[backup-tunnel-name='" <<backup_tunnel_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.yfilter)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());
    if (atb_protection_type.is_set || is_set(atb_protection_type.yfilter)) leaf_name_data.push_back(atb_protection_type.get_name_leafdata());
    if (operational_status.is_set || is_set(operational_status.yfilter)) leaf_name_data.push_back(operational_status.get_name_leafdata());
    if (protected_flows.is_set || is_set(protected_flows.yfilter)) leaf_name_data.push_back(protected_flows.get_name_leafdata());
    if (protected_interface_name.is_set || is_set(protected_interface_name.yfilter)) leaf_name_data.push_back(protected_interface_name.get_name_leafdata());
    if (protected_router_id.is_set || is_set(protected_router_id.yfilter)) leaf_name_data.push_back(protected_router_id.get_name_leafdata());
    if (srlg_mode.is_set || is_set(srlg_mode.yfilter)) leaf_name_data.push_back(srlg_mode.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
        backup_tunnel_name.value_namespace = name_space;
        backup_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atb-protection-type")
    {
        atb_protection_type = value;
        atb_protection_type.value_namespace = name_space;
        atb_protection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-status")
    {
        operational_status = value;
        operational_status.value_namespace = name_space;
        operational_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-flows")
    {
        protected_flows = value;
        protected_flows.value_namespace = name_space;
        protected_flows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-interface-name")
    {
        protected_interface_name = value;
        protected_interface_name.value_namespace = name_space;
        protected_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-router-id")
    {
        protected_router_id = value;
        protected_router_id.value_namespace = name_space;
        protected_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-mode")
    {
        srlg_mode = value;
        srlg_mode.value_namespace = name_space;
        srlg_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "atb-protection-type")
    {
        atb_protection_type.yfilter = yfilter;
    }
    if(value_path == "operational-status")
    {
        operational_status.yfilter = yfilter;
    }
    if(value_path == "protected-flows")
    {
        protected_flows.yfilter = yfilter;
    }
    if(value_path == "protected-interface-name")
    {
        protected_interface_name.yfilter = yfilter;
    }
    if(value_path == "protected-router-id")
    {
        protected_router_id.yfilter = yfilter;
    }
    if(value_path == "srlg-mode")
    {
        srlg_mode.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-tunnel-name" || name == "atb-protection-type" || name == "operational-status" || name == "protected-flows" || name == "protected-interface-name" || name == "protected-router-id" || name == "srlg-mode" || name == "tunnel-name")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::Mesh()
    :
    config(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::Config>())
	,mesh_groups(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::MeshGroups>())
	,one_hop(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop>())
	,statistics(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::Statistics>())
	,summary(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::Summary>())
{
    config->parent = this;
    mesh_groups->parent = this;
    one_hop->parent = this;
    statistics->parent = this;
    summary->parent = this;

    yang_name = "mesh"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Mesh::~Mesh()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (mesh_groups !=  nullptr && mesh_groups->has_data())
	|| (one_hop !=  nullptr && one_hop->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool MplsTeStandby::AutoTunnel::Mesh::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (mesh_groups !=  nullptr && mesh_groups->has_operation())
	|| (one_hop !=  nullptr && one_hop->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsTeStandby::AutoTunnel::Mesh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Mesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Mesh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::Config>();
        }
        return config;
    }

    if(child_yang_name == "mesh-groups")
    {
        if(mesh_groups == nullptr)
        {
            mesh_groups = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::MeshGroups>();
        }
        return mesh_groups;
    }

    if(child_yang_name == "one-hop")
    {
        if(one_hop == nullptr)
        {
            one_hop = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop>();
        }
        return one_hop;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(mesh_groups != nullptr)
    {
        children["mesh-groups"] = mesh_groups;
    }

    if(one_hop != nullptr)
    {
        children["one-hop"] = one_hop;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AutoTunnel::Mesh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AutoTunnel::Mesh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "mesh-groups" || name == "one-hop" || name == "statistics" || name == "summary")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::Config::Config()
    :
    is_configured{YType::boolean, "is-configured"},
    max_tunnel_id{YType::uint16, "max-tunnel-id"},
    min_tunnel_id{YType::uint16, "min-tunnel-id"},
    unused_removal_timeout_configured{YType::uint32, "unused-removal-timeout-configured"}
{

    yang_name = "config"; yang_parent_name = "mesh"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Mesh::Config::~Config()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::Config::has_data() const
{
    return is_configured.is_set
	|| max_tunnel_id.is_set
	|| min_tunnel_id.is_set
	|| unused_removal_timeout_configured.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_configured.yfilter)
	|| ydk::is_set(max_tunnel_id.yfilter)
	|| ydk::is_set(min_tunnel_id.yfilter)
	|| ydk::is_set(unused_removal_timeout_configured.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Mesh::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Mesh::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_configured.is_set || is_set(is_configured.yfilter)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (max_tunnel_id.is_set || is_set(max_tunnel_id.yfilter)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());
    if (min_tunnel_id.is_set || is_set(min_tunnel_id.yfilter)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());
    if (unused_removal_timeout_configured.is_set || is_set(unused_removal_timeout_configured.yfilter)) leaf_name_data.push_back(unused_removal_timeout_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-configured")
    {
        is_configured = value;
        is_configured.value_namespace = name_space;
        is_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
        max_tunnel_id.value_namespace = name_space;
        max_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
        min_tunnel_id.value_namespace = name_space;
        min_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unused-removal-timeout-configured")
    {
        unused_removal_timeout_configured = value;
        unused_removal_timeout_configured.value_namespace = name_space;
        unused_removal_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-configured")
    {
        is_configured.yfilter = yfilter;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "unused-removal-timeout-configured")
    {
        unused_removal_timeout_configured.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-configured" || name == "max-tunnel-id" || name == "min-tunnel-id" || name == "unused-removal-timeout-configured")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroups()
{

    yang_name = "mesh-groups"; yang_parent_name = "mesh"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Mesh::MeshGroups::~MeshGroups()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::MeshGroups::has_data() const
{
    for (std::size_t index=0; index<mesh_group.size(); index++)
    {
        if(mesh_group[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::AutoTunnel::Mesh::MeshGroups::has_operation() const
{
    for (std::size_t index=0; index<mesh_group.size(); index++)
    {
        if(mesh_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::MeshGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Mesh::MeshGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Mesh::MeshGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::MeshGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mesh-group")
    {
        for(auto const & c : mesh_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup>();
        c->parent = this;
        mesh_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::MeshGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mesh_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::MeshGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AutoTunnel::Mesh::MeshGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AutoTunnel::Mesh::MeshGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mesh-group")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::MeshGroup()
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

    yang_name = "mesh-group"; yang_parent_name = "mesh-groups"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::~MeshGroup()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::has_data() const
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

bool MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::has_operation() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mesh_group_id.yfilter)
	|| ydk::is_set(attribute_set_name.yfilter)
	|| ydk::is_set(auto_mesh_group_type.yfilter)
	|| ydk::is_set(auto_mesh_total_destinations.yfilter)
	|| ydk::is_set(auto_mesh_tunnels.yfilter)
	|| ydk::is_set(destination_list_name.yfilter)
	|| ydk::is_set(destination_list_type.yfilter)
	|| ydk::is_set(down_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(frr_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(is_attribute_set_configured.yfilter)
	|| ydk::is_set(is_attribute_set_in_db.yfilter)
	|| ydk::is_set(is_destination_list_configured.yfilter)
	|| ydk::is_set(is_meshgroup_disabled.yfilter)
	|| ydk::is_set(mesh_group_id_xr.yfilter)
	|| ydk::is_set(remaining_time.yfilter)
	|| ydk::is_set(up_auto_mesh_tunnels.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/mesh-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group" <<"[mesh-group-id='" <<mesh_group_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mesh_group_id.is_set || is_set(mesh_group_id.yfilter)) leaf_name_data.push_back(mesh_group_id.get_name_leafdata());
    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (auto_mesh_group_type.is_set || is_set(auto_mesh_group_type.yfilter)) leaf_name_data.push_back(auto_mesh_group_type.get_name_leafdata());
    if (auto_mesh_total_destinations.is_set || is_set(auto_mesh_total_destinations.yfilter)) leaf_name_data.push_back(auto_mesh_total_destinations.get_name_leafdata());
    if (auto_mesh_tunnels.is_set || is_set(auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(auto_mesh_tunnels.get_name_leafdata());
    if (destination_list_name.is_set || is_set(destination_list_name.yfilter)) leaf_name_data.push_back(destination_list_name.get_name_leafdata());
    if (destination_list_type.is_set || is_set(destination_list_type.yfilter)) leaf_name_data.push_back(destination_list_type.get_name_leafdata());
    if (down_auto_mesh_tunnels.is_set || is_set(down_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(down_auto_mesh_tunnels.get_name_leafdata());
    if (frr_auto_mesh_tunnels.is_set || is_set(frr_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(frr_auto_mesh_tunnels.get_name_leafdata());
    if (is_attribute_set_configured.is_set || is_set(is_attribute_set_configured.yfilter)) leaf_name_data.push_back(is_attribute_set_configured.get_name_leafdata());
    if (is_attribute_set_in_db.is_set || is_set(is_attribute_set_in_db.yfilter)) leaf_name_data.push_back(is_attribute_set_in_db.get_name_leafdata());
    if (is_destination_list_configured.is_set || is_set(is_destination_list_configured.yfilter)) leaf_name_data.push_back(is_destination_list_configured.get_name_leafdata());
    if (is_meshgroup_disabled.is_set || is_set(is_meshgroup_disabled.yfilter)) leaf_name_data.push_back(is_meshgroup_disabled.get_name_leafdata());
    if (mesh_group_id_xr.is_set || is_set(mesh_group_id_xr.yfilter)) leaf_name_data.push_back(mesh_group_id_xr.get_name_leafdata());
    if (remaining_time.is_set || is_set(remaining_time.yfilter)) leaf_name_data.push_back(remaining_time.get_name_leafdata());
    if (up_auto_mesh_tunnels.is_set || is_set(up_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(up_auto_mesh_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        for(auto const & c : destination)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination>();
        c->parent = this;
        destination.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : destination)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mesh-group-id")
    {
        mesh_group_id = value;
        mesh_group_id.value_namespace = name_space;
        mesh_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-group-type")
    {
        auto_mesh_group_type = value;
        auto_mesh_group_type.value_namespace = name_space;
        auto_mesh_group_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-total-destinations")
    {
        auto_mesh_total_destinations = value;
        auto_mesh_total_destinations.value_namespace = name_space;
        auto_mesh_total_destinations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-tunnels")
    {
        auto_mesh_tunnels = value;
        auto_mesh_tunnels.value_namespace = name_space;
        auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-list-name")
    {
        destination_list_name = value;
        destination_list_name.value_namespace = name_space;
        destination_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-list-type")
    {
        destination_list_type = value;
        destination_list_type.value_namespace = name_space;
        destination_list_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-auto-mesh-tunnels")
    {
        down_auto_mesh_tunnels = value;
        down_auto_mesh_tunnels.value_namespace = name_space;
        down_auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels = value;
        frr_auto_mesh_tunnels.value_namespace = name_space;
        frr_auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attribute-set-configured")
    {
        is_attribute_set_configured = value;
        is_attribute_set_configured.value_namespace = name_space;
        is_attribute_set_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db = value;
        is_attribute_set_in_db.value_namespace = name_space;
        is_attribute_set_in_db.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-destination-list-configured")
    {
        is_destination_list_configured = value;
        is_destination_list_configured.value_namespace = name_space;
        is_destination_list_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-meshgroup-disabled")
    {
        is_meshgroup_disabled = value;
        is_meshgroup_disabled.value_namespace = name_space;
        is_meshgroup_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group-id-xr")
    {
        mesh_group_id_xr = value;
        mesh_group_id_xr.value_namespace = name_space;
        mesh_group_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-time")
    {
        remaining_time = value;
        remaining_time.value_namespace = name_space;
        remaining_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-auto-mesh-tunnels")
    {
        up_auto_mesh_tunnels = value;
        up_auto_mesh_tunnels.value_namespace = name_space;
        up_auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mesh-group-id")
    {
        mesh_group_id.yfilter = yfilter;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-group-type")
    {
        auto_mesh_group_type.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-total-destinations")
    {
        auto_mesh_total_destinations.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-tunnels")
    {
        auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "destination-list-name")
    {
        destination_list_name.yfilter = yfilter;
    }
    if(value_path == "destination-list-type")
    {
        destination_list_type.yfilter = yfilter;
    }
    if(value_path == "down-auto-mesh-tunnels")
    {
        down_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "is-attribute-set-configured")
    {
        is_attribute_set_configured.yfilter = yfilter;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db.yfilter = yfilter;
    }
    if(value_path == "is-destination-list-configured")
    {
        is_destination_list_configured.yfilter = yfilter;
    }
    if(value_path == "is-meshgroup-disabled")
    {
        is_meshgroup_disabled.yfilter = yfilter;
    }
    if(value_path == "mesh-group-id-xr")
    {
        mesh_group_id_xr.yfilter = yfilter;
    }
    if(value_path == "remaining-time")
    {
        remaining_time.yfilter = yfilter;
    }
    if(value_path == "up-auto-mesh-tunnels")
    {
        up_auto_mesh_tunnels.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "mesh-group-id" || name == "attribute-set-name" || name == "auto-mesh-group-type" || name == "auto-mesh-total-destinations" || name == "auto-mesh-tunnels" || name == "destination-list-name" || name == "destination-list-type" || name == "down-auto-mesh-tunnels" || name == "frr-auto-mesh-tunnels" || name == "is-attribute-set-configured" || name == "is-attribute-set-in-db" || name == "is-destination-list-configured" || name == "is-meshgroup-disabled" || name == "mesh-group-id-xr" || name == "remaining-time" || name == "up-auto-mesh-tunnels")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::Destination()
    :
    destination_address{YType::str, "destination-address"},
    operational_status{YType::enumeration, "operational-status"},
    remaining_time{YType::uint32, "remaining-time"},
    tunnel_id{YType::uint16, "tunnel-id"}
{

    yang_name = "destination"; yang_parent_name = "mesh-group"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::~Destination()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::has_data() const
{
    return destination_address.is_set
	|| operational_status.is_set
	|| remaining_time.is_set
	|| tunnel_id.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(operational_status.yfilter)
	|| ydk::is_set(remaining_time.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (operational_status.is_set || is_set(operational_status.yfilter)) leaf_name_data.push_back(operational_status.get_name_leafdata());
    if (remaining_time.is_set || is_set(remaining_time.yfilter)) leaf_name_data.push_back(remaining_time.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-status")
    {
        operational_status = value;
        operational_status.value_namespace = name_space;
        operational_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-time")
    {
        remaining_time = value;
        remaining_time.value_namespace = name_space;
        remaining_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "operational-status")
    {
        operational_status.yfilter = yfilter;
    }
    if(value_path == "remaining-time")
    {
        remaining_time.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "operational-status" || name == "remaining-time" || name == "tunnel-id")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::OneHop()
    :
    interfaces(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces>())
	,statistics(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics>())
	,summary(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary>())
{
    interfaces->parent = this;
    statistics->parent = this;
    summary->parent = this;

    yang_name = "one-hop"; yang_parent_name = "mesh"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::~OneHop()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Mesh::OneHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::OneHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::OneHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "statistics" || name == "summary")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "one-hop"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::~Interfaces()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/one-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::~Interface()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/one-hop/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel>();
        c->parent = this;
        tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel" || name == "interface-name" || name == "interface-name-xr")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::Tunnel()
    :
    destination_address{YType::str, "destination-address"},
    mesh_group_id{YType::uint32, "mesh-group-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    tunnel_lspid{YType::uint16, "tunnel-lspid"},
    tunnel_state{YType::enumeration, "tunnel-state"}
{

    yang_name = "tunnel"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::~Tunnel()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::has_data() const
{
    return destination_address.is_set
	|| mesh_group_id.is_set
	|| tunnel_id.is_set
	|| tunnel_lspid.is_set
	|| tunnel_state.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(mesh_group_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_lspid.yfilter)
	|| ydk::is_set(tunnel_state.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (mesh_group_id.is_set || is_set(mesh_group_id.yfilter)) leaf_name_data.push_back(mesh_group_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_lspid.is_set || is_set(tunnel_lspid.yfilter)) leaf_name_data.push_back(tunnel_lspid.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.yfilter)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group-id")
    {
        mesh_group_id = value;
        mesh_group_id.value_namespace = name_space;
        mesh_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-lspid")
    {
        tunnel_lspid = value;
        tunnel_lspid.value_namespace = name_space;
        tunnel_lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
        tunnel_state.value_namespace = name_space;
        tunnel_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "mesh-group-id")
    {
        mesh_group_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-lspid")
    {
        tunnel_lspid.yfilter = yfilter;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "mesh-group-id" || name == "tunnel-id" || name == "tunnel-lspid" || name == "tunnel-state")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::Statistics()
    :
    connected{YType::uint32, "connected"},
    created{YType::uint32, "created"},
    last_cleared_time{YType::uint32, "last-cleared-time"},
    removed_in_use{YType::uint32, "removed-in-use"},
    removed_range_exceeded{YType::uint32, "removed-range-exceeded"},
    removed_unused{YType::uint32, "removed-unused"}
{

    yang_name = "statistics"; yang_parent_name = "one-hop"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::~Statistics()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::has_data() const
{
    return connected.is_set
	|| created.is_set
	|| last_cleared_time.is_set
	|| removed_in_use.is_set
	|| removed_range_exceeded.is_set
	|| removed_unused.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connected.yfilter)
	|| ydk::is_set(created.yfilter)
	|| ydk::is_set(last_cleared_time.yfilter)
	|| ydk::is_set(removed_in_use.yfilter)
	|| ydk::is_set(removed_range_exceeded.yfilter)
	|| ydk::is_set(removed_unused.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/one-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected.is_set || is_set(connected.yfilter)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (created.is_set || is_set(created.yfilter)) leaf_name_data.push_back(created.get_name_leafdata());
    if (last_cleared_time.is_set || is_set(last_cleared_time.yfilter)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());
    if (removed_in_use.is_set || is_set(removed_in_use.yfilter)) leaf_name_data.push_back(removed_in_use.get_name_leafdata());
    if (removed_range_exceeded.is_set || is_set(removed_range_exceeded.yfilter)) leaf_name_data.push_back(removed_range_exceeded.get_name_leafdata());
    if (removed_unused.is_set || is_set(removed_unused.yfilter)) leaf_name_data.push_back(removed_unused.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connected")
    {
        connected = value;
        connected.value_namespace = name_space;
        connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "created")
    {
        created = value;
        created.value_namespace = name_space;
        created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
        last_cleared_time.value_namespace = name_space;
        last_cleared_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removed-in-use")
    {
        removed_in_use = value;
        removed_in_use.value_namespace = name_space;
        removed_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removed-range-exceeded")
    {
        removed_range_exceeded = value;
        removed_range_exceeded.value_namespace = name_space;
        removed_range_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removed-unused")
    {
        removed_unused = value;
        removed_unused.value_namespace = name_space;
        removed_unused.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connected")
    {
        connected.yfilter = yfilter;
    }
    if(value_path == "created")
    {
        created.yfilter = yfilter;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time.yfilter = yfilter;
    }
    if(value_path == "removed-in-use")
    {
        removed_in_use.yfilter = yfilter;
    }
    if(value_path == "removed-range-exceeded")
    {
        removed_range_exceeded.yfilter = yfilter;
    }
    if(value_path == "removed-unused")
    {
        removed_unused.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected" || name == "created" || name == "last-cleared-time" || name == "removed-in-use" || name == "removed-range-exceeded" || name == "removed-unused")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::Summary()
    :
    auto_mesh_one_hop_destinations{YType::uint32, "auto-mesh-one-hop-destinations"},
    auto_mesh_one_hop_groups{YType::uint32, "auto-mesh-one-hop-groups"},
    auto_mesh_one_hop_tunnels{YType::uint32, "auto-mesh-one-hop-tunnels"},
    down_auto_mesh_one_hop_tunnels{YType::uint32, "down-auto-mesh-one-hop-tunnels"},
    frr_auto_mesh_tunnels{YType::uint32, "frr-auto-mesh-tunnels"},
    up_auto_mesh_one_hop_tunnels{YType::uint32, "up-auto-mesh-one-hop-tunnels"}
{

    yang_name = "summary"; yang_parent_name = "one-hop"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::~Summary()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::has_data() const
{
    return auto_mesh_one_hop_destinations.is_set
	|| auto_mesh_one_hop_groups.is_set
	|| auto_mesh_one_hop_tunnels.is_set
	|| down_auto_mesh_one_hop_tunnels.is_set
	|| frr_auto_mesh_tunnels.is_set
	|| up_auto_mesh_one_hop_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_mesh_one_hop_destinations.yfilter)
	|| ydk::is_set(auto_mesh_one_hop_groups.yfilter)
	|| ydk::is_set(auto_mesh_one_hop_tunnels.yfilter)
	|| ydk::is_set(down_auto_mesh_one_hop_tunnels.yfilter)
	|| ydk::is_set(frr_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(up_auto_mesh_one_hop_tunnels.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/one-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_mesh_one_hop_destinations.is_set || is_set(auto_mesh_one_hop_destinations.yfilter)) leaf_name_data.push_back(auto_mesh_one_hop_destinations.get_name_leafdata());
    if (auto_mesh_one_hop_groups.is_set || is_set(auto_mesh_one_hop_groups.yfilter)) leaf_name_data.push_back(auto_mesh_one_hop_groups.get_name_leafdata());
    if (auto_mesh_one_hop_tunnels.is_set || is_set(auto_mesh_one_hop_tunnels.yfilter)) leaf_name_data.push_back(auto_mesh_one_hop_tunnels.get_name_leafdata());
    if (down_auto_mesh_one_hop_tunnels.is_set || is_set(down_auto_mesh_one_hop_tunnels.yfilter)) leaf_name_data.push_back(down_auto_mesh_one_hop_tunnels.get_name_leafdata());
    if (frr_auto_mesh_tunnels.is_set || is_set(frr_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(frr_auto_mesh_tunnels.get_name_leafdata());
    if (up_auto_mesh_one_hop_tunnels.is_set || is_set(up_auto_mesh_one_hop_tunnels.yfilter)) leaf_name_data.push_back(up_auto_mesh_one_hop_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-mesh-one-hop-destinations")
    {
        auto_mesh_one_hop_destinations = value;
        auto_mesh_one_hop_destinations.value_namespace = name_space;
        auto_mesh_one_hop_destinations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-one-hop-groups")
    {
        auto_mesh_one_hop_groups = value;
        auto_mesh_one_hop_groups.value_namespace = name_space;
        auto_mesh_one_hop_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-one-hop-tunnels")
    {
        auto_mesh_one_hop_tunnels = value;
        auto_mesh_one_hop_tunnels.value_namespace = name_space;
        auto_mesh_one_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-auto-mesh-one-hop-tunnels")
    {
        down_auto_mesh_one_hop_tunnels = value;
        down_auto_mesh_one_hop_tunnels.value_namespace = name_space;
        down_auto_mesh_one_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels = value;
        frr_auto_mesh_tunnels.value_namespace = name_space;
        frr_auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-auto-mesh-one-hop-tunnels")
    {
        up_auto_mesh_one_hop_tunnels = value;
        up_auto_mesh_one_hop_tunnels.value_namespace = name_space;
        up_auto_mesh_one_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-mesh-one-hop-destinations")
    {
        auto_mesh_one_hop_destinations.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-one-hop-groups")
    {
        auto_mesh_one_hop_groups.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-one-hop-tunnels")
    {
        auto_mesh_one_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "down-auto-mesh-one-hop-tunnels")
    {
        down_auto_mesh_one_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "up-auto-mesh-one-hop-tunnels")
    {
        up_auto_mesh_one_hop_tunnels.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-mesh-one-hop-destinations" || name == "auto-mesh-one-hop-groups" || name == "auto-mesh-one-hop-tunnels" || name == "down-auto-mesh-one-hop-tunnels" || name == "frr-auto-mesh-tunnels" || name == "up-auto-mesh-one-hop-tunnels")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::Statistics::Statistics()
    :
    connected{YType::uint32, "connected"},
    created{YType::uint32, "created"},
    last_cleared_time{YType::uint32, "last-cleared-time"},
    removed_in_use{YType::uint32, "removed-in-use"},
    removed_range_exceeded{YType::uint32, "removed-range-exceeded"},
    removed_unused{YType::uint32, "removed-unused"}
{

    yang_name = "statistics"; yang_parent_name = "mesh"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Mesh::Statistics::~Statistics()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::Statistics::has_data() const
{
    return connected.is_set
	|| created.is_set
	|| last_cleared_time.is_set
	|| removed_in_use.is_set
	|| removed_range_exceeded.is_set
	|| removed_unused.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connected.yfilter)
	|| ydk::is_set(created.yfilter)
	|| ydk::is_set(last_cleared_time.yfilter)
	|| ydk::is_set(removed_in_use.yfilter)
	|| ydk::is_set(removed_range_exceeded.yfilter)
	|| ydk::is_set(removed_unused.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Mesh::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Mesh::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected.is_set || is_set(connected.yfilter)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (created.is_set || is_set(created.yfilter)) leaf_name_data.push_back(created.get_name_leafdata());
    if (last_cleared_time.is_set || is_set(last_cleared_time.yfilter)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());
    if (removed_in_use.is_set || is_set(removed_in_use.yfilter)) leaf_name_data.push_back(removed_in_use.get_name_leafdata());
    if (removed_range_exceeded.is_set || is_set(removed_range_exceeded.yfilter)) leaf_name_data.push_back(removed_range_exceeded.get_name_leafdata());
    if (removed_unused.is_set || is_set(removed_unused.yfilter)) leaf_name_data.push_back(removed_unused.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connected")
    {
        connected = value;
        connected.value_namespace = name_space;
        connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "created")
    {
        created = value;
        created.value_namespace = name_space;
        created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
        last_cleared_time.value_namespace = name_space;
        last_cleared_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removed-in-use")
    {
        removed_in_use = value;
        removed_in_use.value_namespace = name_space;
        removed_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removed-range-exceeded")
    {
        removed_range_exceeded = value;
        removed_range_exceeded.value_namespace = name_space;
        removed_range_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removed-unused")
    {
        removed_unused = value;
        removed_unused.value_namespace = name_space;
        removed_unused.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connected")
    {
        connected.yfilter = yfilter;
    }
    if(value_path == "created")
    {
        created.yfilter = yfilter;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time.yfilter = yfilter;
    }
    if(value_path == "removed-in-use")
    {
        removed_in_use.yfilter = yfilter;
    }
    if(value_path == "removed-range-exceeded")
    {
        removed_range_exceeded.yfilter = yfilter;
    }
    if(value_path == "removed-unused")
    {
        removed_unused.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected" || name == "created" || name == "last-cleared-time" || name == "removed-in-use" || name == "removed-range-exceeded" || name == "removed-unused")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Mesh::Summary::Summary()
    :
    auto_mesh_destinations{YType::uint32, "auto-mesh-destinations"},
    auto_mesh_groups{YType::uint32, "auto-mesh-groups"},
    auto_mesh_tunnels{YType::uint32, "auto-mesh-tunnels"},
    down_auto_mesh_tunnels{YType::uint32, "down-auto-mesh-tunnels"},
    frr_auto_mesh_tunnels{YType::uint32, "frr-auto-mesh-tunnels"},
    up_auto_mesh_tunnels{YType::uint32, "up-auto-mesh-tunnels"}
{

    yang_name = "summary"; yang_parent_name = "mesh"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Mesh::Summary::~Summary()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::Summary::has_data() const
{
    return auto_mesh_destinations.is_set
	|| auto_mesh_groups.is_set
	|| auto_mesh_tunnels.is_set
	|| down_auto_mesh_tunnels.is_set
	|| frr_auto_mesh_tunnels.is_set
	|| up_auto_mesh_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_mesh_destinations.yfilter)
	|| ydk::is_set(auto_mesh_groups.yfilter)
	|| ydk::is_set(auto_mesh_tunnels.yfilter)
	|| ydk::is_set(down_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(frr_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(up_auto_mesh_tunnels.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Mesh::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Mesh::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Mesh::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_mesh_destinations.is_set || is_set(auto_mesh_destinations.yfilter)) leaf_name_data.push_back(auto_mesh_destinations.get_name_leafdata());
    if (auto_mesh_groups.is_set || is_set(auto_mesh_groups.yfilter)) leaf_name_data.push_back(auto_mesh_groups.get_name_leafdata());
    if (auto_mesh_tunnels.is_set || is_set(auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(auto_mesh_tunnels.get_name_leafdata());
    if (down_auto_mesh_tunnels.is_set || is_set(down_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(down_auto_mesh_tunnels.get_name_leafdata());
    if (frr_auto_mesh_tunnels.is_set || is_set(frr_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(frr_auto_mesh_tunnels.get_name_leafdata());
    if (up_auto_mesh_tunnels.is_set || is_set(up_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(up_auto_mesh_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-mesh-destinations")
    {
        auto_mesh_destinations = value;
        auto_mesh_destinations.value_namespace = name_space;
        auto_mesh_destinations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-groups")
    {
        auto_mesh_groups = value;
        auto_mesh_groups.value_namespace = name_space;
        auto_mesh_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-tunnels")
    {
        auto_mesh_tunnels = value;
        auto_mesh_tunnels.value_namespace = name_space;
        auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-auto-mesh-tunnels")
    {
        down_auto_mesh_tunnels = value;
        down_auto_mesh_tunnels.value_namespace = name_space;
        down_auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels = value;
        frr_auto_mesh_tunnels.value_namespace = name_space;
        frr_auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-auto-mesh-tunnels")
    {
        up_auto_mesh_tunnels = value;
        up_auto_mesh_tunnels.value_namespace = name_space;
        up_auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Mesh::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-mesh-destinations")
    {
        auto_mesh_destinations.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-groups")
    {
        auto_mesh_groups.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-tunnels")
    {
        auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "down-auto-mesh-tunnels")
    {
        down_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "up-auto-mesh-tunnels")
    {
        up_auto_mesh_tunnels.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Mesh::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-mesh-destinations" || name == "auto-mesh-groups" || name == "auto-mesh-tunnels" || name == "down-auto-mesh-tunnels" || name == "frr-auto-mesh-tunnels" || name == "up-auto-mesh-tunnels")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Pcc::Pcc()
    :
    summary(std::make_shared<MplsTeStandby::AutoTunnel::Pcc::Summary>())
{
    summary->parent = this;

    yang_name = "pcc"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Pcc::~Pcc()
{
}

bool MplsTeStandby::AutoTunnel::Pcc::has_data() const
{
    return (summary !=  nullptr && summary->has_data());
}

bool MplsTeStandby::AutoTunnel::Pcc::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsTeStandby::AutoTunnel::Pcc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Pcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Pcc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Pcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTeStandby::AutoTunnel::Pcc::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Pcc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Pcc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AutoTunnel::Pcc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AutoTunnel::Pcc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary")
        return true;
    return false;
}

MplsTeStandby::AutoTunnel::Pcc::Summary::Summary()
    :
    down_pcc_auto_tunnels{YType::uint32, "down-pcc-auto-tunnels"},
    pcc_auto_tunnel{YType::uint32, "pcc-auto-tunnel"},
    up_pcc_auto_tunnels{YType::uint32, "up-pcc-auto-tunnels"}
{

    yang_name = "summary"; yang_parent_name = "pcc"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::AutoTunnel::Pcc::Summary::~Summary()
{
}

bool MplsTeStandby::AutoTunnel::Pcc::Summary::has_data() const
{
    return down_pcc_auto_tunnels.is_set
	|| pcc_auto_tunnel.is_set
	|| up_pcc_auto_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Pcc::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down_pcc_auto_tunnels.yfilter)
	|| ydk::is_set(pcc_auto_tunnel.yfilter)
	|| ydk::is_set(up_pcc_auto_tunnels.yfilter);
}

std::string MplsTeStandby::AutoTunnel::Pcc::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/pcc/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnel::Pcc::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnel::Pcc::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_pcc_auto_tunnels.is_set || is_set(down_pcc_auto_tunnels.yfilter)) leaf_name_data.push_back(down_pcc_auto_tunnels.get_name_leafdata());
    if (pcc_auto_tunnel.is_set || is_set(pcc_auto_tunnel.yfilter)) leaf_name_data.push_back(pcc_auto_tunnel.get_name_leafdata());
    if (up_pcc_auto_tunnels.is_set || is_set(up_pcc_auto_tunnels.yfilter)) leaf_name_data.push_back(up_pcc_auto_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Pcc::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Pcc::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Pcc::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down-pcc-auto-tunnels")
    {
        down_pcc_auto_tunnels = value;
        down_pcc_auto_tunnels.value_namespace = name_space;
        down_pcc_auto_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcc-auto-tunnel")
    {
        pcc_auto_tunnel = value;
        pcc_auto_tunnel.value_namespace = name_space;
        pcc_auto_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-pcc-auto-tunnels")
    {
        up_pcc_auto_tunnels = value;
        up_pcc_auto_tunnels.value_namespace = name_space;
        up_pcc_auto_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnel::Pcc::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down-pcc-auto-tunnels")
    {
        down_pcc_auto_tunnels.yfilter = yfilter;
    }
    if(value_path == "pcc-auto-tunnel")
    {
        pcc_auto_tunnel.yfilter = yfilter;
    }
    if(value_path == "up-pcc-auto-tunnels")
    {
        up_pcc_auto_tunnels.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnel::Pcc::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down-pcc-auto-tunnels" || name == "pcc-auto-tunnel" || name == "up-pcc-auto-tunnels")
        return true;
    return false;
}

MplsTeStandby::AutoTunnelServices::AutoTunnelServices()
    :
    sr_policy_entries(std::make_shared<MplsTeStandby::AutoTunnelServices::SrPolicyEntries>())
{
    sr_policy_entries->parent = this;

    yang_name = "auto-tunnel-services"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| (sr_policy_entries !=  nullptr && sr_policy_entries->has_operation());
}

std::string MplsTeStandby::AutoTunnelServices::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnelServices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-tunnel-services";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnelServices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnelServices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy-entries")
    {
        if(sr_policy_entries == nullptr)
        {
            sr_policy_entries = std::make_shared<MplsTeStandby::AutoTunnelServices::SrPolicyEntries>();
        }
        return sr_policy_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnelServices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_policy_entries != nullptr)
    {
        children["sr-policy-entries"] = sr_policy_entries;
    }

    return children;
}

void MplsTeStandby::AutoTunnelServices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AutoTunnelServices::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AutoTunnelServices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy-entries")
        return true;
    return false;
}

MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntries()
{

    yang_name = "sr-policy-entries"; yang_parent_name = "auto-tunnel-services"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string MplsTeStandby::AutoTunnelServices::SrPolicyEntries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel-services/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnelServices::SrPolicyEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnelServices::SrPolicyEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnelServices::SrPolicyEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy-entry")
    {
        for(auto const & c : sr_policy_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry>();
        c->parent = this;
        sr_policy_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnelServices::SrPolicyEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sr_policy_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AutoTunnelServices::SrPolicyEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AutoTunnelServices::SrPolicyEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AutoTunnelServices::SrPolicyEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy-entry")
        return true;
    return false;
}

MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::SrPolicyEntry()
    :
    client_id{YType::int32, "client-id"},
    color{YType::int32, "color"},
    end_point{YType::str, "end-point"},
    distinguisher{YType::int32, "distinguisher"},
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

    yang_name = "sr-policy-entry"; yang_parent_name = "sr-policy-entries"; is_top_level_class = false; has_list_ancestor = false;
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
	|| end_point.is_set
	|| distinguisher.is_set
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
    return is_set(yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(color.yfilter)
	|| ydk::is_set(end_point.yfilter)
	|| ydk::is_set(distinguisher.yfilter)
	|| ydk::is_set(allocated_binding_sid.yfilter)
	|| ydk::is_set(binding_sid_context_id.yfilter)
	|| ydk::is_set(binding_sid_request_pending.yfilter)
	|| ydk::is_set(client_id_xr.yfilter)
	|| ydk::is_set(client_name.yfilter)
	|| ydk::is_set(color_xr.yfilter)
	|| ydk::is_set(creation_time.yfilter)
	|| ydk::is_set(distinguisher_xr.yfilter)
	|| ydk::is_set(ipv6_caps.yfilter)
	|| ydk::is_set(is_stale.yfilter)
	|| ydk::is_set(is_synced.yfilter)
	|| ydk::is_set(notify_state_is_active.yfilter)
	|| ydk::is_set(notify_time.yfilter)
	|| ydk::is_set(policy_active.yfilter)
	|| ydk::is_set(requested_binding_sid.yfilter)
	|| ydk::is_set(rewrite_done.yfilter)
	|| ydk::is_set(rewrite_request_pending.yfilter)
	|| ydk::is_set(sr_policy_id.yfilter)
	|| (end_point_xr !=  nullptr && end_point_xr->has_operation());
}

std::string MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel-services/sr-policy-entries/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-entry" <<"[client-id='" <<client_id <<"']" <<"[color='" <<color <<"']" <<"[end-point='" <<end_point <<"']" <<"[distinguisher='" <<distinguisher <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());
    if (end_point.is_set || is_set(end_point.yfilter)) leaf_name_data.push_back(end_point.get_name_leafdata());
    if (distinguisher.is_set || is_set(distinguisher.yfilter)) leaf_name_data.push_back(distinguisher.get_name_leafdata());
    if (allocated_binding_sid.is_set || is_set(allocated_binding_sid.yfilter)) leaf_name_data.push_back(allocated_binding_sid.get_name_leafdata());
    if (binding_sid_context_id.is_set || is_set(binding_sid_context_id.yfilter)) leaf_name_data.push_back(binding_sid_context_id.get_name_leafdata());
    if (binding_sid_request_pending.is_set || is_set(binding_sid_request_pending.yfilter)) leaf_name_data.push_back(binding_sid_request_pending.get_name_leafdata());
    if (client_id_xr.is_set || is_set(client_id_xr.yfilter)) leaf_name_data.push_back(client_id_xr.get_name_leafdata());
    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (color_xr.is_set || is_set(color_xr.yfilter)) leaf_name_data.push_back(color_xr.get_name_leafdata());
    if (creation_time.is_set || is_set(creation_time.yfilter)) leaf_name_data.push_back(creation_time.get_name_leafdata());
    if (distinguisher_xr.is_set || is_set(distinguisher_xr.yfilter)) leaf_name_data.push_back(distinguisher_xr.get_name_leafdata());
    if (ipv6_caps.is_set || is_set(ipv6_caps.yfilter)) leaf_name_data.push_back(ipv6_caps.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.yfilter)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (is_synced.is_set || is_set(is_synced.yfilter)) leaf_name_data.push_back(is_synced.get_name_leafdata());
    if (notify_state_is_active.is_set || is_set(notify_state_is_active.yfilter)) leaf_name_data.push_back(notify_state_is_active.get_name_leafdata());
    if (notify_time.is_set || is_set(notify_time.yfilter)) leaf_name_data.push_back(notify_time.get_name_leafdata());
    if (policy_active.is_set || is_set(policy_active.yfilter)) leaf_name_data.push_back(policy_active.get_name_leafdata());
    if (requested_binding_sid.is_set || is_set(requested_binding_sid.yfilter)) leaf_name_data.push_back(requested_binding_sid.get_name_leafdata());
    if (rewrite_done.is_set || is_set(rewrite_done.yfilter)) leaf_name_data.push_back(rewrite_done.get_name_leafdata());
    if (rewrite_request_pending.is_set || is_set(rewrite_request_pending.yfilter)) leaf_name_data.push_back(rewrite_request_pending.get_name_leafdata());
    if (sr_policy_id.is_set || is_set(sr_policy_id.yfilter)) leaf_name_data.push_back(sr_policy_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "end-point-xr")
    {
        if(end_point_xr == nullptr)
        {
            end_point_xr = std::make_shared<MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr>();
        }
        return end_point_xr;
    }

    if(child_yang_name == "explicit-path")
    {
        for(auto const & c : explicit_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath>();
        c->parent = this;
        explicit_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(end_point_xr != nullptr)
    {
        children["end-point-xr"] = end_point_xr;
    }

    for (auto const & c : explicit_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "allocated-binding-sid")
    {
        allocated_binding_sid = value;
        allocated_binding_sid.value_namespace = name_space;
        allocated_binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-sid-context-id")
    {
        binding_sid_context_id = value;
        binding_sid_context_id.value_namespace = name_space;
        binding_sid_context_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-sid-request-pending")
    {
        binding_sid_request_pending = value;
        binding_sid_request_pending.value_namespace = name_space;
        binding_sid_request_pending.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "creation-time")
    {
        creation_time = value;
        creation_time.value_namespace = name_space;
        creation_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "notify-state-is-active")
    {
        notify_state_is_active = value;
        notify_state_is_active.value_namespace = name_space;
        notify_state_is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify-time")
    {
        notify_time = value;
        notify_time.value_namespace = name_space;
        notify_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-active")
    {
        policy_active = value;
        policy_active.value_namespace = name_space;
        policy_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requested-binding-sid")
    {
        requested_binding_sid = value;
        requested_binding_sid.value_namespace = name_space;
        requested_binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rewrite-done")
    {
        rewrite_done = value;
        rewrite_done.value_namespace = name_space;
        rewrite_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rewrite-request-pending")
    {
        rewrite_request_pending = value;
        rewrite_request_pending.value_namespace = name_space;
        rewrite_request_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-policy-id")
    {
        sr_policy_id = value;
        sr_policy_id.value_namespace = name_space;
        sr_policy_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "allocated-binding-sid")
    {
        allocated_binding_sid.yfilter = yfilter;
    }
    if(value_path == "binding-sid-context-id")
    {
        binding_sid_context_id.yfilter = yfilter;
    }
    if(value_path == "binding-sid-request-pending")
    {
        binding_sid_request_pending.yfilter = yfilter;
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
    if(value_path == "creation-time")
    {
        creation_time.yfilter = yfilter;
    }
    if(value_path == "distinguisher-xr")
    {
        distinguisher_xr.yfilter = yfilter;
    }
    if(value_path == "ipv6-caps")
    {
        ipv6_caps.yfilter = yfilter;
    }
    if(value_path == "is-stale")
    {
        is_stale.yfilter = yfilter;
    }
    if(value_path == "is-synced")
    {
        is_synced.yfilter = yfilter;
    }
    if(value_path == "notify-state-is-active")
    {
        notify_state_is_active.yfilter = yfilter;
    }
    if(value_path == "notify-time")
    {
        notify_time.yfilter = yfilter;
    }
    if(value_path == "policy-active")
    {
        policy_active.yfilter = yfilter;
    }
    if(value_path == "requested-binding-sid")
    {
        requested_binding_sid.yfilter = yfilter;
    }
    if(value_path == "rewrite-done")
    {
        rewrite_done.yfilter = yfilter;
    }
    if(value_path == "rewrite-request-pending")
    {
        rewrite_request_pending.yfilter = yfilter;
    }
    if(value_path == "sr-policy-id")
    {
        sr_policy_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end-point-xr" || name == "explicit-path" || name == "client-id" || name == "color" || name == "end-point" || name == "distinguisher" || name == "allocated-binding-sid" || name == "binding-sid-context-id" || name == "binding-sid-request-pending" || name == "client-id-xr" || name == "client-name" || name == "color-xr" || name == "creation-time" || name == "distinguisher-xr" || name == "ipv6-caps" || name == "is-stale" || name == "is-synced" || name == "notify-state-is-active" || name == "notify-time" || name == "policy-active" || name == "requested-binding-sid" || name == "rewrite-done" || name == "rewrite-request-pending" || name == "sr-policy-id")
        return true;
    return false;
}

MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::EndPointXr()
    :
    address_family_type{YType::enumeration, "address-family-type"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "end-point-xr"; yang_parent_name = "sr-policy-entry"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address_family_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "end-point-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_type.is_set || is_set(address_family_type.yfilter)) leaf_name_data.push_back(address_family_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::EndPointXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family-type" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
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

    yang_name = "explicit-path"; yang_parent_name = "sr-policy-entry"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(context_id.yfilter)
	|| ydk::is_set(is_stale.yfilter)
	|| ydk::is_set(is_synced.yfilter)
	|| ydk::is_set(path_weight.yfilter)
	|| ydk::is_set(programmed_in_fib.yfilter)
	|| (tunnel_info !=  nullptr && tunnel_info->has_operation());
}

std::string MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_id.is_set || is_set(context_id.yfilter)) leaf_name_data.push_back(context_id.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.yfilter)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (is_synced.is_set || is_set(is_synced.yfilter)) leaf_name_data.push_back(is_synced.get_name_leafdata());
    if (path_weight.is_set || is_set(path_weight.yfilter)) leaf_name_data.push_back(path_weight.get_name_leafdata());
    if (programmed_in_fib.is_set || is_set(programmed_in_fib.yfilter)) leaf_name_data.push_back(programmed_in_fib.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hops")
    {
        for(auto const & c : hops)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops>();
        c->parent = this;
        hops.push_back(c);
        return c;
    }

    if(child_yang_name == "tunnel-info")
    {
        if(tunnel_info == nullptr)
        {
            tunnel_info = std::make_shared<MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo>();
        }
        return tunnel_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hops)
    {
        children[c->get_segment_path()] = c;
    }

    if(tunnel_info != nullptr)
    {
        children["tunnel-info"] = tunnel_info;
    }

    return children;
}

void MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context-id")
    {
        context_id = value;
        context_id.value_namespace = name_space;
        context_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "path-weight")
    {
        path_weight = value;
        path_weight.value_namespace = name_space;
        path_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "programmed-in-fib")
    {
        programmed_in_fib = value;
        programmed_in_fib.value_namespace = name_space;
        programmed_in_fib.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context-id")
    {
        context_id.yfilter = yfilter;
    }
    if(value_path == "is-stale")
    {
        is_stale.yfilter = yfilter;
    }
    if(value_path == "is-synced")
    {
        is_synced.yfilter = yfilter;
    }
    if(value_path == "path-weight")
    {
        path_weight.yfilter = yfilter;
    }
    if(value_path == "programmed-in-fib")
    {
        programmed_in_fib.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hops" || name == "tunnel-info" || name == "context-id" || name == "is-stale" || name == "is-synced" || name == "path-weight" || name == "programmed-in-fib")
        return true;
    return false;
}

MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::Hops()
    :
    hop_type{YType::enumeration, "hop-type"},
    ipv4_address{YType::str, "ipv4-address"},
    mpls_label{YType::uint32, "mpls-label"}
{

    yang_name = "hops"; yang_parent_name = "explicit-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(hop_type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(mpls_label.yfilter);
}

std::string MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_type.is_set || is_set(hop_type.yfilter)) leaf_name_data.push_back(hop_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::Hops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop-type" || name == "ipv4-address" || name == "mpls-label")
        return true;
    return false;
}

MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::TunnelInfo()
    :
    ipv6_caps{YType::boolean, "ipv6-caps"},
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_up{YType::boolean, "tunnel-up"}
{

    yang_name = "tunnel-info"; yang_parent_name = "explicit-path"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(ipv6_caps.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_up.yfilter);
}

std::string MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_caps.is_set || is_set(ipv6_caps.yfilter)) leaf_name_data.push_back(ipv6_caps.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_up.is_set || is_set(tunnel_up.yfilter)) leaf_name_data.push_back(tunnel_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-caps")
    {
        ipv6_caps = value;
        ipv6_caps.value_namespace = name_space;
        ipv6_caps.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-caps")
    {
        ipv6_caps.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-up")
    {
        tunnel_up.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoTunnelServices::SrPolicyEntries::SrPolicyEntry::ExplicitPath::TunnelInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-caps" || name == "tunnel-id" || name == "tunnel-up")
        return true;
    return false;
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
    head_infos->parent = this;
    links->parent = this;
    summary->parent = this;
    tail_infos->parent = this;

    yang_name = "bfd"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| (counters !=  nullptr && counters->has_operation())
	|| (head_infos !=  nullptr && head_infos->has_operation())
	|| (links !=  nullptr && links->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (tail_infos !=  nullptr && tail_infos->has_operation());
}

std::string MplsTeStandby::Bfd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<MplsTeStandby::Bfd::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "head-infos")
    {
        if(head_infos == nullptr)
        {
            head_infos = std::make_shared<MplsTeStandby::Bfd::HeadInfos>();
        }
        return head_infos;
    }

    if(child_yang_name == "links")
    {
        if(links == nullptr)
        {
            links = std::make_shared<MplsTeStandby::Bfd::Links>();
        }
        return links;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTeStandby::Bfd::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "tail-infos")
    {
        if(tail_infos == nullptr)
        {
            tail_infos = std::make_shared<MplsTeStandby::Bfd::TailInfos>();
        }
        return tail_infos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(head_infos != nullptr)
    {
        children["head-infos"] = head_infos;
    }

    if(links != nullptr)
    {
        children["links"] = links;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(tail_infos != nullptr)
    {
        children["tail-infos"] = tail_infos;
    }

    return children;
}

void MplsTeStandby::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "head-infos" || name == "links" || name == "summary" || name == "tail-infos")
        return true;
    return false;
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
    bfd_over_lsp_head_counters->parent = this;
    bfd_over_lsp_tail_counters->parent = this;
    sbfd_over_lsp_head_counters->parent = this;

    yang_name = "counters"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(last_cleared_timestamp.yfilter)
	|| (bf_do_lm_counters !=  nullptr && bf_do_lm_counters->has_operation())
	|| (bfd_over_lsp_head_counters !=  nullptr && bfd_over_lsp_head_counters->has_operation())
	|| (bfd_over_lsp_tail_counters !=  nullptr && bfd_over_lsp_tail_counters->has_operation())
	|| (sbfd_over_lsp_head_counters !=  nullptr && sbfd_over_lsp_head_counters->has_operation());
}

std::string MplsTeStandby::Bfd::Counters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Bfd::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Bfd::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.yfilter)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bf-do-lm-counters")
    {
        if(bf_do_lm_counters == nullptr)
        {
            bf_do_lm_counters = std::make_shared<MplsTeStandby::Bfd::Counters::BfDoLmCounters>();
        }
        return bf_do_lm_counters;
    }

    if(child_yang_name == "bfd-over-lsp-head-counters")
    {
        if(bfd_over_lsp_head_counters == nullptr)
        {
            bfd_over_lsp_head_counters = std::make_shared<MplsTeStandby::Bfd::Counters::BfdOverLspHeadCounters>();
        }
        return bfd_over_lsp_head_counters;
    }

    if(child_yang_name == "bfd-over-lsp-tail-counters")
    {
        if(bfd_over_lsp_tail_counters == nullptr)
        {
            bfd_over_lsp_tail_counters = std::make_shared<MplsTeStandby::Bfd::Counters::BfdOverLspTailCounters>();
        }
        return bfd_over_lsp_tail_counters;
    }

    if(child_yang_name == "sbfd-over-lsp-head-counters")
    {
        if(sbfd_over_lsp_head_counters == nullptr)
        {
            sbfd_over_lsp_head_counters = std::make_shared<MplsTeStandby::Bfd::Counters::SbfdOverLspHeadCounters>();
        }
        return sbfd_over_lsp_head_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Bfd::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bf_do_lm_counters != nullptr)
    {
        children["bf-do-lm-counters"] = bf_do_lm_counters;
    }

    if(bfd_over_lsp_head_counters != nullptr)
    {
        children["bfd-over-lsp-head-counters"] = bfd_over_lsp_head_counters;
    }

    if(bfd_over_lsp_tail_counters != nullptr)
    {
        children["bfd-over-lsp-tail-counters"] = bfd_over_lsp_tail_counters;
    }

    if(sbfd_over_lsp_head_counters != nullptr)
    {
        children["sbfd-over-lsp-head-counters"] = sbfd_over_lsp_head_counters;
    }

    return children;
}

void MplsTeStandby::Bfd::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
        last_cleared_timestamp.value_namespace = name_space;
        last_cleared_timestamp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Bfd::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp.yfilter = yfilter;
    }
}

bool MplsTeStandby::Bfd::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bf-do-lm-counters" || name == "bfd-over-lsp-head-counters" || name == "bfd-over-lsp-tail-counters" || name == "sbfd-over-lsp-head-counters" || name == "last-cleared-timestamp")
        return true;
    return false;
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

    yang_name = "bf-do-lm-counters"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(session_admin_down_events.yfilter)
	|| ydk::is_set(session_create_events.yfilter)
	|| ydk::is_set(session_creation_failed_events.yfilter)
	|| ydk::is_set(session_down_events.yfilter)
	|| ydk::is_set(session_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_non_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_replay_events.yfilter)
	|| ydk::is_set(session_up_events.yfilter);
}

std::string MplsTeStandby::Bfd::Counters::BfDoLmCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Bfd::Counters::BfDoLmCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bf-do-lm-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Bfd::Counters::BfDoLmCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_admin_down_events.is_set || is_set(session_admin_down_events.yfilter)) leaf_name_data.push_back(session_admin_down_events.get_name_leafdata());
    if (session_create_events.is_set || is_set(session_create_events.yfilter)) leaf_name_data.push_back(session_create_events.get_name_leafdata());
    if (session_creation_failed_events.is_set || is_set(session_creation_failed_events.yfilter)) leaf_name_data.push_back(session_creation_failed_events.get_name_leafdata());
    if (session_down_events.is_set || is_set(session_down_events.yfilter)) leaf_name_data.push_back(session_down_events.get_name_leafdata());
    if (session_gracefully_delete_events.is_set || is_set(session_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_gracefully_delete_events.get_name_leafdata());
    if (session_non_gracefully_delete_events.is_set || is_set(session_non_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_non_gracefully_delete_events.get_name_leafdata());
    if (session_replay_events.is_set || is_set(session_replay_events.yfilter)) leaf_name_data.push_back(session_replay_events.get_name_leafdata());
    if (session_up_events.is_set || is_set(session_up_events.yfilter)) leaf_name_data.push_back(session_up_events.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::Counters::BfDoLmCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Bfd::Counters::BfDoLmCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Bfd::Counters::BfDoLmCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events = value;
        session_admin_down_events.value_namespace = name_space;
        session_admin_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-create-events")
    {
        session_create_events = value;
        session_create_events.value_namespace = name_space;
        session_create_events.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "session-up-events")
    {
        session_up_events = value;
        session_up_events.value_namespace = name_space;
        session_up_events.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Bfd::Counters::BfDoLmCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events.yfilter = yfilter;
    }
    if(value_path == "session-create-events")
    {
        session_create_events.yfilter = yfilter;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events.yfilter = yfilter;
    }
    if(value_path == "session-down-events")
    {
        session_down_events.yfilter = yfilter;
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
    if(value_path == "session-up-events")
    {
        session_up_events.yfilter = yfilter;
    }
}

bool MplsTeStandby::Bfd::Counters::BfDoLmCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-admin-down-events" || name == "session-create-events" || name == "session-creation-failed-events" || name == "session-down-events" || name == "session-gracefully-delete-events" || name == "session-non-gracefully-delete-events" || name == "session-replay-events" || name == "session-up-events")
        return true;
    return false;
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

    yang_name = "bfd-over-lsp-head-counters"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(session_admin_down_events.yfilter)
	|| ydk::is_set(session_create_events.yfilter)
	|| ydk::is_set(session_create_timeout_events.yfilter)
	|| ydk::is_set(session_creation_failed_events.yfilter)
	|| ydk::is_set(session_down_events.yfilter)
	|| ydk::is_set(session_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_non_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_replay_events.yfilter)
	|| ydk::is_set(session_up_events.yfilter);
}

std::string MplsTeStandby::Bfd::Counters::BfdOverLspHeadCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Bfd::Counters::BfdOverLspHeadCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-over-lsp-head-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Bfd::Counters::BfdOverLspHeadCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_admin_down_events.is_set || is_set(session_admin_down_events.yfilter)) leaf_name_data.push_back(session_admin_down_events.get_name_leafdata());
    if (session_create_events.is_set || is_set(session_create_events.yfilter)) leaf_name_data.push_back(session_create_events.get_name_leafdata());
    if (session_create_timeout_events.is_set || is_set(session_create_timeout_events.yfilter)) leaf_name_data.push_back(session_create_timeout_events.get_name_leafdata());
    if (session_creation_failed_events.is_set || is_set(session_creation_failed_events.yfilter)) leaf_name_data.push_back(session_creation_failed_events.get_name_leafdata());
    if (session_down_events.is_set || is_set(session_down_events.yfilter)) leaf_name_data.push_back(session_down_events.get_name_leafdata());
    if (session_gracefully_delete_events.is_set || is_set(session_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_gracefully_delete_events.get_name_leafdata());
    if (session_non_gracefully_delete_events.is_set || is_set(session_non_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_non_gracefully_delete_events.get_name_leafdata());
    if (session_replay_events.is_set || is_set(session_replay_events.yfilter)) leaf_name_data.push_back(session_replay_events.get_name_leafdata());
    if (session_up_events.is_set || is_set(session_up_events.yfilter)) leaf_name_data.push_back(session_up_events.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::Counters::BfdOverLspHeadCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Bfd::Counters::BfdOverLspHeadCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Bfd::Counters::BfdOverLspHeadCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events = value;
        session_admin_down_events.value_namespace = name_space;
        session_admin_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-create-events")
    {
        session_create_events = value;
        session_create_events.value_namespace = name_space;
        session_create_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-create-timeout-events")
    {
        session_create_timeout_events = value;
        session_create_timeout_events.value_namespace = name_space;
        session_create_timeout_events.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "session-up-events")
    {
        session_up_events = value;
        session_up_events.value_namespace = name_space;
        session_up_events.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Bfd::Counters::BfdOverLspHeadCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events.yfilter = yfilter;
    }
    if(value_path == "session-create-events")
    {
        session_create_events.yfilter = yfilter;
    }
    if(value_path == "session-create-timeout-events")
    {
        session_create_timeout_events.yfilter = yfilter;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events.yfilter = yfilter;
    }
    if(value_path == "session-down-events")
    {
        session_down_events.yfilter = yfilter;
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
    if(value_path == "session-up-events")
    {
        session_up_events.yfilter = yfilter;
    }
}

bool MplsTeStandby::Bfd::Counters::BfdOverLspHeadCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-admin-down-events" || name == "session-create-events" || name == "session-create-timeout-events" || name == "session-creation-failed-events" || name == "session-down-events" || name == "session-gracefully-delete-events" || name == "session-non-gracefully-delete-events" || name == "session-replay-events" || name == "session-up-events")
        return true;
    return false;
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

    yang_name = "bfd-over-lsp-tail-counters"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(session_admin_down_events.yfilter)
	|| ydk::is_set(session_create_events.yfilter)
	|| ydk::is_set(session_creation_failed_events.yfilter)
	|| ydk::is_set(session_down_events.yfilter)
	|| ydk::is_set(session_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_non_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_replay_events.yfilter)
	|| ydk::is_set(session_up_events.yfilter);
}

std::string MplsTeStandby::Bfd::Counters::BfdOverLspTailCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Bfd::Counters::BfdOverLspTailCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-over-lsp-tail-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Bfd::Counters::BfdOverLspTailCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_admin_down_events.is_set || is_set(session_admin_down_events.yfilter)) leaf_name_data.push_back(session_admin_down_events.get_name_leafdata());
    if (session_create_events.is_set || is_set(session_create_events.yfilter)) leaf_name_data.push_back(session_create_events.get_name_leafdata());
    if (session_creation_failed_events.is_set || is_set(session_creation_failed_events.yfilter)) leaf_name_data.push_back(session_creation_failed_events.get_name_leafdata());
    if (session_down_events.is_set || is_set(session_down_events.yfilter)) leaf_name_data.push_back(session_down_events.get_name_leafdata());
    if (session_gracefully_delete_events.is_set || is_set(session_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_gracefully_delete_events.get_name_leafdata());
    if (session_non_gracefully_delete_events.is_set || is_set(session_non_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_non_gracefully_delete_events.get_name_leafdata());
    if (session_replay_events.is_set || is_set(session_replay_events.yfilter)) leaf_name_data.push_back(session_replay_events.get_name_leafdata());
    if (session_up_events.is_set || is_set(session_up_events.yfilter)) leaf_name_data.push_back(session_up_events.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::Counters::BfdOverLspTailCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Bfd::Counters::BfdOverLspTailCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Bfd::Counters::BfdOverLspTailCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events = value;
        session_admin_down_events.value_namespace = name_space;
        session_admin_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-create-events")
    {
        session_create_events = value;
        session_create_events.value_namespace = name_space;
        session_create_events.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "session-up-events")
    {
        session_up_events = value;
        session_up_events.value_namespace = name_space;
        session_up_events.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Bfd::Counters::BfdOverLspTailCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events.yfilter = yfilter;
    }
    if(value_path == "session-create-events")
    {
        session_create_events.yfilter = yfilter;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events.yfilter = yfilter;
    }
    if(value_path == "session-down-events")
    {
        session_down_events.yfilter = yfilter;
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
    if(value_path == "session-up-events")
    {
        session_up_events.yfilter = yfilter;
    }
}

bool MplsTeStandby::Bfd::Counters::BfdOverLspTailCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-admin-down-events" || name == "session-create-events" || name == "session-creation-failed-events" || name == "session-down-events" || name == "session-gracefully-delete-events" || name == "session-non-gracefully-delete-events" || name == "session-replay-events" || name == "session-up-events")
        return true;
    return false;
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

    yang_name = "sbfd-over-lsp-head-counters"; yang_parent_name = "counters"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(session_admin_down_events.yfilter)
	|| ydk::is_set(session_create_events.yfilter)
	|| ydk::is_set(session_create_timeout_events.yfilter)
	|| ydk::is_set(session_creation_failed_events.yfilter)
	|| ydk::is_set(session_down_events.yfilter)
	|| ydk::is_set(session_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_non_gracefully_delete_events.yfilter)
	|| ydk::is_set(session_replay_events.yfilter)
	|| ydk::is_set(session_up_events.yfilter);
}

std::string MplsTeStandby::Bfd::Counters::SbfdOverLspHeadCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Bfd::Counters::SbfdOverLspHeadCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sbfd-over-lsp-head-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Bfd::Counters::SbfdOverLspHeadCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_admin_down_events.is_set || is_set(session_admin_down_events.yfilter)) leaf_name_data.push_back(session_admin_down_events.get_name_leafdata());
    if (session_create_events.is_set || is_set(session_create_events.yfilter)) leaf_name_data.push_back(session_create_events.get_name_leafdata());
    if (session_create_timeout_events.is_set || is_set(session_create_timeout_events.yfilter)) leaf_name_data.push_back(session_create_timeout_events.get_name_leafdata());
    if (session_creation_failed_events.is_set || is_set(session_creation_failed_events.yfilter)) leaf_name_data.push_back(session_creation_failed_events.get_name_leafdata());
    if (session_down_events.is_set || is_set(session_down_events.yfilter)) leaf_name_data.push_back(session_down_events.get_name_leafdata());
    if (session_gracefully_delete_events.is_set || is_set(session_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_gracefully_delete_events.get_name_leafdata());
    if (session_non_gracefully_delete_events.is_set || is_set(session_non_gracefully_delete_events.yfilter)) leaf_name_data.push_back(session_non_gracefully_delete_events.get_name_leafdata());
    if (session_replay_events.is_set || is_set(session_replay_events.yfilter)) leaf_name_data.push_back(session_replay_events.get_name_leafdata());
    if (session_up_events.is_set || is_set(session_up_events.yfilter)) leaf_name_data.push_back(session_up_events.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::Counters::SbfdOverLspHeadCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Bfd::Counters::SbfdOverLspHeadCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Bfd::Counters::SbfdOverLspHeadCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events = value;
        session_admin_down_events.value_namespace = name_space;
        session_admin_down_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-create-events")
    {
        session_create_events = value;
        session_create_events.value_namespace = name_space;
        session_create_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-create-timeout-events")
    {
        session_create_timeout_events = value;
        session_create_timeout_events.value_namespace = name_space;
        session_create_timeout_events.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "session-up-events")
    {
        session_up_events = value;
        session_up_events.value_namespace = name_space;
        session_up_events.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Bfd::Counters::SbfdOverLspHeadCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-admin-down-events")
    {
        session_admin_down_events.yfilter = yfilter;
    }
    if(value_path == "session-create-events")
    {
        session_create_events.yfilter = yfilter;
    }
    if(value_path == "session-create-timeout-events")
    {
        session_create_timeout_events.yfilter = yfilter;
    }
    if(value_path == "session-creation-failed-events")
    {
        session_creation_failed_events.yfilter = yfilter;
    }
    if(value_path == "session-down-events")
    {
        session_down_events.yfilter = yfilter;
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
    if(value_path == "session-up-events")
    {
        session_up_events.yfilter = yfilter;
    }
}

bool MplsTeStandby::Bfd::Counters::SbfdOverLspHeadCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-admin-down-events" || name == "session-create-events" || name == "session-create-timeout-events" || name == "session-creation-failed-events" || name == "session-down-events" || name == "session-gracefully-delete-events" || name == "session-non-gracefully-delete-events" || name == "session-replay-events" || name == "session-up-events")
        return true;
    return false;
}

MplsTeStandby::Bfd::HeadInfos::HeadInfos()
{

    yang_name = "head-infos"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string MplsTeStandby::Bfd::HeadInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Bfd::HeadInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Bfd::HeadInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::HeadInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head-info")
    {
        for(auto const & c : head_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Bfd::HeadInfos::HeadInfo>();
        c->parent = this;
        head_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Bfd::HeadInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : head_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Bfd::HeadInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Bfd::HeadInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Bfd::HeadInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head-info")
        return true;
    return false;
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
    reoptimized_lspbfd_info->parent = this;
    standby_lspbfd_info->parent = this;

    yang_name = "head-info"; yang_parent_name = "head-infos"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(lspbfd_type.yfilter)
	|| ydk::is_set(tunnel_name_xr.yfilter)
	|| (current_lspbfd_info !=  nullptr && current_lspbfd_info->has_operation())
	|| (reoptimized_lspbfd_info !=  nullptr && reoptimized_lspbfd_info->has_operation())
	|| (standby_lspbfd_info !=  nullptr && standby_lspbfd_info->has_operation());
}

std::string MplsTeStandby::Bfd::HeadInfos::HeadInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/head-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Bfd::HeadInfos::HeadInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-info" <<"[tunnel-name='" <<tunnel_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Bfd::HeadInfos::HeadInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (lspbfd_type.is_set || is_set(lspbfd_type.yfilter)) leaf_name_data.push_back(lspbfd_type.get_name_leafdata());
    if (tunnel_name_xr.is_set || is_set(tunnel_name_xr.yfilter)) leaf_name_data.push_back(tunnel_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::HeadInfos::HeadInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-lspbfd-info")
    {
        if(current_lspbfd_info == nullptr)
        {
            current_lspbfd_info = std::make_shared<MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo>();
        }
        return current_lspbfd_info;
    }

    if(child_yang_name == "reoptimized-lspbfd-info")
    {
        if(reoptimized_lspbfd_info == nullptr)
        {
            reoptimized_lspbfd_info = std::make_shared<MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo>();
        }
        return reoptimized_lspbfd_info;
    }

    if(child_yang_name == "standby-lspbfd-info")
    {
        if(standby_lspbfd_info == nullptr)
        {
            standby_lspbfd_info = std::make_shared<MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo>();
        }
        return standby_lspbfd_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Bfd::HeadInfos::HeadInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(current_lspbfd_info != nullptr)
    {
        children["current-lspbfd-info"] = current_lspbfd_info;
    }

    if(reoptimized_lspbfd_info != nullptr)
    {
        children["reoptimized-lspbfd-info"] = reoptimized_lspbfd_info;
    }

    if(standby_lspbfd_info != nullptr)
    {
        children["standby-lspbfd-info"] = standby_lspbfd_info;
    }

    return children;
}

void MplsTeStandby::Bfd::HeadInfos::HeadInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr = value;
        tunnel_name_xr.value_namespace = name_space;
        tunnel_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Bfd::HeadInfos::HeadInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "lspbfd-type")
    {
        lspbfd_type.yfilter = yfilter;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr.yfilter = yfilter;
    }
}

bool MplsTeStandby::Bfd::HeadInfos::HeadInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-lspbfd-info" || name == "reoptimized-lspbfd-info" || name == "standby-lspbfd-info" || name == "tunnel-name" || name == "destination-address" || name == "lspbfd-type" || name == "tunnel-name-xr")
        return true;
    return false;
}

MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::CurrentLspbfdInfo()
    :
    bfd_session_state{YType::enumeration, "bfd-session-state"},
    lsp_id{YType::uint16, "lsp-id"}
{

    yang_name = "current-lspbfd-info"; yang_parent_name = "head-info"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(bfd_session_state.yfilter)
	|| ydk::is_set(lsp_id.yfilter);
}

std::string MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-lspbfd-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_session_state.is_set || is_set(bfd_session_state.yfilter)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
        bfd_session_state.value_namespace = name_space;
        bfd_session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-session-state")
    {
        bfd_session_state.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::Bfd::HeadInfos::HeadInfo::CurrentLspbfdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-session-state" || name == "lsp-id")
        return true;
    return false;
}

MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::ReoptimizedLspbfdInfo()
    :
    bfd_session_state{YType::enumeration, "bfd-session-state"},
    lsp_id{YType::uint16, "lsp-id"}
{

    yang_name = "reoptimized-lspbfd-info"; yang_parent_name = "head-info"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(bfd_session_state.yfilter)
	|| ydk::is_set(lsp_id.yfilter);
}

std::string MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reoptimized-lspbfd-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_session_state.is_set || is_set(bfd_session_state.yfilter)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
        bfd_session_state.value_namespace = name_space;
        bfd_session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-session-state")
    {
        bfd_session_state.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::Bfd::HeadInfos::HeadInfo::ReoptimizedLspbfdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-session-state" || name == "lsp-id")
        return true;
    return false;
}

MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::StandbyLspbfdInfo()
    :
    bfd_session_state{YType::enumeration, "bfd-session-state"},
    lsp_id{YType::uint16, "lsp-id"}
{

    yang_name = "standby-lspbfd-info"; yang_parent_name = "head-info"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(bfd_session_state.yfilter)
	|| ydk::is_set(lsp_id.yfilter);
}

std::string MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-lspbfd-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_session_state.is_set || is_set(bfd_session_state.yfilter)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
        bfd_session_state.value_namespace = name_space;
        bfd_session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-session-state")
    {
        bfd_session_state.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::Bfd::HeadInfos::HeadInfo::StandbyLspbfdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-session-state" || name == "lsp-id")
        return true;
    return false;
}

MplsTeStandby::Bfd::Links::Links()
{

    yang_name = "links"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string MplsTeStandby::Bfd::Links::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Bfd::Links::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Bfd::Links::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::Links::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        for(auto const & c : link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Bfd::Links::Link>();
        c->parent = this;
        link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Bfd::Links::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Bfd::Links::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Bfd::Links::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Bfd::Links::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link")
        return true;
    return false;
}

MplsTeStandby::Bfd::Links::Link::Link()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "link"; yang_parent_name = "links"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string MplsTeStandby::Bfd::Links::Link::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/links/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Bfd::Links::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Bfd::Links::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::Links::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Bfd::Links::Link::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Bfd::Links::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Bfd::Links::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Bfd::Links::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool MplsTeStandby::Bfd::Links::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "interface-name")
        return true;
    return false;
}

MplsTeStandby::Bfd::Links::Link::Neighbor::Neighbor()
    :
    is_bfd_up{YType::boolean, "is-bfd-up"},
    neighbor_address{YType::str, "neighbor-address"}
{

    yang_name = "neighbor"; yang_parent_name = "link"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(is_bfd_up.yfilter)
	|| ydk::is_set(neighbor_address.yfilter);
}

std::string MplsTeStandby::Bfd::Links::Link::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Bfd::Links::Link::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bfd_up.is_set || is_set(is_bfd_up.yfilter)) leaf_name_data.push_back(is_bfd_up.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::Links::Link::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Bfd::Links::Link::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Bfd::Links::Link::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-bfd-up")
    {
        is_bfd_up = value;
        is_bfd_up.value_namespace = name_space;
        is_bfd_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Bfd::Links::Link::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-bfd-up")
    {
        is_bfd_up.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
}

bool MplsTeStandby::Bfd::Links::Link::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-bfd-up" || name == "neighbor-address")
        return true;
    return false;
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

    yang_name = "summary"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(head_lsp_count_sbfd_session_created.yfilter)
	|| ydk::is_set(head_lsp_count_sbfd_up.yfilter)
	|| ydk::is_set(head_lsp_count_session_created.yfilter)
	|| ydk::is_set(head_lsp_count_up.yfilter)
	|| ydk::is_set(link_count_bfd_enabled.yfilter)
	|| ydk::is_set(link_count_session_created.yfilter)
	|| ydk::is_set(link_count_session_up.yfilter)
	|| ydk::is_set(tail_lsp_count_session_created.yfilter)
	|| ydk::is_set(tail_lsp_count_session_up.yfilter)
	|| ydk::is_set(tunnel_count_bfd_enabled.yfilter)
	|| ydk::is_set(tunnel_count_sbfd_enabled.yfilter)
	|| ydk::is_set(tunnel_count_sbfd_session_up.yfilter)
	|| ydk::is_set(tunnel_count_session_up.yfilter)
	|| ydk::is_set(tunnel_count_total.yfilter);
}

std::string MplsTeStandby::Bfd::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Bfd::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Bfd::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (head_lsp_count_sbfd_session_created.is_set || is_set(head_lsp_count_sbfd_session_created.yfilter)) leaf_name_data.push_back(head_lsp_count_sbfd_session_created.get_name_leafdata());
    if (head_lsp_count_sbfd_up.is_set || is_set(head_lsp_count_sbfd_up.yfilter)) leaf_name_data.push_back(head_lsp_count_sbfd_up.get_name_leafdata());
    if (head_lsp_count_session_created.is_set || is_set(head_lsp_count_session_created.yfilter)) leaf_name_data.push_back(head_lsp_count_session_created.get_name_leafdata());
    if (head_lsp_count_up.is_set || is_set(head_lsp_count_up.yfilter)) leaf_name_data.push_back(head_lsp_count_up.get_name_leafdata());
    if (link_count_bfd_enabled.is_set || is_set(link_count_bfd_enabled.yfilter)) leaf_name_data.push_back(link_count_bfd_enabled.get_name_leafdata());
    if (link_count_session_created.is_set || is_set(link_count_session_created.yfilter)) leaf_name_data.push_back(link_count_session_created.get_name_leafdata());
    if (link_count_session_up.is_set || is_set(link_count_session_up.yfilter)) leaf_name_data.push_back(link_count_session_up.get_name_leafdata());
    if (tail_lsp_count_session_created.is_set || is_set(tail_lsp_count_session_created.yfilter)) leaf_name_data.push_back(tail_lsp_count_session_created.get_name_leafdata());
    if (tail_lsp_count_session_up.is_set || is_set(tail_lsp_count_session_up.yfilter)) leaf_name_data.push_back(tail_lsp_count_session_up.get_name_leafdata());
    if (tunnel_count_bfd_enabled.is_set || is_set(tunnel_count_bfd_enabled.yfilter)) leaf_name_data.push_back(tunnel_count_bfd_enabled.get_name_leafdata());
    if (tunnel_count_sbfd_enabled.is_set || is_set(tunnel_count_sbfd_enabled.yfilter)) leaf_name_data.push_back(tunnel_count_sbfd_enabled.get_name_leafdata());
    if (tunnel_count_sbfd_session_up.is_set || is_set(tunnel_count_sbfd_session_up.yfilter)) leaf_name_data.push_back(tunnel_count_sbfd_session_up.get_name_leafdata());
    if (tunnel_count_session_up.is_set || is_set(tunnel_count_session_up.yfilter)) leaf_name_data.push_back(tunnel_count_session_up.get_name_leafdata());
    if (tunnel_count_total.is_set || is_set(tunnel_count_total.yfilter)) leaf_name_data.push_back(tunnel_count_total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Bfd::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Bfd::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "tunnel-count-bfd-enabled")
    {
        tunnel_count_bfd_enabled = value;
        tunnel_count_bfd_enabled.value_namespace = name_space;
        tunnel_count_bfd_enabled.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "tunnel-count-session-up")
    {
        tunnel_count_session_up = value;
        tunnel_count_session_up.value_namespace = name_space;
        tunnel_count_session_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-count-total")
    {
        tunnel_count_total = value;
        tunnel_count_total.value_namespace = name_space;
        tunnel_count_total.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Bfd::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "head-lsp-count-sbfd-session-created")
    {
        head_lsp_count_sbfd_session_created.yfilter = yfilter;
    }
    if(value_path == "head-lsp-count-sbfd-up")
    {
        head_lsp_count_sbfd_up.yfilter = yfilter;
    }
    if(value_path == "head-lsp-count-session-created")
    {
        head_lsp_count_session_created.yfilter = yfilter;
    }
    if(value_path == "head-lsp-count-up")
    {
        head_lsp_count_up.yfilter = yfilter;
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
    if(value_path == "tail-lsp-count-session-created")
    {
        tail_lsp_count_session_created.yfilter = yfilter;
    }
    if(value_path == "tail-lsp-count-session-up")
    {
        tail_lsp_count_session_up.yfilter = yfilter;
    }
    if(value_path == "tunnel-count-bfd-enabled")
    {
        tunnel_count_bfd_enabled.yfilter = yfilter;
    }
    if(value_path == "tunnel-count-sbfd-enabled")
    {
        tunnel_count_sbfd_enabled.yfilter = yfilter;
    }
    if(value_path == "tunnel-count-sbfd-session-up")
    {
        tunnel_count_sbfd_session_up.yfilter = yfilter;
    }
    if(value_path == "tunnel-count-session-up")
    {
        tunnel_count_session_up.yfilter = yfilter;
    }
    if(value_path == "tunnel-count-total")
    {
        tunnel_count_total.yfilter = yfilter;
    }
}

bool MplsTeStandby::Bfd::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head-lsp-count-sbfd-session-created" || name == "head-lsp-count-sbfd-up" || name == "head-lsp-count-session-created" || name == "head-lsp-count-up" || name == "link-count-bfd-enabled" || name == "link-count-session-created" || name == "link-count-session-up" || name == "tail-lsp-count-session-created" || name == "tail-lsp-count-session-up" || name == "tunnel-count-bfd-enabled" || name == "tunnel-count-sbfd-enabled" || name == "tunnel-count-sbfd-session-up" || name == "tunnel-count-session-up" || name == "tunnel-count-total")
        return true;
    return false;
}

MplsTeStandby::Bfd::TailInfos::TailInfos()
{

    yang_name = "tail-infos"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string MplsTeStandby::Bfd::TailInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Bfd::TailInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tail-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Bfd::TailInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::TailInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tail-info")
    {
        for(auto const & c : tail_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Bfd::TailInfos::TailInfo>();
        c->parent = this;
        tail_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Bfd::TailInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tail_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Bfd::TailInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Bfd::TailInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Bfd::TailInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tail-info")
        return true;
    return false;
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

    yang_name = "tail-info"; yang_parent_name = "tail-infos"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(bfd_session_state.yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(signaled_name.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| (lsp_fec !=  nullptr && lsp_fec->has_operation());
}

std::string MplsTeStandby::Bfd::TailInfos::TailInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/tail-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Bfd::TailInfos::TailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tail-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Bfd::TailInfos::TailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_session_state.is_set || is_set(bfd_session_state.yfilter)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());
    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::TailInfos::TailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-fec")
    {
        if(lsp_fec == nullptr)
        {
            lsp_fec = std::make_shared<MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec>();
        }
        return lsp_fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Bfd::TailInfos::TailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_fec != nullptr)
    {
        children["lsp-fec"] = lsp_fec;
    }

    return children;
}

void MplsTeStandby::Bfd::TailInfos::TailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
        bfd_session_state.value_namespace = name_space;
        bfd_session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
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
}

void MplsTeStandby::Bfd::TailInfos::TailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-session-state")
    {
        bfd_session_state.yfilter = yfilter;
    }
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "signaled-name")
    {
        signaled_name.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::Bfd::TailInfos::TailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-fec" || name == "bfd-session-state" || name == "ctype" || name == "destination-address" || name == "extended-tunnel-id" || name == "lsp-id" || name == "p2mp-id" || name == "signaled-name" || name == "source-address" || name == "tunnel-id")
        return true;
    return false;
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

    yang_name = "lsp-fec"; yang_parent_name = "tail-info"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/tail-infos/tail-info/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
        fec_lsp_id.value_namespace = name_space;
        fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
        fec_vrf.value_namespace = name_space;
        fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf.yfilter = yfilter;
    }
}

bool MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-extended-tunnel-id" || name == "fec-lsp-id" || name == "fec-source" || name == "fec-tunnel-id" || name == "fec-vrf")
        return true;
    return false;
}

MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "lsp-fec"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter);
}

std::string MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/bfd/tail-infos/tail-info/lsp-fec/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
        fec_destination_p2mp_id.value_namespace = name_space;
        fec_destination_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
        p2p_lsp_destination.value_namespace = name_space;
        p2p_lsp_destination.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination.yfilter = yfilter;
    }
}

bool MplsTeStandby::Bfd::TailInfos::TailInfo::LspFec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "fec-destination-p2mp-id" || name == "p2p-lsp-destination")
        return true;
    return false;
}

MplsTeStandby::CollaboratorTimers::CollaboratorTimers()
{

    yang_name = "collaborator-timers"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::CollaboratorTimers::~CollaboratorTimers()
{
}

bool MplsTeStandby::CollaboratorTimers::has_data() const
{
    for (std::size_t index=0; index<p2mp_timer.size(); index++)
    {
        if(p2mp_timer[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::CollaboratorTimers::has_operation() const
{
    for (std::size_t index=0; index<p2mp_timer.size(); index++)
    {
        if(p2mp_timer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::CollaboratorTimers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::CollaboratorTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collaborator-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::CollaboratorTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::CollaboratorTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2mp-timer")
    {
        for(auto const & c : p2mp_timer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::CollaboratorTimers::P2MpTimer>();
        c->parent = this;
        p2mp_timer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::CollaboratorTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : p2mp_timer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::CollaboratorTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::CollaboratorTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::CollaboratorTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-timer")
        return true;
    return false;
}

MplsTeStandby::CollaboratorTimers::P2MpTimer::P2MpTimer()
    :
    duration{YType::uint32, "duration"},
    expiry_time{YType::uint32, "expiry-time"},
    is_running{YType::boolean, "is-running"},
    start_time{YType::uint32, "start-time"},
    stop_time{YType::uint32, "stop-time"},
    timer_name{YType::str, "timer-name"},
    timer_type{YType::enumeration, "timer-type"}
{

    yang_name = "p2mp-timer"; yang_parent_name = "collaborator-timers"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::CollaboratorTimers::P2MpTimer::~P2MpTimer()
{
}

bool MplsTeStandby::CollaboratorTimers::P2MpTimer::has_data() const
{
    return duration.is_set
	|| expiry_time.is_set
	|| is_running.is_set
	|| start_time.is_set
	|| stop_time.is_set
	|| timer_name.is_set
	|| timer_type.is_set;
}

bool MplsTeStandby::CollaboratorTimers::P2MpTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(expiry_time.yfilter)
	|| ydk::is_set(is_running.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(stop_time.yfilter)
	|| ydk::is_set(timer_name.yfilter)
	|| ydk::is_set(timer_type.yfilter);
}

std::string MplsTeStandby::CollaboratorTimers::P2MpTimer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/collaborator-timers/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::CollaboratorTimers::P2MpTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::CollaboratorTimers::P2MpTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (expiry_time.is_set || is_set(expiry_time.yfilter)) leaf_name_data.push_back(expiry_time.get_name_leafdata());
    if (is_running.is_set || is_set(is_running.yfilter)) leaf_name_data.push_back(is_running.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (stop_time.is_set || is_set(stop_time.yfilter)) leaf_name_data.push_back(stop_time.get_name_leafdata());
    if (timer_name.is_set || is_set(timer_name.yfilter)) leaf_name_data.push_back(timer_name.get_name_leafdata());
    if (timer_type.is_set || is_set(timer_type.yfilter)) leaf_name_data.push_back(timer_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::CollaboratorTimers::P2MpTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::CollaboratorTimers::P2MpTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::CollaboratorTimers::P2MpTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-time")
    {
        expiry_time = value;
        expiry_time.value_namespace = name_space;
        expiry_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-running")
    {
        is_running = value;
        is_running.value_namespace = name_space;
        is_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-time")
    {
        stop_time = value;
        stop_time.value_namespace = name_space;
        stop_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-name")
    {
        timer_name = value;
        timer_name.value_namespace = name_space;
        timer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-type")
    {
        timer_type = value;
        timer_type.value_namespace = name_space;
        timer_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::CollaboratorTimers::P2MpTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "expiry-time")
    {
        expiry_time.yfilter = yfilter;
    }
    if(value_path == "is-running")
    {
        is_running.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "stop-time")
    {
        stop_time.yfilter = yfilter;
    }
    if(value_path == "timer-name")
    {
        timer_name.yfilter = yfilter;
    }
    if(value_path == "timer-type")
    {
        timer_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::CollaboratorTimers::P2MpTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "expiry-time" || name == "is-running" || name == "start-time" || name == "stop-time" || name == "timer-name" || name == "timer-type")
        return true;
    return false;
}

MplsTeStandby::DiffServTeClasses::DiffServTeClasses()
{

    yang_name = "diff-serv-te-classes"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::DiffServTeClasses::~DiffServTeClasses()
{
}

bool MplsTeStandby::DiffServTeClasses::has_data() const
{
    for (std::size_t index=0; index<te_class.size(); index++)
    {
        if(te_class[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::DiffServTeClasses::has_operation() const
{
    for (std::size_t index=0; index<te_class.size(); index++)
    {
        if(te_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::DiffServTeClasses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::DiffServTeClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diff-serv-te-classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::DiffServTeClasses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::DiffServTeClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-class")
    {
        for(auto const & c : te_class)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::DiffServTeClasses::TeClass>();
        c->parent = this;
        te_class.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::DiffServTeClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : te_class)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::DiffServTeClasses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::DiffServTeClasses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::DiffServTeClasses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-class")
        return true;
    return false;
}

MplsTeStandby::DiffServTeClasses::TeClass::TeClass()
    :
    class_number{YType::uint8, "class-number"},
    class_status{YType::enumeration, "class-status"},
    class_type{YType::uint8, "class-type"},
    priority{YType::uint8, "priority"}
{

    yang_name = "te-class"; yang_parent_name = "diff-serv-te-classes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::DiffServTeClasses::TeClass::~TeClass()
{
}

bool MplsTeStandby::DiffServTeClasses::TeClass::has_data() const
{
    return class_number.is_set
	|| class_status.is_set
	|| class_type.is_set
	|| priority.is_set;
}

bool MplsTeStandby::DiffServTeClasses::TeClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_number.yfilter)
	|| ydk::is_set(class_status.yfilter)
	|| ydk::is_set(class_type.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string MplsTeStandby::DiffServTeClasses::TeClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/diff-serv-te-classes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::DiffServTeClasses::TeClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::DiffServTeClasses::TeClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_number.is_set || is_set(class_number.yfilter)) leaf_name_data.push_back(class_number.get_name_leafdata());
    if (class_status.is_set || is_set(class_status.yfilter)) leaf_name_data.push_back(class_status.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.yfilter)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::DiffServTeClasses::TeClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::DiffServTeClasses::TeClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::DiffServTeClasses::TeClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-number")
    {
        class_number = value;
        class_number.value_namespace = name_space;
        class_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-status")
    {
        class_status = value;
        class_status.value_namespace = name_space;
        class_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-type")
    {
        class_type = value;
        class_type.value_namespace = name_space;
        class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::DiffServTeClasses::TeClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-number")
    {
        class_number.yfilter = yfilter;
    }
    if(value_path == "class-status")
    {
        class_status.yfilter = yfilter;
    }
    if(value_path == "class-type")
    {
        class_type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool MplsTeStandby::DiffServTeClasses::TeClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-number" || name == "class-status" || name == "class-type" || name == "priority")
        return true;
    return false;
}

MplsTeStandby::FastReroute::FastReroute()
    :
    backup_tunnels(std::make_shared<MplsTeStandby::FastReroute::BackupTunnels>())
	,promotion(std::make_shared<MplsTeStandby::FastReroute::Promotion>())
	,protected_interfaces(std::make_shared<MplsTeStandby::FastReroute::ProtectedInterfaces>())
	,protections(std::make_shared<MplsTeStandby::FastReroute::Protections>())
{
    backup_tunnels->parent = this;
    promotion->parent = this;
    protected_interfaces->parent = this;
    protections->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::FastReroute::~FastReroute()
{
}

bool MplsTeStandby::FastReroute::has_data() const
{
    return (backup_tunnels !=  nullptr && backup_tunnels->has_data())
	|| (promotion !=  nullptr && promotion->has_data())
	|| (protected_interfaces !=  nullptr && protected_interfaces->has_data())
	|| (protections !=  nullptr && protections->has_data());
}

bool MplsTeStandby::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| (backup_tunnels !=  nullptr && backup_tunnels->has_operation())
	|| (promotion !=  nullptr && promotion->has_operation())
	|| (protected_interfaces !=  nullptr && protected_interfaces->has_operation())
	|| (protections !=  nullptr && protections->has_operation());
}

std::string MplsTeStandby::FastReroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-tunnels")
    {
        if(backup_tunnels == nullptr)
        {
            backup_tunnels = std::make_shared<MplsTeStandby::FastReroute::BackupTunnels>();
        }
        return backup_tunnels;
    }

    if(child_yang_name == "promotion")
    {
        if(promotion == nullptr)
        {
            promotion = std::make_shared<MplsTeStandby::FastReroute::Promotion>();
        }
        return promotion;
    }

    if(child_yang_name == "protected-interfaces")
    {
        if(protected_interfaces == nullptr)
        {
            protected_interfaces = std::make_shared<MplsTeStandby::FastReroute::ProtectedInterfaces>();
        }
        return protected_interfaces;
    }

    if(child_yang_name == "protections")
    {
        if(protections == nullptr)
        {
            protections = std::make_shared<MplsTeStandby::FastReroute::Protections>();
        }
        return protections;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_tunnels != nullptr)
    {
        children["backup-tunnels"] = backup_tunnels;
    }

    if(promotion != nullptr)
    {
        children["promotion"] = promotion;
    }

    if(protected_interfaces != nullptr)
    {
        children["protected-interfaces"] = protected_interfaces;
    }

    if(protections != nullptr)
    {
        children["protections"] = protections;
    }

    return children;
}

void MplsTeStandby::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-tunnels" || name == "promotion" || name == "protected-interfaces" || name == "protections")
        return true;
    return false;
}

MplsTeStandby::FastReroute::BackupTunnels::BackupTunnels()
{

    yang_name = "backup-tunnels"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::FastReroute::BackupTunnels::~BackupTunnels()
{
}

bool MplsTeStandby::FastReroute::BackupTunnels::has_data() const
{
    for (std::size_t index=0; index<backup_tunnel.size(); index++)
    {
        if(backup_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::FastReroute::BackupTunnels::has_operation() const
{
    for (std::size_t index=0; index<backup_tunnel.size(); index++)
    {
        if(backup_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::FastReroute::BackupTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FastReroute::BackupTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FastReroute::BackupTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::FastReroute::BackupTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-tunnel")
    {
        for(auto const & c : backup_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel>();
        c->parent = this;
        backup_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::FastReroute::BackupTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::FastReroute::BackupTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::FastReroute::BackupTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::FastReroute::BackupTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-tunnel")
        return true;
    return false;
}

MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::BackupTunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    interface_name{YType::str, "interface-name"},
    backup_status{YType::enumeration, "backup-status"},
    backup_tunnel_id{YType::uint32, "backup-tunnel-id"},
    backup_tunnel_name_xr{YType::str, "backup-tunnel-name-xr"},
    backup_type{YType::enumeration, "backup-type"},
    backup_usage{YType::enumeration, "backup-usage"},
    bandwidth{YType::uint32, "bandwidth"},
    bandwidth_limit_type{YType::enumeration, "bandwidth-limit-type"},
    bandwidth_pool_type{YType::enumeration, "bandwidth-pool-type"},
    connection_status{YType::enumeration, "connection-status"},
    destination_address{YType::str, "destination-address"},
    frr_active_ls_ps{YType::uint32, "frr-active-ls-ps"},
    frr_active_soft_preempted_ls_ps{YType::uint32, "frr-active-soft-preempted-ls-ps"},
    general_status{YType::enumeration, "general-status"},
    has_attribute_set{YType::boolean, "has-attribute-set"},
    in_use_bandwidth{YType::uint32, "in-use-bandwidth"},
    is_attribute_set_in_db{YType::boolean, "is-attribute-set-in-db"},
    ls_ps{YType::uint32, "ls-ps"},
    output_interface_name{YType::str, "output-interface-name"},
    prot_interface_autobackup_config{YType::enumeration, "prot-interface-autobackup-config"},
    prot_interface_srlg_config{YType::enumeration, "prot-interface-srlg-config"},
    recreate_remaining_time{YType::uint32, "recreate-remaining-time"},
    recreate_timer_is_running{YType::boolean, "recreate-timer-is-running"},
    s2_ls{YType::uint32, "s2-ls"},
    s2l_families{YType::uint32, "s2l-families"},
    soft_preempted_in_use_bandwidth{YType::uint32, "soft-preempted-in-use-bandwidth"},
    source_address{YType::str, "source-address"},
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_instance{YType::uint32, "tunnel-instance"}
{

    yang_name = "backup-tunnel"; yang_parent_name = "backup-tunnels"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::~BackupTunnel()
{
}

bool MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::has_data() const
{
    return tunnel_name.is_set
	|| interface_name.is_set
	|| backup_status.is_set
	|| backup_tunnel_id.is_set
	|| backup_tunnel_name_xr.is_set
	|| backup_type.is_set
	|| backup_usage.is_set
	|| bandwidth.is_set
	|| bandwidth_limit_type.is_set
	|| bandwidth_pool_type.is_set
	|| connection_status.is_set
	|| destination_address.is_set
	|| frr_active_ls_ps.is_set
	|| frr_active_soft_preempted_ls_ps.is_set
	|| general_status.is_set
	|| has_attribute_set.is_set
	|| in_use_bandwidth.is_set
	|| is_attribute_set_in_db.is_set
	|| ls_ps.is_set
	|| output_interface_name.is_set
	|| prot_interface_autobackup_config.is_set
	|| prot_interface_srlg_config.is_set
	|| recreate_remaining_time.is_set
	|| recreate_timer_is_running.is_set
	|| s2_ls.is_set
	|| s2l_families.is_set
	|| soft_preempted_in_use_bandwidth.is_set
	|| source_address.is_set
	|| tunnel_attribute_set_name.is_set
	|| tunnel_instance.is_set;
}

bool MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(backup_status.yfilter)
	|| ydk::is_set(backup_tunnel_id.yfilter)
	|| ydk::is_set(backup_tunnel_name_xr.yfilter)
	|| ydk::is_set(backup_type.yfilter)
	|| ydk::is_set(backup_usage.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(bandwidth_limit_type.yfilter)
	|| ydk::is_set(bandwidth_pool_type.yfilter)
	|| ydk::is_set(connection_status.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(frr_active_ls_ps.yfilter)
	|| ydk::is_set(frr_active_soft_preempted_ls_ps.yfilter)
	|| ydk::is_set(general_status.yfilter)
	|| ydk::is_set(has_attribute_set.yfilter)
	|| ydk::is_set(in_use_bandwidth.yfilter)
	|| ydk::is_set(is_attribute_set_in_db.yfilter)
	|| ydk::is_set(ls_ps.yfilter)
	|| ydk::is_set(output_interface_name.yfilter)
	|| ydk::is_set(prot_interface_autobackup_config.yfilter)
	|| ydk::is_set(prot_interface_srlg_config.yfilter)
	|| ydk::is_set(recreate_remaining_time.yfilter)
	|| ydk::is_set(recreate_timer_is_running.yfilter)
	|| ydk::is_set(s2_ls.yfilter)
	|| ydk::is_set(s2l_families.yfilter)
	|| ydk::is_set(soft_preempted_in_use_bandwidth.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(tunnel_instance.yfilter);
}

std::string MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/fast-reroute/backup-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel" <<"[tunnel-name='" <<tunnel_name <<"']" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (backup_status.is_set || is_set(backup_status.yfilter)) leaf_name_data.push_back(backup_status.get_name_leafdata());
    if (backup_tunnel_id.is_set || is_set(backup_tunnel_id.yfilter)) leaf_name_data.push_back(backup_tunnel_id.get_name_leafdata());
    if (backup_tunnel_name_xr.is_set || is_set(backup_tunnel_name_xr.yfilter)) leaf_name_data.push_back(backup_tunnel_name_xr.get_name_leafdata());
    if (backup_type.is_set || is_set(backup_type.yfilter)) leaf_name_data.push_back(backup_type.get_name_leafdata());
    if (backup_usage.is_set || is_set(backup_usage.yfilter)) leaf_name_data.push_back(backup_usage.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (bandwidth_limit_type.is_set || is_set(bandwidth_limit_type.yfilter)) leaf_name_data.push_back(bandwidth_limit_type.get_name_leafdata());
    if (bandwidth_pool_type.is_set || is_set(bandwidth_pool_type.yfilter)) leaf_name_data.push_back(bandwidth_pool_type.get_name_leafdata());
    if (connection_status.is_set || is_set(connection_status.yfilter)) leaf_name_data.push_back(connection_status.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (frr_active_ls_ps.is_set || is_set(frr_active_ls_ps.yfilter)) leaf_name_data.push_back(frr_active_ls_ps.get_name_leafdata());
    if (frr_active_soft_preempted_ls_ps.is_set || is_set(frr_active_soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(frr_active_soft_preempted_ls_ps.get_name_leafdata());
    if (general_status.is_set || is_set(general_status.yfilter)) leaf_name_data.push_back(general_status.get_name_leafdata());
    if (has_attribute_set.is_set || is_set(has_attribute_set.yfilter)) leaf_name_data.push_back(has_attribute_set.get_name_leafdata());
    if (in_use_bandwidth.is_set || is_set(in_use_bandwidth.yfilter)) leaf_name_data.push_back(in_use_bandwidth.get_name_leafdata());
    if (is_attribute_set_in_db.is_set || is_set(is_attribute_set_in_db.yfilter)) leaf_name_data.push_back(is_attribute_set_in_db.get_name_leafdata());
    if (ls_ps.is_set || is_set(ls_ps.yfilter)) leaf_name_data.push_back(ls_ps.get_name_leafdata());
    if (output_interface_name.is_set || is_set(output_interface_name.yfilter)) leaf_name_data.push_back(output_interface_name.get_name_leafdata());
    if (prot_interface_autobackup_config.is_set || is_set(prot_interface_autobackup_config.yfilter)) leaf_name_data.push_back(prot_interface_autobackup_config.get_name_leafdata());
    if (prot_interface_srlg_config.is_set || is_set(prot_interface_srlg_config.yfilter)) leaf_name_data.push_back(prot_interface_srlg_config.get_name_leafdata());
    if (recreate_remaining_time.is_set || is_set(recreate_remaining_time.yfilter)) leaf_name_data.push_back(recreate_remaining_time.get_name_leafdata());
    if (recreate_timer_is_running.is_set || is_set(recreate_timer_is_running.yfilter)) leaf_name_data.push_back(recreate_timer_is_running.get_name_leafdata());
    if (s2_ls.is_set || is_set(s2_ls.yfilter)) leaf_name_data.push_back(s2_ls.get_name_leafdata());
    if (s2l_families.is_set || is_set(s2l_families.yfilter)) leaf_name_data.push_back(s2l_families.get_name_leafdata());
    if (soft_preempted_in_use_bandwidth.is_set || is_set(soft_preempted_in_use_bandwidth.yfilter)) leaf_name_data.push_back(soft_preempted_in_use_bandwidth.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_instance.is_set || is_set(tunnel_instance.yfilter)) leaf_name_data.push_back(tunnel_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-status")
    {
        backup_status = value;
        backup_status.value_namespace = name_space;
        backup_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-id")
    {
        backup_tunnel_id = value;
        backup_tunnel_id.value_namespace = name_space;
        backup_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-name-xr")
    {
        backup_tunnel_name_xr = value;
        backup_tunnel_name_xr.value_namespace = name_space;
        backup_tunnel_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-type")
    {
        backup_type = value;
        backup_type.value_namespace = name_space;
        backup_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-usage")
    {
        backup_usage = value;
        backup_usage.value_namespace = name_space;
        backup_usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type = value;
        bandwidth_limit_type.value_namespace = name_space;
        bandwidth_limit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type = value;
        bandwidth_pool_type.value_namespace = name_space;
        bandwidth_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-status")
    {
        connection_status = value;
        connection_status.value_namespace = name_space;
        connection_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-active-ls-ps")
    {
        frr_active_ls_ps = value;
        frr_active_ls_ps.value_namespace = name_space;
        frr_active_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-active-soft-preempted-ls-ps")
    {
        frr_active_soft_preempted_ls_ps = value;
        frr_active_soft_preempted_ls_ps.value_namespace = name_space;
        frr_active_soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-status")
    {
        general_status = value;
        general_status.value_namespace = name_space;
        general_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set = value;
        has_attribute_set.value_namespace = name_space;
        has_attribute_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use-bandwidth")
    {
        in_use_bandwidth = value;
        in_use_bandwidth.value_namespace = name_space;
        in_use_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db = value;
        is_attribute_set_in_db.value_namespace = name_space;
        is_attribute_set_in_db.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ps")
    {
        ls_ps = value;
        ls_ps.value_namespace = name_space;
        ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name = value;
        output_interface_name.value_namespace = name_space;
        output_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prot-interface-autobackup-config")
    {
        prot_interface_autobackup_config = value;
        prot_interface_autobackup_config.value_namespace = name_space;
        prot_interface_autobackup_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prot-interface-srlg-config")
    {
        prot_interface_srlg_config = value;
        prot_interface_srlg_config.value_namespace = name_space;
        prot_interface_srlg_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recreate-remaining-time")
    {
        recreate_remaining_time = value;
        recreate_remaining_time.value_namespace = name_space;
        recreate_remaining_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recreate-timer-is-running")
    {
        recreate_timer_is_running = value;
        recreate_timer_is_running.value_namespace = name_space;
        recreate_timer_is_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2-ls")
    {
        s2_ls = value;
        s2_ls.value_namespace = name_space;
        s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-families")
    {
        s2l_families = value;
        s2l_families.value_namespace = name_space;
        s2l_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-in-use-bandwidth")
    {
        soft_preempted_in_use_bandwidth = value;
        soft_preempted_in_use_bandwidth.value_namespace = name_space;
        soft_preempted_in_use_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
        tunnel_attribute_set_name.value_namespace = name_space;
        tunnel_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance = value;
        tunnel_instance.value_namespace = name_space;
        tunnel_instance.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-status")
    {
        backup_status.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-id")
    {
        backup_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-name-xr")
    {
        backup_tunnel_name_xr.yfilter = yfilter;
    }
    if(value_path == "backup-type")
    {
        backup_type.yfilter = yfilter;
    }
    if(value_path == "backup-usage")
    {
        backup_usage.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type.yfilter = yfilter;
    }
    if(value_path == "connection-status")
    {
        connection_status.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "frr-active-ls-ps")
    {
        frr_active_ls_ps.yfilter = yfilter;
    }
    if(value_path == "frr-active-soft-preempted-ls-ps")
    {
        frr_active_soft_preempted_ls_ps.yfilter = yfilter;
    }
    if(value_path == "general-status")
    {
        general_status.yfilter = yfilter;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set.yfilter = yfilter;
    }
    if(value_path == "in-use-bandwidth")
    {
        in_use_bandwidth.yfilter = yfilter;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db.yfilter = yfilter;
    }
    if(value_path == "ls-ps")
    {
        ls_ps.yfilter = yfilter;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name.yfilter = yfilter;
    }
    if(value_path == "prot-interface-autobackup-config")
    {
        prot_interface_autobackup_config.yfilter = yfilter;
    }
    if(value_path == "prot-interface-srlg-config")
    {
        prot_interface_srlg_config.yfilter = yfilter;
    }
    if(value_path == "recreate-remaining-time")
    {
        recreate_remaining_time.yfilter = yfilter;
    }
    if(value_path == "recreate-timer-is-running")
    {
        recreate_timer_is_running.yfilter = yfilter;
    }
    if(value_path == "s2-ls")
    {
        s2_ls.yfilter = yfilter;
    }
    if(value_path == "s2l-families")
    {
        s2l_families.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-in-use-bandwidth")
    {
        soft_preempted_in_use_bandwidth.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance.yfilter = yfilter;
    }
}

bool MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-name" || name == "interface-name" || name == "backup-status" || name == "backup-tunnel-id" || name == "backup-tunnel-name-xr" || name == "backup-type" || name == "backup-usage" || name == "bandwidth" || name == "bandwidth-limit-type" || name == "bandwidth-pool-type" || name == "connection-status" || name == "destination-address" || name == "frr-active-ls-ps" || name == "frr-active-soft-preempted-ls-ps" || name == "general-status" || name == "has-attribute-set" || name == "in-use-bandwidth" || name == "is-attribute-set-in-db" || name == "ls-ps" || name == "output-interface-name" || name == "prot-interface-autobackup-config" || name == "prot-interface-srlg-config" || name == "recreate-remaining-time" || name == "recreate-timer-is-running" || name == "s2-ls" || name == "s2l-families" || name == "soft-preempted-in-use-bandwidth" || name == "source-address" || name == "tunnel-attribute-set-name" || name == "tunnel-instance")
        return true;
    return false;
}

MplsTeStandby::FastReroute::Promotion::Promotion()
    :
    is_configured{YType::boolean, "is-configured"},
    promotion_period{YType::uint32, "promotion-period"},
    remaining_time{YType::uint32, "remaining-time"}
{

    yang_name = "promotion"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::FastReroute::Promotion::~Promotion()
{
}

bool MplsTeStandby::FastReroute::Promotion::has_data() const
{
    return is_configured.is_set
	|| promotion_period.is_set
	|| remaining_time.is_set;
}

bool MplsTeStandby::FastReroute::Promotion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_configured.yfilter)
	|| ydk::is_set(promotion_period.yfilter)
	|| ydk::is_set(remaining_time.yfilter);
}

std::string MplsTeStandby::FastReroute::Promotion::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FastReroute::Promotion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "promotion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FastReroute::Promotion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_configured.is_set || is_set(is_configured.yfilter)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (promotion_period.is_set || is_set(promotion_period.yfilter)) leaf_name_data.push_back(promotion_period.get_name_leafdata());
    if (remaining_time.is_set || is_set(remaining_time.yfilter)) leaf_name_data.push_back(remaining_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::FastReroute::Promotion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::FastReroute::Promotion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::FastReroute::Promotion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-configured")
    {
        is_configured = value;
        is_configured.value_namespace = name_space;
        is_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "promotion-period")
    {
        promotion_period = value;
        promotion_period.value_namespace = name_space;
        promotion_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-time")
    {
        remaining_time = value;
        remaining_time.value_namespace = name_space;
        remaining_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::FastReroute::Promotion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-configured")
    {
        is_configured.yfilter = yfilter;
    }
    if(value_path == "promotion-period")
    {
        promotion_period.yfilter = yfilter;
    }
    if(value_path == "remaining-time")
    {
        remaining_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::FastReroute::Promotion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-configured" || name == "promotion-period" || name == "remaining-time")
        return true;
    return false;
}

MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterfaces()
{

    yang_name = "protected-interfaces"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::FastReroute::ProtectedInterfaces::~ProtectedInterfaces()
{
}

bool MplsTeStandby::FastReroute::ProtectedInterfaces::has_data() const
{
    for (std::size_t index=0; index<protected_interface.size(); index++)
    {
        if(protected_interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::FastReroute::ProtectedInterfaces::has_operation() const
{
    for (std::size_t index=0; index<protected_interface.size(); index++)
    {
        if(protected_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::FastReroute::ProtectedInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FastReroute::ProtectedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FastReroute::ProtectedInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::FastReroute::ProtectedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protected-interface")
    {
        for(auto const & c : protected_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface>();
        c->parent = this;
        protected_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::FastReroute::ProtectedInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protected_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::FastReroute::ProtectedInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::FastReroute::ProtectedInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::FastReroute::ProtectedInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-interface")
        return true;
    return false;
}

MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::ProtectedInterface()
    :
    interface_name{YType::str, "interface-name"},
    backup_tunnel_name{YType::str, "backup-tunnel-name"},
    backup_status{YType::enumeration, "backup-status"},
    backup_tunnel_id{YType::uint32, "backup-tunnel-id"},
    backup_tunnel_name_xr{YType::str, "backup-tunnel-name-xr"},
    backup_type{YType::enumeration, "backup-type"},
    backup_usage{YType::enumeration, "backup-usage"},
    bandwidth{YType::uint32, "bandwidth"},
    bandwidth_limit_type{YType::enumeration, "bandwidth-limit-type"},
    bandwidth_pool_type{YType::enumeration, "bandwidth-pool-type"},
    connection_status{YType::enumeration, "connection-status"},
    destination_address{YType::str, "destination-address"},
    frr_active_ls_ps{YType::uint32, "frr-active-ls-ps"},
    frr_active_soft_preempted_ls_ps{YType::uint32, "frr-active-soft-preempted-ls-ps"},
    general_status{YType::enumeration, "general-status"},
    has_attribute_set{YType::boolean, "has-attribute-set"},
    in_use_bandwidth{YType::uint32, "in-use-bandwidth"},
    is_attribute_set_in_db{YType::boolean, "is-attribute-set-in-db"},
    ls_ps{YType::uint32, "ls-ps"},
    output_interface_name{YType::str, "output-interface-name"},
    prot_interface_autobackup_config{YType::enumeration, "prot-interface-autobackup-config"},
    prot_interface_srlg_config{YType::enumeration, "prot-interface-srlg-config"},
    recreate_remaining_time{YType::uint32, "recreate-remaining-time"},
    recreate_timer_is_running{YType::boolean, "recreate-timer-is-running"},
    s2_ls{YType::uint32, "s2-ls"},
    s2l_families{YType::uint32, "s2l-families"},
    soft_preempted_in_use_bandwidth{YType::uint32, "soft-preempted-in-use-bandwidth"},
    source_address{YType::str, "source-address"},
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_instance{YType::uint32, "tunnel-instance"}
{

    yang_name = "protected-interface"; yang_parent_name = "protected-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::~ProtectedInterface()
{
}

bool MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::has_data() const
{
    return interface_name.is_set
	|| backup_tunnel_name.is_set
	|| backup_status.is_set
	|| backup_tunnel_id.is_set
	|| backup_tunnel_name_xr.is_set
	|| backup_type.is_set
	|| backup_usage.is_set
	|| bandwidth.is_set
	|| bandwidth_limit_type.is_set
	|| bandwidth_pool_type.is_set
	|| connection_status.is_set
	|| destination_address.is_set
	|| frr_active_ls_ps.is_set
	|| frr_active_soft_preempted_ls_ps.is_set
	|| general_status.is_set
	|| has_attribute_set.is_set
	|| in_use_bandwidth.is_set
	|| is_attribute_set_in_db.is_set
	|| ls_ps.is_set
	|| output_interface_name.is_set
	|| prot_interface_autobackup_config.is_set
	|| prot_interface_srlg_config.is_set
	|| recreate_remaining_time.is_set
	|| recreate_timer_is_running.is_set
	|| s2_ls.is_set
	|| s2l_families.is_set
	|| soft_preempted_in_use_bandwidth.is_set
	|| source_address.is_set
	|| tunnel_attribute_set_name.is_set
	|| tunnel_instance.is_set;
}

bool MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(backup_tunnel_name.yfilter)
	|| ydk::is_set(backup_status.yfilter)
	|| ydk::is_set(backup_tunnel_id.yfilter)
	|| ydk::is_set(backup_tunnel_name_xr.yfilter)
	|| ydk::is_set(backup_type.yfilter)
	|| ydk::is_set(backup_usage.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(bandwidth_limit_type.yfilter)
	|| ydk::is_set(bandwidth_pool_type.yfilter)
	|| ydk::is_set(connection_status.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(frr_active_ls_ps.yfilter)
	|| ydk::is_set(frr_active_soft_preempted_ls_ps.yfilter)
	|| ydk::is_set(general_status.yfilter)
	|| ydk::is_set(has_attribute_set.yfilter)
	|| ydk::is_set(in_use_bandwidth.yfilter)
	|| ydk::is_set(is_attribute_set_in_db.yfilter)
	|| ydk::is_set(ls_ps.yfilter)
	|| ydk::is_set(output_interface_name.yfilter)
	|| ydk::is_set(prot_interface_autobackup_config.yfilter)
	|| ydk::is_set(prot_interface_srlg_config.yfilter)
	|| ydk::is_set(recreate_remaining_time.yfilter)
	|| ydk::is_set(recreate_timer_is_running.yfilter)
	|| ydk::is_set(s2_ls.yfilter)
	|| ydk::is_set(s2l_families.yfilter)
	|| ydk::is_set(soft_preempted_in_use_bandwidth.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(tunnel_instance.yfilter);
}

std::string MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/fast-reroute/protected-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface" <<"[interface-name='" <<interface_name <<"']" <<"[backup-tunnel-name='" <<backup_tunnel_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.yfilter)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());
    if (backup_status.is_set || is_set(backup_status.yfilter)) leaf_name_data.push_back(backup_status.get_name_leafdata());
    if (backup_tunnel_id.is_set || is_set(backup_tunnel_id.yfilter)) leaf_name_data.push_back(backup_tunnel_id.get_name_leafdata());
    if (backup_tunnel_name_xr.is_set || is_set(backup_tunnel_name_xr.yfilter)) leaf_name_data.push_back(backup_tunnel_name_xr.get_name_leafdata());
    if (backup_type.is_set || is_set(backup_type.yfilter)) leaf_name_data.push_back(backup_type.get_name_leafdata());
    if (backup_usage.is_set || is_set(backup_usage.yfilter)) leaf_name_data.push_back(backup_usage.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (bandwidth_limit_type.is_set || is_set(bandwidth_limit_type.yfilter)) leaf_name_data.push_back(bandwidth_limit_type.get_name_leafdata());
    if (bandwidth_pool_type.is_set || is_set(bandwidth_pool_type.yfilter)) leaf_name_data.push_back(bandwidth_pool_type.get_name_leafdata());
    if (connection_status.is_set || is_set(connection_status.yfilter)) leaf_name_data.push_back(connection_status.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (frr_active_ls_ps.is_set || is_set(frr_active_ls_ps.yfilter)) leaf_name_data.push_back(frr_active_ls_ps.get_name_leafdata());
    if (frr_active_soft_preempted_ls_ps.is_set || is_set(frr_active_soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(frr_active_soft_preempted_ls_ps.get_name_leafdata());
    if (general_status.is_set || is_set(general_status.yfilter)) leaf_name_data.push_back(general_status.get_name_leafdata());
    if (has_attribute_set.is_set || is_set(has_attribute_set.yfilter)) leaf_name_data.push_back(has_attribute_set.get_name_leafdata());
    if (in_use_bandwidth.is_set || is_set(in_use_bandwidth.yfilter)) leaf_name_data.push_back(in_use_bandwidth.get_name_leafdata());
    if (is_attribute_set_in_db.is_set || is_set(is_attribute_set_in_db.yfilter)) leaf_name_data.push_back(is_attribute_set_in_db.get_name_leafdata());
    if (ls_ps.is_set || is_set(ls_ps.yfilter)) leaf_name_data.push_back(ls_ps.get_name_leafdata());
    if (output_interface_name.is_set || is_set(output_interface_name.yfilter)) leaf_name_data.push_back(output_interface_name.get_name_leafdata());
    if (prot_interface_autobackup_config.is_set || is_set(prot_interface_autobackup_config.yfilter)) leaf_name_data.push_back(prot_interface_autobackup_config.get_name_leafdata());
    if (prot_interface_srlg_config.is_set || is_set(prot_interface_srlg_config.yfilter)) leaf_name_data.push_back(prot_interface_srlg_config.get_name_leafdata());
    if (recreate_remaining_time.is_set || is_set(recreate_remaining_time.yfilter)) leaf_name_data.push_back(recreate_remaining_time.get_name_leafdata());
    if (recreate_timer_is_running.is_set || is_set(recreate_timer_is_running.yfilter)) leaf_name_data.push_back(recreate_timer_is_running.get_name_leafdata());
    if (s2_ls.is_set || is_set(s2_ls.yfilter)) leaf_name_data.push_back(s2_ls.get_name_leafdata());
    if (s2l_families.is_set || is_set(s2l_families.yfilter)) leaf_name_data.push_back(s2l_families.get_name_leafdata());
    if (soft_preempted_in_use_bandwidth.is_set || is_set(soft_preempted_in_use_bandwidth.yfilter)) leaf_name_data.push_back(soft_preempted_in_use_bandwidth.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_instance.is_set || is_set(tunnel_instance.yfilter)) leaf_name_data.push_back(tunnel_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
        backup_tunnel_name.value_namespace = name_space;
        backup_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-status")
    {
        backup_status = value;
        backup_status.value_namespace = name_space;
        backup_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-id")
    {
        backup_tunnel_id = value;
        backup_tunnel_id.value_namespace = name_space;
        backup_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-name-xr")
    {
        backup_tunnel_name_xr = value;
        backup_tunnel_name_xr.value_namespace = name_space;
        backup_tunnel_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-type")
    {
        backup_type = value;
        backup_type.value_namespace = name_space;
        backup_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-usage")
    {
        backup_usage = value;
        backup_usage.value_namespace = name_space;
        backup_usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type = value;
        bandwidth_limit_type.value_namespace = name_space;
        bandwidth_limit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type = value;
        bandwidth_pool_type.value_namespace = name_space;
        bandwidth_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-status")
    {
        connection_status = value;
        connection_status.value_namespace = name_space;
        connection_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-active-ls-ps")
    {
        frr_active_ls_ps = value;
        frr_active_ls_ps.value_namespace = name_space;
        frr_active_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-active-soft-preempted-ls-ps")
    {
        frr_active_soft_preempted_ls_ps = value;
        frr_active_soft_preempted_ls_ps.value_namespace = name_space;
        frr_active_soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-status")
    {
        general_status = value;
        general_status.value_namespace = name_space;
        general_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set = value;
        has_attribute_set.value_namespace = name_space;
        has_attribute_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use-bandwidth")
    {
        in_use_bandwidth = value;
        in_use_bandwidth.value_namespace = name_space;
        in_use_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db = value;
        is_attribute_set_in_db.value_namespace = name_space;
        is_attribute_set_in_db.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ps")
    {
        ls_ps = value;
        ls_ps.value_namespace = name_space;
        ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name = value;
        output_interface_name.value_namespace = name_space;
        output_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prot-interface-autobackup-config")
    {
        prot_interface_autobackup_config = value;
        prot_interface_autobackup_config.value_namespace = name_space;
        prot_interface_autobackup_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prot-interface-srlg-config")
    {
        prot_interface_srlg_config = value;
        prot_interface_srlg_config.value_namespace = name_space;
        prot_interface_srlg_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recreate-remaining-time")
    {
        recreate_remaining_time = value;
        recreate_remaining_time.value_namespace = name_space;
        recreate_remaining_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recreate-timer-is-running")
    {
        recreate_timer_is_running = value;
        recreate_timer_is_running.value_namespace = name_space;
        recreate_timer_is_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2-ls")
    {
        s2_ls = value;
        s2_ls.value_namespace = name_space;
        s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-families")
    {
        s2l_families = value;
        s2l_families.value_namespace = name_space;
        s2l_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-in-use-bandwidth")
    {
        soft_preempted_in_use_bandwidth = value;
        soft_preempted_in_use_bandwidth.value_namespace = name_space;
        soft_preempted_in_use_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
        tunnel_attribute_set_name.value_namespace = name_space;
        tunnel_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance = value;
        tunnel_instance.value_namespace = name_space;
        tunnel_instance.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "backup-status")
    {
        backup_status.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-id")
    {
        backup_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-name-xr")
    {
        backup_tunnel_name_xr.yfilter = yfilter;
    }
    if(value_path == "backup-type")
    {
        backup_type.yfilter = yfilter;
    }
    if(value_path == "backup-usage")
    {
        backup_usage.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type.yfilter = yfilter;
    }
    if(value_path == "connection-status")
    {
        connection_status.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "frr-active-ls-ps")
    {
        frr_active_ls_ps.yfilter = yfilter;
    }
    if(value_path == "frr-active-soft-preempted-ls-ps")
    {
        frr_active_soft_preempted_ls_ps.yfilter = yfilter;
    }
    if(value_path == "general-status")
    {
        general_status.yfilter = yfilter;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set.yfilter = yfilter;
    }
    if(value_path == "in-use-bandwidth")
    {
        in_use_bandwidth.yfilter = yfilter;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db.yfilter = yfilter;
    }
    if(value_path == "ls-ps")
    {
        ls_ps.yfilter = yfilter;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name.yfilter = yfilter;
    }
    if(value_path == "prot-interface-autobackup-config")
    {
        prot_interface_autobackup_config.yfilter = yfilter;
    }
    if(value_path == "prot-interface-srlg-config")
    {
        prot_interface_srlg_config.yfilter = yfilter;
    }
    if(value_path == "recreate-remaining-time")
    {
        recreate_remaining_time.yfilter = yfilter;
    }
    if(value_path == "recreate-timer-is-running")
    {
        recreate_timer_is_running.yfilter = yfilter;
    }
    if(value_path == "s2-ls")
    {
        s2_ls.yfilter = yfilter;
    }
    if(value_path == "s2l-families")
    {
        s2l_families.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-in-use-bandwidth")
    {
        soft_preempted_in_use_bandwidth.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance.yfilter = yfilter;
    }
}

bool MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "backup-tunnel-name" || name == "backup-status" || name == "backup-tunnel-id" || name == "backup-tunnel-name-xr" || name == "backup-type" || name == "backup-usage" || name == "bandwidth" || name == "bandwidth-limit-type" || name == "bandwidth-pool-type" || name == "connection-status" || name == "destination-address" || name == "frr-active-ls-ps" || name == "frr-active-soft-preempted-ls-ps" || name == "general-status" || name == "has-attribute-set" || name == "in-use-bandwidth" || name == "is-attribute-set-in-db" || name == "ls-ps" || name == "output-interface-name" || name == "prot-interface-autobackup-config" || name == "prot-interface-srlg-config" || name == "recreate-remaining-time" || name == "recreate-timer-is-running" || name == "s2-ls" || name == "s2l-families" || name == "soft-preempted-in-use-bandwidth" || name == "source-address" || name == "tunnel-attribute-set-name" || name == "tunnel-instance")
        return true;
    return false;
}

MplsTeStandby::FastReroute::Protections::Protections()
{

    yang_name = "protections"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::FastReroute::Protections::~Protections()
{
}

bool MplsTeStandby::FastReroute::Protections::has_data() const
{
    for (std::size_t index=0; index<protection.size(); index++)
    {
        if(protection[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::FastReroute::Protections::has_operation() const
{
    for (std::size_t index=0; index<protection.size(); index++)
    {
        if(protection[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::FastReroute::Protections::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FastReroute::Protections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protections";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FastReroute::Protections::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::FastReroute::Protections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protection")
    {
        for(auto const & c : protection)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::FastReroute::Protections::Protection>();
        c->parent = this;
        protection.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::FastReroute::Protections::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protection)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::FastReroute::Protections::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::FastReroute::Protections::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::FastReroute::Protections::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection")
        return true;
    return false;
}

MplsTeStandby::FastReroute::Protections::Protection::Protection()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::int32, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsp_id{YType::int32, "lsp-id"},
    sub_group_id{YType::int32, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"},
    p2mp_id{YType::int32, "p2mp-id"},
    session_type{YType::int32, "session-type"},
    admin_status{YType::enumeration, "admin-status"},
    backup_bandwidth{YType::uint32, "backup-bandwidth"},
    backup_next_hop_address{YType::str, "backup-next-hop-address"},
    backup_status{YType::enumeration, "backup-status"},
    bandwidth_limit_type{YType::enumeration, "bandwidth-limit-type"},
    bandwidth_pool_type{YType::enumeration, "bandwidth-pool-type"},
    destination_address_xr{YType::str, "destination-address-xr"},
    extended_tunnel_id_xr{YType::str, "extended-tunnel-id-xr"},
    frr_output_interface{YType::str, "frr-output-interface"},
    frr_output_label{YType::uint32, "frr-output-label"},
    frr_output_tunnel_interface{YType::str, "frr-output-tunnel-interface"},
    inbound_frr_state{YType::enumeration, "inbound-frr-state"},
    input_label{YType::uint32, "input-label"},
    is_frr_requested{YType::boolean, "is-frr-requested"},
    is_p2mp_tunnel{YType::boolean, "is-p2mp-tunnel"},
    is_signalled{YType::boolean, "is-signalled"},
    lsp_bandwidth_type{YType::enumeration, "lsp-bandwidth-type"},
    next_hop_address{YType::str, "next-hop-address"},
    operation_status{YType::enumeration, "operation-status"},
    original_input_interface{YType::str, "original-input-interface"},
    outbound_frr_state{YType::enumeration, "outbound-frr-state"},
    output_interface_lsp{YType::str, "output-interface-lsp"},
    output_label{YType::uint32, "output-label"},
    p2mp_id_xr{YType::uint32, "p2mp-id-xr"},
    previous_hop_address{YType::str, "previous-hop-address"},
    role{YType::enumeration, "role"},
    sharing_type{YType::enumeration, "sharing-type"},
    source_address_xr{YType::str, "source-address-xr"},
    sub_group_id_xr{YType::uint16, "sub-group-id-xr"},
    sub_group_original_id{YType::str, "sub-group-original-id"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"},
    tunnel_instance{YType::uint32, "tunnel-instance"},
    tunnel_name{YType::str, "tunnel-name"}
{

    yang_name = "protection"; yang_parent_name = "protections"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::FastReroute::Protections::Protection::~Protection()
{
}

bool MplsTeStandby::FastReroute::Protections::Protection::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| lsp_id.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| p2mp_id.is_set
	|| session_type.is_set
	|| admin_status.is_set
	|| backup_bandwidth.is_set
	|| backup_next_hop_address.is_set
	|| backup_status.is_set
	|| bandwidth_limit_type.is_set
	|| bandwidth_pool_type.is_set
	|| destination_address_xr.is_set
	|| extended_tunnel_id_xr.is_set
	|| frr_output_interface.is_set
	|| frr_output_label.is_set
	|| frr_output_tunnel_interface.is_set
	|| inbound_frr_state.is_set
	|| input_label.is_set
	|| is_frr_requested.is_set
	|| is_p2mp_tunnel.is_set
	|| is_signalled.is_set
	|| lsp_bandwidth_type.is_set
	|| next_hop_address.is_set
	|| operation_status.is_set
	|| original_input_interface.is_set
	|| outbound_frr_state.is_set
	|| output_interface_lsp.is_set
	|| output_label.is_set
	|| p2mp_id_xr.is_set
	|| previous_hop_address.is_set
	|| role.is_set
	|| sharing_type.is_set
	|| source_address_xr.is_set
	|| sub_group_id_xr.is_set
	|| sub_group_original_id.is_set
	|| tunnel_id_xr.is_set
	|| tunnel_instance.is_set
	|| tunnel_name.is_set;
}

bool MplsTeStandby::FastReroute::Protections::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(backup_bandwidth.yfilter)
	|| ydk::is_set(backup_next_hop_address.yfilter)
	|| ydk::is_set(backup_status.yfilter)
	|| ydk::is_set(bandwidth_limit_type.yfilter)
	|| ydk::is_set(bandwidth_pool_type.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(extended_tunnel_id_xr.yfilter)
	|| ydk::is_set(frr_output_interface.yfilter)
	|| ydk::is_set(frr_output_label.yfilter)
	|| ydk::is_set(frr_output_tunnel_interface.yfilter)
	|| ydk::is_set(inbound_frr_state.yfilter)
	|| ydk::is_set(input_label.yfilter)
	|| ydk::is_set(is_frr_requested.yfilter)
	|| ydk::is_set(is_p2mp_tunnel.yfilter)
	|| ydk::is_set(is_signalled.yfilter)
	|| ydk::is_set(lsp_bandwidth_type.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(operation_status.yfilter)
	|| ydk::is_set(original_input_interface.yfilter)
	|| ydk::is_set(outbound_frr_state.yfilter)
	|| ydk::is_set(output_interface_lsp.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(p2mp_id_xr.yfilter)
	|| ydk::is_set(previous_hop_address.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(sharing_type.yfilter)
	|| ydk::is_set(source_address_xr.yfilter)
	|| ydk::is_set(sub_group_id_xr.yfilter)
	|| ydk::is_set(sub_group_original_id.yfilter)
	|| ydk::is_set(tunnel_id_xr.yfilter)
	|| ydk::is_set(tunnel_instance.yfilter)
	|| ydk::is_set(tunnel_name.yfilter);
}

std::string MplsTeStandby::FastReroute::Protections::Protection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/fast-reroute/protections/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FastReroute::Protections::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[tunnel-id='" <<tunnel_id <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[lsp-id='" <<lsp_id <<"']" <<"[sub-group-id='" <<sub_group_id <<"']" <<"[sub-group-originator='" <<sub_group_originator <<"']" <<"[p2mp-id='" <<p2mp_id <<"']" <<"[session-type='" <<session_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FastReroute::Protections::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (backup_bandwidth.is_set || is_set(backup_bandwidth.yfilter)) leaf_name_data.push_back(backup_bandwidth.get_name_leafdata());
    if (backup_next_hop_address.is_set || is_set(backup_next_hop_address.yfilter)) leaf_name_data.push_back(backup_next_hop_address.get_name_leafdata());
    if (backup_status.is_set || is_set(backup_status.yfilter)) leaf_name_data.push_back(backup_status.get_name_leafdata());
    if (bandwidth_limit_type.is_set || is_set(bandwidth_limit_type.yfilter)) leaf_name_data.push_back(bandwidth_limit_type.get_name_leafdata());
    if (bandwidth_pool_type.is_set || is_set(bandwidth_pool_type.yfilter)) leaf_name_data.push_back(bandwidth_pool_type.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (extended_tunnel_id_xr.is_set || is_set(extended_tunnel_id_xr.yfilter)) leaf_name_data.push_back(extended_tunnel_id_xr.get_name_leafdata());
    if (frr_output_interface.is_set || is_set(frr_output_interface.yfilter)) leaf_name_data.push_back(frr_output_interface.get_name_leafdata());
    if (frr_output_label.is_set || is_set(frr_output_label.yfilter)) leaf_name_data.push_back(frr_output_label.get_name_leafdata());
    if (frr_output_tunnel_interface.is_set || is_set(frr_output_tunnel_interface.yfilter)) leaf_name_data.push_back(frr_output_tunnel_interface.get_name_leafdata());
    if (inbound_frr_state.is_set || is_set(inbound_frr_state.yfilter)) leaf_name_data.push_back(inbound_frr_state.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.yfilter)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (is_frr_requested.is_set || is_set(is_frr_requested.yfilter)) leaf_name_data.push_back(is_frr_requested.get_name_leafdata());
    if (is_p2mp_tunnel.is_set || is_set(is_p2mp_tunnel.yfilter)) leaf_name_data.push_back(is_p2mp_tunnel.get_name_leafdata());
    if (is_signalled.is_set || is_set(is_signalled.yfilter)) leaf_name_data.push_back(is_signalled.get_name_leafdata());
    if (lsp_bandwidth_type.is_set || is_set(lsp_bandwidth_type.yfilter)) leaf_name_data.push_back(lsp_bandwidth_type.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (operation_status.is_set || is_set(operation_status.yfilter)) leaf_name_data.push_back(operation_status.get_name_leafdata());
    if (original_input_interface.is_set || is_set(original_input_interface.yfilter)) leaf_name_data.push_back(original_input_interface.get_name_leafdata());
    if (outbound_frr_state.is_set || is_set(outbound_frr_state.yfilter)) leaf_name_data.push_back(outbound_frr_state.get_name_leafdata());
    if (output_interface_lsp.is_set || is_set(output_interface_lsp.yfilter)) leaf_name_data.push_back(output_interface_lsp.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (p2mp_id_xr.is_set || is_set(p2mp_id_xr.yfilter)) leaf_name_data.push_back(p2mp_id_xr.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.yfilter)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (sharing_type.is_set || is_set(sharing_type.yfilter)) leaf_name_data.push_back(sharing_type.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.yfilter)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());
    if (sub_group_id_xr.is_set || is_set(sub_group_id_xr.yfilter)) leaf_name_data.push_back(sub_group_id_xr.get_name_leafdata());
    if (sub_group_original_id.is_set || is_set(sub_group_original_id.yfilter)) leaf_name_data.push_back(sub_group_original_id.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.yfilter)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());
    if (tunnel_instance.is_set || is_set(tunnel_instance.yfilter)) leaf_name_data.push_back(tunnel_instance.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::FastReroute::Protections::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::FastReroute::Protections::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::FastReroute::Protections::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-bandwidth")
    {
        backup_bandwidth = value;
        backup_bandwidth.value_namespace = name_space;
        backup_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-next-hop-address")
    {
        backup_next_hop_address = value;
        backup_next_hop_address.value_namespace = name_space;
        backup_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-status")
    {
        backup_status = value;
        backup_status.value_namespace = name_space;
        backup_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type = value;
        bandwidth_limit_type.value_namespace = name_space;
        bandwidth_limit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type = value;
        bandwidth_pool_type.value_namespace = name_space;
        bandwidth_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id-xr")
    {
        extended_tunnel_id_xr = value;
        extended_tunnel_id_xr.value_namespace = name_space;
        extended_tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-output-interface")
    {
        frr_output_interface = value;
        frr_output_interface.value_namespace = name_space;
        frr_output_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-output-label")
    {
        frr_output_label = value;
        frr_output_label.value_namespace = name_space;
        frr_output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-output-tunnel-interface")
    {
        frr_output_tunnel_interface = value;
        frr_output_tunnel_interface.value_namespace = name_space;
        frr_output_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbound-frr-state")
    {
        inbound_frr_state = value;
        inbound_frr_state.value_namespace = name_space;
        inbound_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-label")
    {
        input_label = value;
        input_label.value_namespace = name_space;
        input_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-frr-requested")
    {
        is_frr_requested = value;
        is_frr_requested.value_namespace = name_space;
        is_frr_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-p2mp-tunnel")
    {
        is_p2mp_tunnel = value;
        is_p2mp_tunnel.value_namespace = name_space;
        is_p2mp_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-signalled")
    {
        is_signalled = value;
        is_signalled.value_namespace = name_space;
        is_signalled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-type")
    {
        lsp_bandwidth_type = value;
        lsp_bandwidth_type.value_namespace = name_space;
        lsp_bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-status")
    {
        operation_status = value;
        operation_status.value_namespace = name_space;
        operation_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface = value;
        original_input_interface.value_namespace = name_space;
        original_input_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound-frr-state")
    {
        outbound_frr_state = value;
        outbound_frr_state.value_namespace = name_space;
        outbound_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-lsp")
    {
        output_interface_lsp = value;
        output_interface_lsp.value_namespace = name_space;
        output_interface_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id-xr")
    {
        p2mp_id_xr = value;
        p2mp_id_xr.value_namespace = name_space;
        p2mp_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
        previous_hop_address.value_namespace = name_space;
        previous_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sharing-type")
    {
        sharing_type = value;
        sharing_type.value_namespace = name_space;
        sharing_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
        source_address_xr.value_namespace = name_space;
        source_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id-xr")
    {
        sub_group_id_xr = value;
        sub_group_id_xr.value_namespace = name_space;
        sub_group_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-original-id")
    {
        sub_group_original_id = value;
        sub_group_original_id.value_namespace = name_space;
        sub_group_original_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
        tunnel_id_xr.value_namespace = name_space;
        tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance = value;
        tunnel_instance.value_namespace = name_space;
        tunnel_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::FastReroute::Protections::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "backup-bandwidth")
    {
        backup_bandwidth.yfilter = yfilter;
    }
    if(value_path == "backup-next-hop-address")
    {
        backup_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "backup-status")
    {
        backup_status.yfilter = yfilter;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id-xr")
    {
        extended_tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "frr-output-interface")
    {
        frr_output_interface.yfilter = yfilter;
    }
    if(value_path == "frr-output-label")
    {
        frr_output_label.yfilter = yfilter;
    }
    if(value_path == "frr-output-tunnel-interface")
    {
        frr_output_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "inbound-frr-state")
    {
        inbound_frr_state.yfilter = yfilter;
    }
    if(value_path == "input-label")
    {
        input_label.yfilter = yfilter;
    }
    if(value_path == "is-frr-requested")
    {
        is_frr_requested.yfilter = yfilter;
    }
    if(value_path == "is-p2mp-tunnel")
    {
        is_p2mp_tunnel.yfilter = yfilter;
    }
    if(value_path == "is-signalled")
    {
        is_signalled.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-type")
    {
        lsp_bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "operation-status")
    {
        operation_status.yfilter = yfilter;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface.yfilter = yfilter;
    }
    if(value_path == "outbound-frr-state")
    {
        outbound_frr_state.yfilter = yfilter;
    }
    if(value_path == "output-interface-lsp")
    {
        output_interface_lsp.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "p2mp-id-xr")
    {
        p2mp_id_xr.yfilter = yfilter;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "sharing-type")
    {
        sharing_type.yfilter = yfilter;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr.yfilter = yfilter;
    }
    if(value_path == "sub-group-id-xr")
    {
        sub_group_id_xr.yfilter = yfilter;
    }
    if(value_path == "sub-group-original-id")
    {
        sub_group_original_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTeStandby::FastReroute::Protections::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "tunnel-id" || name == "extended-tunnel-id" || name == "lsp-id" || name == "sub-group-id" || name == "sub-group-originator" || name == "p2mp-id" || name == "session-type" || name == "admin-status" || name == "backup-bandwidth" || name == "backup-next-hop-address" || name == "backup-status" || name == "bandwidth-limit-type" || name == "bandwidth-pool-type" || name == "destination-address-xr" || name == "extended-tunnel-id-xr" || name == "frr-output-interface" || name == "frr-output-label" || name == "frr-output-tunnel-interface" || name == "inbound-frr-state" || name == "input-label" || name == "is-frr-requested" || name == "is-p2mp-tunnel" || name == "is-signalled" || name == "lsp-bandwidth-type" || name == "next-hop-address" || name == "operation-status" || name == "original-input-interface" || name == "outbound-frr-state" || name == "output-interface-lsp" || name == "output-label" || name == "p2mp-id-xr" || name == "previous-hop-address" || name == "role" || name == "sharing-type" || name == "source-address-xr" || name == "sub-group-id-xr" || name == "sub-group-original-id" || name == "tunnel-id-xr" || name == "tunnel-instance" || name == "tunnel-name")
        return true;
    return false;
}

MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoutes()
{

    yang_name = "fib-next-hop-label-routes"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::FibNextHopLabelRoutes::~FibNextHopLabelRoutes()
{
}

bool MplsTeStandby::FibNextHopLabelRoutes::has_data() const
{
    for (std::size_t index=0; index<fib_next_hop_label_route.size(); index++)
    {
        if(fib_next_hop_label_route[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::FibNextHopLabelRoutes::has_operation() const
{
    for (std::size_t index=0; index<fib_next_hop_label_route.size(); index++)
    {
        if(fib_next_hop_label_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::FibNextHopLabelRoutes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FibNextHopLabelRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-next-hop-label-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FibNextHopLabelRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::FibNextHopLabelRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-next-hop-label-route")
    {
        for(auto const & c : fib_next_hop_label_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute>();
        c->parent = this;
        fib_next_hop_label_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::FibNextHopLabelRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fib_next_hop_label_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::FibNextHopLabelRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::FibNextHopLabelRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::FibNextHopLabelRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-next-hop-label-route")
        return true;
    return false;
}

MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::FibNextHopLabelRoute()
    :
    label{YType::uint32, "label"},
    create_time{YType::uint32, "create-time"},
    expire_time{YType::uint32, "expire-time"},
    is_notified{YType::boolean, "is-notified"},
    is_registered{YType::boolean, "is-registered"},
    is_stale{YType::boolean, "is-stale"},
    last_update_time{YType::uint32, "last-update-time"},
    last_used_time{YType::uint32, "last-used-time"},
    prefix_addr{YType::str, "prefix-addr"},
    route_version{YType::uint64, "route-version"}
    	,
    target_address(std::make_shared<MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress>())
{
    target_address->parent = this;

    yang_name = "fib-next-hop-label-route"; yang_parent_name = "fib-next-hop-label-routes"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::~FibNextHopLabelRoute()
{
}

bool MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::has_data() const
{
    for (std::size_t index=0; index<next_hop_path.size(); index++)
    {
        if(next_hop_path[index]->has_data())
            return true;
    }
    return label.is_set
	|| create_time.is_set
	|| expire_time.is_set
	|| is_notified.is_set
	|| is_registered.is_set
	|| is_stale.is_set
	|| last_update_time.is_set
	|| last_used_time.is_set
	|| prefix_addr.is_set
	|| route_version.is_set
	|| (target_address !=  nullptr && target_address->has_data());
}

bool MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::has_operation() const
{
    for (std::size_t index=0; index<next_hop_path.size(); index++)
    {
        if(next_hop_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(create_time.yfilter)
	|| ydk::is_set(expire_time.yfilter)
	|| ydk::is_set(is_notified.yfilter)
	|| ydk::is_set(is_registered.yfilter)
	|| ydk::is_set(is_stale.yfilter)
	|| ydk::is_set(last_update_time.yfilter)
	|| ydk::is_set(last_used_time.yfilter)
	|| ydk::is_set(prefix_addr.yfilter)
	|| ydk::is_set(route_version.yfilter)
	|| (target_address !=  nullptr && target_address->has_operation());
}

std::string MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/fib-next-hop-label-routes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-next-hop-label-route" <<"[label='" <<label <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (create_time.is_set || is_set(create_time.yfilter)) leaf_name_data.push_back(create_time.get_name_leafdata());
    if (expire_time.is_set || is_set(expire_time.yfilter)) leaf_name_data.push_back(expire_time.get_name_leafdata());
    if (is_notified.is_set || is_set(is_notified.yfilter)) leaf_name_data.push_back(is_notified.get_name_leafdata());
    if (is_registered.is_set || is_set(is_registered.yfilter)) leaf_name_data.push_back(is_registered.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.yfilter)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.yfilter)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (last_used_time.is_set || is_set(last_used_time.yfilter)) leaf_name_data.push_back(last_used_time.get_name_leafdata());
    if (prefix_addr.is_set || is_set(prefix_addr.yfilter)) leaf_name_data.push_back(prefix_addr.get_name_leafdata());
    if (route_version.is_set || is_set(route_version.yfilter)) leaf_name_data.push_back(route_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-path")
    {
        for(auto const & c : next_hop_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath>();
        c->parent = this;
        next_hop_path.push_back(c);
        return c;
    }

    if(child_yang_name == "target-address")
    {
        if(target_address == nullptr)
        {
            target_address = std::make_shared<MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress>();
        }
        return target_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : next_hop_path)
    {
        children[c->get_segment_path()] = c;
    }

    if(target_address != nullptr)
    {
        children["target-address"] = target_address;
    }

    return children;
}

void MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create-time")
    {
        create_time = value;
        create_time.value_namespace = name_space;
        create_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expire-time")
    {
        expire_time = value;
        expire_time.value_namespace = name_space;
        expire_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-notified")
    {
        is_notified = value;
        is_notified.value_namespace = name_space;
        is_notified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-registered")
    {
        is_registered = value;
        is_registered.value_namespace = name_space;
        is_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
        is_stale.value_namespace = name_space;
        is_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
        last_update_time.value_namespace = name_space;
        last_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-used-time")
    {
        last_used_time = value;
        last_used_time.value_namespace = name_space;
        last_used_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-addr")
    {
        prefix_addr = value;
        prefix_addr.value_namespace = name_space;
        prefix_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-version")
    {
        route_version = value;
        route_version.value_namespace = name_space;
        route_version.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "create-time")
    {
        create_time.yfilter = yfilter;
    }
    if(value_path == "expire-time")
    {
        expire_time.yfilter = yfilter;
    }
    if(value_path == "is-notified")
    {
        is_notified.yfilter = yfilter;
    }
    if(value_path == "is-registered")
    {
        is_registered.yfilter = yfilter;
    }
    if(value_path == "is-stale")
    {
        is_stale.yfilter = yfilter;
    }
    if(value_path == "last-update-time")
    {
        last_update_time.yfilter = yfilter;
    }
    if(value_path == "last-used-time")
    {
        last_used_time.yfilter = yfilter;
    }
    if(value_path == "prefix-addr")
    {
        prefix_addr.yfilter = yfilter;
    }
    if(value_path == "route-version")
    {
        route_version.yfilter = yfilter;
    }
}

bool MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-path" || name == "target-address" || name == "label" || name == "create-time" || name == "expire-time" || name == "is-notified" || name == "is-registered" || name == "is-stale" || name == "last-update-time" || name == "last-used-time" || name == "prefix-addr" || name == "route-version")
        return true;
    return false;
}

MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::NextHopPath()
    :
    backup_path_id{YType::uint32, "backup-path-id"},
    interface{YType::str, "interface"},
    next_hop_address{YType::str, "next-hop-address"},
    path_id{YType::uint32, "path-id"},
    pure_backup{YType::boolean, "pure-backup"}
{

    yang_name = "next-hop-path"; yang_parent_name = "fib-next-hop-label-route"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::~NextHopPath()
{
}

bool MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::has_data() const
{
    for (std::size_t index=0; index<label_stack.size(); index++)
    {
        if(label_stack[index]->has_data())
            return true;
    }
    return backup_path_id.is_set
	|| interface.is_set
	|| next_hop_address.is_set
	|| path_id.is_set
	|| pure_backup.is_set;
}

bool MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::has_operation() const
{
    for (std::size_t index=0; index<label_stack.size(); index++)
    {
        if(label_stack[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_path_id.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(pure_backup.yfilter);
}

std::string MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_path_id.is_set || is_set(backup_path_id.yfilter)) leaf_name_data.push_back(backup_path_id.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (pure_backup.is_set || is_set(pure_backup.yfilter)) leaf_name_data.push_back(pure_backup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-stack")
    {
        for(auto const & c : label_stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack>();
        c->parent = this;
        label_stack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_stack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-path-id")
    {
        backup_path_id = value;
        backup_path_id.value_namespace = name_space;
        backup_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pure-backup")
    {
        pure_backup = value;
        pure_backup.value_namespace = name_space;
        pure_backup.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-path-id")
    {
        backup_path_id.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "pure-backup")
    {
        pure_backup.yfilter = yfilter;
    }
}

bool MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-stack" || name == "backup-path-id" || name == "interface" || name == "next-hop-address" || name == "path-id" || name == "pure-backup")
        return true;
    return false;
}

MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack::LabelStack()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "label-stack"; yang_parent_name = "next-hop-path"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack::~LabelStack()
{
}

bool MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-stack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::NextHopPath::LabelStack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress::TargetAddress()
    :
    ip_address{YType::str, "ip-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{

    yang_name = "target-address"; yang_parent_name = "fib-next-hop-label-route"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress::~TargetAddress()
{
}

bool MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress::has_data() const
{
    return ip_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTeStandby::FibNextHopLabelRoutes::FibNextHopLabelRoute::TargetAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address" || name == "label" || name == "type")
        return true;
    return false;
}

MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestinations()
{

    yang_name = "forwarding-adjacency-destinations"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::ForwardingAdjacencyDestinations::~ForwardingAdjacencyDestinations()
{
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::has_data() const
{
    for (std::size_t index=0; index<forwarding_adjacency_destination.size(); index++)
    {
        if(forwarding_adjacency_destination[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::has_operation() const
{
    for (std::size_t index=0; index<forwarding_adjacency_destination.size(); index++)
    {
        if(forwarding_adjacency_destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::ForwardingAdjacencyDestinations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::ForwardingAdjacencyDestinations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-adjacency-destinations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::ForwardingAdjacencyDestinations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::ForwardingAdjacencyDestinations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-adjacency-destination")
    {
        for(auto const & c : forwarding_adjacency_destination)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination>();
        c->parent = this;
        forwarding_adjacency_destination.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::ForwardingAdjacencyDestinations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : forwarding_adjacency_destination)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::ForwardingAdjacencyDestinations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::ForwardingAdjacencyDestinations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-adjacency-destination")
        return true;
    return false;
}

MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardingAdjacencyDestination()
    :
    destination_address{YType::str, "destination-address"},
    adjacencies{YType::uint32, "adjacencies"},
    destination_address_xr{YType::str, "destination-address-xr"},
    ipv6_adjacencies{YType::uint32, "ipv6-adjacencies"}
{

    yang_name = "forwarding-adjacency-destination"; yang_parent_name = "forwarding-adjacency-destinations"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::~ForwardingAdjacencyDestination()
{
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::has_data() const
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

bool MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::has_operation() const
{
    for (std::size_t index=0; index<forward_adjacency.size(); index++)
    {
        if(forward_adjacency[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(adjacencies.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(ipv6_adjacencies.yfilter);
}

std::string MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/forwarding-adjacency-destinations/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-adjacency-destination" <<"[destination-address='" <<destination_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (adjacencies.is_set || is_set(adjacencies.yfilter)) leaf_name_data.push_back(adjacencies.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (ipv6_adjacencies.is_set || is_set(ipv6_adjacencies.yfilter)) leaf_name_data.push_back(ipv6_adjacencies.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-adjacency")
    {
        for(auto const & c : forward_adjacency)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency>();
        c->parent = this;
        forward_adjacency.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : forward_adjacency)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacencies")
    {
        adjacencies = value;
        adjacencies.value_namespace = name_space;
        adjacencies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-adjacencies")
    {
        ipv6_adjacencies = value;
        ipv6_adjacencies.value_namespace = name_space;
        ipv6_adjacencies.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "adjacencies")
    {
        adjacencies.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "ipv6-adjacencies")
    {
        ipv6_adjacencies.yfilter = yfilter;
    }
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-adjacency" || name == "destination-address" || name == "adjacencies" || name == "destination-address-xr" || name == "ipv6-adjacencies")
        return true;
    return false;
}

MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::ForwardAdjacency()
    :
    hold_time{YType::uint32, "hold-time"},
    is_adjacency_up{YType::boolean, "is-adjacency-up"},
    traffic_share{YType::uint32, "traffic-share"},
    tunnel_name{YType::str, "tunnel-name"}
{

    yang_name = "forward-adjacency"; yang_parent_name = "forwarding-adjacency-destination"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::~ForwardAdjacency()
{
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::has_data() const
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

bool MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::has_operation() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(is_adjacency_up.yfilter)
	|| ydk::is_set(traffic_share.yfilter)
	|| ydk::is_set(tunnel_name.yfilter);
}

std::string MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-adjacency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (is_adjacency_up.is_set || is_set(is_adjacency_up.yfilter)) leaf_name_data.push_back(is_adjacency_up.get_name_leafdata());
    if (traffic_share.is_set || is_set(traffic_share.yfilter)) leaf_name_data.push_back(traffic_share.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ig-ps")
    {
        for(auto const & c : ig_ps)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs>();
        c->parent = this;
        ig_ps.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ig_ps)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-adjacency-up")
    {
        is_adjacency_up = value;
        is_adjacency_up.value_namespace = name_space;
        is_adjacency_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-share")
    {
        traffic_share = value;
        traffic_share.value_namespace = name_space;
        traffic_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "is-adjacency-up")
    {
        is_adjacency_up.yfilter = yfilter;
    }
    if(value_path == "traffic-share")
    {
        traffic_share.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ig-ps" || name == "hold-time" || name == "is-adjacency-up" || name == "traffic-share" || name == "tunnel-name")
        return true;
    return false;
}

MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::IgPs()
    :
    afi{YType::enumeration, "afi"},
    igp_area_id{YType::str, "igp-area-id"}
{

    yang_name = "ig-ps"; yang_parent_name = "forward-adjacency"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::~IgPs()
{
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::has_data() const
{
    return afi.is_set
	|| igp_area_id.is_set;
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(igp_area_id.yfilter);
}

std::string MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ig-ps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (igp_area_id.is_set || is_set(igp_area_id.yfilter)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
        igp_area_id.value_namespace = name_space;
        igp_area_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "igp-area-id")
    {
        igp_area_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "igp-area-id")
        return true;
    return false;
}

MplsTeStandby::HardwareOutOfResources::HardwareOutOfResources()
    :
    summary(std::make_shared<MplsTeStandby::HardwareOutOfResources::Summary>())
{
    summary->parent = this;

    yang_name = "hardware-out-of-resources"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::HardwareOutOfResources::~HardwareOutOfResources()
{
}

bool MplsTeStandby::HardwareOutOfResources::has_data() const
{
    return (summary !=  nullptr && summary->has_data());
}

bool MplsTeStandby::HardwareOutOfResources::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsTeStandby::HardwareOutOfResources::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::HardwareOutOfResources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-out-of-resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::HardwareOutOfResources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::HardwareOutOfResources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTeStandby::HardwareOutOfResources::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::HardwareOutOfResources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void MplsTeStandby::HardwareOutOfResources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::HardwareOutOfResources::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::HardwareOutOfResources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary")
        return true;
    return false;
}

MplsTeStandby::HardwareOutOfResources::Summary::Summary()
{

    yang_name = "summary"; yang_parent_name = "hardware-out-of-resources"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::HardwareOutOfResources::Summary::~Summary()
{
}

bool MplsTeStandby::HardwareOutOfResources::Summary::has_data() const
{
    for (std::size_t index=0; index<hardware_out_of_resources_state.size(); index++)
    {
        if(hardware_out_of_resources_state[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::HardwareOutOfResources::Summary::has_operation() const
{
    for (std::size_t index=0; index<hardware_out_of_resources_state.size(); index++)
    {
        if(hardware_out_of_resources_state[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::HardwareOutOfResources::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/hardware-out-of-resources/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::HardwareOutOfResources::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::HardwareOutOfResources::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::HardwareOutOfResources::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hardware-out-of-resources-state")
    {
        for(auto const & c : hardware_out_of_resources_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState>();
        c->parent = this;
        hardware_out_of_resources_state.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::HardwareOutOfResources::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hardware_out_of_resources_state)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::HardwareOutOfResources::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::HardwareOutOfResources::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::HardwareOutOfResources::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hardware-out-of-resources-state")
        return true;
    return false;
}

MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::HardwareOutOfResourcesState()
    :
    accept_reopt{YType::boolean, "accept-reopt"},
    available_bw_percentage{YType::uint32, "available-bw-percentage"},
    hw_oor_state{YType::enumeration, "hw-oor-state"},
    minimum_lsp_bandwidth{YType::uint32, "minimum-lsp-bandwidth"},
    node_protection_disable{YType::boolean, "node-protection-disable"},
    te_metric_penalty{YType::uint32, "te-metric-penalty"},
    transition_duration{YType::uint32, "transition-duration"}
    	,
    statistics(std::make_shared<MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics>())
{
    statistics->parent = this;

    yang_name = "hardware-out-of-resources-state"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::~HardwareOutOfResourcesState()
{
}

bool MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::has_data() const
{
    return accept_reopt.is_set
	|| available_bw_percentage.is_set
	|| hw_oor_state.is_set
	|| minimum_lsp_bandwidth.is_set
	|| node_protection_disable.is_set
	|| te_metric_penalty.is_set
	|| transition_duration.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_reopt.yfilter)
	|| ydk::is_set(available_bw_percentage.yfilter)
	|| ydk::is_set(hw_oor_state.yfilter)
	|| ydk::is_set(minimum_lsp_bandwidth.yfilter)
	|| ydk::is_set(node_protection_disable.yfilter)
	|| ydk::is_set(te_metric_penalty.yfilter)
	|| ydk::is_set(transition_duration.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/hardware-out-of-resources/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-out-of-resources-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_reopt.is_set || is_set(accept_reopt.yfilter)) leaf_name_data.push_back(accept_reopt.get_name_leafdata());
    if (available_bw_percentage.is_set || is_set(available_bw_percentage.yfilter)) leaf_name_data.push_back(available_bw_percentage.get_name_leafdata());
    if (hw_oor_state.is_set || is_set(hw_oor_state.yfilter)) leaf_name_data.push_back(hw_oor_state.get_name_leafdata());
    if (minimum_lsp_bandwidth.is_set || is_set(minimum_lsp_bandwidth.yfilter)) leaf_name_data.push_back(minimum_lsp_bandwidth.get_name_leafdata());
    if (node_protection_disable.is_set || is_set(node_protection_disable.yfilter)) leaf_name_data.push_back(node_protection_disable.get_name_leafdata());
    if (te_metric_penalty.is_set || is_set(te_metric_penalty.yfilter)) leaf_name_data.push_back(te_metric_penalty.get_name_leafdata());
    if (transition_duration.is_set || is_set(transition_duration.yfilter)) leaf_name_data.push_back(transition_duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-reopt")
    {
        accept_reopt = value;
        accept_reopt.value_namespace = name_space;
        accept_reopt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bw-percentage")
    {
        available_bw_percentage = value;
        available_bw_percentage.value_namespace = name_space;
        available_bw_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw-oor-state")
    {
        hw_oor_state = value;
        hw_oor_state.value_namespace = name_space;
        hw_oor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-lsp-bandwidth")
    {
        minimum_lsp_bandwidth = value;
        minimum_lsp_bandwidth.value_namespace = name_space;
        minimum_lsp_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protection-disable")
    {
        node_protection_disable = value;
        node_protection_disable.value_namespace = name_space;
        node_protection_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric-penalty")
    {
        te_metric_penalty = value;
        te_metric_penalty.value_namespace = name_space;
        te_metric_penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transition-duration")
    {
        transition_duration = value;
        transition_duration.value_namespace = name_space;
        transition_duration.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-reopt")
    {
        accept_reopt.yfilter = yfilter;
    }
    if(value_path == "available-bw-percentage")
    {
        available_bw_percentage.yfilter = yfilter;
    }
    if(value_path == "hw-oor-state")
    {
        hw_oor_state.yfilter = yfilter;
    }
    if(value_path == "minimum-lsp-bandwidth")
    {
        minimum_lsp_bandwidth.yfilter = yfilter;
    }
    if(value_path == "node-protection-disable")
    {
        node_protection_disable.yfilter = yfilter;
    }
    if(value_path == "te-metric-penalty")
    {
        te_metric_penalty.yfilter = yfilter;
    }
    if(value_path == "transition-duration")
    {
        transition_duration.yfilter = yfilter;
    }
}

bool MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "accept-reopt" || name == "available-bw-percentage" || name == "hw-oor-state" || name == "minimum-lsp-bandwidth" || name == "node-protection-disable" || name == "te-metric-penalty" || name == "transition-duration")
        return true;
    return false;
}

MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::Statistics()
    :
    accepted_ls_ps_number{YType::uint32, "accepted-ls-ps-number"},
    accepted_reopt_ls_ps_number{YType::uint32, "accepted-reopt-ls-ps-number"},
    hw_oor_state{YType::enumeration, "hw-oor-state"},
    node_protection_disable_number{YType::uint32, "node-protection-disable-number"},
    rejected_ls_ps_number{YType::uint32, "rejected-ls-ps-number"},
    rejected_reopt_ls_ps_number{YType::uint32, "rejected-reopt-ls-ps-number"},
    transitions{YType::uint32, "transitions"}
{

    yang_name = "statistics"; yang_parent_name = "hardware-out-of-resources-state"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::~Statistics()
{
}

bool MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::has_data() const
{
    return accepted_ls_ps_number.is_set
	|| accepted_reopt_ls_ps_number.is_set
	|| hw_oor_state.is_set
	|| node_protection_disable_number.is_set
	|| rejected_ls_ps_number.is_set
	|| rejected_reopt_ls_ps_number.is_set
	|| transitions.is_set;
}

bool MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accepted_ls_ps_number.yfilter)
	|| ydk::is_set(accepted_reopt_ls_ps_number.yfilter)
	|| ydk::is_set(hw_oor_state.yfilter)
	|| ydk::is_set(node_protection_disable_number.yfilter)
	|| ydk::is_set(rejected_ls_ps_number.yfilter)
	|| ydk::is_set(rejected_reopt_ls_ps_number.yfilter)
	|| ydk::is_set(transitions.yfilter);
}

std::string MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/hardware-out-of-resources/summary/hardware-out-of-resources-state/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_ls_ps_number.is_set || is_set(accepted_ls_ps_number.yfilter)) leaf_name_data.push_back(accepted_ls_ps_number.get_name_leafdata());
    if (accepted_reopt_ls_ps_number.is_set || is_set(accepted_reopt_ls_ps_number.yfilter)) leaf_name_data.push_back(accepted_reopt_ls_ps_number.get_name_leafdata());
    if (hw_oor_state.is_set || is_set(hw_oor_state.yfilter)) leaf_name_data.push_back(hw_oor_state.get_name_leafdata());
    if (node_protection_disable_number.is_set || is_set(node_protection_disable_number.yfilter)) leaf_name_data.push_back(node_protection_disable_number.get_name_leafdata());
    if (rejected_ls_ps_number.is_set || is_set(rejected_ls_ps_number.yfilter)) leaf_name_data.push_back(rejected_ls_ps_number.get_name_leafdata());
    if (rejected_reopt_ls_ps_number.is_set || is_set(rejected_reopt_ls_ps_number.yfilter)) leaf_name_data.push_back(rejected_reopt_ls_ps_number.get_name_leafdata());
    if (transitions.is_set || is_set(transitions.yfilter)) leaf_name_data.push_back(transitions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "hw-oor-state")
    {
        hw_oor_state = value;
        hw_oor_state.value_namespace = name_space;
        hw_oor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protection-disable-number")
    {
        node_protection_disable_number = value;
        node_protection_disable_number.value_namespace = name_space;
        node_protection_disable_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-ls-ps-number")
    {
        rejected_ls_ps_number = value;
        rejected_ls_ps_number.value_namespace = name_space;
        rejected_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-reopt-ls-ps-number")
    {
        rejected_reopt_ls_ps_number = value;
        rejected_reopt_ls_ps_number.value_namespace = name_space;
        rejected_reopt_ls_ps_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transitions")
    {
        transitions = value;
        transitions.value_namespace = name_space;
        transitions.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accepted-ls-ps-number")
    {
        accepted_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "accepted-reopt-ls-ps-number")
    {
        accepted_reopt_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "hw-oor-state")
    {
        hw_oor_state.yfilter = yfilter;
    }
    if(value_path == "node-protection-disable-number")
    {
        node_protection_disable_number.yfilter = yfilter;
    }
    if(value_path == "rejected-ls-ps-number")
    {
        rejected_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "rejected-reopt-ls-ps-number")
    {
        rejected_reopt_ls_ps_number.yfilter = yfilter;
    }
    if(value_path == "transitions")
    {
        transitions.yfilter = yfilter;
    }
}

bool MplsTeStandby::HardwareOutOfResources::Summary::HardwareOutOfResourcesState::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accepted-ls-ps-number" || name == "accepted-reopt-ls-ps-number" || name == "hw-oor-state" || name == "node-protection-disable-number" || name == "rejected-ls-ps-number" || name == "rejected-reopt-ls-ps-number" || name == "transitions")
        return true;
    return false;
}

MplsTeStandby::IgpAreaBriefs::IgpAreaBriefs()
{

    yang_name = "igp-area-briefs"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::IgpAreaBriefs::~IgpAreaBriefs()
{
}

bool MplsTeStandby::IgpAreaBriefs::has_data() const
{
    for (std::size_t index=0; index<igp_area_brief.size(); index++)
    {
        if(igp_area_brief[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::IgpAreaBriefs::has_operation() const
{
    for (std::size_t index=0; index<igp_area_brief.size(); index++)
    {
        if(igp_area_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::IgpAreaBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::IgpAreaBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-area-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::IgpAreaBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::IgpAreaBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-area-brief")
    {
        for(auto const & c : igp_area_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::IgpAreaBriefs::IgpAreaBrief>();
        c->parent = this;
        igp_area_brief.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::IgpAreaBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : igp_area_brief)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::IgpAreaBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::IgpAreaBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::IgpAreaBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-area-brief")
        return true;
    return false;
}

MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::IgpAreaBrief()
    :
    protocol{YType::enumeration, "protocol"},
    process_tag{YType::str, "process-tag"},
    configured_te_router_id{YType::str, "configured-te-router-id"},
    connection_down_count{YType::uint32, "connection-down-count"},
    connection_up_count{YType::uint32, "connection-up-count"},
    global_router_id{YType::str, "global-router-id"},
    globall_router_id_optical{YType::str, "globall-router-id-optical"},
    igp_system_id{YType::str, "igp-system-id"},
    igp_type{YType::enumeration, "igp-type"},
    in_use_te_router_id{YType::str, "in-use-te-router-id"},
    instance_name{YType::str, "instance-name"},
    is_connection_up{YType::boolean, "is-connection-up"}
{

    yang_name = "igp-area-brief"; yang_parent_name = "igp-area-briefs"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::~IgpAreaBrief()
{
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<secondary_router_id.size(); index++)
    {
        if(secondary_router_id[index]->has_data())
            return true;
    }
    return protocol.is_set
	|| process_tag.is_set
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

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<secondary_router_id.size(); index++)
    {
        if(secondary_router_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(process_tag.yfilter)
	|| ydk::is_set(configured_te_router_id.yfilter)
	|| ydk::is_set(connection_down_count.yfilter)
	|| ydk::is_set(connection_up_count.yfilter)
	|| ydk::is_set(global_router_id.yfilter)
	|| ydk::is_set(globall_router_id_optical.yfilter)
	|| ydk::is_set(igp_system_id.yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(in_use_te_router_id.yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(is_connection_up.yfilter);
}

std::string MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/igp-area-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-area-brief" <<"[protocol='" <<protocol <<"']" <<"[process-tag='" <<process_tag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (process_tag.is_set || is_set(process_tag.yfilter)) leaf_name_data.push_back(process_tag.get_name_leafdata());
    if (configured_te_router_id.is_set || is_set(configured_te_router_id.yfilter)) leaf_name_data.push_back(configured_te_router_id.get_name_leafdata());
    if (connection_down_count.is_set || is_set(connection_down_count.yfilter)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.yfilter)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (global_router_id.is_set || is_set(global_router_id.yfilter)) leaf_name_data.push_back(global_router_id.get_name_leafdata());
    if (globall_router_id_optical.is_set || is_set(globall_router_id_optical.yfilter)) leaf_name_data.push_back(globall_router_id_optical.get_name_leafdata());
    if (igp_system_id.is_set || is_set(igp_system_id.yfilter)) leaf_name_data.push_back(igp_system_id.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (in_use_te_router_id.is_set || is_set(in_use_te_router_id.yfilter)) leaf_name_data.push_back(in_use_te_router_id.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (is_connection_up.is_set || is_set(is_connection_up.yfilter)) leaf_name_data.push_back(is_connection_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        for(auto const & c : area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    if(child_yang_name == "secondary-router-id")
    {
        for(auto const & c : secondary_router_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId>();
        c->parent = this;
        secondary_router_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : secondary_router_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-tag")
    {
        process_tag = value;
        process_tag.value_namespace = name_space;
        process_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-te-router-id")
    {
        configured_te_router_id = value;
        configured_te_router_id.value_namespace = name_space;
        configured_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count = value;
        connection_down_count.value_namespace = name_space;
        connection_down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count = value;
        connection_up_count.value_namespace = name_space;
        connection_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-router-id")
    {
        global_router_id = value;
        global_router_id.value_namespace = name_space;
        global_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "globall-router-id-optical")
    {
        globall_router_id_optical = value;
        globall_router_id_optical.value_namespace = name_space;
        globall_router_id_optical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-system-id")
    {
        igp_system_id = value;
        igp_system_id.value_namespace = name_space;
        igp_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use-te-router-id")
    {
        in_use_te_router_id = value;
        in_use_te_router_id.value_namespace = name_space;
        in_use_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up = value;
        is_connection_up.value_namespace = name_space;
        is_connection_up.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "process-tag")
    {
        process_tag.yfilter = yfilter;
    }
    if(value_path == "configured-te-router-id")
    {
        configured_te_router_id.yfilter = yfilter;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count.yfilter = yfilter;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count.yfilter = yfilter;
    }
    if(value_path == "global-router-id")
    {
        global_router_id.yfilter = yfilter;
    }
    if(value_path == "globall-router-id-optical")
    {
        globall_router_id_optical.yfilter = yfilter;
    }
    if(value_path == "igp-system-id")
    {
        igp_system_id.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "in-use-te-router-id")
    {
        in_use_te_router_id.yfilter = yfilter;
    }
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up.yfilter = yfilter;
    }
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "secondary-router-id" || name == "protocol" || name == "process-tag" || name == "configured-te-router-id" || name == "connection-down-count" || name == "connection-up-count" || name == "global-router-id" || name == "globall-router-id-optical" || name == "igp-system-id" || name == "igp-type" || name == "in-use-te-router-id" || name == "instance-name" || name == "is-connection-up")
        return true;
    return false;
}

MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::Area()
    :
    area_format{YType::enumeration, "area-format"},
    area_index{YType::uint32, "area-index"},
    area_number{YType::uint32, "area-number"},
    is_config_ready{YType::boolean, "is-config-ready"}
    	,
    active_data(std::make_shared<MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData>())
{
    active_data->parent = this;

    yang_name = "area"; yang_parent_name = "igp-area-brief"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::~Area()
{
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::has_data() const
{
    return area_format.is_set
	|| area_index.is_set
	|| area_number.is_set
	|| is_config_ready.is_set
	|| (active_data !=  nullptr && active_data->has_data());
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(area_index.yfilter)
	|| ydk::is_set(area_number.yfilter)
	|| ydk::is_set(is_config_ready.yfilter)
	|| (active_data !=  nullptr && active_data->has_operation());
}

std::string MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_index.is_set || is_set(area_index.yfilter)) leaf_name_data.push_back(area_index.get_name_leafdata());
    if (area_number.is_set || is_set(area_number.yfilter)) leaf_name_data.push_back(area_number.get_name_leafdata());
    if (is_config_ready.is_set || is_set(is_config_ready.yfilter)) leaf_name_data.push_back(is_config_ready.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-data")
    {
        if(active_data == nullptr)
        {
            active_data = std::make_shared<MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData>();
        }
        return active_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_data != nullptr)
    {
        children["active-data"] = active_data;
    }

    return children;
}

void MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-index")
    {
        area_index = value;
        area_index.value_namespace = name_space;
        area_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-number")
    {
        area_number = value;
        area_number.value_namespace = name_space;
        area_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-config-ready")
    {
        is_config_ready = value;
        is_config_ready.value_namespace = name_space;
        is_config_ready.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "area-index")
    {
        area_index.yfilter = yfilter;
    }
    if(value_path == "area-number")
    {
        area_number.yfilter = yfilter;
    }
    if(value_path == "is-config-ready")
    {
        is_config_ready.yfilter = yfilter;
    }
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-data" || name == "area-format" || name == "area-index" || name == "area-number" || name == "is-config-ready")
        return true;
    return false;
}

MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::ActiveData()
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
    area_statistics(std::make_shared<MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics>())
{
    area_statistics->parent = this;

    yang_name = "active-data"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::~ActiveData()
{
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::has_data() const
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

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interfaces_count.yfilter)
	|| ydk::is_set(link_idt_received.yfilter)
	|| ydk::is_set(p2mp_destination_count.yfilter)
	|| ydk::is_set(p2p_autoroute_announced_count.yfilter)
	|| ydk::is_set(p2p_forwarding_adjacency_count.yfilter)
	|| ydk::is_set(p2p_heads_count.yfilter)
	|| ydk::is_set(sr_strict.yfilter)
	|| ydk::is_set(topology_idt_received.yfilter)
	|| ydk::is_set(tunnel_loose_hops.yfilter)
	|| (area_statistics !=  nullptr && area_statistics->has_operation());
}

std::string MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interfaces_count.is_set || is_set(interfaces_count.yfilter)) leaf_name_data.push_back(interfaces_count.get_name_leafdata());
    if (link_idt_received.is_set || is_set(link_idt_received.yfilter)) leaf_name_data.push_back(link_idt_received.get_name_leafdata());
    if (p2mp_destination_count.is_set || is_set(p2mp_destination_count.yfilter)) leaf_name_data.push_back(p2mp_destination_count.get_name_leafdata());
    if (p2p_autoroute_announced_count.is_set || is_set(p2p_autoroute_announced_count.yfilter)) leaf_name_data.push_back(p2p_autoroute_announced_count.get_name_leafdata());
    if (p2p_forwarding_adjacency_count.is_set || is_set(p2p_forwarding_adjacency_count.yfilter)) leaf_name_data.push_back(p2p_forwarding_adjacency_count.get_name_leafdata());
    if (p2p_heads_count.is_set || is_set(p2p_heads_count.yfilter)) leaf_name_data.push_back(p2p_heads_count.get_name_leafdata());
    if (sr_strict.is_set || is_set(sr_strict.yfilter)) leaf_name_data.push_back(sr_strict.get_name_leafdata());
    if (topology_idt_received.is_set || is_set(topology_idt_received.yfilter)) leaf_name_data.push_back(topology_idt_received.get_name_leafdata());
    if (tunnel_loose_hops.is_set || is_set(tunnel_loose_hops.yfilter)) leaf_name_data.push_back(tunnel_loose_hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-statistics")
    {
        if(area_statistics == nullptr)
        {
            area_statistics = std::make_shared<MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics>();
        }
        return area_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_statistics != nullptr)
    {
        children["area-statistics"] = area_statistics;
    }

    return children;
}

void MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interfaces-count")
    {
        interfaces_count = value;
        interfaces_count.value_namespace = name_space;
        interfaces_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-idt-received")
    {
        link_idt_received = value;
        link_idt_received.value_namespace = name_space;
        link_idt_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-destination-count")
    {
        p2mp_destination_count = value;
        p2mp_destination_count.value_namespace = name_space;
        p2mp_destination_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-autoroute-announced-count")
    {
        p2p_autoroute_announced_count = value;
        p2p_autoroute_announced_count.value_namespace = name_space;
        p2p_autoroute_announced_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-forwarding-adjacency-count")
    {
        p2p_forwarding_adjacency_count = value;
        p2p_forwarding_adjacency_count.value_namespace = name_space;
        p2p_forwarding_adjacency_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-heads-count")
    {
        p2p_heads_count = value;
        p2p_heads_count.value_namespace = name_space;
        p2p_heads_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-strict")
    {
        sr_strict = value;
        sr_strict.value_namespace = name_space;
        sr_strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-idt-received")
    {
        topology_idt_received = value;
        topology_idt_received.value_namespace = name_space;
        topology_idt_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-loose-hops")
    {
        tunnel_loose_hops = value;
        tunnel_loose_hops.value_namespace = name_space;
        tunnel_loose_hops.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interfaces-count")
    {
        interfaces_count.yfilter = yfilter;
    }
    if(value_path == "link-idt-received")
    {
        link_idt_received.yfilter = yfilter;
    }
    if(value_path == "p2mp-destination-count")
    {
        p2mp_destination_count.yfilter = yfilter;
    }
    if(value_path == "p2p-autoroute-announced-count")
    {
        p2p_autoroute_announced_count.yfilter = yfilter;
    }
    if(value_path == "p2p-forwarding-adjacency-count")
    {
        p2p_forwarding_adjacency_count.yfilter = yfilter;
    }
    if(value_path == "p2p-heads-count")
    {
        p2p_heads_count.yfilter = yfilter;
    }
    if(value_path == "sr-strict")
    {
        sr_strict.yfilter = yfilter;
    }
    if(value_path == "topology-idt-received")
    {
        topology_idt_received.yfilter = yfilter;
    }
    if(value_path == "tunnel-loose-hops")
    {
        tunnel_loose_hops.yfilter = yfilter;
    }
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-statistics" || name == "interfaces-count" || name == "link-idt-received" || name == "p2mp-destination-count" || name == "p2p-autoroute-announced-count" || name == "p2p-forwarding-adjacency-count" || name == "p2p-heads-count" || name == "sr-strict" || name == "topology-idt-received" || name == "tunnel-loose-hops")
        return true;
    return false;
}

MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::AreaStatistics()
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

    yang_name = "area-statistics"; yang_parent_name = "active-data"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::~AreaStatistics()
{
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::has_data() const
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

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_adjacency_announce_messages.yfilter)
	|| ydk::is_set(area_adjacency_request_messages.yfilter)
	|| ydk::is_set(area_flood_messages.yfilter)
	|| ydk::is_set(area_lsa_announce_messages.yfilter)
	|| ydk::is_set(area_lsa_delete_messages.yfilter)
	|| ydk::is_set(area_lsa_fragment_announce_messages.yfilter)
	|| ydk::is_set(area_lsa_fragment_delete_messages.yfilter)
	|| ydk::is_set(area_tunnel_announce_messages.yfilter);
}

std::string MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_adjacency_announce_messages.is_set || is_set(area_adjacency_announce_messages.yfilter)) leaf_name_data.push_back(area_adjacency_announce_messages.get_name_leafdata());
    if (area_adjacency_request_messages.is_set || is_set(area_adjacency_request_messages.yfilter)) leaf_name_data.push_back(area_adjacency_request_messages.get_name_leafdata());
    if (area_flood_messages.is_set || is_set(area_flood_messages.yfilter)) leaf_name_data.push_back(area_flood_messages.get_name_leafdata());
    if (area_lsa_announce_messages.is_set || is_set(area_lsa_announce_messages.yfilter)) leaf_name_data.push_back(area_lsa_announce_messages.get_name_leafdata());
    if (area_lsa_delete_messages.is_set || is_set(area_lsa_delete_messages.yfilter)) leaf_name_data.push_back(area_lsa_delete_messages.get_name_leafdata());
    if (area_lsa_fragment_announce_messages.is_set || is_set(area_lsa_fragment_announce_messages.yfilter)) leaf_name_data.push_back(area_lsa_fragment_announce_messages.get_name_leafdata());
    if (area_lsa_fragment_delete_messages.is_set || is_set(area_lsa_fragment_delete_messages.yfilter)) leaf_name_data.push_back(area_lsa_fragment_delete_messages.get_name_leafdata());
    if (area_tunnel_announce_messages.is_set || is_set(area_tunnel_announce_messages.yfilter)) leaf_name_data.push_back(area_tunnel_announce_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-adjacency-announce-messages")
    {
        area_adjacency_announce_messages = value;
        area_adjacency_announce_messages.value_namespace = name_space;
        area_adjacency_announce_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-adjacency-request-messages")
    {
        area_adjacency_request_messages = value;
        area_adjacency_request_messages.value_namespace = name_space;
        area_adjacency_request_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-flood-messages")
    {
        area_flood_messages = value;
        area_flood_messages.value_namespace = name_space;
        area_flood_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-announce-messages")
    {
        area_lsa_announce_messages = value;
        area_lsa_announce_messages.value_namespace = name_space;
        area_lsa_announce_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-delete-messages")
    {
        area_lsa_delete_messages = value;
        area_lsa_delete_messages.value_namespace = name_space;
        area_lsa_delete_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-fragment-announce-messages")
    {
        area_lsa_fragment_announce_messages = value;
        area_lsa_fragment_announce_messages.value_namespace = name_space;
        area_lsa_fragment_announce_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-fragment-delete-messages")
    {
        area_lsa_fragment_delete_messages = value;
        area_lsa_fragment_delete_messages.value_namespace = name_space;
        area_lsa_fragment_delete_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-tunnel-announce-messages")
    {
        area_tunnel_announce_messages = value;
        area_tunnel_announce_messages.value_namespace = name_space;
        area_tunnel_announce_messages.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-adjacency-announce-messages")
    {
        area_adjacency_announce_messages.yfilter = yfilter;
    }
    if(value_path == "area-adjacency-request-messages")
    {
        area_adjacency_request_messages.yfilter = yfilter;
    }
    if(value_path == "area-flood-messages")
    {
        area_flood_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-announce-messages")
    {
        area_lsa_announce_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-delete-messages")
    {
        area_lsa_delete_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-fragment-announce-messages")
    {
        area_lsa_fragment_announce_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-fragment-delete-messages")
    {
        area_lsa_fragment_delete_messages.yfilter = yfilter;
    }
    if(value_path == "area-tunnel-announce-messages")
    {
        area_tunnel_announce_messages.yfilter = yfilter;
    }
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-adjacency-announce-messages" || name == "area-adjacency-request-messages" || name == "area-flood-messages" || name == "area-lsa-announce-messages" || name == "area-lsa-delete-messages" || name == "area-lsa-fragment-announce-messages" || name == "area-lsa-fragment-delete-messages" || name == "area-tunnel-announce-messages")
        return true;
    return false;
}

MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::SecondaryRouterId()
    :
    entry{YType::str, "entry"}
{

    yang_name = "secondary-router-id"; yang_parent_name = "igp-area-brief"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::~SecondaryRouterId()
{
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::IgpAreas::IgpAreas()
{

    yang_name = "igp-areas"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::IgpAreas::~IgpAreas()
{
}

bool MplsTeStandby::IgpAreas::has_data() const
{
    for (std::size_t index=0; index<igp_area.size(); index++)
    {
        if(igp_area[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::IgpAreas::has_operation() const
{
    for (std::size_t index=0; index<igp_area.size(); index++)
    {
        if(igp_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::IgpAreas::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::IgpAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::IgpAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::IgpAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-area")
    {
        for(auto const & c : igp_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::IgpAreas::IgpArea>();
        c->parent = this;
        igp_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::IgpAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : igp_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::IgpAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::IgpAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::IgpAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-area")
        return true;
    return false;
}

MplsTeStandby::IgpAreas::IgpArea::IgpArea()
    :
    protocol{YType::enumeration, "protocol"},
    process_tag{YType::str, "process-tag"},
    configured_te_router_id{YType::str, "configured-te-router-id"},
    connection_down_count{YType::uint32, "connection-down-count"},
    connection_up_count{YType::uint32, "connection-up-count"},
    global_router_id{YType::str, "global-router-id"},
    globall_router_id_optical{YType::str, "globall-router-id-optical"},
    igp_system_id{YType::str, "igp-system-id"},
    igp_type{YType::enumeration, "igp-type"},
    in_use_te_router_id{YType::str, "in-use-te-router-id"},
    instance_name{YType::str, "instance-name"},
    is_connection_up{YType::boolean, "is-connection-up"}
{

    yang_name = "igp-area"; yang_parent_name = "igp-areas"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::IgpAreas::IgpArea::~IgpArea()
{
}

bool MplsTeStandby::IgpAreas::IgpArea::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<secondary_router_id.size(); index++)
    {
        if(secondary_router_id[index]->has_data())
            return true;
    }
    return protocol.is_set
	|| process_tag.is_set
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

bool MplsTeStandby::IgpAreas::IgpArea::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<secondary_router_id.size(); index++)
    {
        if(secondary_router_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(process_tag.yfilter)
	|| ydk::is_set(configured_te_router_id.yfilter)
	|| ydk::is_set(connection_down_count.yfilter)
	|| ydk::is_set(connection_up_count.yfilter)
	|| ydk::is_set(global_router_id.yfilter)
	|| ydk::is_set(globall_router_id_optical.yfilter)
	|| ydk::is_set(igp_system_id.yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(in_use_te_router_id.yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(is_connection_up.yfilter);
}

std::string MplsTeStandby::IgpAreas::IgpArea::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/igp-areas/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::IgpAreas::IgpArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-area" <<"[protocol='" <<protocol <<"']" <<"[process-tag='" <<process_tag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::IgpAreas::IgpArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (process_tag.is_set || is_set(process_tag.yfilter)) leaf_name_data.push_back(process_tag.get_name_leafdata());
    if (configured_te_router_id.is_set || is_set(configured_te_router_id.yfilter)) leaf_name_data.push_back(configured_te_router_id.get_name_leafdata());
    if (connection_down_count.is_set || is_set(connection_down_count.yfilter)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.yfilter)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (global_router_id.is_set || is_set(global_router_id.yfilter)) leaf_name_data.push_back(global_router_id.get_name_leafdata());
    if (globall_router_id_optical.is_set || is_set(globall_router_id_optical.yfilter)) leaf_name_data.push_back(globall_router_id_optical.get_name_leafdata());
    if (igp_system_id.is_set || is_set(igp_system_id.yfilter)) leaf_name_data.push_back(igp_system_id.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (in_use_te_router_id.is_set || is_set(in_use_te_router_id.yfilter)) leaf_name_data.push_back(in_use_te_router_id.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (is_connection_up.is_set || is_set(is_connection_up.yfilter)) leaf_name_data.push_back(is_connection_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::IgpAreas::IgpArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        for(auto const & c : area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::IgpAreas::IgpArea::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    if(child_yang_name == "secondary-router-id")
    {
        for(auto const & c : secondary_router_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId>();
        c->parent = this;
        secondary_router_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::IgpAreas::IgpArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : secondary_router_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::IgpAreas::IgpArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-tag")
    {
        process_tag = value;
        process_tag.value_namespace = name_space;
        process_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-te-router-id")
    {
        configured_te_router_id = value;
        configured_te_router_id.value_namespace = name_space;
        configured_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count = value;
        connection_down_count.value_namespace = name_space;
        connection_down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count = value;
        connection_up_count.value_namespace = name_space;
        connection_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-router-id")
    {
        global_router_id = value;
        global_router_id.value_namespace = name_space;
        global_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "globall-router-id-optical")
    {
        globall_router_id_optical = value;
        globall_router_id_optical.value_namespace = name_space;
        globall_router_id_optical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-system-id")
    {
        igp_system_id = value;
        igp_system_id.value_namespace = name_space;
        igp_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use-te-router-id")
    {
        in_use_te_router_id = value;
        in_use_te_router_id.value_namespace = name_space;
        in_use_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up = value;
        is_connection_up.value_namespace = name_space;
        is_connection_up.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::IgpAreas::IgpArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "process-tag")
    {
        process_tag.yfilter = yfilter;
    }
    if(value_path == "configured-te-router-id")
    {
        configured_te_router_id.yfilter = yfilter;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count.yfilter = yfilter;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count.yfilter = yfilter;
    }
    if(value_path == "global-router-id")
    {
        global_router_id.yfilter = yfilter;
    }
    if(value_path == "globall-router-id-optical")
    {
        globall_router_id_optical.yfilter = yfilter;
    }
    if(value_path == "igp-system-id")
    {
        igp_system_id.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "in-use-te-router-id")
    {
        in_use_te_router_id.yfilter = yfilter;
    }
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up.yfilter = yfilter;
    }
}

bool MplsTeStandby::IgpAreas::IgpArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "secondary-router-id" || name == "protocol" || name == "process-tag" || name == "configured-te-router-id" || name == "connection-down-count" || name == "connection-up-count" || name == "global-router-id" || name == "globall-router-id-optical" || name == "igp-system-id" || name == "igp-type" || name == "in-use-te-router-id" || name == "instance-name" || name == "is-connection-up")
        return true;
    return false;
}

MplsTeStandby::IgpAreas::IgpArea::Area::Area()
    :
    area_format{YType::enumeration, "area-format"},
    area_index{YType::uint32, "area-index"},
    area_number{YType::uint32, "area-number"},
    is_config_ready{YType::boolean, "is-config-ready"}
    	,
    active_data(std::make_shared<MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData>())
{
    active_data->parent = this;

    yang_name = "area"; yang_parent_name = "igp-area"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::IgpAreas::IgpArea::Area::~Area()
{
}

bool MplsTeStandby::IgpAreas::IgpArea::Area::has_data() const
{
    return area_format.is_set
	|| area_index.is_set
	|| area_number.is_set
	|| is_config_ready.is_set
	|| (active_data !=  nullptr && active_data->has_data());
}

bool MplsTeStandby::IgpAreas::IgpArea::Area::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(area_index.yfilter)
	|| ydk::is_set(area_number.yfilter)
	|| ydk::is_set(is_config_ready.yfilter)
	|| (active_data !=  nullptr && active_data->has_operation());
}

std::string MplsTeStandby::IgpAreas::IgpArea::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::IgpAreas::IgpArea::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_index.is_set || is_set(area_index.yfilter)) leaf_name_data.push_back(area_index.get_name_leafdata());
    if (area_number.is_set || is_set(area_number.yfilter)) leaf_name_data.push_back(area_number.get_name_leafdata());
    if (is_config_ready.is_set || is_set(is_config_ready.yfilter)) leaf_name_data.push_back(is_config_ready.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::IgpAreas::IgpArea::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-data")
    {
        if(active_data == nullptr)
        {
            active_data = std::make_shared<MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData>();
        }
        return active_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::IgpAreas::IgpArea::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_data != nullptr)
    {
        children["active-data"] = active_data;
    }

    return children;
}

void MplsTeStandby::IgpAreas::IgpArea::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-index")
    {
        area_index = value;
        area_index.value_namespace = name_space;
        area_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-number")
    {
        area_number = value;
        area_number.value_namespace = name_space;
        area_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-config-ready")
    {
        is_config_ready = value;
        is_config_ready.value_namespace = name_space;
        is_config_ready.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::IgpAreas::IgpArea::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "area-index")
    {
        area_index.yfilter = yfilter;
    }
    if(value_path == "area-number")
    {
        area_number.yfilter = yfilter;
    }
    if(value_path == "is-config-ready")
    {
        is_config_ready.yfilter = yfilter;
    }
}

bool MplsTeStandby::IgpAreas::IgpArea::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-data" || name == "area-format" || name == "area-index" || name == "area-number" || name == "is-config-ready")
        return true;
    return false;
}

MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::ActiveData()
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
    area_statistics(std::make_shared<MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics>())
{
    area_statistics->parent = this;

    yang_name = "active-data"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::~ActiveData()
{
}

bool MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::has_data() const
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

bool MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interfaces_count.yfilter)
	|| ydk::is_set(link_idt_received.yfilter)
	|| ydk::is_set(p2mp_destination_count.yfilter)
	|| ydk::is_set(p2p_autoroute_announced_count.yfilter)
	|| ydk::is_set(p2p_forwarding_adjacency_count.yfilter)
	|| ydk::is_set(p2p_heads_count.yfilter)
	|| ydk::is_set(sr_strict.yfilter)
	|| ydk::is_set(topology_idt_received.yfilter)
	|| ydk::is_set(tunnel_loose_hops.yfilter)
	|| (area_statistics !=  nullptr && area_statistics->has_operation());
}

std::string MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interfaces_count.is_set || is_set(interfaces_count.yfilter)) leaf_name_data.push_back(interfaces_count.get_name_leafdata());
    if (link_idt_received.is_set || is_set(link_idt_received.yfilter)) leaf_name_data.push_back(link_idt_received.get_name_leafdata());
    if (p2mp_destination_count.is_set || is_set(p2mp_destination_count.yfilter)) leaf_name_data.push_back(p2mp_destination_count.get_name_leafdata());
    if (p2p_autoroute_announced_count.is_set || is_set(p2p_autoroute_announced_count.yfilter)) leaf_name_data.push_back(p2p_autoroute_announced_count.get_name_leafdata());
    if (p2p_forwarding_adjacency_count.is_set || is_set(p2p_forwarding_adjacency_count.yfilter)) leaf_name_data.push_back(p2p_forwarding_adjacency_count.get_name_leafdata());
    if (p2p_heads_count.is_set || is_set(p2p_heads_count.yfilter)) leaf_name_data.push_back(p2p_heads_count.get_name_leafdata());
    if (sr_strict.is_set || is_set(sr_strict.yfilter)) leaf_name_data.push_back(sr_strict.get_name_leafdata());
    if (topology_idt_received.is_set || is_set(topology_idt_received.yfilter)) leaf_name_data.push_back(topology_idt_received.get_name_leafdata());
    if (tunnel_loose_hops.is_set || is_set(tunnel_loose_hops.yfilter)) leaf_name_data.push_back(tunnel_loose_hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-statistics")
    {
        if(area_statistics == nullptr)
        {
            area_statistics = std::make_shared<MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics>();
        }
        return area_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_statistics != nullptr)
    {
        children["area-statistics"] = area_statistics;
    }

    return children;
}

void MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interfaces-count")
    {
        interfaces_count = value;
        interfaces_count.value_namespace = name_space;
        interfaces_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-idt-received")
    {
        link_idt_received = value;
        link_idt_received.value_namespace = name_space;
        link_idt_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-destination-count")
    {
        p2mp_destination_count = value;
        p2mp_destination_count.value_namespace = name_space;
        p2mp_destination_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-autoroute-announced-count")
    {
        p2p_autoroute_announced_count = value;
        p2p_autoroute_announced_count.value_namespace = name_space;
        p2p_autoroute_announced_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-forwarding-adjacency-count")
    {
        p2p_forwarding_adjacency_count = value;
        p2p_forwarding_adjacency_count.value_namespace = name_space;
        p2p_forwarding_adjacency_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-heads-count")
    {
        p2p_heads_count = value;
        p2p_heads_count.value_namespace = name_space;
        p2p_heads_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-strict")
    {
        sr_strict = value;
        sr_strict.value_namespace = name_space;
        sr_strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-idt-received")
    {
        topology_idt_received = value;
        topology_idt_received.value_namespace = name_space;
        topology_idt_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-loose-hops")
    {
        tunnel_loose_hops = value;
        tunnel_loose_hops.value_namespace = name_space;
        tunnel_loose_hops.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interfaces-count")
    {
        interfaces_count.yfilter = yfilter;
    }
    if(value_path == "link-idt-received")
    {
        link_idt_received.yfilter = yfilter;
    }
    if(value_path == "p2mp-destination-count")
    {
        p2mp_destination_count.yfilter = yfilter;
    }
    if(value_path == "p2p-autoroute-announced-count")
    {
        p2p_autoroute_announced_count.yfilter = yfilter;
    }
    if(value_path == "p2p-forwarding-adjacency-count")
    {
        p2p_forwarding_adjacency_count.yfilter = yfilter;
    }
    if(value_path == "p2p-heads-count")
    {
        p2p_heads_count.yfilter = yfilter;
    }
    if(value_path == "sr-strict")
    {
        sr_strict.yfilter = yfilter;
    }
    if(value_path == "topology-idt-received")
    {
        topology_idt_received.yfilter = yfilter;
    }
    if(value_path == "tunnel-loose-hops")
    {
        tunnel_loose_hops.yfilter = yfilter;
    }
}

bool MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-statistics" || name == "interfaces-count" || name == "link-idt-received" || name == "p2mp-destination-count" || name == "p2p-autoroute-announced-count" || name == "p2p-forwarding-adjacency-count" || name == "p2p-heads-count" || name == "sr-strict" || name == "topology-idt-received" || name == "tunnel-loose-hops")
        return true;
    return false;
}

MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::AreaStatistics()
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

    yang_name = "area-statistics"; yang_parent_name = "active-data"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::~AreaStatistics()
{
}

bool MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::has_data() const
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

bool MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_adjacency_announce_messages.yfilter)
	|| ydk::is_set(area_adjacency_request_messages.yfilter)
	|| ydk::is_set(area_flood_messages.yfilter)
	|| ydk::is_set(area_lsa_announce_messages.yfilter)
	|| ydk::is_set(area_lsa_delete_messages.yfilter)
	|| ydk::is_set(area_lsa_fragment_announce_messages.yfilter)
	|| ydk::is_set(area_lsa_fragment_delete_messages.yfilter)
	|| ydk::is_set(area_tunnel_announce_messages.yfilter);
}

std::string MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_adjacency_announce_messages.is_set || is_set(area_adjacency_announce_messages.yfilter)) leaf_name_data.push_back(area_adjacency_announce_messages.get_name_leafdata());
    if (area_adjacency_request_messages.is_set || is_set(area_adjacency_request_messages.yfilter)) leaf_name_data.push_back(area_adjacency_request_messages.get_name_leafdata());
    if (area_flood_messages.is_set || is_set(area_flood_messages.yfilter)) leaf_name_data.push_back(area_flood_messages.get_name_leafdata());
    if (area_lsa_announce_messages.is_set || is_set(area_lsa_announce_messages.yfilter)) leaf_name_data.push_back(area_lsa_announce_messages.get_name_leafdata());
    if (area_lsa_delete_messages.is_set || is_set(area_lsa_delete_messages.yfilter)) leaf_name_data.push_back(area_lsa_delete_messages.get_name_leafdata());
    if (area_lsa_fragment_announce_messages.is_set || is_set(area_lsa_fragment_announce_messages.yfilter)) leaf_name_data.push_back(area_lsa_fragment_announce_messages.get_name_leafdata());
    if (area_lsa_fragment_delete_messages.is_set || is_set(area_lsa_fragment_delete_messages.yfilter)) leaf_name_data.push_back(area_lsa_fragment_delete_messages.get_name_leafdata());
    if (area_tunnel_announce_messages.is_set || is_set(area_tunnel_announce_messages.yfilter)) leaf_name_data.push_back(area_tunnel_announce_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-adjacency-announce-messages")
    {
        area_adjacency_announce_messages = value;
        area_adjacency_announce_messages.value_namespace = name_space;
        area_adjacency_announce_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-adjacency-request-messages")
    {
        area_adjacency_request_messages = value;
        area_adjacency_request_messages.value_namespace = name_space;
        area_adjacency_request_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-flood-messages")
    {
        area_flood_messages = value;
        area_flood_messages.value_namespace = name_space;
        area_flood_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-announce-messages")
    {
        area_lsa_announce_messages = value;
        area_lsa_announce_messages.value_namespace = name_space;
        area_lsa_announce_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-delete-messages")
    {
        area_lsa_delete_messages = value;
        area_lsa_delete_messages.value_namespace = name_space;
        area_lsa_delete_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-fragment-announce-messages")
    {
        area_lsa_fragment_announce_messages = value;
        area_lsa_fragment_announce_messages.value_namespace = name_space;
        area_lsa_fragment_announce_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-fragment-delete-messages")
    {
        area_lsa_fragment_delete_messages = value;
        area_lsa_fragment_delete_messages.value_namespace = name_space;
        area_lsa_fragment_delete_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-tunnel-announce-messages")
    {
        area_tunnel_announce_messages = value;
        area_tunnel_announce_messages.value_namespace = name_space;
        area_tunnel_announce_messages.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-adjacency-announce-messages")
    {
        area_adjacency_announce_messages.yfilter = yfilter;
    }
    if(value_path == "area-adjacency-request-messages")
    {
        area_adjacency_request_messages.yfilter = yfilter;
    }
    if(value_path == "area-flood-messages")
    {
        area_flood_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-announce-messages")
    {
        area_lsa_announce_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-delete-messages")
    {
        area_lsa_delete_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-fragment-announce-messages")
    {
        area_lsa_fragment_announce_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-fragment-delete-messages")
    {
        area_lsa_fragment_delete_messages.yfilter = yfilter;
    }
    if(value_path == "area-tunnel-announce-messages")
    {
        area_tunnel_announce_messages.yfilter = yfilter;
    }
}

bool MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-adjacency-announce-messages" || name == "area-adjacency-request-messages" || name == "area-flood-messages" || name == "area-lsa-announce-messages" || name == "area-lsa-delete-messages" || name == "area-lsa-fragment-announce-messages" || name == "area-lsa-fragment-delete-messages" || name == "area-tunnel-announce-messages")
        return true;
    return false;
}

MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId::SecondaryRouterId()
    :
    entry{YType::str, "entry"}
{

    yang_name = "secondary-router-id"; yang_parent_name = "igp-area"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId::~SecondaryRouterId()
{
}

bool MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId::has_data() const
{
    return entry.is_set;
}

bool MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::IgpAreas::IgpArea::SecondaryRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::Issu::Issu()
    :
    detail(std::make_shared<MplsTeStandby::Issu::Detail>())
	,status(std::make_shared<MplsTeStandby::Issu::Status>())
{
    detail->parent = this;
    status->parent = this;

    yang_name = "issu"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Issu::~Issu()
{
}

bool MplsTeStandby::Issu::has_data() const
{
    return (detail !=  nullptr && detail->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool MplsTeStandby::Issu::has_operation() const
{
    return is_set(yfilter)
	|| (detail !=  nullptr && detail->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string MplsTeStandby::Issu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<MplsTeStandby::Issu::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<MplsTeStandby::Issu::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    if(status != nullptr)
    {
        children["status"] = status;
    }

    return children;
}

void MplsTeStandby::Issu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Issu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Issu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "status")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::Detail()
    :
    role{YType::enumeration, "role"}
    	,
    sync_status_information(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation>())
{
    sync_status_information->parent = this;

    yang_name = "detail"; yang_parent_name = "issu"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Issu::Detail::~Detail()
{
}

bool MplsTeStandby::Issu::Detail::has_data() const
{
    return role.is_set
	|| (sync_status_information !=  nullptr && sync_status_information->has_data());
}

bool MplsTeStandby::Issu::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (sync_status_information !=  nullptr && sync_status_information->has_operation());
}

std::string MplsTeStandby::Issu::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sync-status-information")
    {
        if(sync_status_information == nullptr)
        {
            sync_status_information = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation>();
        }
        return sync_status_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sync_status_information != nullptr)
    {
        children["sync-status-information"] = sync_status_information;
    }

    return children;
}

void MplsTeStandby::Issu::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status-information" || name == "role")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SyncStatusInformation()
    :
    sync_show_type{YType::enumeration, "sync-show-type"}
    	,
    master_sync_information(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation>())
	,slave_sync_information(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation>())
{
    master_sync_information->parent = this;
    slave_sync_information->parent = this;

    yang_name = "sync-status-information"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::~SyncStatusInformation()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::has_data() const
{
    return sync_show_type.is_set
	|| (master_sync_information !=  nullptr && master_sync_information->has_data())
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_data());
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_show_type.yfilter)
	|| (master_sync_information !=  nullptr && master_sync_information->has_operation())
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_operation());
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_show_type.is_set || is_set(sync_show_type.yfilter)) leaf_name_data.push_back(sync_show_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "master-sync-information")
    {
        if(master_sync_information == nullptr)
        {
            master_sync_information = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation>();
        }
        return master_sync_information;
    }

    if(child_yang_name == "slave-sync-information")
    {
        if(slave_sync_information == nullptr)
        {
            slave_sync_information = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation>();
        }
        return slave_sync_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(master_sync_information != nullptr)
    {
        children["master-sync-information"] = master_sync_information;
    }

    if(slave_sync_information != nullptr)
    {
        children["slave-sync-information"] = slave_sync_information;
    }

    return children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type = value;
        sync_show_type.value_namespace = name_space;
        sync_show_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "master-sync-information" || name == "slave-sync-information" || name == "sync-show-type")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::MasterSyncInformation()
    :
    idt(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt>())
{
    idt->parent = this;

    yang_name = "master-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::~MasterSyncInformation()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::has_data() const
{
    return (idt !=  nullptr && idt->has_data());
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::has_operation() const
{
    return is_set(yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt>();
        }
        return idt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt != nullptr)
    {
        children["idt"] = idt;
    }

    return children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "master-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::~Idt()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/master-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "is-ready-status" || name == "reason" || name == "withdraw-time")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "is-ready-status" || name == "reason" || name == "withdraw-time")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::SlaveSyncInformation()
    :
    insync_sub_ls_ps{YType::uint32, "insync-sub-ls-ps"},
    insync_tunnels{YType::uint32, "insync-tunnels"},
    pending_sub_ls_ps{YType::uint32, "pending-sub-ls-ps"},
    pending_tunnels{YType::uint32, "pending-tunnels"}
    	,
    idt(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt>())
{
    idt->parent = this;

    yang_name = "slave-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::~SlaveSyncInformation()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::has_data() const
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

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::has_operation() const
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
    return is_set(yfilter)
	|| ydk::is_set(insync_sub_ls_ps.yfilter)
	|| ydk::is_set(insync_tunnels.yfilter)
	|| ydk::is_set(pending_sub_ls_ps.yfilter)
	|| ydk::is_set(pending_tunnels.yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insync_sub_ls_ps.is_set || is_set(insync_sub_ls_ps.yfilter)) leaf_name_data.push_back(insync_sub_ls_ps.get_name_leafdata());
    if (insync_tunnels.is_set || is_set(insync_tunnels.yfilter)) leaf_name_data.push_back(insync_tunnels.get_name_leafdata());
    if (pending_sub_ls_ps.is_set || is_set(pending_sub_ls_ps.yfilter)) leaf_name_data.push_back(pending_sub_ls_ps.get_name_leafdata());
    if (pending_tunnels.is_set || is_set(pending_tunnels.yfilter)) leaf_name_data.push_back(pending_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt>();
        }
        return idt;
    }

    if(child_yang_name == "s2l-pending")
    {
        for(auto const & c : s2l_pending)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending>();
        c->parent = this;
        s2l_pending.push_back(c);
        return c;
    }

    if(child_yang_name == "vif-pending")
    {
        for(auto const & c : vif_pending)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending>();
        c->parent = this;
        vif_pending.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt != nullptr)
    {
        children["idt"] = idt;
    }

    for (auto const & c : s2l_pending)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vif_pending)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps = value;
        insync_sub_ls_ps.value_namespace = name_space;
        insync_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insync-tunnels")
    {
        insync_tunnels = value;
        insync_tunnels.value_namespace = name_space;
        insync_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps = value;
        pending_sub_ls_ps.value_namespace = name_space;
        pending_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels = value;
        pending_tunnels.value_namespace = name_space;
        pending_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps.yfilter = yfilter;
    }
    if(value_path == "insync-tunnels")
    {
        insync_tunnels.yfilter = yfilter;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps.yfilter = yfilter;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt" || name == "s2l-pending" || name == "vif-pending" || name == "insync-sub-ls-ps" || name == "insync-tunnels" || name == "pending-sub-ls-ps" || name == "pending-tunnels")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::~Idt()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "is-ready-status" || name == "reason" || name == "withdraw-time")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "is-ready-status" || name == "reason" || name == "withdraw-time")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::S2LPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    s2l_role{YType::enumeration, "s2l-role"},
    signaled_name{YType::str, "signaled-name"}
{

    yang_name = "s2l-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::~S2LPending()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_data() const
{
    return pending_reason.is_set
	|| s2l_role.is_set
	|| signaled_name.is_set;
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(s2l_role.yfilter)
	|| ydk::is_set(signaled_name.yfilter);
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-pending";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (s2l_role.is_set || is_set(s2l_role.yfilter)) leaf_name_data.push_back(s2l_role.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
        pending_reason.value_namespace = name_space;
        pending_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-role")
    {
        s2l_role = value;
        s2l_role.value_namespace = name_space;
        s2l_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
        signaled_name.value_namespace = name_space;
        signaled_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pending-reason")
    {
        pending_reason.yfilter = yfilter;
    }
    if(value_path == "s2l-role")
    {
        s2l_role.yfilter = yfilter;
    }
    if(value_path == "signaled-name")
    {
        signaled_name.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "s2l-role" || name == "signaled-name")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::VifPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    tunnel_name{YType::str, "tunnel-name"}
{

    yang_name = "vif-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::~VifPending()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_data() const
{
    return pending_reason.is_set
	|| tunnel_name.is_set;
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(tunnel_name.yfilter);
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vif-pending";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "tunnel-name")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::Status()
    :
    role{YType::enumeration, "role"}
    	,
    sync_status_information(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation>())
{
    sync_status_information->parent = this;

    yang_name = "status"; yang_parent_name = "issu"; is_top_level_class = false; has_list_ancestor = false;
}

MplsTeStandby::Issu::Status::~Status()
{
}

bool MplsTeStandby::Issu::Status::has_data() const
{
    return role.is_set
	|| (sync_status_information !=  nullptr && sync_status_information->has_data());
}

bool MplsTeStandby::Issu::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (sync_status_information !=  nullptr && sync_status_information->has_operation());
}

std::string MplsTeStandby::Issu::Status::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sync-status-information")
    {
        if(sync_status_information == nullptr)
        {
            sync_status_information = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation>();
        }
        return sync_status_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sync_status_information != nullptr)
    {
        children["sync-status-information"] = sync_status_information;
    }

    return children;
}

void MplsTeStandby::Issu::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status-information" || name == "role")
        return true;
    return false;
}


}
}

