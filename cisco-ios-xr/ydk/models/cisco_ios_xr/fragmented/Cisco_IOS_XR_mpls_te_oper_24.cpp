
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_24.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_26.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_25.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::Logging()
    :
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    all_logging_enabled{YType::boolean, "all-logging-enabled"}
{

    yang_name = "logging"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::~Logging()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_data() const
{
    return lsp_state.is_set
	|| s2l_state.is_set
	|| lsp_re_route.is_set
	|| lsp_re_opt.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| all_logging_enabled.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state" || name == "s2l-state" || name == "lsp-re-route" || name == "lsp-re-opt" || name == "lsp-insufficient-bw" || name == "lsp-bandwidth-change" || name == "lsp-pcalc-failure-logging-enabled" || name == "all-logging-enabled")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependList()
{

    yang_name = "prepend-list"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::~PrependList()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_data() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_operation() const
{
    for (std::size_t index=0; index<prepend_entry.size(); index++)
    {
        if(prepend_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry>();
        c->parent = this;
        prepend_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prepend_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepend-entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::PrependEntry()
    :
    type{YType::enumeration, "type"},
    index_{YType::uint32, "index"},
    next_label{YType::uint32, "next-label"}
{

    yang_name = "prepend-entry"; yang_parent_name = "prepend-list"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::~PrependEntry()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_data() const
{
    return type.is_set
	|| index_.is_set
	|| next_label.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(next_label.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (next_label.is_set || is_set(next_label.yfilter)) leaf_name_data.push_back(next_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "next-label")
    {
        next_label.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::PrependList::PrependEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "index" || name == "next-label")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::~TunnelId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2PTe::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::PathCalculationError::PathCalculationError()
    :
    error_message{YType::str, "error-message"},
    lsp_mode{YType::enumeration, "lsp-mode"},
    log_time{YType::uint32, "log-time"}
{

    yang_name = "path-calculation-error"; yang_parent_name = "active-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::PathCalculationError::~PathCalculationError()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::PathCalculationError::has_data() const
{
    return error_message.is_set
	|| lsp_mode.is_set
	|| log_time.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::PathCalculationError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(lsp_mode.yfilter)
	|| ydk::is_set(log_time.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::PathCalculationError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-calculation-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::PathCalculationError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.yfilter)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.yfilter)) leaf_name_data.push_back(log_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::PathCalculationError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::PathCalculationError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::PathCalculationError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
        lsp_mode.value_namespace = name_space;
        lsp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-time")
    {
        log_time = value;
        log_time.value_namespace = name_space;
        log_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::PathCalculationError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode.yfilter = yfilter;
    }
    if(value_path == "log-time")
    {
        log_time.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::PathCalculationError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-message" || name == "lsp-mode" || name == "log-time")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::RemergeError::RemergeError()
    :
    error_message{YType::str, "error-message"},
    lsp_mode{YType::enumeration, "lsp-mode"},
    log_time{YType::uint32, "log-time"}
{

    yang_name = "remerge-error"; yang_parent_name = "active-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::RemergeError::~RemergeError()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::RemergeError::has_data() const
{
    return error_message.is_set
	|| lsp_mode.is_set
	|| log_time.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::RemergeError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(lsp_mode.yfilter)
	|| ydk::is_set(log_time.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::RemergeError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remerge-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::RemergeError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.yfilter)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.yfilter)) leaf_name_data.push_back(log_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::RemergeError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::RemergeError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::RemergeError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
        lsp_mode.value_namespace = name_space;
        lsp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-time")
    {
        log_time = value;
        log_time.value_namespace = name_space;
        log_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::RemergeError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode.yfilter = yfilter;
    }
    if(value_path == "log-time")
    {
        log_time.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::RemergeError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-message" || name == "lsp-mode" || name == "log-time")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::SignallingError::SignallingError()
    :
    error_node{YType::uint32, "error-node"},
    error{YType::uint8, "error"},
    sub_code{YType::uint16, "sub-code"},
    lsp_mode{YType::enumeration, "lsp-mode"},
    log_time{YType::uint32, "log-time"},
    signalling_lsp_id{YType::uint16, "signalling-lsp-id"},
    error_message{YType::str, "error-message"},
    reverse_lsp{YType::boolean, "reverse-lsp"}
{

    yang_name = "signalling-error"; yang_parent_name = "active-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::SignallingError::~SignallingError()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::SignallingError::has_data() const
{
    return error_node.is_set
	|| error.is_set
	|| sub_code.is_set
	|| lsp_mode.is_set
	|| log_time.is_set
	|| signalling_lsp_id.is_set
	|| error_message.is_set
	|| reverse_lsp.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::SignallingError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_node.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(sub_code.yfilter)
	|| ydk::is_set(lsp_mode.yfilter)
	|| ydk::is_set(log_time.yfilter)
	|| ydk::is_set(signalling_lsp_id.yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(reverse_lsp.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::SignallingError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::SignallingError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_node.is_set || is_set(error_node.yfilter)) leaf_name_data.push_back(error_node.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (sub_code.is_set || is_set(sub_code.yfilter)) leaf_name_data.push_back(sub_code.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.yfilter)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.yfilter)) leaf_name_data.push_back(log_time.get_name_leafdata());
    if (signalling_lsp_id.is_set || is_set(signalling_lsp_id.yfilter)) leaf_name_data.push_back(signalling_lsp_id.get_name_leafdata());
    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (reverse_lsp.is_set || is_set(reverse_lsp.yfilter)) leaf_name_data.push_back(reverse_lsp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::SignallingError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::SignallingError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::SignallingError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-node")
    {
        error_node = value;
        error_node.value_namespace = name_space;
        error_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-code")
    {
        sub_code = value;
        sub_code.value_namespace = name_space;
        sub_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
        lsp_mode.value_namespace = name_space;
        lsp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-time")
    {
        log_time = value;
        log_time.value_namespace = name_space;
        log_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-lsp-id")
    {
        signalling_lsp_id = value;
        signalling_lsp_id.value_namespace = name_space;
        signalling_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp")
    {
        reverse_lsp = value;
        reverse_lsp.value_namespace = name_space;
        reverse_lsp.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::SignallingError::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-node")
    {
        error_node.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "sub-code")
    {
        sub_code.yfilter = yfilter;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode.yfilter = yfilter;
    }
    if(value_path == "log-time")
    {
        log_time.yfilter = yfilter;
    }
    if(value_path == "signalling-lsp-id")
    {
        signalling_lsp_id.yfilter = yfilter;
    }
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp")
    {
        reverse_lsp.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ActivePathOption::SignallingError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-node" || name == "error" || name == "sub-code" || name == "lsp-mode" || name == "log-time" || name == "signalling-lsp-id" || name == "error-message" || name == "reverse-lsp")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::OutXro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
{

    yang_name = "out-xro"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::~OutXro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::has_data() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mutual_diversity_flag.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mutual_diversity_flag.is_set || is_set(mutual_diversity_flag.yfilter)) leaf_name_data.push_back(mutual_diversity_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject>();
        c->parent = this;
        xro_subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xro_subobject)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
        mutual_diversity_flag.value_namespace = name_space;
        mutual_diversity_flag.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro-subobject" || name == "mutual-diversity-flag")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
    	,
    ipv4_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv4Subobject>())
	,ipv6_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv6Subobject>())
	,unnumbered_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::UnnumberedSubobject>())
	,as_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::AsSubobject>())
	,srlg_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::SrlgSubobject>())
	,lsp_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject>())
{
    ipv4_subobject->parent = this;
    ipv6_subobject->parent = this;
    unnumbered_subobject->parent = this;
    as_subobject->parent = this;
    srlg_subobject->parent = this;
    lsp_subobject->parent = this;

    yang_name = "xro-subobject"; yang_parent_name = "out-xro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::~XroSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::has_data() const
{
    return type.is_set
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data())
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_operation())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_operation())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_operation())
	|| (as_subobject !=  nullptr && as_subobject->has_operation())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_operation())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject == nullptr)
        {
            ipv4_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv4Subobject>();
        }
        return ipv4_subobject;
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject == nullptr)
        {
            ipv6_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv6Subobject>();
        }
        return ipv6_subobject;
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject == nullptr)
        {
            unnumbered_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::UnnumberedSubobject>();
        }
        return unnumbered_subobject;
    }

    if(child_yang_name == "as-subobject")
    {
        if(as_subobject == nullptr)
        {
            as_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::AsSubobject>();
        }
        return as_subobject;
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject == nullptr)
        {
            srlg_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::SrlgSubobject>();
        }
        return srlg_subobject;
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject == nullptr)
        {
            lsp_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject>();
        }
        return lsp_subobject;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_subobject != nullptr)
    {
        children["ipv4-subobject"] = ipv4_subobject;
    }

    if(ipv6_subobject != nullptr)
    {
        children["ipv6-subobject"] = ipv6_subobject;
    }

    if(unnumbered_subobject != nullptr)
    {
        children["unnumbered-subobject"] = unnumbered_subobject;
    }

    if(as_subobject != nullptr)
    {
        children["as-subobject"] = as_subobject;
    }

    if(srlg_subobject != nullptr)
    {
        children["srlg-subobject"] = srlg_subobject;
    }

    if(lsp_subobject != nullptr)
    {
        children["lsp-subobject"] = lsp_subobject;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-subobject" || name == "ipv6-subobject" || name == "unnumbered-subobject" || name == "as-subobject" || name == "srlg-subobject" || name == "lsp-subobject" || name == "type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    prefix_len{YType::uint8, "prefix-len"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv4Subobject::has_data() const
{
    return address.is_set
	|| prefix_len.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv4Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv4Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
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
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv4Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv4Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-len" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    prefix_len{YType::uint8, "prefix-len"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv6Subobject::has_data() const
{
    return address.is_set
	|| prefix_len.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv6Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv6Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
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
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv6Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::Ipv6Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-len" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    te_router_id{YType::str, "te-router-id"},
    interface_id{YType::uint32, "interface-id"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::UnnumberedSubobject::has_data() const
{
    return te_router_id.is_set
	|| interface_id.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_router_id.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::UnnumberedSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_router_id.is_set || is_set(te_router_id.yfilter)) leaf_name_data.push_back(te_router_id.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::UnnumberedSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-router-id")
    {
        te_router_id = value;
        te_router_id.value_namespace = name_space;
        te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
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
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::UnnumberedSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-router-id")
    {
        te_router_id.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::UnnumberedSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-router-id" || name == "interface-id" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{

    yang_name = "as-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::AsSubobject::has_data() const
{
    return as_number.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::AsSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::AsSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::AsSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::AsSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::AsSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::SrlgSubobject::SrlgSubobject()
    :
    srlg_id{YType::uint32, "srlg-id"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "srlg-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::SrlgSubobject::~SrlgSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::SrlgSubobject::has_data() const
{
    return srlg_id.is_set
	|| exclusion_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::SrlgSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_id.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::SrlgSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::SrlgSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_id.is_set || is_set(srlg_id.yfilter)) leaf_name_data.push_back(srlg_id.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::SrlgSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::SrlgSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::SrlgSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-id")
    {
        srlg_id = value;
        srlg_id.value_namespace = name_space;
        srlg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::SrlgSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-id")
    {
        srlg_id.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::SrlgSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-id" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::LspSubobject()
    :
    ignore_lsp_id{YType::boolean, "ignore-lsp-id"},
    processing_node_exception{YType::boolean, "processing-node-exception"},
    penultimate_node_exception{YType::boolean, "penultimate-node-exception"},
    destination_node_exception{YType::boolean, "destination-node-exception"},
    exclusion_type{YType::enumeration, "exclusion-type"}
    	,
    fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec>())
{
    fec->parent = this;

    yang_name = "lsp-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::~LspSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::has_data() const
{
    return ignore_lsp_id.is_set
	|| processing_node_exception.is_set
	|| penultimate_node_exception.is_set
	|| destination_node_exception.is_set
	|| exclusion_type.is_set
	|| (fec !=  nullptr && fec->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_lsp_id.yfilter)
	|| ydk::is_set(processing_node_exception.yfilter)
	|| ydk::is_set(penultimate_node_exception.yfilter)
	|| ydk::is_set(destination_node_exception.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| (fec !=  nullptr && fec->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_lsp_id.is_set || is_set(ignore_lsp_id.yfilter)) leaf_name_data.push_back(ignore_lsp_id.get_name_leafdata());
    if (processing_node_exception.is_set || is_set(processing_node_exception.yfilter)) leaf_name_data.push_back(processing_node_exception.get_name_leafdata());
    if (penultimate_node_exception.is_set || is_set(penultimate_node_exception.yfilter)) leaf_name_data.push_back(penultimate_node_exception.get_name_leafdata());
    if (destination_node_exception.is_set || is_set(destination_node_exception.yfilter)) leaf_name_data.push_back(destination_node_exception.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec")
    {
        if(fec == nullptr)
        {
            fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec>();
        }
        return fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec != nullptr)
    {
        children["fec"] = fec;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id = value;
        ignore_lsp_id.value_namespace = name_space;
        ignore_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception = value;
        processing_node_exception.value_namespace = name_space;
        processing_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception = value;
        penultimate_node_exception.value_namespace = name_space;
        penultimate_node_exception.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id.yfilter = yfilter;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception.yfilter = yfilter;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception.yfilter = yfilter;
    }
    if(value_path == "destination-node-exception")
    {
        destination_node_exception.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec" || name == "ignore-lsp-id" || name == "processing-node-exception" || name == "penultimate-node-exception" || name == "destination-node-exception" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::Fec()
    :
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "fec"; yang_parent_name = "lsp-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::~Fec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::has_data() const
{
    return fec_lsp_id.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-lsp-id" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-vrf")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "fec"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| p2p_lsp_destination.is_set
	|| fec_destination_p2mp_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "p2p-lsp-destination" || name == "fec-destination-p2mp-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::InXro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
{

    yang_name = "in-xro"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::~InXro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::has_data() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.size(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mutual_diversity_flag.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mutual_diversity_flag.is_set || is_set(mutual_diversity_flag.yfilter)) leaf_name_data.push_back(mutual_diversity_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject>();
        c->parent = this;
        xro_subobject.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : xro_subobject)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
        mutual_diversity_flag.value_namespace = name_space;
        mutual_diversity_flag.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro-subobject" || name == "mutual-diversity-flag")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
    	,
    ipv4_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv4Subobject>())
	,ipv6_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv6Subobject>())
	,unnumbered_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::UnnumberedSubobject>())
	,as_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::AsSubobject>())
	,srlg_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::SrlgSubobject>())
	,lsp_subobject(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject>())
{
    ipv4_subobject->parent = this;
    ipv6_subobject->parent = this;
    unnumbered_subobject->parent = this;
    as_subobject->parent = this;
    srlg_subobject->parent = this;
    lsp_subobject->parent = this;

    yang_name = "xro-subobject"; yang_parent_name = "in-xro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::~XroSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::has_data() const
{
    return type.is_set
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data())
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_operation())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_operation())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_operation())
	|| (as_subobject !=  nullptr && as_subobject->has_operation())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_operation())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject == nullptr)
        {
            ipv4_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv4Subobject>();
        }
        return ipv4_subobject;
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject == nullptr)
        {
            ipv6_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv6Subobject>();
        }
        return ipv6_subobject;
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject == nullptr)
        {
            unnumbered_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::UnnumberedSubobject>();
        }
        return unnumbered_subobject;
    }

    if(child_yang_name == "as-subobject")
    {
        if(as_subobject == nullptr)
        {
            as_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::AsSubobject>();
        }
        return as_subobject;
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject == nullptr)
        {
            srlg_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::SrlgSubobject>();
        }
        return srlg_subobject;
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject == nullptr)
        {
            lsp_subobject = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject>();
        }
        return lsp_subobject;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_subobject != nullptr)
    {
        children["ipv4-subobject"] = ipv4_subobject;
    }

    if(ipv6_subobject != nullptr)
    {
        children["ipv6-subobject"] = ipv6_subobject;
    }

    if(unnumbered_subobject != nullptr)
    {
        children["unnumbered-subobject"] = unnumbered_subobject;
    }

    if(as_subobject != nullptr)
    {
        children["as-subobject"] = as_subobject;
    }

    if(srlg_subobject != nullptr)
    {
        children["srlg-subobject"] = srlg_subobject;
    }

    if(lsp_subobject != nullptr)
    {
        children["lsp-subobject"] = lsp_subobject;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-subobject" || name == "ipv6-subobject" || name == "unnumbered-subobject" || name == "as-subobject" || name == "srlg-subobject" || name == "lsp-subobject" || name == "type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    prefix_len{YType::uint8, "prefix-len"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv4Subobject::has_data() const
{
    return address.is_set
	|| prefix_len.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv4Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv4Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
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
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv4Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv4Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-len" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    prefix_len{YType::uint8, "prefix-len"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv6Subobject::has_data() const
{
    return address.is_set
	|| prefix_len.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv6Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv6Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
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
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv6Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::Ipv6Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-len" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    te_router_id{YType::str, "te-router-id"},
    interface_id{YType::uint32, "interface-id"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::UnnumberedSubobject::has_data() const
{
    return te_router_id.is_set
	|| interface_id.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_router_id.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::UnnumberedSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_router_id.is_set || is_set(te_router_id.yfilter)) leaf_name_data.push_back(te_router_id.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::UnnumberedSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-router-id")
    {
        te_router_id = value;
        te_router_id.value_namespace = name_space;
        te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
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
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::UnnumberedSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-router-id")
    {
        te_router_id.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::UnnumberedSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-router-id" || name == "interface-id" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{

    yang_name = "as-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::AsSubobject::has_data() const
{
    return as_number.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::AsSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::AsSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::AsSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::AsSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::AsSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::SrlgSubobject::SrlgSubobject()
    :
    srlg_id{YType::uint32, "srlg-id"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "srlg-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::SrlgSubobject::~SrlgSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::SrlgSubobject::has_data() const
{
    return srlg_id.is_set
	|| exclusion_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::SrlgSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_id.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::SrlgSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::SrlgSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_id.is_set || is_set(srlg_id.yfilter)) leaf_name_data.push_back(srlg_id.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::SrlgSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::SrlgSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::SrlgSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-id")
    {
        srlg_id = value;
        srlg_id.value_namespace = name_space;
        srlg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::SrlgSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-id")
    {
        srlg_id.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::SrlgSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-id" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::LspSubobject()
    :
    ignore_lsp_id{YType::boolean, "ignore-lsp-id"},
    processing_node_exception{YType::boolean, "processing-node-exception"},
    penultimate_node_exception{YType::boolean, "penultimate-node-exception"},
    destination_node_exception{YType::boolean, "destination-node-exception"},
    exclusion_type{YType::enumeration, "exclusion-type"}
    	,
    fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec>())
{
    fec->parent = this;

    yang_name = "lsp-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::~LspSubobject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::has_data() const
{
    return ignore_lsp_id.is_set
	|| processing_node_exception.is_set
	|| penultimate_node_exception.is_set
	|| destination_node_exception.is_set
	|| exclusion_type.is_set
	|| (fec !=  nullptr && fec->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_lsp_id.yfilter)
	|| ydk::is_set(processing_node_exception.yfilter)
	|| ydk::is_set(penultimate_node_exception.yfilter)
	|| ydk::is_set(destination_node_exception.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| (fec !=  nullptr && fec->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_lsp_id.is_set || is_set(ignore_lsp_id.yfilter)) leaf_name_data.push_back(ignore_lsp_id.get_name_leafdata());
    if (processing_node_exception.is_set || is_set(processing_node_exception.yfilter)) leaf_name_data.push_back(processing_node_exception.get_name_leafdata());
    if (penultimate_node_exception.is_set || is_set(penultimate_node_exception.yfilter)) leaf_name_data.push_back(penultimate_node_exception.get_name_leafdata());
    if (destination_node_exception.is_set || is_set(destination_node_exception.yfilter)) leaf_name_data.push_back(destination_node_exception.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec")
    {
        if(fec == nullptr)
        {
            fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec>();
        }
        return fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec != nullptr)
    {
        children["fec"] = fec;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id = value;
        ignore_lsp_id.value_namespace = name_space;
        ignore_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception = value;
        processing_node_exception.value_namespace = name_space;
        processing_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception = value;
        penultimate_node_exception.value_namespace = name_space;
        penultimate_node_exception.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id.yfilter = yfilter;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception.yfilter = yfilter;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception.yfilter = yfilter;
    }
    if(value_path == "destination-node-exception")
    {
        destination_node_exception.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec" || name == "ignore-lsp-id" || name == "processing-node-exception" || name == "penultimate-node-exception" || name == "destination-node-exception" || name == "exclusion-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::Fec()
    :
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "fec"; yang_parent_name = "lsp-subobject"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::~Fec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::has_data() const
{
    return fec_lsp_id.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-lsp-id" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-vrf")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "fec"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| p2p_lsp_destination.is_set
	|| fec_destination_p2mp_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InXro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "p2p-lsp-destination" || name == "fec-destination-p2mp-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Tspec::Tspec()
    :
    average_rate{YType::uint64, "average-rate"},
    maximum_burst{YType::uint64, "maximum-burst"},
    peak_rate{YType::uint64, "peak-rate"}
{

    yang_name = "tspec"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Tspec::~Tspec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Tspec::has_data() const
{
    return average_rate.is_set
	|| maximum_burst.is_set
	|| peak_rate.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Tspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_rate.yfilter)
	|| ydk::is_set(maximum_burst.yfilter)
	|| ydk::is_set(peak_rate.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Tspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Tspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_rate.is_set || is_set(average_rate.yfilter)) leaf_name_data.push_back(average_rate.get_name_leafdata());
    if (maximum_burst.is_set || is_set(maximum_burst.yfilter)) leaf_name_data.push_back(maximum_burst.get_name_leafdata());
    if (peak_rate.is_set || is_set(peak_rate.yfilter)) leaf_name_data.push_back(peak_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Tspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Tspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Tspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-rate")
    {
        average_rate = value;
        average_rate.value_namespace = name_space;
        average_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-burst")
    {
        maximum_burst = value;
        maximum_burst.value_namespace = name_space;
        maximum_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-rate")
    {
        peak_rate = value;
        peak_rate.value_namespace = name_space;
        peak_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Tspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-rate")
    {
        average_rate.yfilter = yfilter;
    }
    if(value_path == "maximum-burst")
    {
        maximum_burst.yfilter = yfilter;
    }
    if(value_path == "peak-rate")
    {
        peak_rate.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Tspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-rate" || name == "maximum-burst" || name == "peak-rate")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::GenericTspec()
    :
    tspec_type{YType::enumeration, "tspec-type"}
    	,
    otntspec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::Otntspec>())
{
    otntspec->parent = this;

    yang_name = "generic-tspec"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::~GenericTspec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::has_data() const
{
    return tspec_type.is_set
	|| (otntspec !=  nullptr && otntspec->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tspec_type.yfilter)
	|| (otntspec !=  nullptr && otntspec->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tspec_type.is_set || is_set(tspec_type.yfilter)) leaf_name_data.push_back(tspec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otntspec")
    {
        if(otntspec == nullptr)
        {
            otntspec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::Otntspec>();
        }
        return otntspec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otntspec != nullptr)
    {
        children["otntspec"] = otntspec;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tspec-type")
    {
        tspec_type = value;
        tspec_type.value_namespace = name_space;
        tspec_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tspec-type")
    {
        tspec_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otntspec" || name == "tspec-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::Otntspec::Otntspec()
    :
    signal_type{YType::uint8, "signal-type"},
    nmc_or_tolerance{YType::uint16, "nmc-or-tolerance"},
    nvc{YType::uint16, "nvc"},
    multiplier{YType::uint16, "multiplier"},
    bit_rate{YType::uint32, "bit-rate"}
{

    yang_name = "otntspec"; yang_parent_name = "generic-tspec"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::Otntspec::~Otntspec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::Otntspec::has_data() const
{
    return signal_type.is_set
	|| nmc_or_tolerance.is_set
	|| nvc.is_set
	|| multiplier.is_set
	|| bit_rate.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::Otntspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(signal_type.yfilter)
	|| ydk::is_set(nmc_or_tolerance.yfilter)
	|| ydk::is_set(nvc.yfilter)
	|| ydk::is_set(multiplier.yfilter)
	|| ydk::is_set(bit_rate.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::Otntspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otntspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::Otntspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signal_type.is_set || is_set(signal_type.yfilter)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (nmc_or_tolerance.is_set || is_set(nmc_or_tolerance.yfilter)) leaf_name_data.push_back(nmc_or_tolerance.get_name_leafdata());
    if (nvc.is_set || is_set(nvc.yfilter)) leaf_name_data.push_back(nvc.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());
    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::Otntspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::Otntspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::Otntspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signal-type")
    {
        signal_type = value;
        signal_type.value_namespace = name_space;
        signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nmc-or-tolerance")
    {
        nmc_or_tolerance = value;
        nmc_or_tolerance.value_namespace = name_space;
        nmc_or_tolerance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nvc")
    {
        nvc = value;
        nvc.value_namespace = name_space;
        nvc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::Otntspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signal-type")
    {
        signal_type.yfilter = yfilter;
    }
    if(value_path == "nmc-or-tolerance")
    {
        nmc_or_tolerance.yfilter = yfilter;
    }
    if(value_path == "nvc")
    {
        nvc.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericTspec::Otntspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signal-type" || name == "nmc-or-tolerance" || name == "nvc" || name == "multiplier" || name == "bit-rate")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Fspec::Fspec()
    :
    average_rate{YType::uint64, "average-rate"},
    maximum_burst{YType::uint64, "maximum-burst"},
    peak_rate{YType::uint64, "peak-rate"}
{

    yang_name = "fspec"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Fspec::~Fspec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Fspec::has_data() const
{
    return average_rate.is_set
	|| maximum_burst.is_set
	|| peak_rate.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Fspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_rate.yfilter)
	|| ydk::is_set(maximum_burst.yfilter)
	|| ydk::is_set(peak_rate.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Fspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Fspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_rate.is_set || is_set(average_rate.yfilter)) leaf_name_data.push_back(average_rate.get_name_leafdata());
    if (maximum_burst.is_set || is_set(maximum_burst.yfilter)) leaf_name_data.push_back(maximum_burst.get_name_leafdata());
    if (peak_rate.is_set || is_set(peak_rate.yfilter)) leaf_name_data.push_back(peak_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Fspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Fspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Fspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-rate")
    {
        average_rate = value;
        average_rate.value_namespace = name_space;
        average_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-burst")
    {
        maximum_burst = value;
        maximum_burst.value_namespace = name_space;
        maximum_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-rate")
    {
        peak_rate = value;
        peak_rate.value_namespace = name_space;
        peak_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Fspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-rate")
    {
        average_rate.yfilter = yfilter;
    }
    if(value_path == "maximum-burst")
    {
        maximum_burst.yfilter = yfilter;
    }
    if(value_path == "peak-rate")
    {
        peak_rate.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Fspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-rate" || name == "maximum-burst" || name == "peak-rate")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::GenericFspec()
    :
    fspec_type{YType::enumeration, "fspec-type"}
    	,
    otnfspec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::Otnfspec>())
{
    otnfspec->parent = this;

    yang_name = "generic-fspec"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::~GenericFspec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::has_data() const
{
    return fspec_type.is_set
	|| (otnfspec !=  nullptr && otnfspec->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fspec_type.yfilter)
	|| (otnfspec !=  nullptr && otnfspec->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-fspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fspec_type.is_set || is_set(fspec_type.yfilter)) leaf_name_data.push_back(fspec_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otnfspec")
    {
        if(otnfspec == nullptr)
        {
            otnfspec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::Otnfspec>();
        }
        return otnfspec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otnfspec != nullptr)
    {
        children["otnfspec"] = otnfspec;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fspec-type")
    {
        fspec_type = value;
        fspec_type.value_namespace = name_space;
        fspec_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fspec-type")
    {
        fspec_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otnfspec" || name == "fspec-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::Otnfspec::Otnfspec()
    :
    signal_type{YType::uint8, "signal-type"},
    nmc_or_tolerance{YType::uint16, "nmc-or-tolerance"},
    nvc{YType::uint16, "nvc"},
    multiplier{YType::uint16, "multiplier"},
    bit_rate{YType::uint32, "bit-rate"}
{

    yang_name = "otnfspec"; yang_parent_name = "generic-fspec"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::Otnfspec::~Otnfspec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::Otnfspec::has_data() const
{
    return signal_type.is_set
	|| nmc_or_tolerance.is_set
	|| nvc.is_set
	|| multiplier.is_set
	|| bit_rate.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::Otnfspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(signal_type.yfilter)
	|| ydk::is_set(nmc_or_tolerance.yfilter)
	|| ydk::is_set(nvc.yfilter)
	|| ydk::is_set(multiplier.yfilter)
	|| ydk::is_set(bit_rate.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::Otnfspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otnfspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::Otnfspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signal_type.is_set || is_set(signal_type.yfilter)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (nmc_or_tolerance.is_set || is_set(nmc_or_tolerance.yfilter)) leaf_name_data.push_back(nmc_or_tolerance.get_name_leafdata());
    if (nvc.is_set || is_set(nvc.yfilter)) leaf_name_data.push_back(nvc.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());
    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::Otnfspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::Otnfspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::Otnfspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signal-type")
    {
        signal_type = value;
        signal_type.value_namespace = name_space;
        signal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nmc-or-tolerance")
    {
        nmc_or_tolerance = value;
        nmc_or_tolerance.value_namespace = name_space;
        nmc_or_tolerance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nvc")
    {
        nvc = value;
        nvc.value_namespace = name_space;
        nvc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::Otnfspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signal-type")
    {
        signal_type.yfilter = yfilter;
    }
    if(value_path == "nmc-or-tolerance")
    {
        nmc_or_tolerance.yfilter = yfilter;
    }
    if(value_path == "nvc")
    {
        nvc.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GenericFspec::Otnfspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signal-type" || name == "nmc-or-tolerance" || name == "nvc" || name == "multiplier" || name == "bit-rate")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::NextHopAddressGeneric()
    :
    te_addr(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr>())
{
    te_addr->parent = this;

    yang_name = "next-hop-address-generic"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::~NextHopAddressGeneric()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::has_data() const
{
    return (te_addr !=  nullptr && te_addr->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::has_operation() const
{
    return is_set(yfilter)
	|| (te_addr !=  nullptr && te_addr->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-address-generic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-addr")
    {
        if(te_addr == nullptr)
        {
            te_addr = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr>();
        }
        return te_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(te_addr != nullptr)
    {
        children["te-addr"] = te_addr;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-addr")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::TeAddr()
    :
    type{YType::enumeration, "type"},
    ipv4_address{YType::str, "ipv4-address"}
    	,
    ipv4_unnumbered_address(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress>())
{
    ipv4_unnumbered_address->parent = this;

    yang_name = "te-addr"; yang_parent_name = "next-hop-address-generic"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::~TeAddr()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::has_data() const
{
    return type.is_set
	|| ipv4_address.is_set
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unnumbered-address")
    {
        if(ipv4_unnumbered_address == nullptr)
        {
            ipv4_unnumbered_address = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress>();
        }
        return ipv4_unnumbered_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_unnumbered_address != nullptr)
    {
        children["ipv4-unnumbered-address"] = ipv4_unnumbered_address;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unnumbered-address" || name == "type" || name == "ipv4-address")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::Ipv4UnnumberedAddress()
    :
    router_id{YType::str, "router-id"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "ipv4-unnumbered-address"; yang_parent_name = "te-addr"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::~Ipv4UnnumberedAddress()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_data() const
{
    return router_id.is_set
	|| interface_index.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unnumbered-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::NextHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "interface-index")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::PreviousHopAddressGeneric()
    :
    te_addr(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr>())
{
    te_addr->parent = this;

    yang_name = "previous-hop-address-generic"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::~PreviousHopAddressGeneric()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::has_data() const
{
    return (te_addr !=  nullptr && te_addr->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::has_operation() const
{
    return is_set(yfilter)
	|| (te_addr !=  nullptr && te_addr->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-hop-address-generic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-addr")
    {
        if(te_addr == nullptr)
        {
            te_addr = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr>();
        }
        return te_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(te_addr != nullptr)
    {
        children["te-addr"] = te_addr;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-addr")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::TeAddr()
    :
    type{YType::enumeration, "type"},
    ipv4_address{YType::str, "ipv4-address"}
    	,
    ipv4_unnumbered_address(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress>())
{
    ipv4_unnumbered_address->parent = this;

    yang_name = "te-addr"; yang_parent_name = "previous-hop-address-generic"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::~TeAddr()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::has_data() const
{
    return type.is_set
	|| ipv4_address.is_set
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unnumbered-address")
    {
        if(ipv4_unnumbered_address == nullptr)
        {
            ipv4_unnumbered_address = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress>();
        }
        return ipv4_unnumbered_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_unnumbered_address != nullptr)
    {
        children["ipv4-unnumbered-address"] = ipv4_unnumbered_address;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unnumbered-address" || name == "type" || name == "ipv4-address")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::Ipv4UnnumberedAddress()
    :
    router_id{YType::str, "router-id"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "ipv4-unnumbered-address"; yang_parent_name = "te-addr"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::~Ipv4UnnumberedAddress()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_data() const
{
    return router_id.is_set
	|| interface_index.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unnumbered-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PreviousHopAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "interface-index")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::IncomingAddressGeneric()
    :
    te_addr(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr>())
{
    te_addr->parent = this;

    yang_name = "incoming-address-generic"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::~IncomingAddressGeneric()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::has_data() const
{
    return (te_addr !=  nullptr && te_addr->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::has_operation() const
{
    return is_set(yfilter)
	|| (te_addr !=  nullptr && te_addr->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-address-generic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-addr")
    {
        if(te_addr == nullptr)
        {
            te_addr = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr>();
        }
        return te_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(te_addr != nullptr)
    {
        children["te-addr"] = te_addr;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-addr")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::TeAddr()
    :
    type{YType::enumeration, "type"},
    ipv4_address{YType::str, "ipv4-address"}
    	,
    ipv4_unnumbered_address(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress>())
{
    ipv4_unnumbered_address->parent = this;

    yang_name = "te-addr"; yang_parent_name = "incoming-address-generic"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::~TeAddr()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::has_data() const
{
    return type.is_set
	|| ipv4_address.is_set
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unnumbered-address")
    {
        if(ipv4_unnumbered_address == nullptr)
        {
            ipv4_unnumbered_address = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress>();
        }
        return ipv4_unnumbered_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_unnumbered_address != nullptr)
    {
        children["ipv4-unnumbered-address"] = ipv4_unnumbered_address;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unnumbered-address" || name == "type" || name == "ipv4-address")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress::Ipv4UnnumberedAddress()
    :
    router_id{YType::str, "router-id"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "ipv4-unnumbered-address"; yang_parent_name = "te-addr"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress::~Ipv4UnnumberedAddress()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_data() const
{
    return router_id.is_set
	|| interface_index.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unnumbered-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::IncomingAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "interface-index")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LConvergence::S2LConvergence()
    :
    path_in{YType::uint64, "path-in"},
    path_out{YType::uint64, "path-out"},
    resv_in{YType::uint64, "resv-in"},
    resv_out{YType::uint64, "resv-out"},
    label_rewrite{YType::uint64, "label-rewrite"},
    tunnel_rewrite{YType::uint64, "tunnel-rewrite"},
    creation_time{YType::uint64, "creation-time"}
{

    yang_name = "s2l-convergence"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LConvergence::~S2LConvergence()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LConvergence::has_data() const
{
    return path_in.is_set
	|| path_out.is_set
	|| resv_in.is_set
	|| resv_out.is_set
	|| label_rewrite.is_set
	|| tunnel_rewrite.is_set
	|| creation_time.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LConvergence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_in.yfilter)
	|| ydk::is_set(path_out.yfilter)
	|| ydk::is_set(resv_in.yfilter)
	|| ydk::is_set(resv_out.yfilter)
	|| ydk::is_set(label_rewrite.yfilter)
	|| ydk::is_set(tunnel_rewrite.yfilter)
	|| ydk::is_set(creation_time.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LConvergence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-convergence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LConvergence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_in.is_set || is_set(path_in.yfilter)) leaf_name_data.push_back(path_in.get_name_leafdata());
    if (path_out.is_set || is_set(path_out.yfilter)) leaf_name_data.push_back(path_out.get_name_leafdata());
    if (resv_in.is_set || is_set(resv_in.yfilter)) leaf_name_data.push_back(resv_in.get_name_leafdata());
    if (resv_out.is_set || is_set(resv_out.yfilter)) leaf_name_data.push_back(resv_out.get_name_leafdata());
    if (label_rewrite.is_set || is_set(label_rewrite.yfilter)) leaf_name_data.push_back(label_rewrite.get_name_leafdata());
    if (tunnel_rewrite.is_set || is_set(tunnel_rewrite.yfilter)) leaf_name_data.push_back(tunnel_rewrite.get_name_leafdata());
    if (creation_time.is_set || is_set(creation_time.yfilter)) leaf_name_data.push_back(creation_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LConvergence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LConvergence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LConvergence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-in")
    {
        path_in = value;
        path_in.value_namespace = name_space;
        path_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-out")
    {
        path_out = value;
        path_out.value_namespace = name_space;
        path_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resv-in")
    {
        resv_in = value;
        resv_in.value_namespace = name_space;
        resv_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resv-out")
    {
        resv_out = value;
        resv_out.value_namespace = name_space;
        resv_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-rewrite")
    {
        label_rewrite = value;
        label_rewrite.value_namespace = name_space;
        label_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-rewrite")
    {
        tunnel_rewrite = value;
        tunnel_rewrite.value_namespace = name_space;
        tunnel_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creation-time")
    {
        creation_time = value;
        creation_time.value_namespace = name_space;
        creation_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LConvergence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-in")
    {
        path_in.yfilter = yfilter;
    }
    if(value_path == "path-out")
    {
        path_out.yfilter = yfilter;
    }
    if(value_path == "resv-in")
    {
        resv_in.yfilter = yfilter;
    }
    if(value_path == "resv-out")
    {
        resv_out.yfilter = yfilter;
    }
    if(value_path == "label-rewrite")
    {
        label_rewrite.yfilter = yfilter;
    }
    if(value_path == "tunnel-rewrite")
    {
        tunnel_rewrite.yfilter = yfilter;
    }
    if(value_path == "creation-time")
    {
        creation_time.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LConvergence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-in" || name == "path-out" || name == "resv-in" || name == "resv-out" || name == "label-rewrite" || name == "tunnel-rewrite" || name == "creation-time")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SoftPreemption::SoftPreemption()
    :
    status{YType::enumeration, "status"},
    soft_preemption_timestamp{YType::uint32, "soft-preemption-timestamp"},
    soft_preemption_link{YType::str, "soft-preemption-link"},
    preempting_link_address{YType::str, "preempting-link-address"},
    time_to_hard_preemption{YType::uint16, "time-to-hard-preemption"},
    fr_rrewrite{YType::boolean, "fr-rrewrite"},
    fr_rrewrite_tunnel_name{YType::str, "fr-rrewrite-tunnel-name"}
{

    yang_name = "soft-preemption"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SoftPreemption::~SoftPreemption()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SoftPreemption::has_data() const
{
    return status.is_set
	|| soft_preemption_timestamp.is_set
	|| soft_preemption_link.is_set
	|| preempting_link_address.is_set
	|| time_to_hard_preemption.is_set
	|| fr_rrewrite.is_set
	|| fr_rrewrite_tunnel_name.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SoftPreemption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(soft_preemption_timestamp.yfilter)
	|| ydk::is_set(soft_preemption_link.yfilter)
	|| ydk::is_set(preempting_link_address.yfilter)
	|| ydk::is_set(time_to_hard_preemption.yfilter)
	|| ydk::is_set(fr_rrewrite.yfilter)
	|| ydk::is_set(fr_rrewrite_tunnel_name.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SoftPreemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SoftPreemption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (soft_preemption_timestamp.is_set || is_set(soft_preemption_timestamp.yfilter)) leaf_name_data.push_back(soft_preemption_timestamp.get_name_leafdata());
    if (soft_preemption_link.is_set || is_set(soft_preemption_link.yfilter)) leaf_name_data.push_back(soft_preemption_link.get_name_leafdata());
    if (preempting_link_address.is_set || is_set(preempting_link_address.yfilter)) leaf_name_data.push_back(preempting_link_address.get_name_leafdata());
    if (time_to_hard_preemption.is_set || is_set(time_to_hard_preemption.yfilter)) leaf_name_data.push_back(time_to_hard_preemption.get_name_leafdata());
    if (fr_rrewrite.is_set || is_set(fr_rrewrite.yfilter)) leaf_name_data.push_back(fr_rrewrite.get_name_leafdata());
    if (fr_rrewrite_tunnel_name.is_set || is_set(fr_rrewrite_tunnel_name.yfilter)) leaf_name_data.push_back(fr_rrewrite_tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SoftPreemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SoftPreemption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SoftPreemption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-timestamp")
    {
        soft_preemption_timestamp = value;
        soft_preemption_timestamp.value_namespace = name_space;
        soft_preemption_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-link")
    {
        soft_preemption_link = value;
        soft_preemption_link.value_namespace = name_space;
        soft_preemption_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempting-link-address")
    {
        preempting_link_address = value;
        preempting_link_address.value_namespace = name_space;
        preempting_link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-to-hard-preemption")
    {
        time_to_hard_preemption = value;
        time_to_hard_preemption.value_namespace = name_space;
        time_to_hard_preemption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fr-rrewrite")
    {
        fr_rrewrite = value;
        fr_rrewrite.value_namespace = name_space;
        fr_rrewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fr-rrewrite-tunnel-name")
    {
        fr_rrewrite_tunnel_name = value;
        fr_rrewrite_tunnel_name.value_namespace = name_space;
        fr_rrewrite_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SoftPreemption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-timestamp")
    {
        soft_preemption_timestamp.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-link")
    {
        soft_preemption_link.yfilter = yfilter;
    }
    if(value_path == "preempting-link-address")
    {
        preempting_link_address.yfilter = yfilter;
    }
    if(value_path == "time-to-hard-preemption")
    {
        time_to_hard_preemption.yfilter = yfilter;
    }
    if(value_path == "fr-rrewrite")
    {
        fr_rrewrite.yfilter = yfilter;
    }
    if(value_path == "fr-rrewrite-tunnel-name")
    {
        fr_rrewrite_tunnel_name.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SoftPreemption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status" || name == "soft-preemption-timestamp" || name == "soft-preemption-link" || name == "preempting-link-address" || name == "time-to-hard-preemption" || name == "fr-rrewrite" || name == "fr-rrewrite-tunnel-name")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::GmplsLabels()
    :
    path_ingress_label(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel>())
	,path_egress_label(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel>())
	,resv_ingress_label(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel>())
	,resv_egress_label(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel>())
{
    path_ingress_label->parent = this;
    path_egress_label->parent = this;
    resv_ingress_label->parent = this;
    resv_egress_label->parent = this;

    yang_name = "gmpls-labels"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::~GmplsLabels()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::has_data() const
{
    return (path_ingress_label !=  nullptr && path_ingress_label->has_data())
	|| (path_egress_label !=  nullptr && path_egress_label->has_data())
	|| (resv_ingress_label !=  nullptr && resv_ingress_label->has_data())
	|| (resv_egress_label !=  nullptr && resv_egress_label->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::has_operation() const
{
    return is_set(yfilter)
	|| (path_ingress_label !=  nullptr && path_ingress_label->has_operation())
	|| (path_egress_label !=  nullptr && path_egress_label->has_operation())
	|| (resv_ingress_label !=  nullptr && resv_ingress_label->has_operation())
	|| (resv_egress_label !=  nullptr && resv_egress_label->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-ingress-label")
    {
        if(path_ingress_label == nullptr)
        {
            path_ingress_label = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel>();
        }
        return path_ingress_label;
    }

    if(child_yang_name == "path-egress-label")
    {
        if(path_egress_label == nullptr)
        {
            path_egress_label = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel>();
        }
        return path_egress_label;
    }

    if(child_yang_name == "resv-ingress-label")
    {
        if(resv_ingress_label == nullptr)
        {
            resv_ingress_label = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel>();
        }
        return resv_ingress_label;
    }

    if(child_yang_name == "resv-egress-label")
    {
        if(resv_egress_label == nullptr)
        {
            resv_egress_label = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel>();
        }
        return resv_egress_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_ingress_label != nullptr)
    {
        children["path-ingress-label"] = path_ingress_label;
    }

    if(path_egress_label != nullptr)
    {
        children["path-egress-label"] = path_egress_label;
    }

    if(resv_ingress_label != nullptr)
    {
        children["resv-ingress-label"] = resv_ingress_label;
    }

    if(resv_egress_label != nullptr)
    {
        children["resv-egress-label"] = resv_egress_label;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-ingress-label" || name == "path-egress-label" || name == "resv-ingress-label" || name == "resv-egress-label")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::PathIngressLabel()
    :
    label_type{YType::enumeration, "label-type"}
    	,
    wdm(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Wdm>())
	,otn(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn>())
{
    wdm->parent = this;
    otn->parent = this;

    yang_name = "path-ingress-label"; yang_parent_name = "gmpls-labels"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::~PathIngressLabel()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::has_data() const
{
    return label_type.is_set
	|| (wdm !=  nullptr && wdm->has_data())
	|| (otn !=  nullptr && otn->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_type.yfilter)
	|| (wdm !=  nullptr && wdm->has_operation())
	|| (otn !=  nullptr && otn->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ingress-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_type.is_set || is_set(label_type.yfilter)) leaf_name_data.push_back(label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wdm")
    {
        if(wdm == nullptr)
        {
            wdm = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Wdm>();
        }
        return wdm;
    }

    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn>();
        }
        return otn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(wdm != nullptr)
    {
        children["wdm"] = wdm;
    }

    if(otn != nullptr)
    {
        children["otn"] = otn;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-type")
    {
        label_type = value;
        label_type.value_namespace = name_space;
        label_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-type")
    {
        label_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wdm" || name == "otn" || name == "label-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Wdm::Wdm()
    :
    label_set{YType::boolean, "label-set"},
    grid{YType::enumeration, "grid"},
    channel_spacing{YType::enumeration, "channel-spacing"},
    identifier{YType::uint16, "identifier"},
    channel{YType::int16, "channel"}
{

    yang_name = "wdm"; yang_parent_name = "path-ingress-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Wdm::~Wdm()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Wdm::has_data() const
{
    return label_set.is_set
	|| grid.is_set
	|| channel_spacing.is_set
	|| identifier.is_set
	|| channel.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Wdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_set.yfilter)
	|| ydk::is_set(grid.yfilter)
	|| ydk::is_set(channel_spacing.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(channel.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Wdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Wdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_set.is_set || is_set(label_set.yfilter)) leaf_name_data.push_back(label_set.get_name_leafdata());
    if (grid.is_set || is_set(grid.yfilter)) leaf_name_data.push_back(grid.get_name_leafdata());
    if (channel_spacing.is_set || is_set(channel_spacing.yfilter)) leaf_name_data.push_back(channel_spacing.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (channel.is_set || is_set(channel.yfilter)) leaf_name_data.push_back(channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Wdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Wdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Wdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-set")
    {
        label_set = value;
        label_set.value_namespace = name_space;
        label_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grid")
    {
        grid = value;
        grid.value_namespace = name_space;
        grid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing = value;
        channel_spacing.value_namespace = name_space;
        channel_spacing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel")
    {
        channel = value;
        channel.value_namespace = name_space;
        channel.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Wdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-set")
    {
        label_set.yfilter = yfilter;
    }
    if(value_path == "grid")
    {
        grid.yfilter = yfilter;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "channel")
    {
        channel.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Wdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-set" || name == "grid" || name == "channel-spacing" || name == "identifier" || name == "channel")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn::Otn()
    :
    tpn{YType::uint16, "tpn"},
    bit_map_length{YType::uint16, "bit-map-length"}
{

    yang_name = "otn"; yang_parent_name = "path-ingress-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn::~Otn()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn::has_data() const
{
    for (std::size_t index=0; index<bit_map.size(); index++)
    {
        if(bit_map[index]->has_data())
            return true;
    }
    return tpn.is_set
	|| bit_map_length.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn::has_operation() const
{
    for (std::size_t index=0; index<bit_map.size(); index++)
    {
        if(bit_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tpn.yfilter)
	|| ydk::is_set(bit_map_length.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tpn.is_set || is_set(tpn.yfilter)) leaf_name_data.push_back(tpn.get_name_leafdata());
    if (bit_map_length.is_set || is_set(bit_map_length.yfilter)) leaf_name_data.push_back(bit_map_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bit-map")
    {
        for(auto const & c : bit_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn::BitMap>();
        c->parent = this;
        bit_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bit_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tpn")
    {
        tpn = value;
        tpn.value_namespace = name_space;
        tpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length = value;
        bit_map_length.value_namespace = name_space;
        bit_map_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tpn")
    {
        tpn.yfilter = yfilter;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-map" || name == "tpn" || name == "bit-map-length")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn::BitMap::BitMap()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "bit-map"; yang_parent_name = "otn"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn::BitMap::~BitMap()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn::BitMap::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn::BitMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn::BitMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bit-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn::BitMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn::BitMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn::BitMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn::BitMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn::BitMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathIngressLabel::Otn::BitMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::PathEgressLabel()
    :
    label_type{YType::enumeration, "label-type"}
    	,
    wdm(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Wdm>())
	,otn(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn>())
{
    wdm->parent = this;
    otn->parent = this;

    yang_name = "path-egress-label"; yang_parent_name = "gmpls-labels"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::~PathEgressLabel()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::has_data() const
{
    return label_type.is_set
	|| (wdm !=  nullptr && wdm->has_data())
	|| (otn !=  nullptr && otn->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_type.yfilter)
	|| (wdm !=  nullptr && wdm->has_operation())
	|| (otn !=  nullptr && otn->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-egress-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_type.is_set || is_set(label_type.yfilter)) leaf_name_data.push_back(label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wdm")
    {
        if(wdm == nullptr)
        {
            wdm = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Wdm>();
        }
        return wdm;
    }

    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn>();
        }
        return otn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(wdm != nullptr)
    {
        children["wdm"] = wdm;
    }

    if(otn != nullptr)
    {
        children["otn"] = otn;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-type")
    {
        label_type = value;
        label_type.value_namespace = name_space;
        label_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-type")
    {
        label_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wdm" || name == "otn" || name == "label-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Wdm::Wdm()
    :
    label_set{YType::boolean, "label-set"},
    grid{YType::enumeration, "grid"},
    channel_spacing{YType::enumeration, "channel-spacing"},
    identifier{YType::uint16, "identifier"},
    channel{YType::int16, "channel"}
{

    yang_name = "wdm"; yang_parent_name = "path-egress-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Wdm::~Wdm()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Wdm::has_data() const
{
    return label_set.is_set
	|| grid.is_set
	|| channel_spacing.is_set
	|| identifier.is_set
	|| channel.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Wdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_set.yfilter)
	|| ydk::is_set(grid.yfilter)
	|| ydk::is_set(channel_spacing.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(channel.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Wdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Wdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_set.is_set || is_set(label_set.yfilter)) leaf_name_data.push_back(label_set.get_name_leafdata());
    if (grid.is_set || is_set(grid.yfilter)) leaf_name_data.push_back(grid.get_name_leafdata());
    if (channel_spacing.is_set || is_set(channel_spacing.yfilter)) leaf_name_data.push_back(channel_spacing.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (channel.is_set || is_set(channel.yfilter)) leaf_name_data.push_back(channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Wdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Wdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Wdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-set")
    {
        label_set = value;
        label_set.value_namespace = name_space;
        label_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grid")
    {
        grid = value;
        grid.value_namespace = name_space;
        grid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing = value;
        channel_spacing.value_namespace = name_space;
        channel_spacing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel")
    {
        channel = value;
        channel.value_namespace = name_space;
        channel.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Wdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-set")
    {
        label_set.yfilter = yfilter;
    }
    if(value_path == "grid")
    {
        grid.yfilter = yfilter;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "channel")
    {
        channel.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Wdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-set" || name == "grid" || name == "channel-spacing" || name == "identifier" || name == "channel")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn::Otn()
    :
    tpn{YType::uint16, "tpn"},
    bit_map_length{YType::uint16, "bit-map-length"}
{

    yang_name = "otn"; yang_parent_name = "path-egress-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn::~Otn()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn::has_data() const
{
    for (std::size_t index=0; index<bit_map.size(); index++)
    {
        if(bit_map[index]->has_data())
            return true;
    }
    return tpn.is_set
	|| bit_map_length.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn::has_operation() const
{
    for (std::size_t index=0; index<bit_map.size(); index++)
    {
        if(bit_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tpn.yfilter)
	|| ydk::is_set(bit_map_length.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tpn.is_set || is_set(tpn.yfilter)) leaf_name_data.push_back(tpn.get_name_leafdata());
    if (bit_map_length.is_set || is_set(bit_map_length.yfilter)) leaf_name_data.push_back(bit_map_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bit-map")
    {
        for(auto const & c : bit_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn::BitMap>();
        c->parent = this;
        bit_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bit_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tpn")
    {
        tpn = value;
        tpn.value_namespace = name_space;
        tpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length = value;
        bit_map_length.value_namespace = name_space;
        bit_map_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tpn")
    {
        tpn.yfilter = yfilter;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-map" || name == "tpn" || name == "bit-map-length")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn::BitMap::BitMap()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "bit-map"; yang_parent_name = "otn"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn::BitMap::~BitMap()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn::BitMap::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn::BitMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn::BitMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bit-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn::BitMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn::BitMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn::BitMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn::BitMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn::BitMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::PathEgressLabel::Otn::BitMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::ResvIngressLabel()
    :
    label_type{YType::enumeration, "label-type"}
    	,
    wdm(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm>())
	,otn(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn>())
{
    wdm->parent = this;
    otn->parent = this;

    yang_name = "resv-ingress-label"; yang_parent_name = "gmpls-labels"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::~ResvIngressLabel()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::has_data() const
{
    return label_type.is_set
	|| (wdm !=  nullptr && wdm->has_data())
	|| (otn !=  nullptr && otn->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_type.yfilter)
	|| (wdm !=  nullptr && wdm->has_operation())
	|| (otn !=  nullptr && otn->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resv-ingress-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_type.is_set || is_set(label_type.yfilter)) leaf_name_data.push_back(label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wdm")
    {
        if(wdm == nullptr)
        {
            wdm = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm>();
        }
        return wdm;
    }

    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn>();
        }
        return otn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(wdm != nullptr)
    {
        children["wdm"] = wdm;
    }

    if(otn != nullptr)
    {
        children["otn"] = otn;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-type")
    {
        label_type = value;
        label_type.value_namespace = name_space;
        label_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-type")
    {
        label_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wdm" || name == "otn" || name == "label-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm::Wdm()
    :
    label_set{YType::boolean, "label-set"},
    grid{YType::enumeration, "grid"},
    channel_spacing{YType::enumeration, "channel-spacing"},
    identifier{YType::uint16, "identifier"},
    channel{YType::int16, "channel"}
{

    yang_name = "wdm"; yang_parent_name = "resv-ingress-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm::~Wdm()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm::has_data() const
{
    return label_set.is_set
	|| grid.is_set
	|| channel_spacing.is_set
	|| identifier.is_set
	|| channel.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_set.yfilter)
	|| ydk::is_set(grid.yfilter)
	|| ydk::is_set(channel_spacing.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(channel.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_set.is_set || is_set(label_set.yfilter)) leaf_name_data.push_back(label_set.get_name_leafdata());
    if (grid.is_set || is_set(grid.yfilter)) leaf_name_data.push_back(grid.get_name_leafdata());
    if (channel_spacing.is_set || is_set(channel_spacing.yfilter)) leaf_name_data.push_back(channel_spacing.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (channel.is_set || is_set(channel.yfilter)) leaf_name_data.push_back(channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-set")
    {
        label_set = value;
        label_set.value_namespace = name_space;
        label_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grid")
    {
        grid = value;
        grid.value_namespace = name_space;
        grid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing = value;
        channel_spacing.value_namespace = name_space;
        channel_spacing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel")
    {
        channel = value;
        channel.value_namespace = name_space;
        channel.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-set")
    {
        label_set.yfilter = yfilter;
    }
    if(value_path == "grid")
    {
        grid.yfilter = yfilter;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "channel")
    {
        channel.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Wdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-set" || name == "grid" || name == "channel-spacing" || name == "identifier" || name == "channel")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::Otn()
    :
    tpn{YType::uint16, "tpn"},
    bit_map_length{YType::uint16, "bit-map-length"}
{

    yang_name = "otn"; yang_parent_name = "resv-ingress-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::~Otn()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::has_data() const
{
    for (std::size_t index=0; index<bit_map.size(); index++)
    {
        if(bit_map[index]->has_data())
            return true;
    }
    return tpn.is_set
	|| bit_map_length.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::has_operation() const
{
    for (std::size_t index=0; index<bit_map.size(); index++)
    {
        if(bit_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tpn.yfilter)
	|| ydk::is_set(bit_map_length.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tpn.is_set || is_set(tpn.yfilter)) leaf_name_data.push_back(tpn.get_name_leafdata());
    if (bit_map_length.is_set || is_set(bit_map_length.yfilter)) leaf_name_data.push_back(bit_map_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bit-map")
    {
        for(auto const & c : bit_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::BitMap>();
        c->parent = this;
        bit_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bit_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tpn")
    {
        tpn = value;
        tpn.value_namespace = name_space;
        tpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length = value;
        bit_map_length.value_namespace = name_space;
        bit_map_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tpn")
    {
        tpn.yfilter = yfilter;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-map" || name == "tpn" || name == "bit-map-length")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::BitMap::BitMap()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "bit-map"; yang_parent_name = "otn"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::BitMap::~BitMap()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::BitMap::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::BitMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::BitMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bit-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::BitMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::BitMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::BitMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::BitMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::BitMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvIngressLabel::Otn::BitMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::ResvEgressLabel()
    :
    label_type{YType::enumeration, "label-type"}
    	,
    wdm(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm>())
	,otn(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn>())
{
    wdm->parent = this;
    otn->parent = this;

    yang_name = "resv-egress-label"; yang_parent_name = "gmpls-labels"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::~ResvEgressLabel()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::has_data() const
{
    return label_type.is_set
	|| (wdm !=  nullptr && wdm->has_data())
	|| (otn !=  nullptr && otn->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_type.yfilter)
	|| (wdm !=  nullptr && wdm->has_operation())
	|| (otn !=  nullptr && otn->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resv-egress-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_type.is_set || is_set(label_type.yfilter)) leaf_name_data.push_back(label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wdm")
    {
        if(wdm == nullptr)
        {
            wdm = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm>();
        }
        return wdm;
    }

    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn>();
        }
        return otn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(wdm != nullptr)
    {
        children["wdm"] = wdm;
    }

    if(otn != nullptr)
    {
        children["otn"] = otn;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-type")
    {
        label_type = value;
        label_type.value_namespace = name_space;
        label_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-type")
    {
        label_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wdm" || name == "otn" || name == "label-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm::Wdm()
    :
    label_set{YType::boolean, "label-set"},
    grid{YType::enumeration, "grid"},
    channel_spacing{YType::enumeration, "channel-spacing"},
    identifier{YType::uint16, "identifier"},
    channel{YType::int16, "channel"}
{

    yang_name = "wdm"; yang_parent_name = "resv-egress-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm::~Wdm()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm::has_data() const
{
    return label_set.is_set
	|| grid.is_set
	|| channel_spacing.is_set
	|| identifier.is_set
	|| channel.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_set.yfilter)
	|| ydk::is_set(grid.yfilter)
	|| ydk::is_set(channel_spacing.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(channel.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_set.is_set || is_set(label_set.yfilter)) leaf_name_data.push_back(label_set.get_name_leafdata());
    if (grid.is_set || is_set(grid.yfilter)) leaf_name_data.push_back(grid.get_name_leafdata());
    if (channel_spacing.is_set || is_set(channel_spacing.yfilter)) leaf_name_data.push_back(channel_spacing.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (channel.is_set || is_set(channel.yfilter)) leaf_name_data.push_back(channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-set")
    {
        label_set = value;
        label_set.value_namespace = name_space;
        label_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grid")
    {
        grid = value;
        grid.value_namespace = name_space;
        grid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing = value;
        channel_spacing.value_namespace = name_space;
        channel_spacing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel")
    {
        channel = value;
        channel.value_namespace = name_space;
        channel.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-set")
    {
        label_set.yfilter = yfilter;
    }
    if(value_path == "grid")
    {
        grid.yfilter = yfilter;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "channel")
    {
        channel.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Wdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-set" || name == "grid" || name == "channel-spacing" || name == "identifier" || name == "channel")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::Otn()
    :
    tpn{YType::uint16, "tpn"},
    bit_map_length{YType::uint16, "bit-map-length"}
{

    yang_name = "otn"; yang_parent_name = "resv-egress-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::~Otn()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::has_data() const
{
    for (std::size_t index=0; index<bit_map.size(); index++)
    {
        if(bit_map[index]->has_data())
            return true;
    }
    return tpn.is_set
	|| bit_map_length.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::has_operation() const
{
    for (std::size_t index=0; index<bit_map.size(); index++)
    {
        if(bit_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tpn.yfilter)
	|| ydk::is_set(bit_map_length.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tpn.is_set || is_set(tpn.yfilter)) leaf_name_data.push_back(tpn.get_name_leafdata());
    if (bit_map_length.is_set || is_set(bit_map_length.yfilter)) leaf_name_data.push_back(bit_map_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bit-map")
    {
        for(auto const & c : bit_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::BitMap>();
        c->parent = this;
        bit_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bit_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tpn")
    {
        tpn = value;
        tpn.value_namespace = name_space;
        tpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length = value;
        bit_map_length.value_namespace = name_space;
        bit_map_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tpn")
    {
        tpn.yfilter = yfilter;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-map" || name == "tpn" || name == "bit-map-length")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::BitMap::BitMap()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "bit-map"; yang_parent_name = "otn"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::BitMap::~BitMap()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::BitMap::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::BitMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::BitMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bit-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::BitMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::BitMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::BitMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::BitMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::BitMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::GmplsLabels::ResvEgressLabel::Otn::BitMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::OtnS2L()
    :
    otn(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn>())
	,aps(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps>())
{
    otn->parent = this;
    aps->parent = this;

    yang_name = "otn-s2l"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::~OtnS2L()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::has_data() const
{
    return (otn !=  nullptr && otn->has_data())
	|| (aps !=  nullptr && aps->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::has_operation() const
{
    return is_set(yfilter)
	|| (otn !=  nullptr && otn->has_operation())
	|| (aps !=  nullptr && aps->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn>();
        }
        return otn;
    }

    if(child_yang_name == "aps")
    {
        if(aps == nullptr)
        {
            aps = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps>();
        }
        return aps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(otn != nullptr)
    {
        children["otn"] = otn;
    }

    if(aps != nullptr)
    {
        children["aps"] = aps;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn" || name == "aps")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Otn()
    :
    incoming_controller{YType::str, "incoming-controller"},
    incoming_controller_state{YType::enumeration, "incoming-controller-state"},
    incoming_sub_controller{YType::str, "incoming-sub-controller"},
    incoming_sub_controller_state{YType::enumeration, "incoming-sub-controller-state"},
    outgoing_controller{YType::str, "outgoing-controller"},
    outgoing_controller_state{YType::enumeration, "outgoing-controller-state"},
    outgoing_sub_controller{YType::str, "outgoing-sub-controller"},
    outgoing_sub_controller_state{YType::enumeration, "outgoing-sub-controller-state"},
    cross_connect_id{YType::uint32, "cross-connect-id"},
    is_connected{YType::boolean, "is-connected"},
    uptime{YType::uint32, "uptime"},
    outgoing_controller_ifhandle{YType::str, "outgoing-controller-ifhandle"},
    outgoing_sub_controller_ifhandle{YType::str, "outgoing-sub-controller-ifhandle"},
    incoming_controller_ifhandle{YType::str, "incoming-controller-ifhandle"},
    incoming_sub_controller_ifhandle{YType::str, "incoming-sub-controller-ifhandle"},
    gpid{YType::uint16, "gpid"}
    	,
    bandwidth(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth>())
	,labels(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels>())
{
    bandwidth->parent = this;
    labels->parent = this;

    yang_name = "otn"; yang_parent_name = "otn-s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::~Otn()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::has_data() const
{
    return incoming_controller.is_set
	|| incoming_controller_state.is_set
	|| incoming_sub_controller.is_set
	|| incoming_sub_controller_state.is_set
	|| outgoing_controller.is_set
	|| outgoing_controller_state.is_set
	|| outgoing_sub_controller.is_set
	|| outgoing_sub_controller_state.is_set
	|| cross_connect_id.is_set
	|| is_connected.is_set
	|| uptime.is_set
	|| outgoing_controller_ifhandle.is_set
	|| outgoing_sub_controller_ifhandle.is_set
	|| incoming_controller_ifhandle.is_set
	|| incoming_sub_controller_ifhandle.is_set
	|| gpid.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (labels !=  nullptr && labels->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incoming_controller.yfilter)
	|| ydk::is_set(incoming_controller_state.yfilter)
	|| ydk::is_set(incoming_sub_controller.yfilter)
	|| ydk::is_set(incoming_sub_controller_state.yfilter)
	|| ydk::is_set(outgoing_controller.yfilter)
	|| ydk::is_set(outgoing_controller_state.yfilter)
	|| ydk::is_set(outgoing_sub_controller.yfilter)
	|| ydk::is_set(outgoing_sub_controller_state.yfilter)
	|| ydk::is_set(cross_connect_id.yfilter)
	|| ydk::is_set(is_connected.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(outgoing_controller_ifhandle.yfilter)
	|| ydk::is_set(outgoing_sub_controller_ifhandle.yfilter)
	|| ydk::is_set(incoming_controller_ifhandle.yfilter)
	|| ydk::is_set(incoming_sub_controller_ifhandle.yfilter)
	|| ydk::is_set(gpid.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (labels !=  nullptr && labels->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incoming_controller.is_set || is_set(incoming_controller.yfilter)) leaf_name_data.push_back(incoming_controller.get_name_leafdata());
    if (incoming_controller_state.is_set || is_set(incoming_controller_state.yfilter)) leaf_name_data.push_back(incoming_controller_state.get_name_leafdata());
    if (incoming_sub_controller.is_set || is_set(incoming_sub_controller.yfilter)) leaf_name_data.push_back(incoming_sub_controller.get_name_leafdata());
    if (incoming_sub_controller_state.is_set || is_set(incoming_sub_controller_state.yfilter)) leaf_name_data.push_back(incoming_sub_controller_state.get_name_leafdata());
    if (outgoing_controller.is_set || is_set(outgoing_controller.yfilter)) leaf_name_data.push_back(outgoing_controller.get_name_leafdata());
    if (outgoing_controller_state.is_set || is_set(outgoing_controller_state.yfilter)) leaf_name_data.push_back(outgoing_controller_state.get_name_leafdata());
    if (outgoing_sub_controller.is_set || is_set(outgoing_sub_controller.yfilter)) leaf_name_data.push_back(outgoing_sub_controller.get_name_leafdata());
    if (outgoing_sub_controller_state.is_set || is_set(outgoing_sub_controller_state.yfilter)) leaf_name_data.push_back(outgoing_sub_controller_state.get_name_leafdata());
    if (cross_connect_id.is_set || is_set(cross_connect_id.yfilter)) leaf_name_data.push_back(cross_connect_id.get_name_leafdata());
    if (is_connected.is_set || is_set(is_connected.yfilter)) leaf_name_data.push_back(is_connected.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (outgoing_controller_ifhandle.is_set || is_set(outgoing_controller_ifhandle.yfilter)) leaf_name_data.push_back(outgoing_controller_ifhandle.get_name_leafdata());
    if (outgoing_sub_controller_ifhandle.is_set || is_set(outgoing_sub_controller_ifhandle.yfilter)) leaf_name_data.push_back(outgoing_sub_controller_ifhandle.get_name_leafdata());
    if (incoming_controller_ifhandle.is_set || is_set(incoming_controller_ifhandle.yfilter)) leaf_name_data.push_back(incoming_controller_ifhandle.get_name_leafdata());
    if (incoming_sub_controller_ifhandle.is_set || is_set(incoming_sub_controller_ifhandle.yfilter)) leaf_name_data.push_back(incoming_sub_controller_ifhandle.get_name_leafdata());
    if (gpid.is_set || is_set(gpid.yfilter)) leaf_name_data.push_back(gpid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "labels")
    {
        if(labels == nullptr)
        {
            labels = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels>();
        }
        return labels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(labels != nullptr)
    {
        children["labels"] = labels;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incoming-controller")
    {
        incoming_controller = value;
        incoming_controller.value_namespace = name_space;
        incoming_controller.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-controller-state")
    {
        incoming_controller_state = value;
        incoming_controller_state.value_namespace = name_space;
        incoming_controller_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-sub-controller")
    {
        incoming_sub_controller = value;
        incoming_sub_controller.value_namespace = name_space;
        incoming_sub_controller.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-sub-controller-state")
    {
        incoming_sub_controller_state = value;
        incoming_sub_controller_state.value_namespace = name_space;
        incoming_sub_controller_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-controller")
    {
        outgoing_controller = value;
        outgoing_controller.value_namespace = name_space;
        outgoing_controller.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-controller-state")
    {
        outgoing_controller_state = value;
        outgoing_controller_state.value_namespace = name_space;
        outgoing_controller_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-sub-controller")
    {
        outgoing_sub_controller = value;
        outgoing_sub_controller.value_namespace = name_space;
        outgoing_sub_controller.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-sub-controller-state")
    {
        outgoing_sub_controller_state = value;
        outgoing_sub_controller_state.value_namespace = name_space;
        outgoing_sub_controller_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cross-connect-id")
    {
        cross_connect_id = value;
        cross_connect_id.value_namespace = name_space;
        cross_connect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connected")
    {
        is_connected = value;
        is_connected.value_namespace = name_space;
        is_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-controller-ifhandle")
    {
        outgoing_controller_ifhandle = value;
        outgoing_controller_ifhandle.value_namespace = name_space;
        outgoing_controller_ifhandle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outgoing-sub-controller-ifhandle")
    {
        outgoing_sub_controller_ifhandle = value;
        outgoing_sub_controller_ifhandle.value_namespace = name_space;
        outgoing_sub_controller_ifhandle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-controller-ifhandle")
    {
        incoming_controller_ifhandle = value;
        incoming_controller_ifhandle.value_namespace = name_space;
        incoming_controller_ifhandle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "incoming-sub-controller-ifhandle")
    {
        incoming_sub_controller_ifhandle = value;
        incoming_sub_controller_ifhandle.value_namespace = name_space;
        incoming_sub_controller_ifhandle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gpid")
    {
        gpid = value;
        gpid.value_namespace = name_space;
        gpid.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incoming-controller")
    {
        incoming_controller.yfilter = yfilter;
    }
    if(value_path == "incoming-controller-state")
    {
        incoming_controller_state.yfilter = yfilter;
    }
    if(value_path == "incoming-sub-controller")
    {
        incoming_sub_controller.yfilter = yfilter;
    }
    if(value_path == "incoming-sub-controller-state")
    {
        incoming_sub_controller_state.yfilter = yfilter;
    }
    if(value_path == "outgoing-controller")
    {
        outgoing_controller.yfilter = yfilter;
    }
    if(value_path == "outgoing-controller-state")
    {
        outgoing_controller_state.yfilter = yfilter;
    }
    if(value_path == "outgoing-sub-controller")
    {
        outgoing_sub_controller.yfilter = yfilter;
    }
    if(value_path == "outgoing-sub-controller-state")
    {
        outgoing_sub_controller_state.yfilter = yfilter;
    }
    if(value_path == "cross-connect-id")
    {
        cross_connect_id.yfilter = yfilter;
    }
    if(value_path == "is-connected")
    {
        is_connected.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "outgoing-controller-ifhandle")
    {
        outgoing_controller_ifhandle.yfilter = yfilter;
    }
    if(value_path == "outgoing-sub-controller-ifhandle")
    {
        outgoing_sub_controller_ifhandle.yfilter = yfilter;
    }
    if(value_path == "incoming-controller-ifhandle")
    {
        incoming_controller_ifhandle.yfilter = yfilter;
    }
    if(value_path == "incoming-sub-controller-ifhandle")
    {
        incoming_sub_controller_ifhandle.yfilter = yfilter;
    }
    if(value_path == "gpid")
    {
        gpid.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "labels" || name == "incoming-controller" || name == "incoming-controller-state" || name == "incoming-sub-controller" || name == "incoming-sub-controller-state" || name == "outgoing-controller" || name == "outgoing-controller-state" || name == "outgoing-sub-controller" || name == "outgoing-sub-controller-state" || name == "cross-connect-id" || name == "is-connected" || name == "uptime" || name == "outgoing-controller-ifhandle" || name == "outgoing-sub-controller-ifhandle" || name == "incoming-controller-ifhandle" || name == "incoming-sub-controller-ifhandle" || name == "gpid")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::Bandwidth()
    :
    odu_level{YType::enumeration, "odu-level"}
    	,
    odu_flex_cbr(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr>())
	,odu_flex_gfp_f_res(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes>())
	,odu_flex_gfp_f_non_res(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes>())
{
    odu_flex_cbr->parent = this;
    odu_flex_gfp_f_res->parent = this;
    odu_flex_gfp_f_non_res->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "otn"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::~Bandwidth()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::has_data() const
{
    return odu_level.is_set
	|| (odu_flex_cbr !=  nullptr && odu_flex_cbr->has_data())
	|| (odu_flex_gfp_f_res !=  nullptr && odu_flex_gfp_f_res->has_data())
	|| (odu_flex_gfp_f_non_res !=  nullptr && odu_flex_gfp_f_non_res->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(odu_level.yfilter)
	|| (odu_flex_cbr !=  nullptr && odu_flex_cbr->has_operation())
	|| (odu_flex_gfp_f_res !=  nullptr && odu_flex_gfp_f_res->has_operation())
	|| (odu_flex_gfp_f_non_res !=  nullptr && odu_flex_gfp_f_non_res->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (odu_level.is_set || is_set(odu_level.yfilter)) leaf_name_data.push_back(odu_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "odu-flex-cbr")
    {
        if(odu_flex_cbr == nullptr)
        {
            odu_flex_cbr = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr>();
        }
        return odu_flex_cbr;
    }

    if(child_yang_name == "odu-flex-gfp-f-res")
    {
        if(odu_flex_gfp_f_res == nullptr)
        {
            odu_flex_gfp_f_res = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes>();
        }
        return odu_flex_gfp_f_res;
    }

    if(child_yang_name == "odu-flex-gfp-f-non-res")
    {
        if(odu_flex_gfp_f_non_res == nullptr)
        {
            odu_flex_gfp_f_non_res = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes>();
        }
        return odu_flex_gfp_f_non_res;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(odu_flex_cbr != nullptr)
    {
        children["odu-flex-cbr"] = odu_flex_cbr;
    }

    if(odu_flex_gfp_f_res != nullptr)
    {
        children["odu-flex-gfp-f-res"] = odu_flex_gfp_f_res;
    }

    if(odu_flex_gfp_f_non_res != nullptr)
    {
        children["odu-flex-gfp-f-non-res"] = odu_flex_gfp_f_non_res;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "odu-level")
    {
        odu_level = value;
        odu_level.value_namespace = name_space;
        odu_level.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "odu-level")
    {
        odu_level.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "odu-flex-cbr" || name == "odu-flex-gfp-f-res" || name == "odu-flex-gfp-f-non-res" || name == "odu-level")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr::OduFlexCbr()
    :
    bit_rate{YType::uint32, "bit-rate"},
    tolerance{YType::uint16, "tolerance"}
{

    yang_name = "odu-flex-cbr"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr::~OduFlexCbr()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr::has_data() const
{
    return bit_rate.is_set
	|| tolerance.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_rate.yfilter)
	|| ydk::is_set(tolerance.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-flex-cbr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (tolerance.is_set || is_set(tolerance.yfilter)) leaf_name_data.push_back(tolerance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tolerance")
    {
        tolerance = value;
        tolerance.value_namespace = name_space;
        tolerance.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
    if(value_path == "tolerance")
    {
        tolerance.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexCbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-rate" || name == "tolerance")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes::OduFlexGfpFRes()
    :
    bit_rate{YType::uint32, "bit-rate"}
{

    yang_name = "odu-flex-gfp-f-res"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes::~OduFlexGfpFRes()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes::has_data() const
{
    return bit_rate.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_rate.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-flex-gfp-f-res";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFRes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-rate")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes::OduFlexGfpFNonRes()
    :
    bit_rate{YType::uint32, "bit-rate"}
{

    yang_name = "odu-flex-gfp-f-non-res"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes::~OduFlexGfpFNonRes()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes::has_data() const
{
    return bit_rate.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_rate.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-flex-gfp-f-non-res";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Bandwidth::OduFlexGfpFNonRes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-rate")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::Labels()
    :
    path_ingress_label(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel>())
	,path_egress_label(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel>())
	,resv_ingress_label(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel>())
	,resv_egress_label(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel>())
{
    path_ingress_label->parent = this;
    path_egress_label->parent = this;
    resv_ingress_label->parent = this;
    resv_egress_label->parent = this;

    yang_name = "labels"; yang_parent_name = "otn"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::~Labels()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::has_data() const
{
    return (path_ingress_label !=  nullptr && path_ingress_label->has_data())
	|| (path_egress_label !=  nullptr && path_egress_label->has_data())
	|| (resv_ingress_label !=  nullptr && resv_ingress_label->has_data())
	|| (resv_egress_label !=  nullptr && resv_egress_label->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::has_operation() const
{
    return is_set(yfilter)
	|| (path_ingress_label !=  nullptr && path_ingress_label->has_operation())
	|| (path_egress_label !=  nullptr && path_egress_label->has_operation())
	|| (resv_ingress_label !=  nullptr && resv_ingress_label->has_operation())
	|| (resv_egress_label !=  nullptr && resv_egress_label->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-ingress-label")
    {
        if(path_ingress_label == nullptr)
        {
            path_ingress_label = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel>();
        }
        return path_ingress_label;
    }

    if(child_yang_name == "path-egress-label")
    {
        if(path_egress_label == nullptr)
        {
            path_egress_label = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel>();
        }
        return path_egress_label;
    }

    if(child_yang_name == "resv-ingress-label")
    {
        if(resv_ingress_label == nullptr)
        {
            resv_ingress_label = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel>();
        }
        return resv_ingress_label;
    }

    if(child_yang_name == "resv-egress-label")
    {
        if(resv_egress_label == nullptr)
        {
            resv_egress_label = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel>();
        }
        return resv_egress_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_ingress_label != nullptr)
    {
        children["path-ingress-label"] = path_ingress_label;
    }

    if(path_egress_label != nullptr)
    {
        children["path-egress-label"] = path_egress_label;
    }

    if(resv_ingress_label != nullptr)
    {
        children["resv-ingress-label"] = resv_ingress_label;
    }

    if(resv_egress_label != nullptr)
    {
        children["resv-egress-label"] = resv_egress_label;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-ingress-label" || name == "path-egress-label" || name == "resv-ingress-label" || name == "resv-egress-label")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::PathIngressLabel()
    :
    label_type{YType::enumeration, "label-type"}
    	,
    wdm(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm>())
	,otn(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_>())
{
    wdm->parent = this;
    otn->parent = this;

    yang_name = "path-ingress-label"; yang_parent_name = "labels"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::~PathIngressLabel()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::has_data() const
{
    return label_type.is_set
	|| (wdm !=  nullptr && wdm->has_data())
	|| (otn !=  nullptr && otn->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_type.yfilter)
	|| (wdm !=  nullptr && wdm->has_operation())
	|| (otn !=  nullptr && otn->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-ingress-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_type.is_set || is_set(label_type.yfilter)) leaf_name_data.push_back(label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wdm")
    {
        if(wdm == nullptr)
        {
            wdm = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm>();
        }
        return wdm;
    }

    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_>();
        }
        return otn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(wdm != nullptr)
    {
        children["wdm"] = wdm;
    }

    if(otn != nullptr)
    {
        children["otn"] = otn;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-type")
    {
        label_type = value;
        label_type.value_namespace = name_space;
        label_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-type")
    {
        label_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wdm" || name == "otn" || name == "label-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm::Wdm()
    :
    label_set{YType::boolean, "label-set"},
    grid{YType::enumeration, "grid"},
    channel_spacing{YType::enumeration, "channel-spacing"},
    identifier{YType::uint16, "identifier"},
    channel{YType::int16, "channel"}
{

    yang_name = "wdm"; yang_parent_name = "path-ingress-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm::~Wdm()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm::has_data() const
{
    return label_set.is_set
	|| grid.is_set
	|| channel_spacing.is_set
	|| identifier.is_set
	|| channel.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_set.yfilter)
	|| ydk::is_set(grid.yfilter)
	|| ydk::is_set(channel_spacing.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(channel.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_set.is_set || is_set(label_set.yfilter)) leaf_name_data.push_back(label_set.get_name_leafdata());
    if (grid.is_set || is_set(grid.yfilter)) leaf_name_data.push_back(grid.get_name_leafdata());
    if (channel_spacing.is_set || is_set(channel_spacing.yfilter)) leaf_name_data.push_back(channel_spacing.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (channel.is_set || is_set(channel.yfilter)) leaf_name_data.push_back(channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-set")
    {
        label_set = value;
        label_set.value_namespace = name_space;
        label_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grid")
    {
        grid = value;
        grid.value_namespace = name_space;
        grid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing = value;
        channel_spacing.value_namespace = name_space;
        channel_spacing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel")
    {
        channel = value;
        channel.value_namespace = name_space;
        channel.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-set")
    {
        label_set.yfilter = yfilter;
    }
    if(value_path == "grid")
    {
        grid.yfilter = yfilter;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "channel")
    {
        channel.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Wdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-set" || name == "grid" || name == "channel-spacing" || name == "identifier" || name == "channel")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::Otn_()
    :
    tpn{YType::uint16, "tpn"},
    bit_map_length{YType::uint16, "bit-map-length"}
{

    yang_name = "otn"; yang_parent_name = "path-ingress-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::~Otn_()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::has_data() const
{
    for (std::size_t index=0; index<bit_map.size(); index++)
    {
        if(bit_map[index]->has_data())
            return true;
    }
    return tpn.is_set
	|| bit_map_length.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::has_operation() const
{
    for (std::size_t index=0; index<bit_map.size(); index++)
    {
        if(bit_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tpn.yfilter)
	|| ydk::is_set(bit_map_length.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tpn.is_set || is_set(tpn.yfilter)) leaf_name_data.push_back(tpn.get_name_leafdata());
    if (bit_map_length.is_set || is_set(bit_map_length.yfilter)) leaf_name_data.push_back(bit_map_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bit-map")
    {
        for(auto const & c : bit_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::BitMap>();
        c->parent = this;
        bit_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bit_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tpn")
    {
        tpn = value;
        tpn.value_namespace = name_space;
        tpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length = value;
        bit_map_length.value_namespace = name_space;
        bit_map_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tpn")
    {
        tpn.yfilter = yfilter;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-map" || name == "tpn" || name == "bit-map-length")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::BitMap::BitMap()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "bit-map"; yang_parent_name = "otn"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::BitMap::~BitMap()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::BitMap::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::BitMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::BitMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bit-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::BitMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::BitMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::BitMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::BitMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::BitMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathIngressLabel::Otn_::BitMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::PathEgressLabel()
    :
    label_type{YType::enumeration, "label-type"}
    	,
    wdm(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm>())
	,otn(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_>())
{
    wdm->parent = this;
    otn->parent = this;

    yang_name = "path-egress-label"; yang_parent_name = "labels"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::~PathEgressLabel()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::has_data() const
{
    return label_type.is_set
	|| (wdm !=  nullptr && wdm->has_data())
	|| (otn !=  nullptr && otn->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_type.yfilter)
	|| (wdm !=  nullptr && wdm->has_operation())
	|| (otn !=  nullptr && otn->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-egress-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_type.is_set || is_set(label_type.yfilter)) leaf_name_data.push_back(label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wdm")
    {
        if(wdm == nullptr)
        {
            wdm = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm>();
        }
        return wdm;
    }

    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_>();
        }
        return otn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(wdm != nullptr)
    {
        children["wdm"] = wdm;
    }

    if(otn != nullptr)
    {
        children["otn"] = otn;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-type")
    {
        label_type = value;
        label_type.value_namespace = name_space;
        label_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-type")
    {
        label_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wdm" || name == "otn" || name == "label-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm::Wdm()
    :
    label_set{YType::boolean, "label-set"},
    grid{YType::enumeration, "grid"},
    channel_spacing{YType::enumeration, "channel-spacing"},
    identifier{YType::uint16, "identifier"},
    channel{YType::int16, "channel"}
{

    yang_name = "wdm"; yang_parent_name = "path-egress-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm::~Wdm()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm::has_data() const
{
    return label_set.is_set
	|| grid.is_set
	|| channel_spacing.is_set
	|| identifier.is_set
	|| channel.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_set.yfilter)
	|| ydk::is_set(grid.yfilter)
	|| ydk::is_set(channel_spacing.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(channel.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_set.is_set || is_set(label_set.yfilter)) leaf_name_data.push_back(label_set.get_name_leafdata());
    if (grid.is_set || is_set(grid.yfilter)) leaf_name_data.push_back(grid.get_name_leafdata());
    if (channel_spacing.is_set || is_set(channel_spacing.yfilter)) leaf_name_data.push_back(channel_spacing.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (channel.is_set || is_set(channel.yfilter)) leaf_name_data.push_back(channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-set")
    {
        label_set = value;
        label_set.value_namespace = name_space;
        label_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grid")
    {
        grid = value;
        grid.value_namespace = name_space;
        grid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing = value;
        channel_spacing.value_namespace = name_space;
        channel_spacing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel")
    {
        channel = value;
        channel.value_namespace = name_space;
        channel.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-set")
    {
        label_set.yfilter = yfilter;
    }
    if(value_path == "grid")
    {
        grid.yfilter = yfilter;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "channel")
    {
        channel.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Wdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-set" || name == "grid" || name == "channel-spacing" || name == "identifier" || name == "channel")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::Otn_()
    :
    tpn{YType::uint16, "tpn"},
    bit_map_length{YType::uint16, "bit-map-length"}
{

    yang_name = "otn"; yang_parent_name = "path-egress-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::~Otn_()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::has_data() const
{
    for (std::size_t index=0; index<bit_map.size(); index++)
    {
        if(bit_map[index]->has_data())
            return true;
    }
    return tpn.is_set
	|| bit_map_length.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::has_operation() const
{
    for (std::size_t index=0; index<bit_map.size(); index++)
    {
        if(bit_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tpn.yfilter)
	|| ydk::is_set(bit_map_length.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tpn.is_set || is_set(tpn.yfilter)) leaf_name_data.push_back(tpn.get_name_leafdata());
    if (bit_map_length.is_set || is_set(bit_map_length.yfilter)) leaf_name_data.push_back(bit_map_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bit-map")
    {
        for(auto const & c : bit_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::BitMap>();
        c->parent = this;
        bit_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bit_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tpn")
    {
        tpn = value;
        tpn.value_namespace = name_space;
        tpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length = value;
        bit_map_length.value_namespace = name_space;
        bit_map_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tpn")
    {
        tpn.yfilter = yfilter;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-map" || name == "tpn" || name == "bit-map-length")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::BitMap::BitMap()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "bit-map"; yang_parent_name = "otn"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::BitMap::~BitMap()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::BitMap::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::BitMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::BitMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bit-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::BitMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::BitMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::BitMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::BitMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::BitMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::PathEgressLabel::Otn_::BitMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::ResvIngressLabel()
    :
    label_type{YType::enumeration, "label-type"}
    	,
    wdm(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm>())
	,otn(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_>())
{
    wdm->parent = this;
    otn->parent = this;

    yang_name = "resv-ingress-label"; yang_parent_name = "labels"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::~ResvIngressLabel()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::has_data() const
{
    return label_type.is_set
	|| (wdm !=  nullptr && wdm->has_data())
	|| (otn !=  nullptr && otn->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_type.yfilter)
	|| (wdm !=  nullptr && wdm->has_operation())
	|| (otn !=  nullptr && otn->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resv-ingress-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_type.is_set || is_set(label_type.yfilter)) leaf_name_data.push_back(label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wdm")
    {
        if(wdm == nullptr)
        {
            wdm = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm>();
        }
        return wdm;
    }

    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_>();
        }
        return otn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(wdm != nullptr)
    {
        children["wdm"] = wdm;
    }

    if(otn != nullptr)
    {
        children["otn"] = otn;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-type")
    {
        label_type = value;
        label_type.value_namespace = name_space;
        label_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-type")
    {
        label_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wdm" || name == "otn" || name == "label-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::Wdm()
    :
    label_set{YType::boolean, "label-set"},
    grid{YType::enumeration, "grid"},
    channel_spacing{YType::enumeration, "channel-spacing"},
    identifier{YType::uint16, "identifier"},
    channel{YType::int16, "channel"}
{

    yang_name = "wdm"; yang_parent_name = "resv-ingress-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::~Wdm()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::has_data() const
{
    return label_set.is_set
	|| grid.is_set
	|| channel_spacing.is_set
	|| identifier.is_set
	|| channel.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_set.yfilter)
	|| ydk::is_set(grid.yfilter)
	|| ydk::is_set(channel_spacing.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(channel.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_set.is_set || is_set(label_set.yfilter)) leaf_name_data.push_back(label_set.get_name_leafdata());
    if (grid.is_set || is_set(grid.yfilter)) leaf_name_data.push_back(grid.get_name_leafdata());
    if (channel_spacing.is_set || is_set(channel_spacing.yfilter)) leaf_name_data.push_back(channel_spacing.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (channel.is_set || is_set(channel.yfilter)) leaf_name_data.push_back(channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-set")
    {
        label_set = value;
        label_set.value_namespace = name_space;
        label_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grid")
    {
        grid = value;
        grid.value_namespace = name_space;
        grid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing = value;
        channel_spacing.value_namespace = name_space;
        channel_spacing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel")
    {
        channel = value;
        channel.value_namespace = name_space;
        channel.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-set")
    {
        label_set.yfilter = yfilter;
    }
    if(value_path == "grid")
    {
        grid.yfilter = yfilter;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "channel")
    {
        channel.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Wdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-set" || name == "grid" || name == "channel-spacing" || name == "identifier" || name == "channel")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::Otn_()
    :
    tpn{YType::uint16, "tpn"},
    bit_map_length{YType::uint16, "bit-map-length"}
{

    yang_name = "otn"; yang_parent_name = "resv-ingress-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::~Otn_()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::has_data() const
{
    for (std::size_t index=0; index<bit_map.size(); index++)
    {
        if(bit_map[index]->has_data())
            return true;
    }
    return tpn.is_set
	|| bit_map_length.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::has_operation() const
{
    for (std::size_t index=0; index<bit_map.size(); index++)
    {
        if(bit_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tpn.yfilter)
	|| ydk::is_set(bit_map_length.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tpn.is_set || is_set(tpn.yfilter)) leaf_name_data.push_back(tpn.get_name_leafdata());
    if (bit_map_length.is_set || is_set(bit_map_length.yfilter)) leaf_name_data.push_back(bit_map_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bit-map")
    {
        for(auto const & c : bit_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap>();
        c->parent = this;
        bit_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bit_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tpn")
    {
        tpn = value;
        tpn.value_namespace = name_space;
        tpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length = value;
        bit_map_length.value_namespace = name_space;
        bit_map_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tpn")
    {
        tpn.yfilter = yfilter;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-map" || name == "tpn" || name == "bit-map-length")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap::BitMap()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "bit-map"; yang_parent_name = "otn"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap::~BitMap()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bit-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvIngressLabel::Otn_::BitMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::ResvEgressLabel()
    :
    label_type{YType::enumeration, "label-type"}
    	,
    wdm(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm>())
	,otn(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_>())
{
    wdm->parent = this;
    otn->parent = this;

    yang_name = "resv-egress-label"; yang_parent_name = "labels"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::~ResvEgressLabel()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::has_data() const
{
    return label_type.is_set
	|| (wdm !=  nullptr && wdm->has_data())
	|| (otn !=  nullptr && otn->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_type.yfilter)
	|| (wdm !=  nullptr && wdm->has_operation())
	|| (otn !=  nullptr && otn->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resv-egress-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_type.is_set || is_set(label_type.yfilter)) leaf_name_data.push_back(label_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wdm")
    {
        if(wdm == nullptr)
        {
            wdm = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm>();
        }
        return wdm;
    }

    if(child_yang_name == "otn")
    {
        if(otn == nullptr)
        {
            otn = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_>();
        }
        return otn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(wdm != nullptr)
    {
        children["wdm"] = wdm;
    }

    if(otn != nullptr)
    {
        children["otn"] = otn;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-type")
    {
        label_type = value;
        label_type.value_namespace = name_space;
        label_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-type")
    {
        label_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wdm" || name == "otn" || name == "label-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm::Wdm()
    :
    label_set{YType::boolean, "label-set"},
    grid{YType::enumeration, "grid"},
    channel_spacing{YType::enumeration, "channel-spacing"},
    identifier{YType::uint16, "identifier"},
    channel{YType::int16, "channel"}
{

    yang_name = "wdm"; yang_parent_name = "resv-egress-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm::~Wdm()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm::has_data() const
{
    return label_set.is_set
	|| grid.is_set
	|| channel_spacing.is_set
	|| identifier.is_set
	|| channel.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_set.yfilter)
	|| ydk::is_set(grid.yfilter)
	|| ydk::is_set(channel_spacing.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(channel.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_set.is_set || is_set(label_set.yfilter)) leaf_name_data.push_back(label_set.get_name_leafdata());
    if (grid.is_set || is_set(grid.yfilter)) leaf_name_data.push_back(grid.get_name_leafdata());
    if (channel_spacing.is_set || is_set(channel_spacing.yfilter)) leaf_name_data.push_back(channel_spacing.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (channel.is_set || is_set(channel.yfilter)) leaf_name_data.push_back(channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-set")
    {
        label_set = value;
        label_set.value_namespace = name_space;
        label_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grid")
    {
        grid = value;
        grid.value_namespace = name_space;
        grid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing = value;
        channel_spacing.value_namespace = name_space;
        channel_spacing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel")
    {
        channel = value;
        channel.value_namespace = name_space;
        channel.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-set")
    {
        label_set.yfilter = yfilter;
    }
    if(value_path == "grid")
    {
        grid.yfilter = yfilter;
    }
    if(value_path == "channel-spacing")
    {
        channel_spacing.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "channel")
    {
        channel.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Wdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-set" || name == "grid" || name == "channel-spacing" || name == "identifier" || name == "channel")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::Otn_()
    :
    tpn{YType::uint16, "tpn"},
    bit_map_length{YType::uint16, "bit-map-length"}
{

    yang_name = "otn"; yang_parent_name = "resv-egress-label"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::~Otn_()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::has_data() const
{
    for (std::size_t index=0; index<bit_map.size(); index++)
    {
        if(bit_map[index]->has_data())
            return true;
    }
    return tpn.is_set
	|| bit_map_length.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::has_operation() const
{
    for (std::size_t index=0; index<bit_map.size(); index++)
    {
        if(bit_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tpn.yfilter)
	|| ydk::is_set(bit_map_length.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tpn.is_set || is_set(tpn.yfilter)) leaf_name_data.push_back(tpn.get_name_leafdata());
    if (bit_map_length.is_set || is_set(bit_map_length.yfilter)) leaf_name_data.push_back(bit_map_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bit-map")
    {
        for(auto const & c : bit_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::BitMap>();
        c->parent = this;
        bit_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bit_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tpn")
    {
        tpn = value;
        tpn.value_namespace = name_space;
        tpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length = value;
        bit_map_length.value_namespace = name_space;
        bit_map_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tpn")
    {
        tpn.yfilter = yfilter;
    }
    if(value_path == "bit-map-length")
    {
        bit_map_length.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-map" || name == "tpn" || name == "bit-map-length")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::BitMap::BitMap()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "bit-map"; yang_parent_name = "otn"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::BitMap::~BitMap()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::BitMap::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::BitMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::BitMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bit-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::BitMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::BitMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::BitMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::BitMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::BitMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Otn::Labels::ResvEgressLabel::Otn_::BitMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps::Aps()
    :
    protection_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps::ProtectionInfo>())
{
    protection_info->parent = this;

    yang_name = "aps"; yang_parent_name = "otn-s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps::~Aps()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps::has_data() const
{
    return (protection_info !=  nullptr && protection_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps::has_operation() const
{
    return is_set(yfilter)
	|| (protection_info !=  nullptr && protection_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protection-info")
    {
        if(protection_info == nullptr)
        {
            protection_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps::ProtectionInfo>();
        }
        return protection_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protection_info != nullptr)
    {
        children["protection-info"] = protection_info;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection-info")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps::ProtectionInfo::ProtectionInfo()
    :
    sbit{YType::boolean, "sbit"},
    pbit{YType::boolean, "pbit"},
    nbit{YType::boolean, "nbit"},
    obit{YType::boolean, "obit"},
    protect_type{YType::enumeration, "protect-type"},
    is_wtr_present{YType::boolean, "is-wtr-present"},
    wtr_timeout{YType::uint32, "wtr-timeout"},
    is_hopresent{YType::boolean, "is-hopresent"},
    ho_timeout{YType::uint32, "ho-timeout"},
    is_snc_mode_present{YType::boolean, "is-snc-mode-present"},
    snc_mode{YType::enumeration, "snc-mode"},
    tcm_id{YType::uint32, "tcm-id"},
    path_prot_profile_type{YType::enumeration, "path-prot-profile-type"}
{

    yang_name = "protection-info"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps::ProtectionInfo::~ProtectionInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps::ProtectionInfo::has_data() const
{
    return sbit.is_set
	|| pbit.is_set
	|| nbit.is_set
	|| obit.is_set
	|| protect_type.is_set
	|| is_wtr_present.is_set
	|| wtr_timeout.is_set
	|| is_hopresent.is_set
	|| ho_timeout.is_set
	|| is_snc_mode_present.is_set
	|| snc_mode.is_set
	|| tcm_id.is_set
	|| path_prot_profile_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps::ProtectionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sbit.yfilter)
	|| ydk::is_set(pbit.yfilter)
	|| ydk::is_set(nbit.yfilter)
	|| ydk::is_set(obit.yfilter)
	|| ydk::is_set(protect_type.yfilter)
	|| ydk::is_set(is_wtr_present.yfilter)
	|| ydk::is_set(wtr_timeout.yfilter)
	|| ydk::is_set(is_hopresent.yfilter)
	|| ydk::is_set(ho_timeout.yfilter)
	|| ydk::is_set(is_snc_mode_present.yfilter)
	|| ydk::is_set(snc_mode.yfilter)
	|| ydk::is_set(tcm_id.yfilter)
	|| ydk::is_set(path_prot_profile_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps::ProtectionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps::ProtectionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sbit.is_set || is_set(sbit.yfilter)) leaf_name_data.push_back(sbit.get_name_leafdata());
    if (pbit.is_set || is_set(pbit.yfilter)) leaf_name_data.push_back(pbit.get_name_leafdata());
    if (nbit.is_set || is_set(nbit.yfilter)) leaf_name_data.push_back(nbit.get_name_leafdata());
    if (obit.is_set || is_set(obit.yfilter)) leaf_name_data.push_back(obit.get_name_leafdata());
    if (protect_type.is_set || is_set(protect_type.yfilter)) leaf_name_data.push_back(protect_type.get_name_leafdata());
    if (is_wtr_present.is_set || is_set(is_wtr_present.yfilter)) leaf_name_data.push_back(is_wtr_present.get_name_leafdata());
    if (wtr_timeout.is_set || is_set(wtr_timeout.yfilter)) leaf_name_data.push_back(wtr_timeout.get_name_leafdata());
    if (is_hopresent.is_set || is_set(is_hopresent.yfilter)) leaf_name_data.push_back(is_hopresent.get_name_leafdata());
    if (ho_timeout.is_set || is_set(ho_timeout.yfilter)) leaf_name_data.push_back(ho_timeout.get_name_leafdata());
    if (is_snc_mode_present.is_set || is_set(is_snc_mode_present.yfilter)) leaf_name_data.push_back(is_snc_mode_present.get_name_leafdata());
    if (snc_mode.is_set || is_set(snc_mode.yfilter)) leaf_name_data.push_back(snc_mode.get_name_leafdata());
    if (tcm_id.is_set || is_set(tcm_id.yfilter)) leaf_name_data.push_back(tcm_id.get_name_leafdata());
    if (path_prot_profile_type.is_set || is_set(path_prot_profile_type.yfilter)) leaf_name_data.push_back(path_prot_profile_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps::ProtectionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps::ProtectionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps::ProtectionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sbit")
    {
        sbit = value;
        sbit.value_namespace = name_space;
        sbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbit")
    {
        pbit = value;
        pbit.value_namespace = name_space;
        pbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbit")
    {
        nbit = value;
        nbit.value_namespace = name_space;
        nbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "obit")
    {
        obit = value;
        obit.value_namespace = name_space;
        obit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protect-type")
    {
        protect_type = value;
        protect_type.value_namespace = name_space;
        protect_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-wtr-present")
    {
        is_wtr_present = value;
        is_wtr_present.value_namespace = name_space;
        is_wtr_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wtr-timeout")
    {
        wtr_timeout = value;
        wtr_timeout.value_namespace = name_space;
        wtr_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-hopresent")
    {
        is_hopresent = value;
        is_hopresent.value_namespace = name_space;
        is_hopresent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ho-timeout")
    {
        ho_timeout = value;
        ho_timeout.value_namespace = name_space;
        ho_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-snc-mode-present")
    {
        is_snc_mode_present = value;
        is_snc_mode_present.value_namespace = name_space;
        is_snc_mode_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snc-mode")
    {
        snc_mode = value;
        snc_mode.value_namespace = name_space;
        snc_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcm-id")
    {
        tcm_id = value;
        tcm_id.value_namespace = name_space;
        tcm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type = value;
        path_prot_profile_type.value_namespace = name_space;
        path_prot_profile_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps::ProtectionInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sbit")
    {
        sbit.yfilter = yfilter;
    }
    if(value_path == "pbit")
    {
        pbit.yfilter = yfilter;
    }
    if(value_path == "nbit")
    {
        nbit.yfilter = yfilter;
    }
    if(value_path == "obit")
    {
        obit.yfilter = yfilter;
    }
    if(value_path == "protect-type")
    {
        protect_type.yfilter = yfilter;
    }
    if(value_path == "is-wtr-present")
    {
        is_wtr_present.yfilter = yfilter;
    }
    if(value_path == "wtr-timeout")
    {
        wtr_timeout.yfilter = yfilter;
    }
    if(value_path == "is-hopresent")
    {
        is_hopresent.yfilter = yfilter;
    }
    if(value_path == "ho-timeout")
    {
        ho_timeout.yfilter = yfilter;
    }
    if(value_path == "is-snc-mode-present")
    {
        is_snc_mode_present.yfilter = yfilter;
    }
    if(value_path == "snc-mode")
    {
        snc_mode.yfilter = yfilter;
    }
    if(value_path == "tcm-id")
    {
        tcm_id.yfilter = yfilter;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OtnS2L::Aps::ProtectionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sbit" || name == "pbit" || name == "nbit" || name == "obit" || name == "protect-type" || name == "is-wtr-present" || name == "wtr-timeout" || name == "is-hopresent" || name == "ho-timeout" || name == "is-snc-mode-present" || name == "snc-mode" || name == "tcm-id" || name == "path-prot-profile-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::HeadEndBfdInfo()
    :
    creation_time{YType::uint32, "creation-time"},
    lspbfd_type{YType::enumeration, "lspbfd-type"},
    is_redundant{YType::boolean, "is-redundant"},
    bfd_reverse_path_stale{YType::boolean, "bfd-reverse-path-stale"}
    	,
    session_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::SessionInfo>())
	,deletion_history(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::DeletionHistory>())
{
    session_info->parent = this;
    deletion_history->parent = this;

    yang_name = "head-end-bfd-info"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::~HeadEndBfdInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::has_data() const
{
    for (std::size_t index=0; index<bfd_reverse_path_label.size(); index++)
    {
        if(bfd_reverse_path_label[index]->has_data())
            return true;
    }
    return creation_time.is_set
	|| lspbfd_type.is_set
	|| is_redundant.is_set
	|| bfd_reverse_path_stale.is_set
	|| (session_info !=  nullptr && session_info->has_data())
	|| (deletion_history !=  nullptr && deletion_history->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::has_operation() const
{
    for (std::size_t index=0; index<bfd_reverse_path_label.size(); index++)
    {
        if(bfd_reverse_path_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(creation_time.yfilter)
	|| ydk::is_set(lspbfd_type.yfilter)
	|| ydk::is_set(is_redundant.yfilter)
	|| ydk::is_set(bfd_reverse_path_stale.yfilter)
	|| (session_info !=  nullptr && session_info->has_operation())
	|| (deletion_history !=  nullptr && deletion_history->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-end-bfd-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (creation_time.is_set || is_set(creation_time.yfilter)) leaf_name_data.push_back(creation_time.get_name_leafdata());
    if (lspbfd_type.is_set || is_set(lspbfd_type.yfilter)) leaf_name_data.push_back(lspbfd_type.get_name_leafdata());
    if (is_redundant.is_set || is_set(is_redundant.yfilter)) leaf_name_data.push_back(is_redundant.get_name_leafdata());
    if (bfd_reverse_path_stale.is_set || is_set(bfd_reverse_path_stale.yfilter)) leaf_name_data.push_back(bfd_reverse_path_stale.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-info")
    {
        if(session_info == nullptr)
        {
            session_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::SessionInfo>();
        }
        return session_info;
    }

    if(child_yang_name == "deletion-history")
    {
        if(deletion_history == nullptr)
        {
            deletion_history = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::DeletionHistory>();
        }
        return deletion_history;
    }

    if(child_yang_name == "bfd-reverse-path-label")
    {
        for(auto const & c : bfd_reverse_path_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::BfdReversePathLabel>();
        c->parent = this;
        bfd_reverse_path_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_info != nullptr)
    {
        children["session-info"] = session_info;
    }

    if(deletion_history != nullptr)
    {
        children["deletion-history"] = deletion_history;
    }

    for (auto const & c : bfd_reverse_path_label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "creation-time")
    {
        creation_time = value;
        creation_time.value_namespace = name_space;
        creation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspbfd-type")
    {
        lspbfd_type = value;
        lspbfd_type.value_namespace = name_space;
        lspbfd_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-redundant")
    {
        is_redundant = value;
        is_redundant.value_namespace = name_space;
        is_redundant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-reverse-path-stale")
    {
        bfd_reverse_path_stale = value;
        bfd_reverse_path_stale.value_namespace = name_space;
        bfd_reverse_path_stale.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "creation-time")
    {
        creation_time.yfilter = yfilter;
    }
    if(value_path == "lspbfd-type")
    {
        lspbfd_type.yfilter = yfilter;
    }
    if(value_path == "is-redundant")
    {
        is_redundant.yfilter = yfilter;
    }
    if(value_path == "bfd-reverse-path-stale")
    {
        bfd_reverse_path_stale.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-info" || name == "deletion-history" || name == "bfd-reverse-path-label" || name == "creation-time" || name == "lspbfd-type" || name == "is-redundant" || name == "bfd-reverse-path-stale")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::SessionInfo::SessionInfo()
    :
    state{YType::enumeration, "state"},
    state_change_time{YType::uint32, "state-change-time"}
{

    yang_name = "session-info"; yang_parent_name = "head-end-bfd-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::SessionInfo::~SessionInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::SessionInfo::has_data() const
{
    return state.is_set
	|| state_change_time.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::SessionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(state_change_time.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::SessionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::SessionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_change_time.is_set || is_set(state_change_time.yfilter)) leaf_name_data.push_back(state_change_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::SessionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::SessionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::SessionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-change-time")
    {
        state_change_time = value;
        state_change_time.value_namespace = name_space;
        state_change_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::SessionInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "state-change-time")
    {
        state_change_time.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::SessionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "state-change-time")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::DeletionHistory::DeletionHistory()
    :
    lsp_id{YType::uint16, "lsp-id"},
    deletion_time{YType::uint32, "deletion-time"},
    deletion_reason{YType::str, "deletion-reason"},
    deletion_diagnostic_code{YType::uint32, "deletion-diagnostic-code"}
{

    yang_name = "deletion-history"; yang_parent_name = "head-end-bfd-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::DeletionHistory::~DeletionHistory()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::DeletionHistory::has_data() const
{
    return lsp_id.is_set
	|| deletion_time.is_set
	|| deletion_reason.is_set
	|| deletion_diagnostic_code.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::DeletionHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(deletion_time.yfilter)
	|| ydk::is_set(deletion_reason.yfilter)
	|| ydk::is_set(deletion_diagnostic_code.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::DeletionHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deletion-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::DeletionHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (deletion_time.is_set || is_set(deletion_time.yfilter)) leaf_name_data.push_back(deletion_time.get_name_leafdata());
    if (deletion_reason.is_set || is_set(deletion_reason.yfilter)) leaf_name_data.push_back(deletion_reason.get_name_leafdata());
    if (deletion_diagnostic_code.is_set || is_set(deletion_diagnostic_code.yfilter)) leaf_name_data.push_back(deletion_diagnostic_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::DeletionHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::DeletionHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::DeletionHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletion-time")
    {
        deletion_time = value;
        deletion_time.value_namespace = name_space;
        deletion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletion-reason")
    {
        deletion_reason = value;
        deletion_reason.value_namespace = name_space;
        deletion_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletion-diagnostic-code")
    {
        deletion_diagnostic_code = value;
        deletion_diagnostic_code.value_namespace = name_space;
        deletion_diagnostic_code.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::DeletionHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "deletion-time")
    {
        deletion_time.yfilter = yfilter;
    }
    if(value_path == "deletion-reason")
    {
        deletion_reason.yfilter = yfilter;
    }
    if(value_path == "deletion-diagnostic-code")
    {
        deletion_diagnostic_code.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::DeletionHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "deletion-time" || name == "deletion-reason" || name == "deletion-diagnostic-code")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::BfdReversePathLabel::BfdReversePathLabel()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "bfd-reverse-path-label"; yang_parent_name = "head-end-bfd-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::BfdReversePathLabel::~BfdReversePathLabel()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::BfdReversePathLabel::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::BfdReversePathLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::BfdReversePathLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::BfdReversePathLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::BfdReversePathLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::BfdReversePathLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::BfdReversePathLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::BfdReversePathLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::HeadEndBfdInfo::BfdReversePathLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo::TailEndBfdInfo()
    :
    failure_diagnostic_code{YType::uint32, "failure-diagnostic-code"},
    failure_reason{YType::str, "failure-reason"},
    local_discriminator{YType::uint32, "local-discriminator"},
    remote_discriminator{YType::uint32, "remote-discriminator"},
    min_interval{YType::uint32, "min-interval"},
    min_interval_default{YType::boolean, "min-interval-default"},
    multiplier{YType::uint8, "multiplier"},
    multiplier_default{YType::boolean, "multiplier-default"}
    	,
    session_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo::SessionInfo>())
{
    session_info->parent = this;

    yang_name = "tail-end-bfd-info"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo::~TailEndBfdInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo::has_data() const
{
    return failure_diagnostic_code.is_set
	|| failure_reason.is_set
	|| local_discriminator.is_set
	|| remote_discriminator.is_set
	|| min_interval.is_set
	|| min_interval_default.is_set
	|| multiplier.is_set
	|| multiplier_default.is_set
	|| (session_info !=  nullptr && session_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure_diagnostic_code.yfilter)
	|| ydk::is_set(failure_reason.yfilter)
	|| ydk::is_set(local_discriminator.yfilter)
	|| ydk::is_set(remote_discriminator.yfilter)
	|| ydk::is_set(min_interval.yfilter)
	|| ydk::is_set(min_interval_default.yfilter)
	|| ydk::is_set(multiplier.yfilter)
	|| ydk::is_set(multiplier_default.yfilter)
	|| (session_info !=  nullptr && session_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tail-end-bfd-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure_diagnostic_code.is_set || is_set(failure_diagnostic_code.yfilter)) leaf_name_data.push_back(failure_diagnostic_code.get_name_leafdata());
    if (failure_reason.is_set || is_set(failure_reason.yfilter)) leaf_name_data.push_back(failure_reason.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.yfilter)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.yfilter)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (min_interval.is_set || is_set(min_interval.yfilter)) leaf_name_data.push_back(min_interval.get_name_leafdata());
    if (min_interval_default.is_set || is_set(min_interval_default.yfilter)) leaf_name_data.push_back(min_interval_default.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());
    if (multiplier_default.is_set || is_set(multiplier_default.yfilter)) leaf_name_data.push_back(multiplier_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-info")
    {
        if(session_info == nullptr)
        {
            session_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo::SessionInfo>();
        }
        return session_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session_info != nullptr)
    {
        children["session-info"] = session_info;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failure-diagnostic-code")
    {
        failure_diagnostic_code = value;
        failure_diagnostic_code.value_namespace = name_space;
        failure_diagnostic_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure-reason")
    {
        failure_reason = value;
        failure_reason.value_namespace = name_space;
        failure_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
        local_discriminator.value_namespace = name_space;
        local_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
        remote_discriminator.value_namespace = name_space;
        remote_discriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-interval")
    {
        min_interval = value;
        min_interval.value_namespace = name_space;
        min_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-interval-default")
    {
        min_interval_default = value;
        min_interval_default.value_namespace = name_space;
        min_interval_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-default")
    {
        multiplier_default = value;
        multiplier_default.value_namespace = name_space;
        multiplier_default.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failure-diagnostic-code")
    {
        failure_diagnostic_code.yfilter = yfilter;
    }
    if(value_path == "failure-reason")
    {
        failure_reason.yfilter = yfilter;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator.yfilter = yfilter;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator.yfilter = yfilter;
    }
    if(value_path == "min-interval")
    {
        min_interval.yfilter = yfilter;
    }
    if(value_path == "min-interval-default")
    {
        min_interval_default.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
    if(value_path == "multiplier-default")
    {
        multiplier_default.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-info" || name == "failure-diagnostic-code" || name == "failure-reason" || name == "local-discriminator" || name == "remote-discriminator" || name == "min-interval" || name == "min-interval-default" || name == "multiplier" || name == "multiplier-default")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo::SessionInfo::SessionInfo()
    :
    state{YType::enumeration, "state"},
    state_change_time{YType::uint32, "state-change-time"}
{

    yang_name = "session-info"; yang_parent_name = "tail-end-bfd-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo::SessionInfo::~SessionInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo::SessionInfo::has_data() const
{
    return state.is_set
	|| state_change_time.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo::SessionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(state_change_time.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo::SessionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo::SessionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_change_time.is_set || is_set(state_change_time.yfilter)) leaf_name_data.push_back(state_change_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo::SessionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo::SessionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo::SessionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-change-time")
    {
        state_change_time = value;
        state_change_time.value_namespace = name_space;
        state_change_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo::SessionInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "state-change-time")
    {
        state_change_time.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::TailEndBfdInfo::SessionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "state-change-time")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection::SrlgCollection()
    :
    srlg_collect_type{YType::enumeration, "srlg-collect-type"}
{

    yang_name = "srlg-collection"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection::~SrlgCollection()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection::has_data() const
{
    for (std::size_t index=0; index<discovered_srlg.size(); index++)
    {
        if(discovered_srlg[index]->has_data())
            return true;
    }
    return srlg_collect_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection::has_operation() const
{
    for (std::size_t index=0; index<discovered_srlg.size(); index++)
    {
        if(discovered_srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(srlg_collect_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-collection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_collect_type.is_set || is_set(srlg_collect_type.yfilter)) leaf_name_data.push_back(srlg_collect_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovered-srlg")
    {
        for(auto const & c : discovered_srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection::DiscoveredSrlg>();
        c->parent = this;
        discovered_srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : discovered_srlg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-collect-type")
    {
        srlg_collect_type = value;
        srlg_collect_type.value_namespace = name_space;
        srlg_collect_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-collect-type")
    {
        srlg_collect_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovered-srlg" || name == "srlg-collect-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection::DiscoveredSrlg::DiscoveredSrlg()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "discovered-srlg"; yang_parent_name = "srlg-collection"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection::DiscoveredSrlg::~DiscoveredSrlg()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection::DiscoveredSrlg::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection::DiscoveredSrlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection::DiscoveredSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovered-srlg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection::DiscoveredSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection::DiscoveredSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection::DiscoveredSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection::DiscoveredSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection::DiscoveredSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SrlgCollection::DiscoveredSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association::Association()
    :
    s2l_association_type{YType::uint16, "s2l-association-type"},
    s2l_association_tie_role{YType::enumeration, "s2l-association-tie-role"},
    s2l_association_id{YType::uint16, "s2l-association-id"},
    s2l_association_source{YType::str, "s2l-association-source"},
    s2l_global_source{YType::uint32, "s2l-global-source"}
{

    yang_name = "association"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association::~Association()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association::has_data() const
{
    for (std::size_t index=0; index<s2l_extended_id.size(); index++)
    {
        if(s2l_extended_id[index]->has_data())
            return true;
    }
    return s2l_association_type.is_set
	|| s2l_association_tie_role.is_set
	|| s2l_association_id.is_set
	|| s2l_association_source.is_set
	|| s2l_global_source.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association::has_operation() const
{
    for (std::size_t index=0; index<s2l_extended_id.size(); index++)
    {
        if(s2l_extended_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(s2l_association_type.yfilter)
	|| ydk::is_set(s2l_association_tie_role.yfilter)
	|| ydk::is_set(s2l_association_id.yfilter)
	|| ydk::is_set(s2l_association_source.yfilter)
	|| ydk::is_set(s2l_global_source.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_association_type.is_set || is_set(s2l_association_type.yfilter)) leaf_name_data.push_back(s2l_association_type.get_name_leafdata());
    if (s2l_association_tie_role.is_set || is_set(s2l_association_tie_role.yfilter)) leaf_name_data.push_back(s2l_association_tie_role.get_name_leafdata());
    if (s2l_association_id.is_set || is_set(s2l_association_id.yfilter)) leaf_name_data.push_back(s2l_association_id.get_name_leafdata());
    if (s2l_association_source.is_set || is_set(s2l_association_source.yfilter)) leaf_name_data.push_back(s2l_association_source.get_name_leafdata());
    if (s2l_global_source.is_set || is_set(s2l_global_source.yfilter)) leaf_name_data.push_back(s2l_global_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-extended-id")
    {
        for(auto const & c : s2l_extended_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association::S2LExtendedId>();
        c->parent = this;
        s2l_extended_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : s2l_extended_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-association-type")
    {
        s2l_association_type = value;
        s2l_association_type.value_namespace = name_space;
        s2l_association_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role = value;
        s2l_association_tie_role.value_namespace = name_space;
        s2l_association_tie_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-id")
    {
        s2l_association_id = value;
        s2l_association_id.value_namespace = name_space;
        s2l_association_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source = value;
        s2l_association_source.value_namespace = name_space;
        s2l_association_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source = value;
        s2l_global_source.value_namespace = name_space;
        s2l_global_source.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-association-type")
    {
        s2l_association_type.yfilter = yfilter;
    }
    if(value_path == "s2l-association-tie-role")
    {
        s2l_association_tie_role.yfilter = yfilter;
    }
    if(value_path == "s2l-association-id")
    {
        s2l_association_id.yfilter = yfilter;
    }
    if(value_path == "s2l-association-source")
    {
        s2l_association_source.yfilter = yfilter;
    }
    if(value_path == "s2l-global-source")
    {
        s2l_global_source.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-extended-id" || name == "s2l-association-type" || name == "s2l-association-tie-role" || name == "s2l-association-id" || name == "s2l-association-source" || name == "s2l-global-source")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association::S2LExtendedId::S2LExtendedId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "s2l-extended-id"; yang_parent_name = "association"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association::S2LExtendedId::~S2LExtendedId()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association::S2LExtendedId::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association::S2LExtendedId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association::S2LExtendedId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-extended-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association::S2LExtendedId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association::S2LExtendedId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association::S2LExtendedId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association::S2LExtendedId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association::S2LExtendedId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Association::S2LExtendedId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Protection::Protection()
    :
    s2l_secondary{YType::boolean, "s2l-secondary"},
    s2l_protecting{YType::boolean, "s2l-protecting"},
    s2l_notification{YType::boolean, "s2l-notification"},
    s2l_operational{YType::boolean, "s2l-operational"},
    enhanced{YType::boolean, "enhanced"},
    ded1_plus1{YType::boolean, "ded1-plus1"},
    ded1_to1{YType::boolean, "ded1-to1"},
    shared{YType::boolean, "shared"},
    link_unprotected{YType::boolean, "link-unprotected"},
    extra_traffic{YType::boolean, "extra-traffic"},
    any{YType::boolean, "any"},
    rerouting{YType::boolean, "rerouting"},
    rerouting_no_et{YType::boolean, "rerouting-no-et"},
    one_to_n_protection_et{YType::boolean, "one-to-n-protection-et"},
    one_plus_one_uni{YType::boolean, "one-plus-one-uni"},
    one_plus_one_bi{YType::boolean, "one-plus-one-bi"},
    lsp_unprotected{YType::boolean, "lsp-unprotected"}
{

    yang_name = "protection"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Protection::~Protection()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Protection::has_data() const
{
    return s2l_secondary.is_set
	|| s2l_protecting.is_set
	|| s2l_notification.is_set
	|| s2l_operational.is_set
	|| enhanced.is_set
	|| ded1_plus1.is_set
	|| ded1_to1.is_set
	|| shared.is_set
	|| link_unprotected.is_set
	|| extra_traffic.is_set
	|| any.is_set
	|| rerouting.is_set
	|| rerouting_no_et.is_set
	|| one_to_n_protection_et.is_set
	|| one_plus_one_uni.is_set
	|| one_plus_one_bi.is_set
	|| lsp_unprotected.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_secondary.yfilter)
	|| ydk::is_set(s2l_protecting.yfilter)
	|| ydk::is_set(s2l_notification.yfilter)
	|| ydk::is_set(s2l_operational.yfilter)
	|| ydk::is_set(enhanced.yfilter)
	|| ydk::is_set(ded1_plus1.yfilter)
	|| ydk::is_set(ded1_to1.yfilter)
	|| ydk::is_set(shared.yfilter)
	|| ydk::is_set(link_unprotected.yfilter)
	|| ydk::is_set(extra_traffic.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(rerouting.yfilter)
	|| ydk::is_set(rerouting_no_et.yfilter)
	|| ydk::is_set(one_to_n_protection_et.yfilter)
	|| ydk::is_set(one_plus_one_uni.yfilter)
	|| ydk::is_set(one_plus_one_bi.yfilter)
	|| ydk::is_set(lsp_unprotected.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_secondary.is_set || is_set(s2l_secondary.yfilter)) leaf_name_data.push_back(s2l_secondary.get_name_leafdata());
    if (s2l_protecting.is_set || is_set(s2l_protecting.yfilter)) leaf_name_data.push_back(s2l_protecting.get_name_leafdata());
    if (s2l_notification.is_set || is_set(s2l_notification.yfilter)) leaf_name_data.push_back(s2l_notification.get_name_leafdata());
    if (s2l_operational.is_set || is_set(s2l_operational.yfilter)) leaf_name_data.push_back(s2l_operational.get_name_leafdata());
    if (enhanced.is_set || is_set(enhanced.yfilter)) leaf_name_data.push_back(enhanced.get_name_leafdata());
    if (ded1_plus1.is_set || is_set(ded1_plus1.yfilter)) leaf_name_data.push_back(ded1_plus1.get_name_leafdata());
    if (ded1_to1.is_set || is_set(ded1_to1.yfilter)) leaf_name_data.push_back(ded1_to1.get_name_leafdata());
    if (shared.is_set || is_set(shared.yfilter)) leaf_name_data.push_back(shared.get_name_leafdata());
    if (link_unprotected.is_set || is_set(link_unprotected.yfilter)) leaf_name_data.push_back(link_unprotected.get_name_leafdata());
    if (extra_traffic.is_set || is_set(extra_traffic.yfilter)) leaf_name_data.push_back(extra_traffic.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (rerouting.is_set || is_set(rerouting.yfilter)) leaf_name_data.push_back(rerouting.get_name_leafdata());
    if (rerouting_no_et.is_set || is_set(rerouting_no_et.yfilter)) leaf_name_data.push_back(rerouting_no_et.get_name_leafdata());
    if (one_to_n_protection_et.is_set || is_set(one_to_n_protection_et.yfilter)) leaf_name_data.push_back(one_to_n_protection_et.get_name_leafdata());
    if (one_plus_one_uni.is_set || is_set(one_plus_one_uni.yfilter)) leaf_name_data.push_back(one_plus_one_uni.get_name_leafdata());
    if (one_plus_one_bi.is_set || is_set(one_plus_one_bi.yfilter)) leaf_name_data.push_back(one_plus_one_bi.get_name_leafdata());
    if (lsp_unprotected.is_set || is_set(lsp_unprotected.yfilter)) leaf_name_data.push_back(lsp_unprotected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-secondary")
    {
        s2l_secondary = value;
        s2l_secondary.value_namespace = name_space;
        s2l_secondary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting = value;
        s2l_protecting.value_namespace = name_space;
        s2l_protecting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification = value;
        s2l_notification.value_namespace = name_space;
        s2l_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational = value;
        s2l_operational.value_namespace = name_space;
        s2l_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enhanced")
    {
        enhanced = value;
        enhanced.value_namespace = name_space;
        enhanced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1 = value;
        ded1_plus1.value_namespace = name_space;
        ded1_plus1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1 = value;
        ded1_to1.value_namespace = name_space;
        ded1_to1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shared")
    {
        shared = value;
        shared.value_namespace = name_space;
        shared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected = value;
        link_unprotected.value_namespace = name_space;
        link_unprotected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic = value;
        extra_traffic.value_namespace = name_space;
        extra_traffic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouting")
    {
        rerouting = value;
        rerouting.value_namespace = name_space;
        rerouting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et = value;
        rerouting_no_et.value_namespace = name_space;
        rerouting_no_et.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et = value;
        one_to_n_protection_et.value_namespace = name_space;
        one_to_n_protection_et.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni = value;
        one_plus_one_uni.value_namespace = name_space;
        one_plus_one_uni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi = value;
        one_plus_one_bi.value_namespace = name_space;
        one_plus_one_bi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected = value;
        lsp_unprotected.value_namespace = name_space;
        lsp_unprotected.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-secondary")
    {
        s2l_secondary.yfilter = yfilter;
    }
    if(value_path == "s2l-protecting")
    {
        s2l_protecting.yfilter = yfilter;
    }
    if(value_path == "s2l-notification")
    {
        s2l_notification.yfilter = yfilter;
    }
    if(value_path == "s2l-operational")
    {
        s2l_operational.yfilter = yfilter;
    }
    if(value_path == "enhanced")
    {
        enhanced.yfilter = yfilter;
    }
    if(value_path == "ded1-plus1")
    {
        ded1_plus1.yfilter = yfilter;
    }
    if(value_path == "ded1-to1")
    {
        ded1_to1.yfilter = yfilter;
    }
    if(value_path == "shared")
    {
        shared.yfilter = yfilter;
    }
    if(value_path == "link-unprotected")
    {
        link_unprotected.yfilter = yfilter;
    }
    if(value_path == "extra-traffic")
    {
        extra_traffic.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "rerouting")
    {
        rerouting.yfilter = yfilter;
    }
    if(value_path == "rerouting-no-et")
    {
        rerouting_no_et.yfilter = yfilter;
    }
    if(value_path == "one-to-n-protection-et")
    {
        one_to_n_protection_et.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-uni")
    {
        one_plus_one_uni.yfilter = yfilter;
    }
    if(value_path == "one-plus-one-bi")
    {
        one_plus_one_bi.yfilter = yfilter;
    }
    if(value_path == "lsp-unprotected")
    {
        lsp_unprotected.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-secondary" || name == "s2l-protecting" || name == "s2l-notification" || name == "s2l-operational" || name == "enhanced" || name == "ded1-plus1" || name == "ded1-to1" || name == "shared" || name == "link-unprotected" || name == "extra-traffic" || name == "any" || name == "rerouting" || name == "rerouting-no-et" || name == "one-to-n-protection-et" || name == "one-plus-one-uni" || name == "one-plus-one-bi" || name == "lsp-unprotected")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec::ReverseLspFec()
    :
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "reverse-lsp-fec"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec::~ReverseLspFec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec::has_data() const
{
    return fec_lsp_id.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-lsp-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-lsp-id" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-vrf")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "reverse-lsp-fec"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| p2p_lsp_destination.is_set
	|| fec_destination_p2mp_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseLspFec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "p2p-lsp-destination" || name == "fec-destination-p2mp-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseTspec::ReverseTspec()
    :
    average_rate{YType::uint64, "average-rate"},
    maximum_burst{YType::uint64, "maximum-burst"},
    peak_rate{YType::uint64, "peak-rate"}
{

    yang_name = "reverse-tspec"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseTspec::~ReverseTspec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseTspec::has_data() const
{
    return average_rate.is_set
	|| maximum_burst.is_set
	|| peak_rate.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseTspec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(average_rate.yfilter)
	|| ydk::is_set(maximum_burst.yfilter)
	|| ydk::is_set(peak_rate.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseTspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-tspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseTspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_rate.is_set || is_set(average_rate.yfilter)) leaf_name_data.push_back(average_rate.get_name_leafdata());
    if (maximum_burst.is_set || is_set(maximum_burst.yfilter)) leaf_name_data.push_back(maximum_burst.get_name_leafdata());
    if (peak_rate.is_set || is_set(peak_rate.yfilter)) leaf_name_data.push_back(peak_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseTspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseTspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseTspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "average-rate")
    {
        average_rate = value;
        average_rate.value_namespace = name_space;
        average_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-burst")
    {
        maximum_burst = value;
        maximum_burst.value_namespace = name_space;
        maximum_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-rate")
    {
        peak_rate = value;
        peak_rate.value_namespace = name_space;
        peak_rate.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseTspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "average-rate")
    {
        average_rate.yfilter = yfilter;
    }
    if(value_path == "maximum-burst")
    {
        maximum_burst.yfilter = yfilter;
    }
    if(value_path == "peak-rate")
    {
        peak_rate.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseTspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average-rate" || name == "maximum-burst" || name == "peak-rate")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo::FlexInfo()
    :
    entry_exists{YType::boolean, "entry-exists"},
    in_label{YType::uint32, "in-label"},
    bfd_created{YType::boolean, "bfd-created"},
    bfd_up{YType::boolean, "bfd-up"},
    oam_created{YType::boolean, "oam-created"},
    bfd_next_hop{YType::str, "bfd-next-hop"},
    bfd_tun_ifh{YType::str, "bfd-tun-ifh"},
    bfd_out_ifh{YType::str, "bfd-out-ifh"},
    bfd_int_label{YType::uint32, "bfd-int-label"},
    bfd_egress_label{YType::uint32, "bfd-egress-label"},
    fault_ldi_lockout{YType::boolean, "fault-ldi-lockout"},
    fault_ldi{YType::boolean, "fault-ldi"},
    fault_lkr{YType::boolean, "fault-lkr"},
    fault_ais{YType::boolean, "fault-ais"},
    fault_time{YType::uint32, "fault-time"}
    	,
    flex_fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo::FlexFec>())
{
    flex_fec->parent = this;

    yang_name = "flex-info"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo::~FlexInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo::has_data() const
{
    return entry_exists.is_set
	|| in_label.is_set
	|| bfd_created.is_set
	|| bfd_up.is_set
	|| oam_created.is_set
	|| bfd_next_hop.is_set
	|| bfd_tun_ifh.is_set
	|| bfd_out_ifh.is_set
	|| bfd_int_label.is_set
	|| bfd_egress_label.is_set
	|| fault_ldi_lockout.is_set
	|| fault_ldi.is_set
	|| fault_lkr.is_set
	|| fault_ais.is_set
	|| fault_time.is_set
	|| (flex_fec !=  nullptr && flex_fec->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry_exists.yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(bfd_created.yfilter)
	|| ydk::is_set(bfd_up.yfilter)
	|| ydk::is_set(oam_created.yfilter)
	|| ydk::is_set(bfd_next_hop.yfilter)
	|| ydk::is_set(bfd_tun_ifh.yfilter)
	|| ydk::is_set(bfd_out_ifh.yfilter)
	|| ydk::is_set(bfd_int_label.yfilter)
	|| ydk::is_set(bfd_egress_label.yfilter)
	|| ydk::is_set(fault_ldi_lockout.yfilter)
	|| ydk::is_set(fault_ldi.yfilter)
	|| ydk::is_set(fault_lkr.yfilter)
	|| ydk::is_set(fault_ais.yfilter)
	|| ydk::is_set(fault_time.yfilter)
	|| (flex_fec !=  nullptr && flex_fec->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_exists.is_set || is_set(entry_exists.yfilter)) leaf_name_data.push_back(entry_exists.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (bfd_created.is_set || is_set(bfd_created.yfilter)) leaf_name_data.push_back(bfd_created.get_name_leafdata());
    if (bfd_up.is_set || is_set(bfd_up.yfilter)) leaf_name_data.push_back(bfd_up.get_name_leafdata());
    if (oam_created.is_set || is_set(oam_created.yfilter)) leaf_name_data.push_back(oam_created.get_name_leafdata());
    if (bfd_next_hop.is_set || is_set(bfd_next_hop.yfilter)) leaf_name_data.push_back(bfd_next_hop.get_name_leafdata());
    if (bfd_tun_ifh.is_set || is_set(bfd_tun_ifh.yfilter)) leaf_name_data.push_back(bfd_tun_ifh.get_name_leafdata());
    if (bfd_out_ifh.is_set || is_set(bfd_out_ifh.yfilter)) leaf_name_data.push_back(bfd_out_ifh.get_name_leafdata());
    if (bfd_int_label.is_set || is_set(bfd_int_label.yfilter)) leaf_name_data.push_back(bfd_int_label.get_name_leafdata());
    if (bfd_egress_label.is_set || is_set(bfd_egress_label.yfilter)) leaf_name_data.push_back(bfd_egress_label.get_name_leafdata());
    if (fault_ldi_lockout.is_set || is_set(fault_ldi_lockout.yfilter)) leaf_name_data.push_back(fault_ldi_lockout.get_name_leafdata());
    if (fault_ldi.is_set || is_set(fault_ldi.yfilter)) leaf_name_data.push_back(fault_ldi.get_name_leafdata());
    if (fault_lkr.is_set || is_set(fault_lkr.yfilter)) leaf_name_data.push_back(fault_lkr.get_name_leafdata());
    if (fault_ais.is_set || is_set(fault_ais.yfilter)) leaf_name_data.push_back(fault_ais.get_name_leafdata());
    if (fault_time.is_set || is_set(fault_time.yfilter)) leaf_name_data.push_back(fault_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flex-fec")
    {
        if(flex_fec == nullptr)
        {
            flex_fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo::FlexFec>();
        }
        return flex_fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flex_fec != nullptr)
    {
        children["flex-fec"] = flex_fec;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-exists")
    {
        entry_exists = value;
        entry_exists.value_namespace = name_space;
        entry_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-created")
    {
        bfd_created = value;
        bfd_created.value_namespace = name_space;
        bfd_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-up")
    {
        bfd_up = value;
        bfd_up.value_namespace = name_space;
        bfd_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oam-created")
    {
        oam_created = value;
        oam_created.value_namespace = name_space;
        oam_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-next-hop")
    {
        bfd_next_hop = value;
        bfd_next_hop.value_namespace = name_space;
        bfd_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-tun-ifh")
    {
        bfd_tun_ifh = value;
        bfd_tun_ifh.value_namespace = name_space;
        bfd_tun_ifh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-out-ifh")
    {
        bfd_out_ifh = value;
        bfd_out_ifh.value_namespace = name_space;
        bfd_out_ifh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-int-label")
    {
        bfd_int_label = value;
        bfd_int_label.value_namespace = name_space;
        bfd_int_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-egress-label")
    {
        bfd_egress_label = value;
        bfd_egress_label.value_namespace = name_space;
        bfd_egress_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-ldi-lockout")
    {
        fault_ldi_lockout = value;
        fault_ldi_lockout.value_namespace = name_space;
        fault_ldi_lockout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-ldi")
    {
        fault_ldi = value;
        fault_ldi.value_namespace = name_space;
        fault_ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-lkr")
    {
        fault_lkr = value;
        fault_lkr.value_namespace = name_space;
        fault_lkr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-ais")
    {
        fault_ais = value;
        fault_ais.value_namespace = name_space;
        fault_ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fault-time")
    {
        fault_time = value;
        fault_time.value_namespace = name_space;
        fault_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-exists")
    {
        entry_exists.yfilter = yfilter;
    }
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "bfd-created")
    {
        bfd_created.yfilter = yfilter;
    }
    if(value_path == "bfd-up")
    {
        bfd_up.yfilter = yfilter;
    }
    if(value_path == "oam-created")
    {
        oam_created.yfilter = yfilter;
    }
    if(value_path == "bfd-next-hop")
    {
        bfd_next_hop.yfilter = yfilter;
    }
    if(value_path == "bfd-tun-ifh")
    {
        bfd_tun_ifh.yfilter = yfilter;
    }
    if(value_path == "bfd-out-ifh")
    {
        bfd_out_ifh.yfilter = yfilter;
    }
    if(value_path == "bfd-int-label")
    {
        bfd_int_label.yfilter = yfilter;
    }
    if(value_path == "bfd-egress-label")
    {
        bfd_egress_label.yfilter = yfilter;
    }
    if(value_path == "fault-ldi-lockout")
    {
        fault_ldi_lockout.yfilter = yfilter;
    }
    if(value_path == "fault-ldi")
    {
        fault_ldi.yfilter = yfilter;
    }
    if(value_path == "fault-lkr")
    {
        fault_lkr.yfilter = yfilter;
    }
    if(value_path == "fault-ais")
    {
        fault_ais.yfilter = yfilter;
    }
    if(value_path == "fault-time")
    {
        fault_time.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flex-fec" || name == "entry-exists" || name == "in-label" || name == "bfd-created" || name == "bfd-up" || name == "oam-created" || name == "bfd-next-hop" || name == "bfd-tun-ifh" || name == "bfd-out-ifh" || name == "bfd-int-label" || name == "bfd-egress-label" || name == "fault-ldi-lockout" || name == "fault-ldi" || name == "fault-lkr" || name == "fault-ais" || name == "fault-time")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo::FlexFec::FlexFec()
    :
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{

    yang_name = "flex-fec"; yang_parent_name = "flex-info"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo::FlexFec::~FlexFec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo::FlexFec::has_data() const
{
    return s2l_fec_subgroup_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_ctype.is_set
	|| s2l_fec_vrf.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo::FlexFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_fec_subgroup_id.yfilter)
	|| ydk::is_set(s2l_fec_lsp_id.yfilter)
	|| ydk::is_set(s2l_fec_tunnel_id.yfilter)
	|| ydk::is_set(s2l_fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(s2l_fec_source.yfilter)
	|| ydk::is_set(s2l_fec_dest.yfilter)
	|| ydk::is_set(s2l_fec_p2mp_id.yfilter)
	|| ydk::is_set(s2l_fec_subgroup_originator.yfilter)
	|| ydk::is_set(s2l_fec_ctype.yfilter)
	|| ydk::is_set(s2l_fec_vrf.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo::FlexFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo::FlexFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.yfilter)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.yfilter)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.yfilter)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.yfilter)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.yfilter)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.yfilter)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.yfilter)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.yfilter)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo::FlexFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo::FlexFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo::FlexFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
        s2l_fec_subgroup_id.value_namespace = name_space;
        s2l_fec_subgroup_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
        s2l_fec_lsp_id.value_namespace = name_space;
        s2l_fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
        s2l_fec_tunnel_id.value_namespace = name_space;
        s2l_fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
        s2l_fec_extended_tunnel_id.value_namespace = name_space;
        s2l_fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
        s2l_fec_source.value_namespace = name_space;
        s2l_fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
        s2l_fec_dest.value_namespace = name_space;
        s2l_fec_dest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
        s2l_fec_p2mp_id.value_namespace = name_space;
        s2l_fec_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
        s2l_fec_subgroup_originator.value_namespace = name_space;
        s2l_fec_subgroup_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
        s2l_fec_ctype.value_namespace = name_space;
        s2l_fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
        s2l_fec_vrf.value_namespace = name_space;
        s2l_fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo::FlexFec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::FlexInfo::FlexFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-fec-subgroup-id" || name == "s2l-fec-lsp-id" || name == "s2l-fec-tunnel-id" || name == "s2l-fec-extended-tunnel-id" || name == "s2l-fec-source" || name == "s2l-fec-dest" || name == "s2l-fec-p2mp-id" || name == "s2l-fec-subgroup-originator" || name == "s2l-fec-ctype" || name == "s2l-fec-vrf")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::LspWrapInfo::LspWrapInfo()
    :
    lsp_wrap_protection_enable{YType::boolean, "lsp-wrap-protection-enable"},
    lsp_wrap_protection_label{YType::uint32, "lsp-wrap-protection-label"},
    reverse_egress_interface{YType::str, "reverse-egress-interface"},
    reverse_lsp_label{YType::uint32, "reverse-lsp-label"},
    lsp_wrap_protection_state{YType::enumeration, "lsp-wrap-protection-state"}
{

    yang_name = "lsp-wrap-info"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::LspWrapInfo::~LspWrapInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::LspWrapInfo::has_data() const
{
    return lsp_wrap_protection_enable.is_set
	|| lsp_wrap_protection_label.is_set
	|| reverse_egress_interface.is_set
	|| reverse_lsp_label.is_set
	|| lsp_wrap_protection_state.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::LspWrapInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_wrap_protection_enable.yfilter)
	|| ydk::is_set(lsp_wrap_protection_label.yfilter)
	|| ydk::is_set(reverse_egress_interface.yfilter)
	|| ydk::is_set(reverse_lsp_label.yfilter)
	|| ydk::is_set(lsp_wrap_protection_state.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::LspWrapInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-wrap-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::LspWrapInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_wrap_protection_enable.is_set || is_set(lsp_wrap_protection_enable.yfilter)) leaf_name_data.push_back(lsp_wrap_protection_enable.get_name_leafdata());
    if (lsp_wrap_protection_label.is_set || is_set(lsp_wrap_protection_label.yfilter)) leaf_name_data.push_back(lsp_wrap_protection_label.get_name_leafdata());
    if (reverse_egress_interface.is_set || is_set(reverse_egress_interface.yfilter)) leaf_name_data.push_back(reverse_egress_interface.get_name_leafdata());
    if (reverse_lsp_label.is_set || is_set(reverse_lsp_label.yfilter)) leaf_name_data.push_back(reverse_lsp_label.get_name_leafdata());
    if (lsp_wrap_protection_state.is_set || is_set(lsp_wrap_protection_state.yfilter)) leaf_name_data.push_back(lsp_wrap_protection_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::LspWrapInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::LspWrapInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::LspWrapInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-wrap-protection-enable")
    {
        lsp_wrap_protection_enable = value;
        lsp_wrap_protection_enable.value_namespace = name_space;
        lsp_wrap_protection_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-wrap-protection-label")
    {
        lsp_wrap_protection_label = value;
        lsp_wrap_protection_label.value_namespace = name_space;
        lsp_wrap_protection_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-egress-interface")
    {
        reverse_egress_interface = value;
        reverse_egress_interface.value_namespace = name_space;
        reverse_egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-label")
    {
        reverse_lsp_label = value;
        reverse_lsp_label.value_namespace = name_space;
        reverse_lsp_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-wrap-protection-state")
    {
        lsp_wrap_protection_state = value;
        lsp_wrap_protection_state.value_namespace = name_space;
        lsp_wrap_protection_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::LspWrapInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-wrap-protection-enable")
    {
        lsp_wrap_protection_enable.yfilter = yfilter;
    }
    if(value_path == "lsp-wrap-protection-label")
    {
        lsp_wrap_protection_label.yfilter = yfilter;
    }
    if(value_path == "reverse-egress-interface")
    {
        reverse_egress_interface.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-label")
    {
        reverse_lsp_label.yfilter = yfilter;
    }
    if(value_path == "lsp-wrap-protection-state")
    {
        lsp_wrap_protection_state.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::LspWrapInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-wrap-protection-enable" || name == "lsp-wrap-protection-label" || name == "reverse-egress-interface" || name == "reverse-lsp-label" || name == "lsp-wrap-protection-state")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::DiversityInfo::DiversityInfo()
    :
    diversity_type{YType::enumeration, "diversity-type"}
{

    yang_name = "diversity-info"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::DiversityInfo::~DiversityInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::DiversityInfo::has_data() const
{
    return diversity_type.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::DiversityInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diversity_type.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::DiversityInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diversity-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::DiversityInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diversity_type.is_set || is_set(diversity_type.yfilter)) leaf_name_data.push_back(diversity_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::DiversityInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::DiversityInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::DiversityInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diversity-type")
    {
        diversity_type = value;
        diversity_type.value_namespace = name_space;
        diversity_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::DiversityInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diversity-type")
    {
        diversity_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::DiversityInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diversity-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LReverseLspSubObj::S2LReverseLspSubObj()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "s2l-reverse-lsp-sub-obj"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LReverseLspSubObj::~S2LReverseLspSubObj()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LReverseLspSubObj::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LReverseLspSubObj::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LReverseLspSubObj::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-reverse-lsp-sub-obj";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LReverseLspSubObj::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LReverseLspSubObj::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LReverseLspSubObj::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LReverseLspSubObj::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LReverseLspSubObj::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LReverseLspSubObj::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::OutEro()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "out-ero"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::~OutEro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::Ipv4EroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4ero_sub_object != nullptr)
    {
        children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_address{YType::str, "ero-address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "out-ero"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::Ipv4EroSubObject::has_data() const
{
    return is_strict_route.is_set
	|| ero_address.is_set
	|| prefix_length.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::Ipv4EroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::Ipv4EroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::Ipv4EroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::Ipv4EroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::Ipv4EroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::Ipv4EroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-address" || name == "prefix-length")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "out-ero"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::UnnumberedEroSubObject::has_data() const
{
    return is_strict_route.is_set
	|| ero_interface_id.is_set
	|| ero_router_id.is_set
	|| status.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
        ero_interface_id.value_namespace = name_space;
        ero_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
        ero_router_id.value_namespace = name_space;
        ero_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::OutEro::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-interface-id" || name == "ero-router-id" || name == "status")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::InEro()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "in-ero"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::~InEro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-ero";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::Ipv4EroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4ero_sub_object != nullptr)
    {
        children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_address{YType::str, "ero-address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "in-ero"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::Ipv4EroSubObject::has_data() const
{
    return is_strict_route.is_set
	|| ero_address.is_set
	|| prefix_length.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::Ipv4EroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::Ipv4EroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::Ipv4EroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::Ipv4EroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::Ipv4EroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::Ipv4EroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-address" || name == "prefix-length")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "in-ero"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::UnnumberedEroSubObject::has_data() const
{
    return is_strict_route.is_set
	|| ero_interface_id.is_set
	|| ero_router_id.is_set
	|| status.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
        ero_interface_id.value_namespace = name_space;
        ero_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
        ero_router_id.value_namespace = name_space;
        ero_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::InEro::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-interface-id" || name == "ero-router-id" || name == "status")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::PathRro()
    :
    rro_type{YType::enumeration, "rro-type"}
    	,
    ipv4rro_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject>())
	,label_rro_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject>())
	,unnumbered_rro_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject>())
	,srlg_rro_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject>())
{
    ipv4rro_sub_object->parent = this;
    label_rro_sub_object->parent = this;
    unnumbered_rro_sub_object->parent = this;
    srlg_rro_sub_object->parent = this;

    yang_name = "path-rro"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::~PathRro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::has_data() const
{
    return rro_type.is_set
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_data())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_data())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_data())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_type.yfilter)
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_operation())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_operation())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_operation())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-rro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_type.is_set || is_set(rro_type.yfilter)) leaf_name_data.push_back(rro_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4rro-sub-object")
    {
        if(ipv4rro_sub_object == nullptr)
        {
            ipv4rro_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject>();
        }
        return ipv4rro_sub_object;
    }

    if(child_yang_name == "label-rro-sub-object")
    {
        if(label_rro_sub_object == nullptr)
        {
            label_rro_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject>();
        }
        return label_rro_sub_object;
    }

    if(child_yang_name == "unnumbered-rro-sub-object")
    {
        if(unnumbered_rro_sub_object == nullptr)
        {
            unnumbered_rro_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject>();
        }
        return unnumbered_rro_sub_object;
    }

    if(child_yang_name == "srlg-rro-sub-object")
    {
        if(srlg_rro_sub_object == nullptr)
        {
            srlg_rro_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject>();
        }
        return srlg_rro_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4rro_sub_object != nullptr)
    {
        children["ipv4rro-sub-object"] = ipv4rro_sub_object;
    }

    if(label_rro_sub_object != nullptr)
    {
        children["label-rro-sub-object"] = label_rro_sub_object;
    }

    if(unnumbered_rro_sub_object != nullptr)
    {
        children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;
    }

    if(srlg_rro_sub_object != nullptr)
    {
        children["srlg-rro-sub-object"] = srlg_rro_sub_object;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-type")
    {
        rro_type = value;
        rro_type.value_namespace = name_space;
        rro_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-type")
    {
        rro_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4rro-sub-object" || name == "label-rro-sub-object" || name == "unnumbered-rro-sub-object" || name == "srlg-rro-sub-object" || name == "rro-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject::Ipv4RroSubObject()
    :
    rro_address{YType::str, "rro-address"}
    	,
    flags(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "ipv4rro-sub-object"; yang_parent_name = "path-rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject::~Ipv4RroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject::has_data() const
{
    return rro_address.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_address.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_address.is_set || is_set(rro_address.yfilter)) leaf_name_data.push_back(rro_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-address")
    {
        rro_address = value;
        rro_address.value_namespace = name_space;
        rro_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-address")
    {
        rro_address.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "rro-address")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject::Flags::Flags()
    :
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"},
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_node_id{YType::boolean, "is-node-id"}
{

    yang_name = "flags"; yang_parent_name = "ipv4rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject::Flags::~Flags()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject::Flags::has_data() const
{
    return is_protection_available.is_set
	|| is_protection_in_use.is_set
	|| is_bandwidth_protected.is_set
	|| is_node_protection_available.is_set
	|| is_node_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_node_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());
    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available = value;
        is_protection_available.value_namespace = name_space;
        is_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use = value;
        is_protection_in_use.value_namespace = name_space;
        is_protection_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
        is_bandwidth_protected.value_namespace = name_space;
        is_bandwidth_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
        is_node_protection_available.value_namespace = name_space;
        is_node_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
        is_node_id.value_namespace = name_space;
        is_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected.yfilter = yfilter;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-node-id")
    {
        is_node_id.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::Ipv4RroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-protection-available" || name == "is-protection-in-use" || name == "is-bandwidth-protected" || name == "is-node-protection-available" || name == "is-node-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::LabelRroSubObject()
    :
    label{YType::uint32, "label"},
    is_label_variable_length{YType::boolean, "is-label-variable-length"}
    	,
    flags(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "label-rro-sub-object"; yang_parent_name = "path-rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::~LabelRroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::has_data() const
{
    for (std::size_t index=0; index<variable_length_label.size(); index++)
    {
        if(variable_length_label[index]->has_data())
            return true;
    }
    return label.is_set
	|| is_label_variable_length.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::has_operation() const
{
    for (std::size_t index=0; index<variable_length_label.size(); index++)
    {
        if(variable_length_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(is_label_variable_length.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (is_label_variable_length.is_set || is_set(is_label_variable_length.yfilter)) leaf_name_data.push_back(is_label_variable_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::Flags>();
        }
        return flags;
    }

    if(child_yang_name == "variable-length-label")
    {
        for(auto const & c : variable_length_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel>();
        c->parent = this;
        variable_length_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    for (auto const & c : variable_length_label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length = value;
        is_label_variable_length.value_namespace = name_space;
        is_label_variable_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "variable-length-label" || name == "label" || name == "is-label-variable-length")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::Flags::Flags()
    :
    is_global_label{YType::boolean, "is-global-label"}
{

    yang_name = "flags"; yang_parent_name = "label-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::Flags::~Flags()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::Flags::has_data() const
{
    return is_global_label.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_global_label.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_global_label.is_set || is_set(is_global_label.yfilter)) leaf_name_data.push_back(is_global_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-global-label")
    {
        is_global_label = value;
        is_global_label.value_namespace = name_space;
        is_global_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-global-label")
    {
        is_global_label.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-global-label")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::VariableLengthLabel()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "variable-length-label"; yang_parent_name = "label-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::~VariableLengthLabel()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "variable-length-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::LabelRroSubObject::VariableLengthLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject::UnnumberedRroSubObject()
    :
    interface_address{YType::str, "interface-address"},
    interface_id{YType::uint32, "interface-id"}
    	,
    flags(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "unnumbered-rro-sub-object"; yang_parent_name = "path-rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject::~UnnumberedRroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject::has_data() const
{
    return interface_address.is_set
	|| interface_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_address.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_address.is_set || is_set(interface_address.yfilter)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-address")
    {
        interface_address = value;
        interface_address.value_namespace = name_space;
        interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-address")
    {
        interface_address.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "interface-address" || name == "interface-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::Flags()
    :
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"},
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_node_id{YType::boolean, "is-node-id"}
{

    yang_name = "flags"; yang_parent_name = "unnumbered-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::~Flags()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::has_data() const
{
    return is_protection_available.is_set
	|| is_protection_in_use.is_set
	|| is_bandwidth_protected.is_set
	|| is_node_protection_available.is_set
	|| is_node_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_node_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());
    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available = value;
        is_protection_available.value_namespace = name_space;
        is_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use = value;
        is_protection_in_use.value_namespace = name_space;
        is_protection_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
        is_bandwidth_protected.value_namespace = name_space;
        is_bandwidth_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
        is_node_protection_available.value_namespace = name_space;
        is_node_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
        is_node_id.value_namespace = name_space;
        is_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected.yfilter = yfilter;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-node-id")
    {
        is_node_id.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::UnnumberedRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-protection-available" || name == "is-protection-in-use" || name == "is-bandwidth-protected" || name == "is-node-protection-available" || name == "is-node-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject::SrlgRroSubObject()
{

    yang_name = "srlg-rro-sub-object"; yang_parent_name = "path-rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject::~SrlgRroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject::has_data() const
{
    for (std::size_t index=0; index<srl_gs.size(); index++)
    {
        if(srl_gs[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject::has_operation() const
{
    for (std::size_t index=0; index<srl_gs.size(); index++)
    {
        if(srl_gs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srl-gs")
    {
        for(auto const & c : srl_gs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject::SrlGs>();
        c->parent = this;
        srl_gs.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srl_gs)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srl-gs")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject::SrlGs::SrlGs()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "srl-gs"; yang_parent_name = "srlg-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject::SrlGs::~SrlGs()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject::SrlGs::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject::SrlGs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject::SrlGs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srl-gs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject::SrlGs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject::SrlGs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject::SrlGs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject::SrlGs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject::SrlGs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathRro::SrlgRroSubObject::SrlGs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::ResvRro()
    :
    rro_type{YType::enumeration, "rro-type"}
    	,
    ipv4rro_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject>())
	,label_rro_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject>())
	,unnumbered_rro_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject>())
	,srlg_rro_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject>())
{
    ipv4rro_sub_object->parent = this;
    label_rro_sub_object->parent = this;
    unnumbered_rro_sub_object->parent = this;
    srlg_rro_sub_object->parent = this;

    yang_name = "resv-rro"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::~ResvRro()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::has_data() const
{
    return rro_type.is_set
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_data())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_data())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_data())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_type.yfilter)
	|| (ipv4rro_sub_object !=  nullptr && ipv4rro_sub_object->has_operation())
	|| (label_rro_sub_object !=  nullptr && label_rro_sub_object->has_operation())
	|| (unnumbered_rro_sub_object !=  nullptr && unnumbered_rro_sub_object->has_operation())
	|| (srlg_rro_sub_object !=  nullptr && srlg_rro_sub_object->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resv-rro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_type.is_set || is_set(rro_type.yfilter)) leaf_name_data.push_back(rro_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4rro-sub-object")
    {
        if(ipv4rro_sub_object == nullptr)
        {
            ipv4rro_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject>();
        }
        return ipv4rro_sub_object;
    }

    if(child_yang_name == "label-rro-sub-object")
    {
        if(label_rro_sub_object == nullptr)
        {
            label_rro_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject>();
        }
        return label_rro_sub_object;
    }

    if(child_yang_name == "unnumbered-rro-sub-object")
    {
        if(unnumbered_rro_sub_object == nullptr)
        {
            unnumbered_rro_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject>();
        }
        return unnumbered_rro_sub_object;
    }

    if(child_yang_name == "srlg-rro-sub-object")
    {
        if(srlg_rro_sub_object == nullptr)
        {
            srlg_rro_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject>();
        }
        return srlg_rro_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4rro_sub_object != nullptr)
    {
        children["ipv4rro-sub-object"] = ipv4rro_sub_object;
    }

    if(label_rro_sub_object != nullptr)
    {
        children["label-rro-sub-object"] = label_rro_sub_object;
    }

    if(unnumbered_rro_sub_object != nullptr)
    {
        children["unnumbered-rro-sub-object"] = unnumbered_rro_sub_object;
    }

    if(srlg_rro_sub_object != nullptr)
    {
        children["srlg-rro-sub-object"] = srlg_rro_sub_object;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-type")
    {
        rro_type = value;
        rro_type.value_namespace = name_space;
        rro_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-type")
    {
        rro_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4rro-sub-object" || name == "label-rro-sub-object" || name == "unnumbered-rro-sub-object" || name == "srlg-rro-sub-object" || name == "rro-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject::Ipv4RroSubObject()
    :
    rro_address{YType::str, "rro-address"}
    	,
    flags(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "ipv4rro-sub-object"; yang_parent_name = "resv-rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject::~Ipv4RroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject::has_data() const
{
    return rro_address.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rro_address.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rro_address.is_set || is_set(rro_address.yfilter)) leaf_name_data.push_back(rro_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rro-address")
    {
        rro_address = value;
        rro_address.value_namespace = name_space;
        rro_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rro-address")
    {
        rro_address.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "rro-address")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::Flags()
    :
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"},
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_node_id{YType::boolean, "is-node-id"}
{

    yang_name = "flags"; yang_parent_name = "ipv4rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::~Flags()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::has_data() const
{
    return is_protection_available.is_set
	|| is_protection_in_use.is_set
	|| is_bandwidth_protected.is_set
	|| is_node_protection_available.is_set
	|| is_node_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_node_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());
    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available = value;
        is_protection_available.value_namespace = name_space;
        is_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use = value;
        is_protection_in_use.value_namespace = name_space;
        is_protection_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
        is_bandwidth_protected.value_namespace = name_space;
        is_bandwidth_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
        is_node_protection_available.value_namespace = name_space;
        is_node_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
        is_node_id.value_namespace = name_space;
        is_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected.yfilter = yfilter;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-node-id")
    {
        is_node_id.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::Ipv4RroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-protection-available" || name == "is-protection-in-use" || name == "is-bandwidth-protected" || name == "is-node-protection-available" || name == "is-node-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::LabelRroSubObject()
    :
    label{YType::uint32, "label"},
    is_label_variable_length{YType::boolean, "is-label-variable-length"}
    	,
    flags(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "label-rro-sub-object"; yang_parent_name = "resv-rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::~LabelRroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::has_data() const
{
    for (std::size_t index=0; index<variable_length_label.size(); index++)
    {
        if(variable_length_label[index]->has_data())
            return true;
    }
    return label.is_set
	|| is_label_variable_length.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::has_operation() const
{
    for (std::size_t index=0; index<variable_length_label.size(); index++)
    {
        if(variable_length_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(is_label_variable_length.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (is_label_variable_length.is_set || is_set(is_label_variable_length.yfilter)) leaf_name_data.push_back(is_label_variable_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::Flags>();
        }
        return flags;
    }

    if(child_yang_name == "variable-length-label")
    {
        for(auto const & c : variable_length_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel>();
        c->parent = this;
        variable_length_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    for (auto const & c : variable_length_label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length = value;
        is_label_variable_length.value_namespace = name_space;
        is_label_variable_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "is-label-variable-length")
    {
        is_label_variable_length.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "variable-length-label" || name == "label" || name == "is-label-variable-length")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::Flags::Flags()
    :
    is_global_label{YType::boolean, "is-global-label"}
{

    yang_name = "flags"; yang_parent_name = "label-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::Flags::~Flags()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::Flags::has_data() const
{
    return is_global_label.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_global_label.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_global_label.is_set || is_set(is_global_label.yfilter)) leaf_name_data.push_back(is_global_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-global-label")
    {
        is_global_label = value;
        is_global_label.value_namespace = name_space;
        is_global_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-global-label")
    {
        is_global_label.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-global-label")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::VariableLengthLabel()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "variable-length-label"; yang_parent_name = "label-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::~VariableLengthLabel()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "variable-length-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::LabelRroSubObject::VariableLengthLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject::UnnumberedRroSubObject()
    :
    interface_address{YType::str, "interface-address"},
    interface_id{YType::uint32, "interface-id"}
    	,
    flags(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags>())
{
    flags->parent = this;

    yang_name = "unnumbered-rro-sub-object"; yang_parent_name = "resv-rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject::~UnnumberedRroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject::has_data() const
{
    return interface_address.is_set
	|| interface_id.is_set
	|| (flags !=  nullptr && flags->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_address.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| (flags !=  nullptr && flags->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_address.is_set || is_set(interface_address.yfilter)) leaf_name_data.push_back(interface_address.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags>();
        }
        return flags;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-address")
    {
        interface_address = value;
        interface_address.value_namespace = name_space;
        interface_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-address")
    {
        interface_address.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "interface-address" || name == "interface-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::Flags()
    :
    is_protection_available{YType::boolean, "is-protection-available"},
    is_protection_in_use{YType::boolean, "is-protection-in-use"},
    is_bandwidth_protected{YType::boolean, "is-bandwidth-protected"},
    is_node_protection_available{YType::boolean, "is-node-protection-available"},
    is_node_id{YType::boolean, "is-node-id"}
{

    yang_name = "flags"; yang_parent_name = "unnumbered-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::~Flags()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::has_data() const
{
    return is_protection_available.is_set
	|| is_protection_in_use.is_set
	|| is_bandwidth_protected.is_set
	|| is_node_protection_available.is_set
	|| is_node_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_protection_available.yfilter)
	|| ydk::is_set(is_protection_in_use.yfilter)
	|| ydk::is_set(is_bandwidth_protected.yfilter)
	|| ydk::is_set(is_node_protection_available.yfilter)
	|| ydk::is_set(is_node_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_protection_available.is_set || is_set(is_protection_available.yfilter)) leaf_name_data.push_back(is_protection_available.get_name_leafdata());
    if (is_protection_in_use.is_set || is_set(is_protection_in_use.yfilter)) leaf_name_data.push_back(is_protection_in_use.get_name_leafdata());
    if (is_bandwidth_protected.is_set || is_set(is_bandwidth_protected.yfilter)) leaf_name_data.push_back(is_bandwidth_protected.get_name_leafdata());
    if (is_node_protection_available.is_set || is_set(is_node_protection_available.yfilter)) leaf_name_data.push_back(is_node_protection_available.get_name_leafdata());
    if (is_node_id.is_set || is_set(is_node_id.yfilter)) leaf_name_data.push_back(is_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available = value;
        is_protection_available.value_namespace = name_space;
        is_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use = value;
        is_protection_in_use.value_namespace = name_space;
        is_protection_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected = value;
        is_bandwidth_protected.value_namespace = name_space;
        is_bandwidth_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available = value;
        is_node_protection_available.value_namespace = name_space;
        is_node_protection_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-id")
    {
        is_node_id = value;
        is_node_id.value_namespace = name_space;
        is_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-protection-available")
    {
        is_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-protection-in-use")
    {
        is_protection_in_use.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-protected")
    {
        is_bandwidth_protected.yfilter = yfilter;
    }
    if(value_path == "is-node-protection-available")
    {
        is_node_protection_available.yfilter = yfilter;
    }
    if(value_path == "is-node-id")
    {
        is_node_id.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::UnnumberedRroSubObject::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-protection-available" || name == "is-protection-in-use" || name == "is-bandwidth-protected" || name == "is-node-protection-available" || name == "is-node-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject::SrlgRroSubObject()
{

    yang_name = "srlg-rro-sub-object"; yang_parent_name = "resv-rro"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject::~SrlgRroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject::has_data() const
{
    for (std::size_t index=0; index<srl_gs.size(); index++)
    {
        if(srl_gs[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject::has_operation() const
{
    for (std::size_t index=0; index<srl_gs.size(); index++)
    {
        if(srl_gs[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-rro-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srl-gs")
    {
        for(auto const & c : srl_gs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs>();
        c->parent = this;
        srl_gs.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srl_gs)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srl-gs")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs::SrlGs()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "srl-gs"; yang_parent_name = "srlg-rro-sub-object"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs::~SrlGs()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srl-gs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ResvRro::SrlgRroSubObject::SrlGs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray::PathAffinityArray()
    :
    hop_address{YType::str, "hop-address"},
    hop_affinity{YType::uint32, "hop-affinity"}
{

    yang_name = "path-affinity-array"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray::~PathAffinityArray()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray::has_data() const
{
    for (std::size_t index=0; index<hop_extended_affinity.size(); index++)
    {
        if(hop_extended_affinity[index]->has_data())
            return true;
    }
    return hop_address.is_set
	|| hop_affinity.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray::has_operation() const
{
    for (std::size_t index=0; index<hop_extended_affinity.size(); index++)
    {
        if(hop_extended_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hop_address.yfilter)
	|| ydk::is_set(hop_affinity.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-affinity-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_address.is_set || is_set(hop_address.yfilter)) leaf_name_data.push_back(hop_address.get_name_leafdata());
    if (hop_affinity.is_set || is_set(hop_affinity.yfilter)) leaf_name_data.push_back(hop_affinity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hop-extended-affinity")
    {
        for(auto const & c : hop_extended_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray::HopExtendedAffinity>();
        c->parent = this;
        hop_extended_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hop_extended_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hop-address")
    {
        hop_address = value;
        hop_address.value_namespace = name_space;
        hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-affinity")
    {
        hop_affinity = value;
        hop_affinity.value_namespace = name_space;
        hop_affinity.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hop-address")
    {
        hop_address.yfilter = yfilter;
    }
    if(value_path == "hop-affinity")
    {
        hop_affinity.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop-extended-affinity" || name == "hop-address" || name == "hop-affinity")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray::HopExtendedAffinity::HopExtendedAffinity()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "hop-extended-affinity"; yang_parent_name = "path-affinity-array"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray::HopExtendedAffinity::~HopExtendedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray::HopExtendedAffinity::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray::HopExtendedAffinity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray::HopExtendedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop-extended-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray::HopExtendedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray::HopExtendedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray::HopExtendedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray::HopExtendedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray::HopExtendedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::PathAffinityArray::HopExtendedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::ReverseEroIn()
    :
    ero_type{YType::enumeration, "ero-type"}
    	,
    ipv4ero_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::Ipv4EroSubObject>())
	,unnumbered_ero_sub_object(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::UnnumberedEroSubObject>())
{
    ipv4ero_sub_object->parent = this;
    unnumbered_ero_sub_object->parent = this;

    yang_name = "reverse-ero-in"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::~ReverseEroIn()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::has_data() const
{
    return ero_type.is_set
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_data())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ero_type.yfilter)
	|| (ipv4ero_sub_object !=  nullptr && ipv4ero_sub_object->has_operation())
	|| (unnumbered_ero_sub_object !=  nullptr && unnumbered_ero_sub_object->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-ero-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ero_type.is_set || is_set(ero_type.yfilter)) leaf_name_data.push_back(ero_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4ero-sub-object")
    {
        if(ipv4ero_sub_object == nullptr)
        {
            ipv4ero_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::Ipv4EroSubObject>();
        }
        return ipv4ero_sub_object;
    }

    if(child_yang_name == "unnumbered-ero-sub-object")
    {
        if(unnumbered_ero_sub_object == nullptr)
        {
            unnumbered_ero_sub_object = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::UnnumberedEroSubObject>();
        }
        return unnumbered_ero_sub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4ero_sub_object != nullptr)
    {
        children["ipv4ero-sub-object"] = ipv4ero_sub_object;
    }

    if(unnumbered_ero_sub_object != nullptr)
    {
        children["unnumbered-ero-sub-object"] = unnumbered_ero_sub_object;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ero-type")
    {
        ero_type = value;
        ero_type.value_namespace = name_space;
        ero_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ero-type")
    {
        ero_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4ero-sub-object" || name == "unnumbered-ero-sub-object" || name == "ero-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::Ipv4EroSubObject::Ipv4EroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_address{YType::str, "ero-address"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4ero-sub-object"; yang_parent_name = "reverse-ero-in"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::Ipv4EroSubObject::~Ipv4EroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::Ipv4EroSubObject::has_data() const
{
    return is_strict_route.is_set
	|| ero_address.is_set
	|| prefix_length.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::Ipv4EroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::Ipv4EroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::Ipv4EroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_address.is_set || is_set(ero_address.yfilter)) leaf_name_data.push_back(ero_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::Ipv4EroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::Ipv4EroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::Ipv4EroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-address")
    {
        ero_address = value;
        ero_address.value_namespace = name_space;
        ero_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::Ipv4EroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-address")
    {
        ero_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::Ipv4EroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-address" || name == "prefix-length")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::UnnumberedEroSubObject()
    :
    is_strict_route{YType::boolean, "is-strict-route"},
    ero_interface_id{YType::uint32, "ero-interface-id"},
    ero_router_id{YType::str, "ero-router-id"},
    status{YType::enumeration, "status"}
{

    yang_name = "unnumbered-ero-sub-object"; yang_parent_name = "reverse-ero-in"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::~UnnumberedEroSubObject()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::has_data() const
{
    return is_strict_route.is_set
	|| ero_interface_id.is_set
	|| ero_router_id.is_set
	|| status.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_strict_route.yfilter)
	|| ydk::is_set(ero_interface_id.yfilter)
	|| ydk::is_set(ero_router_id.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-ero-sub-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_strict_route.is_set || is_set(is_strict_route.yfilter)) leaf_name_data.push_back(is_strict_route.get_name_leafdata());
    if (ero_interface_id.is_set || is_set(ero_interface_id.yfilter)) leaf_name_data.push_back(ero_interface_id.get_name_leafdata());
    if (ero_router_id.is_set || is_set(ero_router_id.yfilter)) leaf_name_data.push_back(ero_router_id.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route = value;
        is_strict_route.value_namespace = name_space;
        is_strict_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id = value;
        ero_interface_id.value_namespace = name_space;
        ero_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id = value;
        ero_router_id.value_namespace = name_space;
        ero_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-strict-route")
    {
        is_strict_route.yfilter = yfilter;
    }
    if(value_path == "ero-interface-id")
    {
        ero_interface_id.yfilter = yfilter;
    }
    if(value_path == "ero-router-id")
    {
        ero_router_id.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::ReverseEroIn::UnnumberedEroSubObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-strict-route" || name == "ero-interface-id" || name == "ero-router-id" || name == "status")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LSegmentRoutingPath::S2LSegmentRoutingPath()
    :
    sid_type{YType::enumeration, "sid-type"},
    has_ip_addresses{YType::boolean, "has-ip-addresses"},
    local_addr{YType::str, "local-addr"},
    remote_addr{YType::str, "remote-addr"},
    has_mpls_label{YType::boolean, "has-mpls-label"},
    mpls_label_value{YType::uint32, "mpls-label-value"},
    has_entropy_label{YType::boolean, "has-entropy-label"}
{

    yang_name = "s2l-segment-routing-path"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LSegmentRoutingPath::~S2LSegmentRoutingPath()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LSegmentRoutingPath::has_data() const
{
    return sid_type.is_set
	|| has_ip_addresses.is_set
	|| local_addr.is_set
	|| remote_addr.is_set
	|| has_mpls_label.is_set
	|| mpls_label_value.is_set
	|| has_entropy_label.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LSegmentRoutingPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(has_ip_addresses.yfilter)
	|| ydk::is_set(local_addr.yfilter)
	|| ydk::is_set(remote_addr.yfilter)
	|| ydk::is_set(has_mpls_label.yfilter)
	|| ydk::is_set(mpls_label_value.yfilter)
	|| ydk::is_set(has_entropy_label.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LSegmentRoutingPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-segment-routing-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LSegmentRoutingPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (has_ip_addresses.is_set || is_set(has_ip_addresses.yfilter)) leaf_name_data.push_back(has_ip_addresses.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.yfilter)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.yfilter)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (has_mpls_label.is_set || is_set(has_mpls_label.yfilter)) leaf_name_data.push_back(has_mpls_label.get_name_leafdata());
    if (mpls_label_value.is_set || is_set(mpls_label_value.yfilter)) leaf_name_data.push_back(mpls_label_value.get_name_leafdata());
    if (has_entropy_label.is_set || is_set(has_entropy_label.yfilter)) leaf_name_data.push_back(has_entropy_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LSegmentRoutingPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LSegmentRoutingPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LSegmentRoutingPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses = value;
        has_ip_addresses.value_namespace = name_space;
        has_ip_addresses.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "has-mpls-label")
    {
        has_mpls_label = value;
        has_mpls_label.value_namespace = name_space;
        has_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value = value;
        mpls_label_value.value_namespace = name_space;
        mpls_label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-entropy-label")
    {
        has_entropy_label = value;
        has_entropy_label.value_namespace = name_space;
        has_entropy_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LSegmentRoutingPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses.yfilter = yfilter;
    }
    if(value_path == "local-addr")
    {
        local_addr.yfilter = yfilter;
    }
    if(value_path == "remote-addr")
    {
        remote_addr.yfilter = yfilter;
    }
    if(value_path == "has-mpls-label")
    {
        has_mpls_label.yfilter = yfilter;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value.yfilter = yfilter;
    }
    if(value_path == "has-entropy-label")
    {
        has_entropy_label.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::TunnelRestorationLsp::S2L::S2LSegmentRoutingPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-type" || name == "has-ip-addresses" || name == "local-addr" || name == "remote-addr" || name == "has-mpls-label" || name == "mpls-label-value" || name == "has-entropy-label")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::DelayCleanPpLsp()
    :
    signaled_name{YType::str, "signaled-name"},
    is_frr_failed{YType::boolean, "is-frr-failed"},
    frr_active_reason{YType::uint32, "frr-active-reason"},
    lsp_bandwidth{YType::uint32, "lsp-bandwidth"},
    lsp_setup_priority{YType::uint8, "lsp-setup-priority"},
    lsp_hold_priority{YType::uint8, "lsp-hold-priority"},
    lsp_bandwidth_type{YType::enumeration, "lsp-bandwidth-type"},
    dste_class_match{YType::boolean, "dste-class-match"},
    dste_class_index{YType::uint8, "dste-class-index"},
    type{YType::enumeration, "type"},
    uptime{YType::uint32, "uptime"},
    s2_ls_up{YType::uint32, "s2-ls-up"},
    s2_ls_proceeding{YType::uint32, "s2-ls-proceeding"},
    s2_ls_down{YType::uint32, "s2-ls-down"},
    reoptimize_reason{YType::enumeration, "reoptimize-reason"},
    reoptimize_trigger{YType::enumeration, "reoptimize-trigger"},
    timer_left{YType::uint32, "timer-left"},
    is_passive{YType::boolean, "is-passive"},
    is_interface{YType::boolean, "is-interface"},
    last_path_change{YType::uint32, "last-path-change"},
    persistent_bytes{YType::uint64, "persistent-bytes"},
    persistent_packets{YType::uint64, "persistent-packets"}
    	,
    lsp_fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec>())
{
    lsp_fec->parent = this;

    yang_name = "delay-clean-pp-lsp"; yang_parent_name = "tunnel-head"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::~DelayCleanPpLsp()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::has_data() const
{
    for (std::size_t index=0; index<s2l.size(); index++)
    {
        if(s2l[index]->has_data())
            return true;
    }
    return signaled_name.is_set
	|| is_frr_failed.is_set
	|| frr_active_reason.is_set
	|| lsp_bandwidth.is_set
	|| lsp_setup_priority.is_set
	|| lsp_hold_priority.is_set
	|| lsp_bandwidth_type.is_set
	|| dste_class_match.is_set
	|| dste_class_index.is_set
	|| type.is_set
	|| uptime.is_set
	|| s2_ls_up.is_set
	|| s2_ls_proceeding.is_set
	|| s2_ls_down.is_set
	|| reoptimize_reason.is_set
	|| reoptimize_trigger.is_set
	|| timer_left.is_set
	|| is_passive.is_set
	|| is_interface.is_set
	|| last_path_change.is_set
	|| persistent_bytes.is_set
	|| persistent_packets.is_set
	|| (lsp_fec !=  nullptr && lsp_fec->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::has_operation() const
{
    for (std::size_t index=0; index<s2l.size(); index++)
    {
        if(s2l[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(signaled_name.yfilter)
	|| ydk::is_set(is_frr_failed.yfilter)
	|| ydk::is_set(frr_active_reason.yfilter)
	|| ydk::is_set(lsp_bandwidth.yfilter)
	|| ydk::is_set(lsp_setup_priority.yfilter)
	|| ydk::is_set(lsp_hold_priority.yfilter)
	|| ydk::is_set(lsp_bandwidth_type.yfilter)
	|| ydk::is_set(dste_class_match.yfilter)
	|| ydk::is_set(dste_class_index.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(s2_ls_up.yfilter)
	|| ydk::is_set(s2_ls_proceeding.yfilter)
	|| ydk::is_set(s2_ls_down.yfilter)
	|| ydk::is_set(reoptimize_reason.yfilter)
	|| ydk::is_set(reoptimize_trigger.yfilter)
	|| ydk::is_set(timer_left.yfilter)
	|| ydk::is_set(is_passive.yfilter)
	|| ydk::is_set(is_interface.yfilter)
	|| ydk::is_set(last_path_change.yfilter)
	|| ydk::is_set(persistent_bytes.yfilter)
	|| ydk::is_set(persistent_packets.yfilter)
	|| (lsp_fec !=  nullptr && lsp_fec->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-clean-pp-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (is_frr_failed.is_set || is_set(is_frr_failed.yfilter)) leaf_name_data.push_back(is_frr_failed.get_name_leafdata());
    if (frr_active_reason.is_set || is_set(frr_active_reason.yfilter)) leaf_name_data.push_back(frr_active_reason.get_name_leafdata());
    if (lsp_bandwidth.is_set || is_set(lsp_bandwidth.yfilter)) leaf_name_data.push_back(lsp_bandwidth.get_name_leafdata());
    if (lsp_setup_priority.is_set || is_set(lsp_setup_priority.yfilter)) leaf_name_data.push_back(lsp_setup_priority.get_name_leafdata());
    if (lsp_hold_priority.is_set || is_set(lsp_hold_priority.yfilter)) leaf_name_data.push_back(lsp_hold_priority.get_name_leafdata());
    if (lsp_bandwidth_type.is_set || is_set(lsp_bandwidth_type.yfilter)) leaf_name_data.push_back(lsp_bandwidth_type.get_name_leafdata());
    if (dste_class_match.is_set || is_set(dste_class_match.yfilter)) leaf_name_data.push_back(dste_class_match.get_name_leafdata());
    if (dste_class_index.is_set || is_set(dste_class_index.yfilter)) leaf_name_data.push_back(dste_class_index.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (s2_ls_up.is_set || is_set(s2_ls_up.yfilter)) leaf_name_data.push_back(s2_ls_up.get_name_leafdata());
    if (s2_ls_proceeding.is_set || is_set(s2_ls_proceeding.yfilter)) leaf_name_data.push_back(s2_ls_proceeding.get_name_leafdata());
    if (s2_ls_down.is_set || is_set(s2_ls_down.yfilter)) leaf_name_data.push_back(s2_ls_down.get_name_leafdata());
    if (reoptimize_reason.is_set || is_set(reoptimize_reason.yfilter)) leaf_name_data.push_back(reoptimize_reason.get_name_leafdata());
    if (reoptimize_trigger.is_set || is_set(reoptimize_trigger.yfilter)) leaf_name_data.push_back(reoptimize_trigger.get_name_leafdata());
    if (timer_left.is_set || is_set(timer_left.yfilter)) leaf_name_data.push_back(timer_left.get_name_leafdata());
    if (is_passive.is_set || is_set(is_passive.yfilter)) leaf_name_data.push_back(is_passive.get_name_leafdata());
    if (is_interface.is_set || is_set(is_interface.yfilter)) leaf_name_data.push_back(is_interface.get_name_leafdata());
    if (last_path_change.is_set || is_set(last_path_change.yfilter)) leaf_name_data.push_back(last_path_change.get_name_leafdata());
    if (persistent_bytes.is_set || is_set(persistent_bytes.yfilter)) leaf_name_data.push_back(persistent_bytes.get_name_leafdata());
    if (persistent_packets.is_set || is_set(persistent_packets.yfilter)) leaf_name_data.push_back(persistent_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-fec")
    {
        if(lsp_fec == nullptr)
        {
            lsp_fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec>();
        }
        return lsp_fec;
    }

    if(child_yang_name == "s2l")
    {
        for(auto const & c : s2l)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L>();
        c->parent = this;
        s2l.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_fec != nullptr)
    {
        children["lsp-fec"] = lsp_fec;
    }

    for (auto const & c : s2l)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signaled-name")
    {
        signaled_name = value;
        signaled_name.value_namespace = name_space;
        signaled_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-frr-failed")
    {
        is_frr_failed = value;
        is_frr_failed.value_namespace = name_space;
        is_frr_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-active-reason")
    {
        frr_active_reason = value;
        frr_active_reason.value_namespace = name_space;
        frr_active_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth")
    {
        lsp_bandwidth = value;
        lsp_bandwidth.value_namespace = name_space;
        lsp_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-setup-priority")
    {
        lsp_setup_priority = value;
        lsp_setup_priority.value_namespace = name_space;
        lsp_setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-hold-priority")
    {
        lsp_hold_priority = value;
        lsp_hold_priority.value_namespace = name_space;
        lsp_hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-type")
    {
        lsp_bandwidth_type = value;
        lsp_bandwidth_type.value_namespace = name_space;
        lsp_bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-match")
    {
        dste_class_match = value;
        dste_class_match.value_namespace = name_space;
        dste_class_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-index")
    {
        dste_class_index = value;
        dste_class_index.value_namespace = name_space;
        dste_class_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2-ls-up")
    {
        s2_ls_up = value;
        s2_ls_up.value_namespace = name_space;
        s2_ls_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2-ls-proceeding")
    {
        s2_ls_proceeding = value;
        s2_ls_proceeding.value_namespace = name_space;
        s2_ls_proceeding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2-ls-down")
    {
        s2_ls_down = value;
        s2_ls_down.value_namespace = name_space;
        s2_ls_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-reason")
    {
        reoptimize_reason = value;
        reoptimize_reason.value_namespace = name_space;
        reoptimize_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-trigger")
    {
        reoptimize_trigger = value;
        reoptimize_trigger.value_namespace = name_space;
        reoptimize_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer-left")
    {
        timer_left = value;
        timer_left.value_namespace = name_space;
        timer_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-passive")
    {
        is_passive = value;
        is_passive.value_namespace = name_space;
        is_passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface")
    {
        is_interface = value;
        is_interface.value_namespace = name_space;
        is_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-path-change")
    {
        last_path_change = value;
        last_path_change.value_namespace = name_space;
        last_path_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "persistent-bytes")
    {
        persistent_bytes = value;
        persistent_bytes.value_namespace = name_space;
        persistent_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "persistent-packets")
    {
        persistent_packets = value;
        persistent_packets.value_namespace = name_space;
        persistent_packets.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signaled-name")
    {
        signaled_name.yfilter = yfilter;
    }
    if(value_path == "is-frr-failed")
    {
        is_frr_failed.yfilter = yfilter;
    }
    if(value_path == "frr-active-reason")
    {
        frr_active_reason.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth")
    {
        lsp_bandwidth.yfilter = yfilter;
    }
    if(value_path == "lsp-setup-priority")
    {
        lsp_setup_priority.yfilter = yfilter;
    }
    if(value_path == "lsp-hold-priority")
    {
        lsp_hold_priority.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-type")
    {
        lsp_bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "dste-class-match")
    {
        dste_class_match.yfilter = yfilter;
    }
    if(value_path == "dste-class-index")
    {
        dste_class_index.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "s2-ls-up")
    {
        s2_ls_up.yfilter = yfilter;
    }
    if(value_path == "s2-ls-proceeding")
    {
        s2_ls_proceeding.yfilter = yfilter;
    }
    if(value_path == "s2-ls-down")
    {
        s2_ls_down.yfilter = yfilter;
    }
    if(value_path == "reoptimize-reason")
    {
        reoptimize_reason.yfilter = yfilter;
    }
    if(value_path == "reoptimize-trigger")
    {
        reoptimize_trigger.yfilter = yfilter;
    }
    if(value_path == "timer-left")
    {
        timer_left.yfilter = yfilter;
    }
    if(value_path == "is-passive")
    {
        is_passive.yfilter = yfilter;
    }
    if(value_path == "is-interface")
    {
        is_interface.yfilter = yfilter;
    }
    if(value_path == "last-path-change")
    {
        last_path_change.yfilter = yfilter;
    }
    if(value_path == "persistent-bytes")
    {
        persistent_bytes.yfilter = yfilter;
    }
    if(value_path == "persistent-packets")
    {
        persistent_packets.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-fec" || name == "s2l" || name == "signaled-name" || name == "is-frr-failed" || name == "frr-active-reason" || name == "lsp-bandwidth" || name == "lsp-setup-priority" || name == "lsp-hold-priority" || name == "lsp-bandwidth-type" || name == "dste-class-match" || name == "dste-class-index" || name == "type" || name == "uptime" || name == "s2-ls-up" || name == "s2-ls-proceeding" || name == "s2-ls-down" || name == "reoptimize-reason" || name == "reoptimize-trigger" || name == "timer-left" || name == "is-passive" || name == "is-interface" || name == "last-path-change" || name == "persistent-bytes" || name == "persistent-packets")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec::LspFec()
    :
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_vrf{YType::str, "fec-vrf"}
    	,
    fec_destination_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "lsp-fec"; yang_parent_name = "delay-clean-pp-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec::~LspFec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec::has_data() const
{
    return fec_lsp_id.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fec_destination_info != nullptr)
    {
        children["fec-destination-info"] = fec_destination_info;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-lsp-id" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-vrf")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "lsp-fec"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec::FecDestinationInfo::has_data() const
{
    return fec_ctype.is_set
	|| p2p_lsp_destination.is_set
	|| fec_destination_p2mp_id.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::LspFec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "p2p-lsp-destination" || name == "fec-destination-p2mp-id")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::S2L()
    :
    pcalc_area{YType::str, "pcalc-area"},
    is_expanded_ero{YType::boolean, "is-expanded-ero"},
    path_reeval_query_mid{YType::uint32, "path-reeval-query-mid"},
    time_since_last_query_received_mid{YType::uint32, "time-since-last-query-received-mid"},
    time_since_last_preferred_path_exists_send_mid{YType::uint32, "time-since-last-preferred-path-exists-send-mid"},
    time_since_last_preferred_tree_exists_send_mid{YType::uint32, "time-since-last-preferred-tree-exists-send-mid"},
    expanded_ero_area_id{YType::str, "expanded-ero-area-id"},
    expanded_ero_affinity_bits{YType::uint32, "expanded-ero-affinity-bits"},
    expanded_ero_affinity_mask{YType::uint32, "expanded-ero-affinity-mask"},
    expanded_ero_metric_type{YType::enumeration, "expanded-ero-metric-type"},
    expanded_ero_metric{YType::uint32, "expanded-ero-metric"},
    abr_auto_discovered{YType::str, "abr-auto-discovered"},
    is_frr_enabled{YType::boolean, "is-frr-enabled"},
    is_node_protected{YType::boolean, "is-node-protected"},
    is_bandwidth_protect{YType::boolean, "is-bandwidth-protect"},
    path_rro_enabled{YType::boolean, "path-rro-enabled"},
    weight{YType::uint64, "weight"},
    reverse_weight{YType::uint64, "reverse-weight"},
    uptime{YType::uint32, "uptime"},
    egress_interface{YType::str, "egress-interface"},
    egress_interface_state{YType::enumeration, "egress-interface-state"},
    egress_interface_brief{YType::str, "egress-interface-brief"},
    ingress_interface{YType::str, "ingress-interface"},
    ingress_interface_state{YType::enumeration, "ingress-interface-state"},
    ingress_interface_brief{YType::str, "ingress-interface-brief"},
    s2l_local_label{YType::uint32, "s2l-local-label"},
    s2l_out_label{YType::uint32, "s2l-out-label"},
    outbound_frr_state{YType::enumeration, "outbound-frr-state"},
    frr_out_tunnel_interface{YType::str, "frr-out-tunnel-interface"},
    role{YType::enumeration, "role"},
    signalling_status{YType::enumeration, "signalling-status"},
    local_router_id{YType::str, "local-router-id"},
    upstream_router_id{YType::str, "upstream-router-id"},
    downstream_router_id{YType::str, "downstream-router-id"},
    next_hop_address{YType::str, "next-hop-address"},
    previous_hop_address{YType::str, "previous-hop-address"},
    incoming_address{YType::str, "incoming-address"},
    backup_tunnel_interface{YType::str, "backup-tunnel-interface"},
    node_hop_count{YType::uint8, "node-hop-count"},
    is_optical{YType::boolean, "is-optical"},
    s2l_reverse_ero_obj_present{YType::boolean, "s2l-reverse-ero-obj-present"},
    reverse_lsp_present{YType::boolean, "reverse-lsp-present"},
    reverse_lsp_connected{YType::boolean, "reverse-lsp-connected"},
    reverse_lsp_name{YType::str, "reverse-lsp-name"},
    s2l_reverse_tspec_obj_present{YType::boolean, "s2l-reverse-tspec-obj-present"},
    path_using_strict_spf{YType::boolean, "path-using-strict-spf"}
    	,
    s2l_fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::S2LFec>())
	,active_path_option(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption>())
	,out_xro(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::OutXro>())
	,in_xro(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::InXro>())
	,tspec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::Tspec>())
	,generic_tspec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::GenericTspec>())
	,fspec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::Fspec>())
	,generic_fspec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::GenericFspec>())
	,next_hop_address_generic(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::NextHopAddressGeneric>())
	,previous_hop_address_generic(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::PreviousHopAddressGeneric>())
	,incoming_address_generic(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::IncomingAddressGeneric>())
	,s2l_convergence(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::S2LConvergence>())
	,soft_preemption(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::SoftPreemption>())
	,gmpls_labels(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::GmplsLabels>())
	,otn_s2l(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::OtnS2L>())
	,head_end_bfd_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::HeadEndBfdInfo>())
	,tail_end_bfd_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::TailEndBfdInfo>())
	,srlg_collection(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::SrlgCollection>())
	,association(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::Association>())
	,protection(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::Protection>())
	,reverse_lsp_fec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ReverseLspFec>())
	,reverse_tspec(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ReverseTspec>())
	,flex_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::FlexInfo>())
	,lsp_wrap_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::LspWrapInfo>())
	,diversity_info(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::DiversityInfo>())
{
    s2l_fec->parent = this;
    active_path_option->parent = this;
    out_xro->parent = this;
    in_xro->parent = this;
    tspec->parent = this;
    generic_tspec->parent = this;
    fspec->parent = this;
    generic_fspec->parent = this;
    next_hop_address_generic->parent = this;
    previous_hop_address_generic->parent = this;
    incoming_address_generic->parent = this;
    s2l_convergence->parent = this;
    soft_preemption->parent = this;
    gmpls_labels->parent = this;
    otn_s2l->parent = this;
    head_end_bfd_info->parent = this;
    tail_end_bfd_info->parent = this;
    srlg_collection->parent = this;
    association->parent = this;
    protection->parent = this;
    reverse_lsp_fec->parent = this;
    reverse_tspec->parent = this;
    flex_info->parent = this;
    lsp_wrap_info->parent = this;
    diversity_info->parent = this;

    yang_name = "s2l"; yang_parent_name = "delay-clean-pp-lsp"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::~S2L()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::has_data() const
{
    for (std::size_t index=0; index<s2l_reverse_lsp_sub_obj.size(); index++)
    {
        if(s2l_reverse_lsp_sub_obj[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<out_ero.size(); index++)
    {
        if(out_ero[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<in_ero.size(); index++)
    {
        if(in_ero[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path_rro.size(); index++)
    {
        if(path_rro[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<resv_rro.size(); index++)
    {
        if(resv_rro[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path_affinity_array.size(); index++)
    {
        if(path_affinity_array[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reverse_ero_in.size(); index++)
    {
        if(reverse_ero_in[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<s2l_segment_routing_path.size(); index++)
    {
        if(s2l_segment_routing_path[index]->has_data())
            return true;
    }
    return pcalc_area.is_set
	|| is_expanded_ero.is_set
	|| path_reeval_query_mid.is_set
	|| time_since_last_query_received_mid.is_set
	|| time_since_last_preferred_path_exists_send_mid.is_set
	|| time_since_last_preferred_tree_exists_send_mid.is_set
	|| expanded_ero_area_id.is_set
	|| expanded_ero_affinity_bits.is_set
	|| expanded_ero_affinity_mask.is_set
	|| expanded_ero_metric_type.is_set
	|| expanded_ero_metric.is_set
	|| abr_auto_discovered.is_set
	|| is_frr_enabled.is_set
	|| is_node_protected.is_set
	|| is_bandwidth_protect.is_set
	|| path_rro_enabled.is_set
	|| weight.is_set
	|| reverse_weight.is_set
	|| uptime.is_set
	|| egress_interface.is_set
	|| egress_interface_state.is_set
	|| egress_interface_brief.is_set
	|| ingress_interface.is_set
	|| ingress_interface_state.is_set
	|| ingress_interface_brief.is_set
	|| s2l_local_label.is_set
	|| s2l_out_label.is_set
	|| outbound_frr_state.is_set
	|| frr_out_tunnel_interface.is_set
	|| role.is_set
	|| signalling_status.is_set
	|| local_router_id.is_set
	|| upstream_router_id.is_set
	|| downstream_router_id.is_set
	|| next_hop_address.is_set
	|| previous_hop_address.is_set
	|| incoming_address.is_set
	|| backup_tunnel_interface.is_set
	|| node_hop_count.is_set
	|| is_optical.is_set
	|| s2l_reverse_ero_obj_present.is_set
	|| reverse_lsp_present.is_set
	|| reverse_lsp_connected.is_set
	|| reverse_lsp_name.is_set
	|| s2l_reverse_tspec_obj_present.is_set
	|| path_using_strict_spf.is_set
	|| (s2l_fec !=  nullptr && s2l_fec->has_data())
	|| (active_path_option !=  nullptr && active_path_option->has_data())
	|| (out_xro !=  nullptr && out_xro->has_data())
	|| (in_xro !=  nullptr && in_xro->has_data())
	|| (tspec !=  nullptr && tspec->has_data())
	|| (generic_tspec !=  nullptr && generic_tspec->has_data())
	|| (fspec !=  nullptr && fspec->has_data())
	|| (generic_fspec !=  nullptr && generic_fspec->has_data())
	|| (next_hop_address_generic !=  nullptr && next_hop_address_generic->has_data())
	|| (previous_hop_address_generic !=  nullptr && previous_hop_address_generic->has_data())
	|| (incoming_address_generic !=  nullptr && incoming_address_generic->has_data())
	|| (s2l_convergence !=  nullptr && s2l_convergence->has_data())
	|| (soft_preemption !=  nullptr && soft_preemption->has_data())
	|| (gmpls_labels !=  nullptr && gmpls_labels->has_data())
	|| (otn_s2l !=  nullptr && otn_s2l->has_data())
	|| (head_end_bfd_info !=  nullptr && head_end_bfd_info->has_data())
	|| (tail_end_bfd_info !=  nullptr && tail_end_bfd_info->has_data())
	|| (srlg_collection !=  nullptr && srlg_collection->has_data())
	|| (association !=  nullptr && association->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (reverse_lsp_fec !=  nullptr && reverse_lsp_fec->has_data())
	|| (reverse_tspec !=  nullptr && reverse_tspec->has_data())
	|| (flex_info !=  nullptr && flex_info->has_data())
	|| (lsp_wrap_info !=  nullptr && lsp_wrap_info->has_data())
	|| (diversity_info !=  nullptr && diversity_info->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::has_operation() const
{
    for (std::size_t index=0; index<s2l_reverse_lsp_sub_obj.size(); index++)
    {
        if(s2l_reverse_lsp_sub_obj[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<out_ero.size(); index++)
    {
        if(out_ero[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<in_ero.size(); index++)
    {
        if(in_ero[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path_rro.size(); index++)
    {
        if(path_rro[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<resv_rro.size(); index++)
    {
        if(resv_rro[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path_affinity_array.size(); index++)
    {
        if(path_affinity_array[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reverse_ero_in.size(); index++)
    {
        if(reverse_ero_in[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<s2l_segment_routing_path.size(); index++)
    {
        if(s2l_segment_routing_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pcalc_area.yfilter)
	|| ydk::is_set(is_expanded_ero.yfilter)
	|| ydk::is_set(path_reeval_query_mid.yfilter)
	|| ydk::is_set(time_since_last_query_received_mid.yfilter)
	|| ydk::is_set(time_since_last_preferred_path_exists_send_mid.yfilter)
	|| ydk::is_set(time_since_last_preferred_tree_exists_send_mid.yfilter)
	|| ydk::is_set(expanded_ero_area_id.yfilter)
	|| ydk::is_set(expanded_ero_affinity_bits.yfilter)
	|| ydk::is_set(expanded_ero_affinity_mask.yfilter)
	|| ydk::is_set(expanded_ero_metric_type.yfilter)
	|| ydk::is_set(expanded_ero_metric.yfilter)
	|| ydk::is_set(abr_auto_discovered.yfilter)
	|| ydk::is_set(is_frr_enabled.yfilter)
	|| ydk::is_set(is_node_protected.yfilter)
	|| ydk::is_set(is_bandwidth_protect.yfilter)
	|| ydk::is_set(path_rro_enabled.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(reverse_weight.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(egress_interface.yfilter)
	|| ydk::is_set(egress_interface_state.yfilter)
	|| ydk::is_set(egress_interface_brief.yfilter)
	|| ydk::is_set(ingress_interface.yfilter)
	|| ydk::is_set(ingress_interface_state.yfilter)
	|| ydk::is_set(ingress_interface_brief.yfilter)
	|| ydk::is_set(s2l_local_label.yfilter)
	|| ydk::is_set(s2l_out_label.yfilter)
	|| ydk::is_set(outbound_frr_state.yfilter)
	|| ydk::is_set(frr_out_tunnel_interface.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(signalling_status.yfilter)
	|| ydk::is_set(local_router_id.yfilter)
	|| ydk::is_set(upstream_router_id.yfilter)
	|| ydk::is_set(downstream_router_id.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(previous_hop_address.yfilter)
	|| ydk::is_set(incoming_address.yfilter)
	|| ydk::is_set(backup_tunnel_interface.yfilter)
	|| ydk::is_set(node_hop_count.yfilter)
	|| ydk::is_set(is_optical.yfilter)
	|| ydk::is_set(s2l_reverse_ero_obj_present.yfilter)
	|| ydk::is_set(reverse_lsp_present.yfilter)
	|| ydk::is_set(reverse_lsp_connected.yfilter)
	|| ydk::is_set(reverse_lsp_name.yfilter)
	|| ydk::is_set(s2l_reverse_tspec_obj_present.yfilter)
	|| ydk::is_set(path_using_strict_spf.yfilter)
	|| (s2l_fec !=  nullptr && s2l_fec->has_operation())
	|| (active_path_option !=  nullptr && active_path_option->has_operation())
	|| (out_xro !=  nullptr && out_xro->has_operation())
	|| (in_xro !=  nullptr && in_xro->has_operation())
	|| (tspec !=  nullptr && tspec->has_operation())
	|| (generic_tspec !=  nullptr && generic_tspec->has_operation())
	|| (fspec !=  nullptr && fspec->has_operation())
	|| (generic_fspec !=  nullptr && generic_fspec->has_operation())
	|| (next_hop_address_generic !=  nullptr && next_hop_address_generic->has_operation())
	|| (previous_hop_address_generic !=  nullptr && previous_hop_address_generic->has_operation())
	|| (incoming_address_generic !=  nullptr && incoming_address_generic->has_operation())
	|| (s2l_convergence !=  nullptr && s2l_convergence->has_operation())
	|| (soft_preemption !=  nullptr && soft_preemption->has_operation())
	|| (gmpls_labels !=  nullptr && gmpls_labels->has_operation())
	|| (otn_s2l !=  nullptr && otn_s2l->has_operation())
	|| (head_end_bfd_info !=  nullptr && head_end_bfd_info->has_operation())
	|| (tail_end_bfd_info !=  nullptr && tail_end_bfd_info->has_operation())
	|| (srlg_collection !=  nullptr && srlg_collection->has_operation())
	|| (association !=  nullptr && association->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (reverse_lsp_fec !=  nullptr && reverse_lsp_fec->has_operation())
	|| (reverse_tspec !=  nullptr && reverse_tspec->has_operation())
	|| (flex_info !=  nullptr && flex_info->has_operation())
	|| (lsp_wrap_info !=  nullptr && lsp_wrap_info->has_operation())
	|| (diversity_info !=  nullptr && diversity_info->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcalc_area.is_set || is_set(pcalc_area.yfilter)) leaf_name_data.push_back(pcalc_area.get_name_leafdata());
    if (is_expanded_ero.is_set || is_set(is_expanded_ero.yfilter)) leaf_name_data.push_back(is_expanded_ero.get_name_leafdata());
    if (path_reeval_query_mid.is_set || is_set(path_reeval_query_mid.yfilter)) leaf_name_data.push_back(path_reeval_query_mid.get_name_leafdata());
    if (time_since_last_query_received_mid.is_set || is_set(time_since_last_query_received_mid.yfilter)) leaf_name_data.push_back(time_since_last_query_received_mid.get_name_leafdata());
    if (time_since_last_preferred_path_exists_send_mid.is_set || is_set(time_since_last_preferred_path_exists_send_mid.yfilter)) leaf_name_data.push_back(time_since_last_preferred_path_exists_send_mid.get_name_leafdata());
    if (time_since_last_preferred_tree_exists_send_mid.is_set || is_set(time_since_last_preferred_tree_exists_send_mid.yfilter)) leaf_name_data.push_back(time_since_last_preferred_tree_exists_send_mid.get_name_leafdata());
    if (expanded_ero_area_id.is_set || is_set(expanded_ero_area_id.yfilter)) leaf_name_data.push_back(expanded_ero_area_id.get_name_leafdata());
    if (expanded_ero_affinity_bits.is_set || is_set(expanded_ero_affinity_bits.yfilter)) leaf_name_data.push_back(expanded_ero_affinity_bits.get_name_leafdata());
    if (expanded_ero_affinity_mask.is_set || is_set(expanded_ero_affinity_mask.yfilter)) leaf_name_data.push_back(expanded_ero_affinity_mask.get_name_leafdata());
    if (expanded_ero_metric_type.is_set || is_set(expanded_ero_metric_type.yfilter)) leaf_name_data.push_back(expanded_ero_metric_type.get_name_leafdata());
    if (expanded_ero_metric.is_set || is_set(expanded_ero_metric.yfilter)) leaf_name_data.push_back(expanded_ero_metric.get_name_leafdata());
    if (abr_auto_discovered.is_set || is_set(abr_auto_discovered.yfilter)) leaf_name_data.push_back(abr_auto_discovered.get_name_leafdata());
    if (is_frr_enabled.is_set || is_set(is_frr_enabled.yfilter)) leaf_name_data.push_back(is_frr_enabled.get_name_leafdata());
    if (is_node_protected.is_set || is_set(is_node_protected.yfilter)) leaf_name_data.push_back(is_node_protected.get_name_leafdata());
    if (is_bandwidth_protect.is_set || is_set(is_bandwidth_protect.yfilter)) leaf_name_data.push_back(is_bandwidth_protect.get_name_leafdata());
    if (path_rro_enabled.is_set || is_set(path_rro_enabled.yfilter)) leaf_name_data.push_back(path_rro_enabled.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (reverse_weight.is_set || is_set(reverse_weight.yfilter)) leaf_name_data.push_back(reverse_weight.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (egress_interface.is_set || is_set(egress_interface.yfilter)) leaf_name_data.push_back(egress_interface.get_name_leafdata());
    if (egress_interface_state.is_set || is_set(egress_interface_state.yfilter)) leaf_name_data.push_back(egress_interface_state.get_name_leafdata());
    if (egress_interface_brief.is_set || is_set(egress_interface_brief.yfilter)) leaf_name_data.push_back(egress_interface_brief.get_name_leafdata());
    if (ingress_interface.is_set || is_set(ingress_interface.yfilter)) leaf_name_data.push_back(ingress_interface.get_name_leafdata());
    if (ingress_interface_state.is_set || is_set(ingress_interface_state.yfilter)) leaf_name_data.push_back(ingress_interface_state.get_name_leafdata());
    if (ingress_interface_brief.is_set || is_set(ingress_interface_brief.yfilter)) leaf_name_data.push_back(ingress_interface_brief.get_name_leafdata());
    if (s2l_local_label.is_set || is_set(s2l_local_label.yfilter)) leaf_name_data.push_back(s2l_local_label.get_name_leafdata());
    if (s2l_out_label.is_set || is_set(s2l_out_label.yfilter)) leaf_name_data.push_back(s2l_out_label.get_name_leafdata());
    if (outbound_frr_state.is_set || is_set(outbound_frr_state.yfilter)) leaf_name_data.push_back(outbound_frr_state.get_name_leafdata());
    if (frr_out_tunnel_interface.is_set || is_set(frr_out_tunnel_interface.yfilter)) leaf_name_data.push_back(frr_out_tunnel_interface.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (signalling_status.is_set || is_set(signalling_status.yfilter)) leaf_name_data.push_back(signalling_status.get_name_leafdata());
    if (local_router_id.is_set || is_set(local_router_id.yfilter)) leaf_name_data.push_back(local_router_id.get_name_leafdata());
    if (upstream_router_id.is_set || is_set(upstream_router_id.yfilter)) leaf_name_data.push_back(upstream_router_id.get_name_leafdata());
    if (downstream_router_id.is_set || is_set(downstream_router_id.yfilter)) leaf_name_data.push_back(downstream_router_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.yfilter)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());
    if (incoming_address.is_set || is_set(incoming_address.yfilter)) leaf_name_data.push_back(incoming_address.get_name_leafdata());
    if (backup_tunnel_interface.is_set || is_set(backup_tunnel_interface.yfilter)) leaf_name_data.push_back(backup_tunnel_interface.get_name_leafdata());
    if (node_hop_count.is_set || is_set(node_hop_count.yfilter)) leaf_name_data.push_back(node_hop_count.get_name_leafdata());
    if (is_optical.is_set || is_set(is_optical.yfilter)) leaf_name_data.push_back(is_optical.get_name_leafdata());
    if (s2l_reverse_ero_obj_present.is_set || is_set(s2l_reverse_ero_obj_present.yfilter)) leaf_name_data.push_back(s2l_reverse_ero_obj_present.get_name_leafdata());
    if (reverse_lsp_present.is_set || is_set(reverse_lsp_present.yfilter)) leaf_name_data.push_back(reverse_lsp_present.get_name_leafdata());
    if (reverse_lsp_connected.is_set || is_set(reverse_lsp_connected.yfilter)) leaf_name_data.push_back(reverse_lsp_connected.get_name_leafdata());
    if (reverse_lsp_name.is_set || is_set(reverse_lsp_name.yfilter)) leaf_name_data.push_back(reverse_lsp_name.get_name_leafdata());
    if (s2l_reverse_tspec_obj_present.is_set || is_set(s2l_reverse_tspec_obj_present.yfilter)) leaf_name_data.push_back(s2l_reverse_tspec_obj_present.get_name_leafdata());
    if (path_using_strict_spf.is_set || is_set(path_using_strict_spf.yfilter)) leaf_name_data.push_back(path_using_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-fec")
    {
        if(s2l_fec == nullptr)
        {
            s2l_fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::S2LFec>();
        }
        return s2l_fec;
    }

    if(child_yang_name == "active-path-option")
    {
        if(active_path_option == nullptr)
        {
            active_path_option = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption>();
        }
        return active_path_option;
    }

    if(child_yang_name == "out-xro")
    {
        if(out_xro == nullptr)
        {
            out_xro = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::OutXro>();
        }
        return out_xro;
    }

    if(child_yang_name == "in-xro")
    {
        if(in_xro == nullptr)
        {
            in_xro = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::InXro>();
        }
        return in_xro;
    }

    if(child_yang_name == "tspec")
    {
        if(tspec == nullptr)
        {
            tspec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::Tspec>();
        }
        return tspec;
    }

    if(child_yang_name == "generic-tspec")
    {
        if(generic_tspec == nullptr)
        {
            generic_tspec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::GenericTspec>();
        }
        return generic_tspec;
    }

    if(child_yang_name == "fspec")
    {
        if(fspec == nullptr)
        {
            fspec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::Fspec>();
        }
        return fspec;
    }

    if(child_yang_name == "generic-fspec")
    {
        if(generic_fspec == nullptr)
        {
            generic_fspec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::GenericFspec>();
        }
        return generic_fspec;
    }

    if(child_yang_name == "next-hop-address-generic")
    {
        if(next_hop_address_generic == nullptr)
        {
            next_hop_address_generic = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::NextHopAddressGeneric>();
        }
        return next_hop_address_generic;
    }

    if(child_yang_name == "previous-hop-address-generic")
    {
        if(previous_hop_address_generic == nullptr)
        {
            previous_hop_address_generic = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::PreviousHopAddressGeneric>();
        }
        return previous_hop_address_generic;
    }

    if(child_yang_name == "incoming-address-generic")
    {
        if(incoming_address_generic == nullptr)
        {
            incoming_address_generic = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::IncomingAddressGeneric>();
        }
        return incoming_address_generic;
    }

    if(child_yang_name == "s2l-convergence")
    {
        if(s2l_convergence == nullptr)
        {
            s2l_convergence = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::S2LConvergence>();
        }
        return s2l_convergence;
    }

    if(child_yang_name == "soft-preemption")
    {
        if(soft_preemption == nullptr)
        {
            soft_preemption = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::SoftPreemption>();
        }
        return soft_preemption;
    }

    if(child_yang_name == "gmpls-labels")
    {
        if(gmpls_labels == nullptr)
        {
            gmpls_labels = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::GmplsLabels>();
        }
        return gmpls_labels;
    }

    if(child_yang_name == "otn-s2l")
    {
        if(otn_s2l == nullptr)
        {
            otn_s2l = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::OtnS2L>();
        }
        return otn_s2l;
    }

    if(child_yang_name == "head-end-bfd-info")
    {
        if(head_end_bfd_info == nullptr)
        {
            head_end_bfd_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::HeadEndBfdInfo>();
        }
        return head_end_bfd_info;
    }

    if(child_yang_name == "tail-end-bfd-info")
    {
        if(tail_end_bfd_info == nullptr)
        {
            tail_end_bfd_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::TailEndBfdInfo>();
        }
        return tail_end_bfd_info;
    }

    if(child_yang_name == "srlg-collection")
    {
        if(srlg_collection == nullptr)
        {
            srlg_collection = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::SrlgCollection>();
        }
        return srlg_collection;
    }

    if(child_yang_name == "association")
    {
        if(association == nullptr)
        {
            association = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::Association>();
        }
        return association;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::Protection>();
        }
        return protection;
    }

    if(child_yang_name == "reverse-lsp-fec")
    {
        if(reverse_lsp_fec == nullptr)
        {
            reverse_lsp_fec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ReverseLspFec>();
        }
        return reverse_lsp_fec;
    }

    if(child_yang_name == "reverse-tspec")
    {
        if(reverse_tspec == nullptr)
        {
            reverse_tspec = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ReverseTspec>();
        }
        return reverse_tspec;
    }

    if(child_yang_name == "flex-info")
    {
        if(flex_info == nullptr)
        {
            flex_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::FlexInfo>();
        }
        return flex_info;
    }

    if(child_yang_name == "lsp-wrap-info")
    {
        if(lsp_wrap_info == nullptr)
        {
            lsp_wrap_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::LspWrapInfo>();
        }
        return lsp_wrap_info;
    }

    if(child_yang_name == "diversity-info")
    {
        if(diversity_info == nullptr)
        {
            diversity_info = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::DiversityInfo>();
        }
        return diversity_info;
    }

    if(child_yang_name == "s2l-reverse-lsp-sub-obj")
    {
        for(auto const & c : s2l_reverse_lsp_sub_obj)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::S2LReverseLspSubObj>();
        c->parent = this;
        s2l_reverse_lsp_sub_obj.push_back(c);
        return c;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        for(auto const & c : shared_risk_link_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(c);
        return c;
    }

    if(child_yang_name == "out-ero")
    {
        for(auto const & c : out_ero)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::OutEro>();
        c->parent = this;
        out_ero.push_back(c);
        return c;
    }

    if(child_yang_name == "in-ero")
    {
        for(auto const & c : in_ero)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::InEro>();
        c->parent = this;
        in_ero.push_back(c);
        return c;
    }

    if(child_yang_name == "path-rro")
    {
        for(auto const & c : path_rro)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::PathRro>();
        c->parent = this;
        path_rro.push_back(c);
        return c;
    }

    if(child_yang_name == "resv-rro")
    {
        for(auto const & c : resv_rro)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ResvRro>();
        c->parent = this;
        resv_rro.push_back(c);
        return c;
    }

    if(child_yang_name == "path-affinity-array")
    {
        for(auto const & c : path_affinity_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::PathAffinityArray>();
        c->parent = this;
        path_affinity_array.push_back(c);
        return c;
    }

    if(child_yang_name == "reverse-ero-in")
    {
        for(auto const & c : reverse_ero_in)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ReverseEroIn>();
        c->parent = this;
        reverse_ero_in.push_back(c);
        return c;
    }

    if(child_yang_name == "s2l-segment-routing-path")
    {
        for(auto const & c : s2l_segment_routing_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::S2LSegmentRoutingPath>();
        c->parent = this;
        s2l_segment_routing_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(s2l_fec != nullptr)
    {
        children["s2l-fec"] = s2l_fec;
    }

    if(active_path_option != nullptr)
    {
        children["active-path-option"] = active_path_option;
    }

    if(out_xro != nullptr)
    {
        children["out-xro"] = out_xro;
    }

    if(in_xro != nullptr)
    {
        children["in-xro"] = in_xro;
    }

    if(tspec != nullptr)
    {
        children["tspec"] = tspec;
    }

    if(generic_tspec != nullptr)
    {
        children["generic-tspec"] = generic_tspec;
    }

    if(fspec != nullptr)
    {
        children["fspec"] = fspec;
    }

    if(generic_fspec != nullptr)
    {
        children["generic-fspec"] = generic_fspec;
    }

    if(next_hop_address_generic != nullptr)
    {
        children["next-hop-address-generic"] = next_hop_address_generic;
    }

    if(previous_hop_address_generic != nullptr)
    {
        children["previous-hop-address-generic"] = previous_hop_address_generic;
    }

    if(incoming_address_generic != nullptr)
    {
        children["incoming-address-generic"] = incoming_address_generic;
    }

    if(s2l_convergence != nullptr)
    {
        children["s2l-convergence"] = s2l_convergence;
    }

    if(soft_preemption != nullptr)
    {
        children["soft-preemption"] = soft_preemption;
    }

    if(gmpls_labels != nullptr)
    {
        children["gmpls-labels"] = gmpls_labels;
    }

    if(otn_s2l != nullptr)
    {
        children["otn-s2l"] = otn_s2l;
    }

    if(head_end_bfd_info != nullptr)
    {
        children["head-end-bfd-info"] = head_end_bfd_info;
    }

    if(tail_end_bfd_info != nullptr)
    {
        children["tail-end-bfd-info"] = tail_end_bfd_info;
    }

    if(srlg_collection != nullptr)
    {
        children["srlg-collection"] = srlg_collection;
    }

    if(association != nullptr)
    {
        children["association"] = association;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    if(reverse_lsp_fec != nullptr)
    {
        children["reverse-lsp-fec"] = reverse_lsp_fec;
    }

    if(reverse_tspec != nullptr)
    {
        children["reverse-tspec"] = reverse_tspec;
    }

    if(flex_info != nullptr)
    {
        children["flex-info"] = flex_info;
    }

    if(lsp_wrap_info != nullptr)
    {
        children["lsp-wrap-info"] = lsp_wrap_info;
    }

    if(diversity_info != nullptr)
    {
        children["diversity-info"] = diversity_info;
    }

    for (auto const & c : s2l_reverse_lsp_sub_obj)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : shared_risk_link_group)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : out_ero)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : in_ero)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : path_rro)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : resv_rro)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : path_affinity_array)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : reverse_ero_in)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : s2l_segment_routing_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcalc-area")
    {
        pcalc_area = value;
        pcalc_area.value_namespace = name_space;
        pcalc_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-expanded-ero")
    {
        is_expanded_ero = value;
        is_expanded_ero.value_namespace = name_space;
        is_expanded_ero.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-reeval-query-mid")
    {
        path_reeval_query_mid = value;
        path_reeval_query_mid.value_namespace = name_space;
        path_reeval_query_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-query-received-mid")
    {
        time_since_last_query_received_mid = value;
        time_since_last_query_received_mid.value_namespace = name_space;
        time_since_last_query_received_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-preferred-path-exists-send-mid")
    {
        time_since_last_preferred_path_exists_send_mid = value;
        time_since_last_preferred_path_exists_send_mid.value_namespace = name_space;
        time_since_last_preferred_path_exists_send_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-preferred-tree-exists-send-mid")
    {
        time_since_last_preferred_tree_exists_send_mid = value;
        time_since_last_preferred_tree_exists_send_mid.value_namespace = name_space;
        time_since_last_preferred_tree_exists_send_mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-ero-area-id")
    {
        expanded_ero_area_id = value;
        expanded_ero_area_id.value_namespace = name_space;
        expanded_ero_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-ero-affinity-bits")
    {
        expanded_ero_affinity_bits = value;
        expanded_ero_affinity_bits.value_namespace = name_space;
        expanded_ero_affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-ero-affinity-mask")
    {
        expanded_ero_affinity_mask = value;
        expanded_ero_affinity_mask.value_namespace = name_space;
        expanded_ero_affinity_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-ero-metric-type")
    {
        expanded_ero_metric_type = value;
        expanded_ero_metric_type.value_namespace = name_space;
        expanded_ero_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-ero-metric")
    {
        expanded_ero_metric = value;
        expanded_ero_metric.value_namespace = name_space;
        expanded_ero_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abr-auto-discovered")
    {
        abr_auto_discovered = value;
        abr_auto_discovered.value_namespace = name_space;
        abr_auto_discovered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-frr-enabled")
    {
        is_frr_enabled = value;
        is_frr_enabled.value_namespace = name_space;
        is_frr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-protected")
    {
        is_node_protected = value;
        is_node_protected.value_namespace = name_space;
        is_node_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-protect")
    {
        is_bandwidth_protect = value;
        is_bandwidth_protect.value_namespace = name_space;
        is_bandwidth_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rro-enabled")
    {
        path_rro_enabled = value;
        path_rro_enabled.value_namespace = name_space;
        path_rro_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-weight")
    {
        reverse_weight = value;
        reverse_weight.value_namespace = name_space;
        reverse_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface")
    {
        egress_interface = value;
        egress_interface.value_namespace = name_space;
        egress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface-state")
    {
        egress_interface_state = value;
        egress_interface_state.value_namespace = name_space;
        egress_interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-interface-brief")
    {
        egress_interface_brief = value;
        egress_interface_brief.value_namespace = name_space;
        egress_interface_brief.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-interface")
    {
        ingress_interface = value;
        ingress_interface.value_namespace = name_space;
        ingress_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-interface-state")
    {
        ingress_interface_state = value;
        ingress_interface_state.value_namespace = name_space;
        ingress_interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-interface-brief")
    {
        ingress_interface_brief = value;
        ingress_interface_brief.value_namespace = name_space;
        ingress_interface_brief.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-local-label")
    {
        s2l_local_label = value;
        s2l_local_label.value_namespace = name_space;
        s2l_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-out-label")
    {
        s2l_out_label = value;
        s2l_out_label.value_namespace = name_space;
        s2l_out_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound-frr-state")
    {
        outbound_frr_state = value;
        outbound_frr_state.value_namespace = name_space;
        outbound_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-out-tunnel-interface")
    {
        frr_out_tunnel_interface = value;
        frr_out_tunnel_interface.value_namespace = name_space;
        frr_out_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-status")
    {
        signalling_status = value;
        signalling_status.value_namespace = name_space;
        signalling_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-router-id")
    {
        local_router_id = value;
        local_router_id.value_namespace = name_space;
        local_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upstream-router-id")
    {
        upstream_router_id = value;
        upstream_router_id.value_namespace = name_space;
        upstream_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream-router-id")
    {
        downstream_router_id = value;
        downstream_router_id.value_namespace = name_space;
        downstream_router_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "incoming-address")
    {
        incoming_address = value;
        incoming_address.value_namespace = name_space;
        incoming_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-interface")
    {
        backup_tunnel_interface = value;
        backup_tunnel_interface.value_namespace = name_space;
        backup_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count = value;
        node_hop_count.value_namespace = name_space;
        node_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-optical")
    {
        is_optical = value;
        is_optical.value_namespace = name_space;
        is_optical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-reverse-ero-obj-present")
    {
        s2l_reverse_ero_obj_present = value;
        s2l_reverse_ero_obj_present.value_namespace = name_space;
        s2l_reverse_ero_obj_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-present")
    {
        reverse_lsp_present = value;
        reverse_lsp_present.value_namespace = name_space;
        reverse_lsp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-connected")
    {
        reverse_lsp_connected = value;
        reverse_lsp_connected.value_namespace = name_space;
        reverse_lsp_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-lsp-name")
    {
        reverse_lsp_name = value;
        reverse_lsp_name.value_namespace = name_space;
        reverse_lsp_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-reverse-tspec-obj-present")
    {
        s2l_reverse_tspec_obj_present = value;
        s2l_reverse_tspec_obj_present.value_namespace = name_space;
        s2l_reverse_tspec_obj_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-using-strict-spf")
    {
        path_using_strict_spf = value;
        path_using_strict_spf.value_namespace = name_space;
        path_using_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcalc-area")
    {
        pcalc_area.yfilter = yfilter;
    }
    if(value_path == "is-expanded-ero")
    {
        is_expanded_ero.yfilter = yfilter;
    }
    if(value_path == "path-reeval-query-mid")
    {
        path_reeval_query_mid.yfilter = yfilter;
    }
    if(value_path == "time-since-last-query-received-mid")
    {
        time_since_last_query_received_mid.yfilter = yfilter;
    }
    if(value_path == "time-since-last-preferred-path-exists-send-mid")
    {
        time_since_last_preferred_path_exists_send_mid.yfilter = yfilter;
    }
    if(value_path == "time-since-last-preferred-tree-exists-send-mid")
    {
        time_since_last_preferred_tree_exists_send_mid.yfilter = yfilter;
    }
    if(value_path == "expanded-ero-area-id")
    {
        expanded_ero_area_id.yfilter = yfilter;
    }
    if(value_path == "expanded-ero-affinity-bits")
    {
        expanded_ero_affinity_bits.yfilter = yfilter;
    }
    if(value_path == "expanded-ero-affinity-mask")
    {
        expanded_ero_affinity_mask.yfilter = yfilter;
    }
    if(value_path == "expanded-ero-metric-type")
    {
        expanded_ero_metric_type.yfilter = yfilter;
    }
    if(value_path == "expanded-ero-metric")
    {
        expanded_ero_metric.yfilter = yfilter;
    }
    if(value_path == "abr-auto-discovered")
    {
        abr_auto_discovered.yfilter = yfilter;
    }
    if(value_path == "is-frr-enabled")
    {
        is_frr_enabled.yfilter = yfilter;
    }
    if(value_path == "is-node-protected")
    {
        is_node_protected.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-protect")
    {
        is_bandwidth_protect.yfilter = yfilter;
    }
    if(value_path == "path-rro-enabled")
    {
        path_rro_enabled.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "reverse-weight")
    {
        reverse_weight.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "egress-interface")
    {
        egress_interface.yfilter = yfilter;
    }
    if(value_path == "egress-interface-state")
    {
        egress_interface_state.yfilter = yfilter;
    }
    if(value_path == "egress-interface-brief")
    {
        egress_interface_brief.yfilter = yfilter;
    }
    if(value_path == "ingress-interface")
    {
        ingress_interface.yfilter = yfilter;
    }
    if(value_path == "ingress-interface-state")
    {
        ingress_interface_state.yfilter = yfilter;
    }
    if(value_path == "ingress-interface-brief")
    {
        ingress_interface_brief.yfilter = yfilter;
    }
    if(value_path == "s2l-local-label")
    {
        s2l_local_label.yfilter = yfilter;
    }
    if(value_path == "s2l-out-label")
    {
        s2l_out_label.yfilter = yfilter;
    }
    if(value_path == "outbound-frr-state")
    {
        outbound_frr_state.yfilter = yfilter;
    }
    if(value_path == "frr-out-tunnel-interface")
    {
        frr_out_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "signalling-status")
    {
        signalling_status.yfilter = yfilter;
    }
    if(value_path == "local-router-id")
    {
        local_router_id.yfilter = yfilter;
    }
    if(value_path == "upstream-router-id")
    {
        upstream_router_id.yfilter = yfilter;
    }
    if(value_path == "downstream-router-id")
    {
        downstream_router_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address.yfilter = yfilter;
    }
    if(value_path == "incoming-address")
    {
        incoming_address.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-interface")
    {
        backup_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count.yfilter = yfilter;
    }
    if(value_path == "is-optical")
    {
        is_optical.yfilter = yfilter;
    }
    if(value_path == "s2l-reverse-ero-obj-present")
    {
        s2l_reverse_ero_obj_present.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-present")
    {
        reverse_lsp_present.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-connected")
    {
        reverse_lsp_connected.yfilter = yfilter;
    }
    if(value_path == "reverse-lsp-name")
    {
        reverse_lsp_name.yfilter = yfilter;
    }
    if(value_path == "s2l-reverse-tspec-obj-present")
    {
        s2l_reverse_tspec_obj_present.yfilter = yfilter;
    }
    if(value_path == "path-using-strict-spf")
    {
        path_using_strict_spf.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-fec" || name == "active-path-option" || name == "out-xro" || name == "in-xro" || name == "tspec" || name == "generic-tspec" || name == "fspec" || name == "generic-fspec" || name == "next-hop-address-generic" || name == "previous-hop-address-generic" || name == "incoming-address-generic" || name == "s2l-convergence" || name == "soft-preemption" || name == "gmpls-labels" || name == "otn-s2l" || name == "head-end-bfd-info" || name == "tail-end-bfd-info" || name == "srlg-collection" || name == "association" || name == "protection" || name == "reverse-lsp-fec" || name == "reverse-tspec" || name == "flex-info" || name == "lsp-wrap-info" || name == "diversity-info" || name == "s2l-reverse-lsp-sub-obj" || name == "shared-risk-link-group" || name == "out-ero" || name == "in-ero" || name == "path-rro" || name == "resv-rro" || name == "path-affinity-array" || name == "reverse-ero-in" || name == "s2l-segment-routing-path" || name == "pcalc-area" || name == "is-expanded-ero" || name == "path-reeval-query-mid" || name == "time-since-last-query-received-mid" || name == "time-since-last-preferred-path-exists-send-mid" || name == "time-since-last-preferred-tree-exists-send-mid" || name == "expanded-ero-area-id" || name == "expanded-ero-affinity-bits" || name == "expanded-ero-affinity-mask" || name == "expanded-ero-metric-type" || name == "expanded-ero-metric" || name == "abr-auto-discovered" || name == "is-frr-enabled" || name == "is-node-protected" || name == "is-bandwidth-protect" || name == "path-rro-enabled" || name == "weight" || name == "reverse-weight" || name == "uptime" || name == "egress-interface" || name == "egress-interface-state" || name == "egress-interface-brief" || name == "ingress-interface" || name == "ingress-interface-state" || name == "ingress-interface-brief" || name == "s2l-local-label" || name == "s2l-out-label" || name == "outbound-frr-state" || name == "frr-out-tunnel-interface" || name == "role" || name == "signalling-status" || name == "local-router-id" || name == "upstream-router-id" || name == "downstream-router-id" || name == "next-hop-address" || name == "previous-hop-address" || name == "incoming-address" || name == "backup-tunnel-interface" || name == "node-hop-count" || name == "is-optical" || name == "s2l-reverse-ero-obj-present" || name == "reverse-lsp-present" || name == "reverse-lsp-connected" || name == "reverse-lsp-name" || name == "s2l-reverse-tspec-obj-present" || name == "path-using-strict-spf")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::S2LFec::S2LFec()
    :
    s2l_fec_subgroup_id{YType::uint16, "s2l-fec-subgroup-id"},
    s2l_fec_lsp_id{YType::uint16, "s2l-fec-lsp-id"},
    s2l_fec_tunnel_id{YType::uint16, "s2l-fec-tunnel-id"},
    s2l_fec_extended_tunnel_id{YType::str, "s2l-fec-extended-tunnel-id"},
    s2l_fec_source{YType::str, "s2l-fec-source"},
    s2l_fec_dest{YType::str, "s2l-fec-dest"},
    s2l_fec_p2mp_id{YType::uint32, "s2l-fec-p2mp-id"},
    s2l_fec_subgroup_originator{YType::str, "s2l-fec-subgroup-originator"},
    s2l_fec_ctype{YType::enumeration, "s2l-fec-ctype"},
    s2l_fec_vrf{YType::str, "s2l-fec-vrf"}
{

    yang_name = "s2l-fec"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::S2LFec::~S2LFec()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::S2LFec::has_data() const
{
    return s2l_fec_subgroup_id.is_set
	|| s2l_fec_lsp_id.is_set
	|| s2l_fec_tunnel_id.is_set
	|| s2l_fec_extended_tunnel_id.is_set
	|| s2l_fec_source.is_set
	|| s2l_fec_dest.is_set
	|| s2l_fec_p2mp_id.is_set
	|| s2l_fec_subgroup_originator.is_set
	|| s2l_fec_ctype.is_set
	|| s2l_fec_vrf.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::S2LFec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_fec_subgroup_id.yfilter)
	|| ydk::is_set(s2l_fec_lsp_id.yfilter)
	|| ydk::is_set(s2l_fec_tunnel_id.yfilter)
	|| ydk::is_set(s2l_fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(s2l_fec_source.yfilter)
	|| ydk::is_set(s2l_fec_dest.yfilter)
	|| ydk::is_set(s2l_fec_p2mp_id.yfilter)
	|| ydk::is_set(s2l_fec_subgroup_originator.yfilter)
	|| ydk::is_set(s2l_fec_ctype.yfilter)
	|| ydk::is_set(s2l_fec_vrf.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::S2LFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::S2LFec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_fec_subgroup_id.is_set || is_set(s2l_fec_subgroup_id.yfilter)) leaf_name_data.push_back(s2l_fec_subgroup_id.get_name_leafdata());
    if (s2l_fec_lsp_id.is_set || is_set(s2l_fec_lsp_id.yfilter)) leaf_name_data.push_back(s2l_fec_lsp_id.get_name_leafdata());
    if (s2l_fec_tunnel_id.is_set || is_set(s2l_fec_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_tunnel_id.get_name_leafdata());
    if (s2l_fec_extended_tunnel_id.is_set || is_set(s2l_fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(s2l_fec_extended_tunnel_id.get_name_leafdata());
    if (s2l_fec_source.is_set || is_set(s2l_fec_source.yfilter)) leaf_name_data.push_back(s2l_fec_source.get_name_leafdata());
    if (s2l_fec_dest.is_set || is_set(s2l_fec_dest.yfilter)) leaf_name_data.push_back(s2l_fec_dest.get_name_leafdata());
    if (s2l_fec_p2mp_id.is_set || is_set(s2l_fec_p2mp_id.yfilter)) leaf_name_data.push_back(s2l_fec_p2mp_id.get_name_leafdata());
    if (s2l_fec_subgroup_originator.is_set || is_set(s2l_fec_subgroup_originator.yfilter)) leaf_name_data.push_back(s2l_fec_subgroup_originator.get_name_leafdata());
    if (s2l_fec_ctype.is_set || is_set(s2l_fec_ctype.yfilter)) leaf_name_data.push_back(s2l_fec_ctype.get_name_leafdata());
    if (s2l_fec_vrf.is_set || is_set(s2l_fec_vrf.yfilter)) leaf_name_data.push_back(s2l_fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::S2LFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::S2LFec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::S2LFec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id = value;
        s2l_fec_subgroup_id.value_namespace = name_space;
        s2l_fec_subgroup_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id = value;
        s2l_fec_lsp_id.value_namespace = name_space;
        s2l_fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id = value;
        s2l_fec_tunnel_id.value_namespace = name_space;
        s2l_fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id = value;
        s2l_fec_extended_tunnel_id.value_namespace = name_space;
        s2l_fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source = value;
        s2l_fec_source.value_namespace = name_space;
        s2l_fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest = value;
        s2l_fec_dest.value_namespace = name_space;
        s2l_fec_dest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id = value;
        s2l_fec_p2mp_id.value_namespace = name_space;
        s2l_fec_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator = value;
        s2l_fec_subgroup_originator.value_namespace = name_space;
        s2l_fec_subgroup_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype = value;
        s2l_fec_ctype.value_namespace = name_space;
        s2l_fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf = value;
        s2l_fec_vrf.value_namespace = name_space;
        s2l_fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::S2LFec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-fec-subgroup-id")
    {
        s2l_fec_subgroup_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-lsp-id")
    {
        s2l_fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-tunnel-id")
    {
        s2l_fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-extended-tunnel-id")
    {
        s2l_fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-source")
    {
        s2l_fec_source.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-dest")
    {
        s2l_fec_dest.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-p2mp-id")
    {
        s2l_fec_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-subgroup-originator")
    {
        s2l_fec_subgroup_originator.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-ctype")
    {
        s2l_fec_ctype.yfilter = yfilter;
    }
    if(value_path == "s2l-fec-vrf")
    {
        s2l_fec_vrf.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::S2LFec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-fec-subgroup-id" || name == "s2l-fec-lsp-id" || name == "s2l-fec-tunnel-id" || name == "s2l-fec-extended-tunnel-id" || name == "s2l-fec-source" || name == "s2l-fec-dest" || name == "s2l-fec-p2mp-id" || name == "s2l-fec-subgroup-originator" || name == "s2l-fec-ctype" || name == "s2l-fec-vrf")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::ActivePathOption()
    :
    option_index_is_valid{YType::boolean, "option-index-is-valid"},
    option_index{YType::uint32, "option-index"},
    path_option_name{YType::str, "path-option-name"},
    path_option_type{YType::enumeration, "path-option-type"},
    explicit_path_name{YType::str, "explicit-path-name"},
    explicit_path_id{YType::uint16, "explicit-path-id"},
    holddown_duration{YType::uint16, "holddown-duration"},
    pce_address{YType::str, "pce-address"},
    path_option_area_id{YType::str, "path-option-area-id"},
    is_strict_explicit_path{YType::boolean, "is-strict-explicit-path"},
    is_helddown{YType::boolean, "is-helddown"},
    is_lockdown{YType::boolean, "is-lockdown"},
    is_verbatim{YType::boolean, "is-verbatim"},
    is_disabled{YType::boolean, "is-disabled"},
    has_attribute_set{YType::boolean, "has-attribute-set"},
    attribute_set_found{YType::boolean, "attribute-set-found"},
    has_xro_attribute_set{YType::boolean, "has-xro-attribute-set"},
    xro_attribute_set_found{YType::boolean, "xro-attribute-set-found"},
    is_segment_routing{YType::boolean, "is-segment-routing"},
    protected_by_path_option_index{YType::uint32, "protected-by-path-option-index"},
    restored_from_path_option_index{YType::uint32, "restored-from-path-option-index"}
    	,
    attribute_set(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet>())
	,xro_attribute_set(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::XroAttributeSet>())
{
    attribute_set->parent = this;
    xro_attribute_set->parent = this;

    yang_name = "active-path-option"; yang_parent_name = "s2l"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::~ActivePathOption()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::has_data() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remerge_error.size(); index++)
    {
        if(remerge_error[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<signalling_error.size(); index++)
    {
        if(signalling_error[index]->has_data())
            return true;
    }
    return option_index_is_valid.is_set
	|| option_index.is_set
	|| path_option_name.is_set
	|| path_option_type.is_set
	|| explicit_path_name.is_set
	|| explicit_path_id.is_set
	|| holddown_duration.is_set
	|| pce_address.is_set
	|| path_option_area_id.is_set
	|| is_strict_explicit_path.is_set
	|| is_helddown.is_set
	|| is_lockdown.is_set
	|| is_verbatim.is_set
	|| is_disabled.is_set
	|| has_attribute_set.is_set
	|| attribute_set_found.is_set
	|| has_xro_attribute_set.is_set
	|| xro_attribute_set_found.is_set
	|| is_segment_routing.is_set
	|| protected_by_path_option_index.is_set
	|| restored_from_path_option_index.is_set
	|| (attribute_set !=  nullptr && attribute_set->has_data())
	|| (xro_attribute_set !=  nullptr && xro_attribute_set->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::has_operation() const
{
    for (std::size_t index=0; index<path_calculation_error.size(); index++)
    {
        if(path_calculation_error[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remerge_error.size(); index++)
    {
        if(remerge_error[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<signalling_error.size(); index++)
    {
        if(signalling_error[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option_index_is_valid.yfilter)
	|| ydk::is_set(option_index.yfilter)
	|| ydk::is_set(path_option_name.yfilter)
	|| ydk::is_set(path_option_type.yfilter)
	|| ydk::is_set(explicit_path_name.yfilter)
	|| ydk::is_set(explicit_path_id.yfilter)
	|| ydk::is_set(holddown_duration.yfilter)
	|| ydk::is_set(pce_address.yfilter)
	|| ydk::is_set(path_option_area_id.yfilter)
	|| ydk::is_set(is_strict_explicit_path.yfilter)
	|| ydk::is_set(is_helddown.yfilter)
	|| ydk::is_set(is_lockdown.yfilter)
	|| ydk::is_set(is_verbatim.yfilter)
	|| ydk::is_set(is_disabled.yfilter)
	|| ydk::is_set(has_attribute_set.yfilter)
	|| ydk::is_set(attribute_set_found.yfilter)
	|| ydk::is_set(has_xro_attribute_set.yfilter)
	|| ydk::is_set(xro_attribute_set_found.yfilter)
	|| ydk::is_set(is_segment_routing.yfilter)
	|| ydk::is_set(protected_by_path_option_index.yfilter)
	|| ydk::is_set(restored_from_path_option_index.yfilter)
	|| (attribute_set !=  nullptr && attribute_set->has_operation())
	|| (xro_attribute_set !=  nullptr && xro_attribute_set->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-path-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_index_is_valid.is_set || is_set(option_index_is_valid.yfilter)) leaf_name_data.push_back(option_index_is_valid.get_name_leafdata());
    if (option_index.is_set || is_set(option_index.yfilter)) leaf_name_data.push_back(option_index.get_name_leafdata());
    if (path_option_name.is_set || is_set(path_option_name.yfilter)) leaf_name_data.push_back(path_option_name.get_name_leafdata());
    if (path_option_type.is_set || is_set(path_option_type.yfilter)) leaf_name_data.push_back(path_option_type.get_name_leafdata());
    if (explicit_path_name.is_set || is_set(explicit_path_name.yfilter)) leaf_name_data.push_back(explicit_path_name.get_name_leafdata());
    if (explicit_path_id.is_set || is_set(explicit_path_id.yfilter)) leaf_name_data.push_back(explicit_path_id.get_name_leafdata());
    if (holddown_duration.is_set || is_set(holddown_duration.yfilter)) leaf_name_data.push_back(holddown_duration.get_name_leafdata());
    if (pce_address.is_set || is_set(pce_address.yfilter)) leaf_name_data.push_back(pce_address.get_name_leafdata());
    if (path_option_area_id.is_set || is_set(path_option_area_id.yfilter)) leaf_name_data.push_back(path_option_area_id.get_name_leafdata());
    if (is_strict_explicit_path.is_set || is_set(is_strict_explicit_path.yfilter)) leaf_name_data.push_back(is_strict_explicit_path.get_name_leafdata());
    if (is_helddown.is_set || is_set(is_helddown.yfilter)) leaf_name_data.push_back(is_helddown.get_name_leafdata());
    if (is_lockdown.is_set || is_set(is_lockdown.yfilter)) leaf_name_data.push_back(is_lockdown.get_name_leafdata());
    if (is_verbatim.is_set || is_set(is_verbatim.yfilter)) leaf_name_data.push_back(is_verbatim.get_name_leafdata());
    if (is_disabled.is_set || is_set(is_disabled.yfilter)) leaf_name_data.push_back(is_disabled.get_name_leafdata());
    if (has_attribute_set.is_set || is_set(has_attribute_set.yfilter)) leaf_name_data.push_back(has_attribute_set.get_name_leafdata());
    if (attribute_set_found.is_set || is_set(attribute_set_found.yfilter)) leaf_name_data.push_back(attribute_set_found.get_name_leafdata());
    if (has_xro_attribute_set.is_set || is_set(has_xro_attribute_set.yfilter)) leaf_name_data.push_back(has_xro_attribute_set.get_name_leafdata());
    if (xro_attribute_set_found.is_set || is_set(xro_attribute_set_found.yfilter)) leaf_name_data.push_back(xro_attribute_set_found.get_name_leafdata());
    if (is_segment_routing.is_set || is_set(is_segment_routing.yfilter)) leaf_name_data.push_back(is_segment_routing.get_name_leafdata());
    if (protected_by_path_option_index.is_set || is_set(protected_by_path_option_index.yfilter)) leaf_name_data.push_back(protected_by_path_option_index.get_name_leafdata());
    if (restored_from_path_option_index.is_set || is_set(restored_from_path_option_index.yfilter)) leaf_name_data.push_back(restored_from_path_option_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set")
    {
        if(attribute_set == nullptr)
        {
            attribute_set = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet>();
        }
        return attribute_set;
    }

    if(child_yang_name == "xro-attribute-set")
    {
        if(xro_attribute_set == nullptr)
        {
            xro_attribute_set = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::XroAttributeSet>();
        }
        return xro_attribute_set;
    }

    if(child_yang_name == "path-calculation-error")
    {
        for(auto const & c : path_calculation_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::PathCalculationError>();
        c->parent = this;
        path_calculation_error.push_back(c);
        return c;
    }

    if(child_yang_name == "remerge-error")
    {
        for(auto const & c : remerge_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::RemergeError>();
        c->parent = this;
        remerge_error.push_back(c);
        return c;
    }

    if(child_yang_name == "signalling-error")
    {
        for(auto const & c : signalling_error)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::SignallingError>();
        c->parent = this;
        signalling_error.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_set != nullptr)
    {
        children["attribute-set"] = attribute_set;
    }

    if(xro_attribute_set != nullptr)
    {
        children["xro-attribute-set"] = xro_attribute_set;
    }

    for (auto const & c : path_calculation_error)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : remerge_error)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : signalling_error)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option-index-is-valid")
    {
        option_index_is_valid = value;
        option_index_is_valid.value_namespace = name_space;
        option_index_is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option-index")
    {
        option_index = value;
        option_index.value_namespace = name_space;
        option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-name")
    {
        path_option_name = value;
        path_option_name.value_namespace = name_space;
        path_option_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-type")
    {
        path_option_type = value;
        path_option_type.value_namespace = name_space;
        path_option_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name = value;
        explicit_path_name.value_namespace = name_space;
        explicit_path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-path-id")
    {
        explicit_path_id = value;
        explicit_path_id.value_namespace = name_space;
        explicit_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown-duration")
    {
        holddown_duration = value;
        holddown_duration.value_namespace = name_space;
        holddown_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-address")
    {
        pce_address = value;
        pce_address.value_namespace = name_space;
        pce_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-option-area-id")
    {
        path_option_area_id = value;
        path_option_area_id.value_namespace = name_space;
        path_option_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-strict-explicit-path")
    {
        is_strict_explicit_path = value;
        is_strict_explicit_path.value_namespace = name_space;
        is_strict_explicit_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-helddown")
    {
        is_helddown = value;
        is_helddown.value_namespace = name_space;
        is_helddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lockdown")
    {
        is_lockdown = value;
        is_lockdown.value_namespace = name_space;
        is_lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-verbatim")
    {
        is_verbatim = value;
        is_verbatim.value_namespace = name_space;
        is_verbatim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-disabled")
    {
        is_disabled = value;
        is_disabled.value_namespace = name_space;
        is_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set = value;
        has_attribute_set.value_namespace = name_space;
        has_attribute_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-set-found")
    {
        attribute_set_found = value;
        attribute_set_found.value_namespace = name_space;
        attribute_set_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-xro-attribute-set")
    {
        has_xro_attribute_set = value;
        has_xro_attribute_set.value_namespace = name_space;
        has_xro_attribute_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xro-attribute-set-found")
    {
        xro_attribute_set_found = value;
        xro_attribute_set_found.value_namespace = name_space;
        xro_attribute_set_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-segment-routing")
    {
        is_segment_routing = value;
        is_segment_routing.value_namespace = name_space;
        is_segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-by-path-option-index")
    {
        protected_by_path_option_index = value;
        protected_by_path_option_index.value_namespace = name_space;
        protected_by_path_option_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restored-from-path-option-index")
    {
        restored_from_path_option_index = value;
        restored_from_path_option_index.value_namespace = name_space;
        restored_from_path_option_index.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option-index-is-valid")
    {
        option_index_is_valid.yfilter = yfilter;
    }
    if(value_path == "option-index")
    {
        option_index.yfilter = yfilter;
    }
    if(value_path == "path-option-name")
    {
        path_option_name.yfilter = yfilter;
    }
    if(value_path == "path-option-type")
    {
        path_option_type.yfilter = yfilter;
    }
    if(value_path == "explicit-path-name")
    {
        explicit_path_name.yfilter = yfilter;
    }
    if(value_path == "explicit-path-id")
    {
        explicit_path_id.yfilter = yfilter;
    }
    if(value_path == "holddown-duration")
    {
        holddown_duration.yfilter = yfilter;
    }
    if(value_path == "pce-address")
    {
        pce_address.yfilter = yfilter;
    }
    if(value_path == "path-option-area-id")
    {
        path_option_area_id.yfilter = yfilter;
    }
    if(value_path == "is-strict-explicit-path")
    {
        is_strict_explicit_path.yfilter = yfilter;
    }
    if(value_path == "is-helddown")
    {
        is_helddown.yfilter = yfilter;
    }
    if(value_path == "is-lockdown")
    {
        is_lockdown.yfilter = yfilter;
    }
    if(value_path == "is-verbatim")
    {
        is_verbatim.yfilter = yfilter;
    }
    if(value_path == "is-disabled")
    {
        is_disabled.yfilter = yfilter;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set.yfilter = yfilter;
    }
    if(value_path == "attribute-set-found")
    {
        attribute_set_found.yfilter = yfilter;
    }
    if(value_path == "has-xro-attribute-set")
    {
        has_xro_attribute_set.yfilter = yfilter;
    }
    if(value_path == "xro-attribute-set-found")
    {
        xro_attribute_set_found.yfilter = yfilter;
    }
    if(value_path == "is-segment-routing")
    {
        is_segment_routing.yfilter = yfilter;
    }
    if(value_path == "protected-by-path-option-index")
    {
        protected_by_path_option_index.yfilter = yfilter;
    }
    if(value_path == "restored-from-path-option-index")
    {
        restored_from_path_option_index.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set" || name == "xro-attribute-set" || name == "path-calculation-error" || name == "remerge-error" || name == "signalling-error" || name == "option-index-is-valid" || name == "option-index" || name == "path-option-name" || name == "path-option-type" || name == "explicit-path-name" || name == "explicit-path-id" || name == "holddown-duration" || name == "pce-address" || name == "path-option-area-id" || name == "is-strict-explicit-path" || name == "is-helddown" || name == "is-lockdown" || name == "is-verbatim" || name == "is-disabled" || name == "has-attribute-set" || name == "attribute-set-found" || name == "has-xro-attribute-set" || name == "xro-attribute-set-found" || name == "is-segment-routing" || name == "protected-by-path-option-index" || name == "restored-from-path-option-index")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSet()
    :
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_attribute_set_name_crc32{YType::uint32, "tunnel-attribute-set-name-crc32"}
    	,
    attribute_set_union(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion>())
{
    attribute_set_union->parent = this;

    yang_name = "attribute-set"; yang_parent_name = "active-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::~AttributeSet()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::has_data() const
{
    return tunnel_attribute_set_name.is_set
	|| tunnel_attribute_set_name_crc32.is_set
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name_crc32.yfilter)
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_attribute_set_name_crc32.is_set || is_set(tunnel_attribute_set_name_crc32.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name_crc32.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-union")
    {
        if(attribute_set_union == nullptr)
        {
            attribute_set_union = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion>();
        }
        return attribute_set_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_set_union != nullptr)
    {
        children["attribute-set-union"] = attribute_set_union;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
        tunnel_attribute_set_name.value_namespace = name_space;
        tunnel_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32 = value;
        tunnel_attribute_set_name_crc32.value_namespace = name_space;
        tunnel_attribute_set_name_crc32.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-union" || name == "tunnel-attribute-set-name" || name == "tunnel-attribute-set-name-crc32")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetUnion()
    :
    tunnel_attribute_set_type{YType::enumeration, "tunnel-attribute-set-type"}
    	,
    attribute_set_path_option(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption>())
	,attribute_set_autobackup(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>())
	,attribute_set_automesh(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>())
	,attribute_set_xro(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro>())
	,attribute_set_p2mpte(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte>())
	,attribute_set_aps_pp(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp>())
	,attribute_set_p2p_te(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe>())
{
    attribute_set_path_option->parent = this;
    attribute_set_autobackup->parent = this;
    attribute_set_automesh->parent = this;
    attribute_set_xro->parent = this;
    attribute_set_p2mpte->parent = this;
    attribute_set_aps_pp->parent = this;
    attribute_set_p2p_te->parent = this;

    yang_name = "attribute-set-union"; yang_parent_name = "attribute-set"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::~AttributeSetUnion()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::has_data() const
{
    return tunnel_attribute_set_type.is_set
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_data())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_data())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_data())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_data())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_data())
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_data())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_attribute_set_type.yfilter)
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_operation())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_operation())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_operation())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_operation())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_operation())
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_operation())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_type.is_set || is_set(tunnel_attribute_set_type.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-path-option")
    {
        if(attribute_set_path_option == nullptr)
        {
            attribute_set_path_option = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption>();
        }
        return attribute_set_path_option;
    }

    if(child_yang_name == "attribute-set-autobackup")
    {
        if(attribute_set_autobackup == nullptr)
        {
            attribute_set_autobackup = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>();
        }
        return attribute_set_autobackup;
    }

    if(child_yang_name == "attribute-set-automesh")
    {
        if(attribute_set_automesh == nullptr)
        {
            attribute_set_automesh = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>();
        }
        return attribute_set_automesh;
    }

    if(child_yang_name == "attribute-set-xro")
    {
        if(attribute_set_xro == nullptr)
        {
            attribute_set_xro = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetXro>();
        }
        return attribute_set_xro;
    }

    if(child_yang_name == "attribute-set-p2mpte")
    {
        if(attribute_set_p2mpte == nullptr)
        {
            attribute_set_p2mpte = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2Mpte>();
        }
        return attribute_set_p2mpte;
    }

    if(child_yang_name == "attribute-set-aps-pp")
    {
        if(attribute_set_aps_pp == nullptr)
        {
            attribute_set_aps_pp = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetApsPp>();
        }
        return attribute_set_aps_pp;
    }

    if(child_yang_name == "attribute-set-p2p-te")
    {
        if(attribute_set_p2p_te == nullptr)
        {
            attribute_set_p2p_te = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetP2PTe>();
        }
        return attribute_set_p2p_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_set_path_option != nullptr)
    {
        children["attribute-set-path-option"] = attribute_set_path_option;
    }

    if(attribute_set_autobackup != nullptr)
    {
        children["attribute-set-autobackup"] = attribute_set_autobackup;
    }

    if(attribute_set_automesh != nullptr)
    {
        children["attribute-set-automesh"] = attribute_set_automesh;
    }

    if(attribute_set_xro != nullptr)
    {
        children["attribute-set-xro"] = attribute_set_xro;
    }

    if(attribute_set_p2mpte != nullptr)
    {
        children["attribute-set-p2mpte"] = attribute_set_p2mpte;
    }

    if(attribute_set_aps_pp != nullptr)
    {
        children["attribute-set-aps-pp"] = attribute_set_aps_pp;
    }

    if(attribute_set_p2p_te != nullptr)
    {
        children["attribute-set-p2p-te"] = attribute_set_p2p_te;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type = value;
        tunnel_attribute_set_type.value_namespace = name_space;
        tunnel_attribute_set_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-path-option" || name == "attribute-set-autobackup" || name == "attribute-set-automesh" || name == "attribute-set-xro" || name == "attribute-set-p2mpte" || name == "attribute-set-aps-pp" || name == "attribute-set-p2p-te" || name == "tunnel-attribute-set-type")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::AttributeSetPathOption()
    :
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    cost_limit{YType::uint32, "cost-limit"},
    dste_class_type{YType::uint8, "dste-class-type"},
    bandwidth_type{YType::enumeration, "bandwidth-type"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_cost_limit_configured{YType::boolean, "is-cost-limit-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    generation{YType::uint32, "generation"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_invalidation_action{YType::uint32, "path-invalidation-action"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    exclude_list_name{YType::str, "exclude-list-name"},
    is_exclude_list_name_configured{YType::boolean, "is-exclude-list-name-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"},
    is_bfd_reverse_pat_configured{YType::boolean, "is-bfd-reverse-pat-configured"}
    	,
    affinity(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>())
	,bfd_reverse_path(std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>())
{
    affinity->parent = this;
    bfd_reverse_path->parent = this;

    yang_name = "attribute-set-path-option"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::~AttributeSetPathOption()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_data() const
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
    return configured_bandwidth.is_set
	|| cost_limit.is_set
	|| dste_class_type.is_set
	|| bandwidth_type.is_set
	|| is_bandwidth_configured.is_set
	|| is_cost_limit_configured.is_set
	|| is_affinity_configured.is_set
	|| generation.is_set
	|| path_invalidation_timeout.is_set
	|| path_invalidation_action.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| exclude_list_name.is_set
	|| is_exclude_list_name_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| pcedp_group_id.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| pcebd_source_address.is_set
	|| pcebd_group_id.is_set
	|| is_bfd_reverse_pat_configured.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_data());
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_operation() const
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
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(cost_limit.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(is_cost_limit_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(path_invalidation_action.yfilter)
	|| ydk::is_set(is_path_invalidation_timeout_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_action_configured.yfilter)
	|| ydk::is_set(exclude_list_name.yfilter)
	|| ydk::is_set(is_exclude_list_name_configured.yfilter)
	|| ydk::is_set(is_pce_configured.yfilter)
	|| ydk::is_set(is_pce_disj_source_configured.yfilter)
	|| ydk::is_set(is_pce_disj_type_configured.yfilter)
	|| ydk::is_set(is_pce_disj_group_id_configured.yfilter)
	|| ydk::is_set(pcedp_source_address.yfilter)
	|| ydk::is_set(pcedp_type.yfilter)
	|| ydk::is_set(pcedp_group_id.yfilter)
	|| ydk::is_set(is_pceb_dj_source_configured.yfilter)
	|| ydk::is_set(is_pcebd_group_id_configured.yfilter)
	|| ydk::is_set(pcebd_source_address.yfilter)
	|| ydk::is_set(pcebd_group_id.yfilter)
	|| ydk::is_set(is_bfd_reverse_pat_configured.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_operation());
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-path-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (cost_limit.is_set || is_set(cost_limit.yfilter)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_cost_limit_configured.is_set || is_set(is_cost_limit_configured.yfilter)) leaf_name_data.push_back(is_cost_limit_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_invalidation_action.is_set || is_set(path_invalidation_action.yfilter)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (exclude_list_name.is_set || is_set(exclude_list_name.yfilter)) leaf_name_data.push_back(exclude_list_name.get_name_leafdata());
    if (is_exclude_list_name_configured.is_set || is_set(is_exclude_list_name_configured.yfilter)) leaf_name_data.push_back(is_exclude_list_name_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.yfilter)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.yfilter)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.yfilter)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.yfilter)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.yfilter)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.yfilter)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.yfilter)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.yfilter)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());
    if (is_bfd_reverse_pat_configured.is_set || is_set(is_bfd_reverse_pat_configured.yfilter)) leaf_name_data.push_back(is_bfd_reverse_pat_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path == nullptr)
        {
            bfd_reverse_path = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo>();
        c->parent = this;
        version_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured = value;
        is_cost_limit_configured.value_namespace = name_space;
        is_cost_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
        path_invalidation_action.value_namespace = name_space;
        path_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
        is_path_invalidation_timeout_configured.value_namespace = name_space;
        is_path_invalidation_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
        is_path_invalidation_action_configured.value_namespace = name_space;
        is_path_invalidation_action_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name = value;
        exclude_list_name.value_namespace = name_space;
        exclude_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured = value;
        is_exclude_list_name_configured.value_namespace = name_space;
        is_exclude_list_name_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
        is_pce_configured.value_namespace = name_space;
        is_pce_configured.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
        is_pce_disj_group_id_configured.value_namespace = name_space;
        is_pce_disj_group_id_configured.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
        pcedp_group_id.value_namespace = name_space;
        pcedp_group_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
        pcebd_source_address.value_namespace = name_space;
        pcebd_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
        pcebd_group_id.value_namespace = name_space;
        pcebd_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured = value;
        is_bfd_reverse_pat_configured.value_namespace = name_space;
        is_bfd_reverse_pat_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured.yfilter = yfilter;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name.yfilter = yfilter;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type.yfilter = yfilter;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id.yfilter = yfilter;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address.yfilter = yfilter;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id.yfilter = yfilter;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "bfd-reverse-path" || name == "tunnel-id" || name == "version-info" || name == "configured-bandwidth" || name == "cost-limit" || name == "dste-class-type" || name == "bandwidth-type" || name == "is-bandwidth-configured" || name == "is-cost-limit-configured" || name == "is-affinity-configured" || name == "generation" || name == "path-invalidation-timeout" || name == "path-invalidation-action" || name == "is-path-invalidation-timeout-configured" || name == "is-path-invalidation-action-configured" || name == "exclude-list-name" || name == "is-exclude-list-name-configured" || name == "is-pce-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pce-disj-group-id-configured" || name == "pcedp-source-address" || name == "pcedp-type" || name == "pcedp-group-id" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "pcebd-source-address" || name == "pcebd-group-id" || name == "is-bfd-reverse-pat-configured")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::~Affinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_data() const
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_operation() const
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

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue>();
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
        auto c = std::make_shared<MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_children() const
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true;
}

MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    return entry.is_set;
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2PP2MpTunnel::TunnelHeads::TunnelHead::DelayCleanPpLsp::S2L::ActivePathOption::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}


}
}

