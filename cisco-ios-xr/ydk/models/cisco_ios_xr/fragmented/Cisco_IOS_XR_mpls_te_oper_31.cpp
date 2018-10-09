
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_31.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_32.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependList()
    :
    prepend_entry(this, {})
{

    yang_name = "prepend-list"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::~PrependList()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prepend_entry.len(); index++)
    {
        if(prepend_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::has_operation() const
{
    for (std::size_t index=0; index<prepend_entry.len(); index++)
    {
        if(prepend_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prepend-entry")
    {
        auto c = std::make_shared<MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry>();
        c->parent = this;
        prepend_entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : prepend_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepend-entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::PrependEntry()
    :
    type{YType::enumeration, "type"},
    index_{YType::uint32, "index"},
    next_label{YType::uint32, "next-label"}
{

    yang_name = "prepend-entry"; yang_parent_name = "prepend-list"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::~PrependEntry()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| index_.is_set
	|| next_label.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(next_label.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (next_label.is_set || is_set(next_label.yfilter)) leaf_name_data.push_back(next_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "index" || name == "next-label")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::~TunnelId()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::XroAttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::PathCalculationError()
    :
    error_message{YType::str, "error-message"},
    lsp_mode{YType::enumeration, "lsp-mode"},
    log_time{YType::uint32, "log-time"}
{

    yang_name = "path-calculation-error"; yang_parent_name = "path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::~PathCalculationError()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::has_data() const
{
    if (is_presence_container) return true;
    return error_message.is_set
	|| lsp_mode.is_set
	|| log_time.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(lsp_mode.yfilter)
	|| ydk::is_set(log_time.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-calculation-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.yfilter)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.yfilter)) leaf_name_data.push_back(log_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::PathCalculationError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-message" || name == "lsp-mode" || name == "log-time")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::RemergeError()
    :
    error_message{YType::str, "error-message"},
    lsp_mode{YType::enumeration, "lsp-mode"},
    log_time{YType::uint32, "log-time"}
{

    yang_name = "remerge-error"; yang_parent_name = "path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::~RemergeError()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::has_data() const
{
    if (is_presence_container) return true;
    return error_message.is_set
	|| lsp_mode.is_set
	|| log_time.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| ydk::is_set(lsp_mode.yfilter)
	|| ydk::is_set(log_time.yfilter);
}

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remerge-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.yfilter)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.yfilter)) leaf_name_data.push_back(log_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::RemergeError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-message" || name == "lsp-mode" || name == "log-time")
        return true;
    return false;
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::SignallingError()
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

    yang_name = "signalling-error"; yang_parent_name = "path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::~SignallingError()
{
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::has_data() const
{
    if (is_presence_container) return true;
    return error_node.is_set
	|| error.is_set
	|| sub_code.is_set
	|| lsp_mode.is_set
	|| log_time.is_set
	|| signalling_lsp_id.is_set
	|| error_message.is_set
	|| reverse_lsp.is_set;
}

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::has_operation() const
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

std::string MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::P2pP2mpTunnel::TunnelHeads::TunnelHead::Destination::PathOption::SignallingError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-node" || name == "error" || name == "sub-code" || name == "lsp-mode" || name == "log-time" || name == "signalling-lsp-id" || name == "error-message" || name == "reverse-lsp")
        return true;
    return false;
}

MplsTe::TopologyNodes::TopologyNodes()
    :
    topology_node(this, {"protocol", "igp_id", "area", "topology_node_type", "igp_node_id"})
{

    yang_name = "topology-nodes"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::TopologyNodes::~TopologyNodes()
{
}

bool MplsTe::TopologyNodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<topology_node.len(); index++)
    {
        if(topology_node[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::TopologyNodes::has_operation() const
{
    for (std::size_t index=0; index<topology_node.len(); index++)
    {
        if(topology_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::TopologyNodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TopologyNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-node")
    {
        auto c = std::make_shared<MplsTe::TopologyNodes::TopologyNode>();
        c->parent = this;
        topology_node.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : topology_node.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::TopologyNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::TopologyNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::TopologyNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-node")
        return true;
    return false;
}

MplsTe::TopologyNodes::TopologyNode::TopologyNode()
    :
    protocol{YType::enumeration, "protocol"},
    igp_id{YType::str, "igp-id"},
    area{YType::uint32, "area"},
    topology_node_type{YType::enumeration, "topology-node-type"},
    igp_node_id{YType::str, "igp-node-id"},
    topology_node_te_router_id{YType::str, "topology-node-te-router-id"},
    topology_node_overloaded{YType::boolean, "topology-node-overloaded"}
        ,
    topology_node_sid_and_srbg(std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg>())
    , topology_node_link(this, {})
{
    topology_node_sid_and_srbg->parent = this;

    yang_name = "topology-node"; yang_parent_name = "topology-nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::TopologyNodes::TopologyNode::~TopologyNode()
{
}

bool MplsTe::TopologyNodes::TopologyNode::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<topology_node_link.len(); index++)
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

bool MplsTe::TopologyNodes::TopologyNode::has_operation() const
{
    for (std::size_t index=0; index<topology_node_link.len(); index++)
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

std::string MplsTe::TopologyNodes::TopologyNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology-nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::TopologyNodes::TopologyNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-node";
    ADD_KEY_TOKEN(protocol, "protocol");
    ADD_KEY_TOKEN(igp_id, "igp-id");
    ADD_KEY_TOKEN(area, "area");
    ADD_KEY_TOKEN(topology_node_type, "topology-node-type");
    ADD_KEY_TOKEN(igp_node_id, "igp-node-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::TopologyNode::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-node-sid-and-srbg")
    {
        if(topology_node_sid_and_srbg == nullptr)
        {
            topology_node_sid_and_srbg = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg>();
        }
        return topology_node_sid_and_srbg;
    }

    if(child_yang_name == "topology-node-link")
    {
        auto c = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink>();
        c->parent = this;
        topology_node_link.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::TopologyNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(topology_node_sid_and_srbg != nullptr)
    {
        children["topology-node-sid-and-srbg"] = topology_node_sid_and_srbg;
    }

    count = 0;
    for (auto c : topology_node_link.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::TopologyNodes::TopologyNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::TopologyNodes::TopologyNode::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::TopologyNodes::TopologyNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-node-sid-and-srbg" || name == "topology-node-link" || name == "protocol" || name == "igp-id" || name == "area" || name == "topology-node-type" || name == "igp-node-id" || name == "topology-node-te-router-id" || name == "topology-node-overloaded")
        return true;
    return false;
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::TopologyNodeSidAndSrbg()
    :
    segment_id{YType::uint32, "segment-id"},
    segment_id_local_absolute_value{YType::uint32, "segment-id-local-absolute-value"},
    srgb_start{YType::uint32, "srgb-start"},
    srgb_size{YType::uint32, "srgb-size"}
{

    yang_name = "topology-node-sid-and-srbg"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::~TopologyNodeSidAndSrbg()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::has_data() const
{
    if (is_presence_container) return true;
    return segment_id.is_set
	|| segment_id_local_absolute_value.is_set
	|| srgb_start.is_set
	|| srgb_size.is_set;
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_id.yfilter)
	|| ydk::is_set(segment_id_local_absolute_value.yfilter)
	|| ydk::is_set(srgb_start.yfilter)
	|| ydk::is_set(srgb_size.yfilter);
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-node-sid-and-srbg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_id.is_set || is_set(segment_id.yfilter)) leaf_name_data.push_back(segment_id.get_name_leafdata());
    if (segment_id_local_absolute_value.is_set || is_set(segment_id_local_absolute_value.yfilter)) leaf_name_data.push_back(segment_id_local_absolute_value.get_name_leafdata());
    if (srgb_start.is_set || is_set(srgb_start.yfilter)) leaf_name_data.push_back(srgb_start.get_name_leafdata());
    if (srgb_size.is_set || is_set(srgb_size.yfilter)) leaf_name_data.push_back(srgb_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeSidAndSrbg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-id" || name == "segment-id-local-absolute-value" || name == "srgb-start" || name == "srgb-size")
        return true;
    return false;
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyNodeLink()
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
    topology_link_bandwidth_model{YType::enumeration, "topology-link-bandwidth-model"},
    delay_variation{YType::uint32, "delay-variation"},
    residual_bandwidth{YType::uint32, "residual-bandwidth"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    utilized_bandwidth{YType::uint32, "utilized-bandwidth"}
        ,
    topology_link_bandwidth(std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth>())
    , odu_link_capabilities(std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities>())
    , min_max_delay(std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::MinMaxDelay>())
    , loss(std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::Loss>())
    , topology_link_extended_affinity_bit(this, {})
    , shared_risk_link_group(this, {})
    , adjacency_sid(this, {})
{
    topology_link_bandwidth->parent = this;
    odu_link_capabilities->parent = this;
    min_max_delay->parent = this;
    loss->parent = this;

    yang_name = "topology-node-link"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::~TopologyNodeLink()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<topology_link_extended_affinity_bit.len(); index++)
    {
        if(topology_link_extended_affinity_bit[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.len(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<adjacency_sid.len(); index++)
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
	|| delay_variation.is_set
	|| residual_bandwidth.is_set
	|| available_bandwidth.is_set
	|| utilized_bandwidth.is_set
	|| (topology_link_bandwidth !=  nullptr && topology_link_bandwidth->has_data())
	|| (odu_link_capabilities !=  nullptr && odu_link_capabilities->has_data())
	|| (min_max_delay !=  nullptr && min_max_delay->has_data())
	|| (loss !=  nullptr && loss->has_data());
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::has_operation() const
{
    for (std::size_t index=0; index<topology_link_extended_affinity_bit.len(); index++)
    {
        if(topology_link_extended_affinity_bit[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.len(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<adjacency_sid.len(); index++)
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
	|| ydk::is_set(delay_variation.yfilter)
	|| ydk::is_set(residual_bandwidth.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(utilized_bandwidth.yfilter)
	|| (topology_link_bandwidth !=  nullptr && topology_link_bandwidth->has_operation())
	|| (odu_link_capabilities !=  nullptr && odu_link_capabilities->has_operation())
	|| (min_max_delay !=  nullptr && min_max_delay->has_operation())
	|| (loss !=  nullptr && loss->has_operation());
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-node-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::get_name_leaf_data() const
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
    if (delay_variation.is_set || is_set(delay_variation.yfilter)) leaf_name_data.push_back(delay_variation.get_name_leafdata());
    if (residual_bandwidth.is_set || is_set(residual_bandwidth.yfilter)) leaf_name_data.push_back(residual_bandwidth.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (utilized_bandwidth.is_set || is_set(utilized_bandwidth.yfilter)) leaf_name_data.push_back(utilized_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-link-bandwidth")
    {
        if(topology_link_bandwidth == nullptr)
        {
            topology_link_bandwidth = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth>();
        }
        return topology_link_bandwidth;
    }

    if(child_yang_name == "odu-link-capabilities")
    {
        if(odu_link_capabilities == nullptr)
        {
            odu_link_capabilities = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities>();
        }
        return odu_link_capabilities;
    }

    if(child_yang_name == "min-max-delay")
    {
        if(min_max_delay == nullptr)
        {
            min_max_delay = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::MinMaxDelay>();
        }
        return min_max_delay;
    }

    if(child_yang_name == "loss")
    {
        if(loss == nullptr)
        {
            loss = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::Loss>();
        }
        return loss;
    }

    if(child_yang_name == "topology-link-extended-affinity-bit")
    {
        auto c = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit>();
        c->parent = this;
        topology_link_extended_affinity_bit.append(c);
        return c;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        auto c = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.append(c);
        return c;
    }

    if(child_yang_name == "adjacency-sid")
    {
        auto c = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid>();
        c->parent = this;
        adjacency_sid.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::get_children() const
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

    if(min_max_delay != nullptr)
    {
        children["min-max-delay"] = min_max_delay;
    }

    if(loss != nullptr)
    {
        children["loss"] = loss;
    }

    count = 0;
    for (auto c : topology_link_extended_affinity_bit.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : shared_risk_link_group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : adjacency_sid.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "delay-variation")
    {
        delay_variation = value;
        delay_variation.value_namespace = name_space;
        delay_variation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "residual-bandwidth")
    {
        residual_bandwidth = value;
        residual_bandwidth.value_namespace = name_space;
        residual_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utilized-bandwidth")
    {
        utilized_bandwidth = value;
        utilized_bandwidth.value_namespace = name_space;
        utilized_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "delay-variation")
    {
        delay_variation.yfilter = yfilter;
    }
    if(value_path == "residual-bandwidth")
    {
        residual_bandwidth.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "utilized-bandwidth")
    {
        utilized_bandwidth.yfilter = yfilter;
    }
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-link-bandwidth" || name == "odu-link-capabilities" || name == "min-max-delay" || name == "loss" || name == "topology-link-extended-affinity-bit" || name == "shared-risk-link-group" || name == "adjacency-sid" || name == "topology-link-type" || name == "topology-link-interface-address" || name == "topology-link-interface-id" || name == "topology-link-neighbor-address" || name == "topology-link-neighbor-id" || name == "topology-link-neighbor-system-id" || name == "topology-link-neighbor-node-id" || name == "topology-link-neighbor-generation" || name == "topology-link-fragment-id" || name == "topology-link-te-metric" || name == "topology-link-igp-metric" || name == "topology-link-uni-delay" || name == "topology-link-affinity-bits" || name == "topology-link-switching-capability" || name == "topology-link-encoding" || name == "topology-link-bandwidth-model" || name == "delay-variation" || name == "residual-bandwidth" || name == "available-bandwidth" || name == "utilized-bandwidth")
        return true;
    return false;
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidth()
    :
    bandwidth_migration_mode{YType::enumeration, "bandwidth-migration-mode"}
        ,
    topology_link_bandwidth_prestandard(std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard>())
    , topology_link_bandwidth_standard(std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard>())
{
    topology_link_bandwidth_prestandard->parent = this;
    topology_link_bandwidth_standard->parent = this;

    yang_name = "topology-link-bandwidth"; yang_parent_name = "topology-node-link"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::~TopologyLinkBandwidth()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return bandwidth_migration_mode.is_set
	|| (topology_link_bandwidth_prestandard !=  nullptr && topology_link_bandwidth_prestandard->has_data())
	|| (topology_link_bandwidth_standard !=  nullptr && topology_link_bandwidth_standard->has_data());
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_migration_mode.yfilter)
	|| (topology_link_bandwidth_prestandard !=  nullptr && topology_link_bandwidth_prestandard->has_operation())
	|| (topology_link_bandwidth_standard !=  nullptr && topology_link_bandwidth_standard->has_operation());
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_migration_mode.is_set || is_set(bandwidth_migration_mode.yfilter)) leaf_name_data.push_back(bandwidth_migration_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-link-bandwidth-prestandard")
    {
        if(topology_link_bandwidth_prestandard == nullptr)
        {
            topology_link_bandwidth_prestandard = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard>();
        }
        return topology_link_bandwidth_prestandard;
    }

    if(child_yang_name == "topology-link-bandwidth-standard")
    {
        if(topology_link_bandwidth_standard == nullptr)
        {
            topology_link_bandwidth_standard = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard>();
        }
        return topology_link_bandwidth_standard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::get_children() const
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

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-migration-mode")
    {
        bandwidth_migration_mode = value;
        bandwidth_migration_mode.value_namespace = name_space;
        bandwidth_migration_mode.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-migration-mode")
    {
        bandwidth_migration_mode.yfilter = yfilter;
    }
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-link-bandwidth-prestandard" || name == "topology-link-bandwidth-standard" || name == "bandwidth-migration-mode")
        return true;
    return false;
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

    yang_name = "topology-link-bandwidth-prestandard"; yang_parent_name = "topology-link-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::~TopologyLinkBandwidthPrestandard()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::has_data() const
{
    if (is_presence_container) return true;
    return topology_link_prestandard_bandwidth_physical.is_set
	|| topology_link_prestandard_bandwidth_reservation_global.is_set
	|| topology_link_prestandard_bandwidth_reservation_subpool.is_set
	|| (topology_link_prestandard_bandwidth_detail !=  nullptr && topology_link_prestandard_bandwidth_detail->has_data());
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topology_link_prestandard_bandwidth_physical.yfilter)
	|| ydk::is_set(topology_link_prestandard_bandwidth_reservation_global.yfilter)
	|| ydk::is_set(topology_link_prestandard_bandwidth_reservation_subpool.yfilter)
	|| (topology_link_prestandard_bandwidth_detail !=  nullptr && topology_link_prestandard_bandwidth_detail->has_operation());
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-bandwidth-prestandard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology_link_prestandard_bandwidth_physical.is_set || is_set(topology_link_prestandard_bandwidth_physical.yfilter)) leaf_name_data.push_back(topology_link_prestandard_bandwidth_physical.get_name_leafdata());
    if (topology_link_prestandard_bandwidth_reservation_global.is_set || is_set(topology_link_prestandard_bandwidth_reservation_global.yfilter)) leaf_name_data.push_back(topology_link_prestandard_bandwidth_reservation_global.get_name_leafdata());
    if (topology_link_prestandard_bandwidth_reservation_subpool.is_set || is_set(topology_link_prestandard_bandwidth_reservation_subpool.yfilter)) leaf_name_data.push_back(topology_link_prestandard_bandwidth_reservation_subpool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-link-prestandard-bandwidth-detail")
    {
        if(topology_link_prestandard_bandwidth_detail == nullptr)
        {
            topology_link_prestandard_bandwidth_detail = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail>();
        }
        return topology_link_prestandard_bandwidth_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(topology_link_prestandard_bandwidth_detail != nullptr)
    {
        children["topology-link-prestandard-bandwidth-detail"] = topology_link_prestandard_bandwidth_detail;
    }

    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-link-prestandard-bandwidth-detail" || name == "topology-link-prestandard-bandwidth-physical" || name == "topology-link-prestandard-bandwidth-reservation-global" || name == "topology-link-prestandard-bandwidth-reservation-subpool")
        return true;
    return false;
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthDetail()
    :
    topology_link_prestandard_bandwidth_allocated(this, {})
    , topology_link_prestandard_bandwidth_available_global(this, {})
    , topology_link_prestandard_bandwidth_available_subpool(this, {})
{

    yang_name = "topology-link-prestandard-bandwidth-detail"; yang_parent_name = "topology-link-bandwidth-prestandard"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::~TopologyLinkPrestandardBandwidthDetail()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<topology_link_prestandard_bandwidth_allocated.len(); index++)
    {
        if(topology_link_prestandard_bandwidth_allocated[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<topology_link_prestandard_bandwidth_available_global.len(); index++)
    {
        if(topology_link_prestandard_bandwidth_available_global[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<topology_link_prestandard_bandwidth_available_subpool.len(); index++)
    {
        if(topology_link_prestandard_bandwidth_available_subpool[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::has_operation() const
{
    for (std::size_t index=0; index<topology_link_prestandard_bandwidth_allocated.len(); index++)
    {
        if(topology_link_prestandard_bandwidth_allocated[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<topology_link_prestandard_bandwidth_available_global.len(); index++)
    {
        if(topology_link_prestandard_bandwidth_available_global[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<topology_link_prestandard_bandwidth_available_subpool.len(); index++)
    {
        if(topology_link_prestandard_bandwidth_available_subpool[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-prestandard-bandwidth-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-link-prestandard-bandwidth-allocated")
    {
        auto c = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated>();
        c->parent = this;
        topology_link_prestandard_bandwidth_allocated.append(c);
        return c;
    }

    if(child_yang_name == "topology-link-prestandard-bandwidth-available-global")
    {
        auto c = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal>();
        c->parent = this;
        topology_link_prestandard_bandwidth_available_global.append(c);
        return c;
    }

    if(child_yang_name == "topology-link-prestandard-bandwidth-available-subpool")
    {
        auto c = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool>();
        c->parent = this;
        topology_link_prestandard_bandwidth_available_subpool.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : topology_link_prestandard_bandwidth_allocated.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : topology_link_prestandard_bandwidth_available_global.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : topology_link_prestandard_bandwidth_available_subpool.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-link-prestandard-bandwidth-allocated" || name == "topology-link-prestandard-bandwidth-available-global" || name == "topology-link-prestandard-bandwidth-available-subpool")
        return true;
    return false;
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::TopologyLinkPrestandardBandwidthAllocated()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "topology-link-prestandard-bandwidth-allocated"; yang_parent_name = "topology-link-prestandard-bandwidth-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::~TopologyLinkPrestandardBandwidthAllocated()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-prestandard-bandwidth-allocated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAllocated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::TopologyLinkPrestandardBandwidthAvailableGlobal()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "topology-link-prestandard-bandwidth-available-global"; yang_parent_name = "topology-link-prestandard-bandwidth-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::~TopologyLinkPrestandardBandwidthAvailableGlobal()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-prestandard-bandwidth-available-global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableGlobal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::TopologyLinkPrestandardBandwidthAvailableSubpool()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "topology-link-prestandard-bandwidth-available-subpool"; yang_parent_name = "topology-link-prestandard-bandwidth-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::~TopologyLinkPrestandardBandwidthAvailableSubpool()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-prestandard-bandwidth-available-subpool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthPrestandard::TopologyLinkPrestandardBandwidthDetail::TopologyLinkPrestandardBandwidthAvailableSubpool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
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

    yang_name = "topology-link-bandwidth-standard"; yang_parent_name = "topology-link-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::~TopologyLinkBandwidthStandard()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::has_data() const
{
    if (is_presence_container) return true;
    return topo_link_std_bw_physical.is_set
	|| topo_link_std_bw_res_max.is_set
	|| topo_link_std_bw_res_pool0.is_set
	|| topo_link_std_bw_res_pool1.is_set
	|| (topo_link_std_bw_detail !=  nullptr && topo_link_std_bw_detail->has_data());
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(topo_link_std_bw_physical.yfilter)
	|| ydk::is_set(topo_link_std_bw_res_max.yfilter)
	|| ydk::is_set(topo_link_std_bw_res_pool0.yfilter)
	|| ydk::is_set(topo_link_std_bw_res_pool1.yfilter)
	|| (topo_link_std_bw_detail !=  nullptr && topo_link_std_bw_detail->has_operation());
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-bandwidth-standard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topo_link_std_bw_physical.is_set || is_set(topo_link_std_bw_physical.yfilter)) leaf_name_data.push_back(topo_link_std_bw_physical.get_name_leafdata());
    if (topo_link_std_bw_res_max.is_set || is_set(topo_link_std_bw_res_max.yfilter)) leaf_name_data.push_back(topo_link_std_bw_res_max.get_name_leafdata());
    if (topo_link_std_bw_res_pool0.is_set || is_set(topo_link_std_bw_res_pool0.yfilter)) leaf_name_data.push_back(topo_link_std_bw_res_pool0.get_name_leafdata());
    if (topo_link_std_bw_res_pool1.is_set || is_set(topo_link_std_bw_res_pool1.yfilter)) leaf_name_data.push_back(topo_link_std_bw_res_pool1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topo-link-std-bw-detail")
    {
        if(topo_link_std_bw_detail == nullptr)
        {
            topo_link_std_bw_detail = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail>();
        }
        return topo_link_std_bw_detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(topo_link_std_bw_detail != nullptr)
    {
        children["topo-link-std-bw-detail"] = topo_link_std_bw_detail;
    }

    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topo-link-std-bw-detail" || name == "topo-link-std-bw-physical" || name == "topo-link-std-bw-res-max" || name == "topo-link-std-bw-res-pool0" || name == "topo-link-std-bw-res-pool1")
        return true;
    return false;
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwDetail()
    :
    topo_link_std_bw_allocated(this, {})
    , topo_link_std_bw_available(this, {})
{

    yang_name = "topo-link-std-bw-detail"; yang_parent_name = "topology-link-bandwidth-standard"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::~TopoLinkStdBwDetail()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<topo_link_std_bw_allocated.len(); index++)
    {
        if(topo_link_std_bw_allocated[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<topo_link_std_bw_available.len(); index++)
    {
        if(topo_link_std_bw_available[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::has_operation() const
{
    for (std::size_t index=0; index<topo_link_std_bw_allocated.len(); index++)
    {
        if(topo_link_std_bw_allocated[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<topo_link_std_bw_available.len(); index++)
    {
        if(topo_link_std_bw_available[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topo-link-std-bw-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topo-link-std-bw-allocated")
    {
        auto c = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated>();
        c->parent = this;
        topo_link_std_bw_allocated.append(c);
        return c;
    }

    if(child_yang_name == "topo-link-std-bw-available")
    {
        auto c = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable>();
        c->parent = this;
        topo_link_std_bw_available.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : topo_link_std_bw_allocated.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : topo_link_std_bw_available.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topo-link-std-bw-allocated" || name == "topo-link-std-bw-available")
        return true;
    return false;
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::TopoLinkStdBwAllocated()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "topo-link-std-bw-allocated"; yang_parent_name = "topo-link-std-bw-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::~TopoLinkStdBwAllocated()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topo-link-std-bw-allocated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAllocated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::TopoLinkStdBwAvailable()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "topo-link-std-bw-available"; yang_parent_name = "topo-link-std-bw-detail"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::~TopoLinkStdBwAvailable()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topo-link-std-bw-available";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkBandwidth::TopologyLinkBandwidthStandard::TopoLinkStdBwDetail::TopoLinkStdBwAvailable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduLinkCapabilities()
    :
    max_lsp_bandwidth(this, {})
    , odu_capability(this, {})
{

    yang_name = "odu-link-capabilities"; yang_parent_name = "topology-node-link"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::~OduLinkCapabilities()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<max_lsp_bandwidth.len(); index++)
    {
        if(max_lsp_bandwidth[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<odu_capability.len(); index++)
    {
        if(odu_capability[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::has_operation() const
{
    for (std::size_t index=0; index<max_lsp_bandwidth.len(); index++)
    {
        if(max_lsp_bandwidth[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<odu_capability.len(); index++)
    {
        if(odu_capability[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-link-capabilities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-lsp-bandwidth")
    {
        auto c = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth>();
        c->parent = this;
        max_lsp_bandwidth.append(c);
        return c;
    }

    if(child_yang_name == "odu-capability")
    {
        auto c = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability>();
        c->parent = this;
        odu_capability.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : max_lsp_bandwidth.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : odu_capability.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-lsp-bandwidth" || name == "odu-capability")
        return true;
    return false;
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::MaxLspBandwidth()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "max-lsp-bandwidth"; yang_parent_name = "odu-link-capabilities"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::~MaxLspBandwidth()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-lsp-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::MaxLspBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::OduCapability()
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
    bandwidth_info(std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo>())
{
    bandwidth_info->parent = this;

    yang_name = "odu-capability"; yang_parent_name = "odu-link-capabilities"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::~OduCapability()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::has_data() const
{
    if (is_presence_container) return true;
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

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::has_operation() const
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

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-info")
    {
        if(bandwidth_info == nullptr)
        {
            bandwidth_info = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo>();
        }
        return bandwidth_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bandwidth_info != nullptr)
    {
        children["bandwidth-info"] = bandwidth_info;
    }

    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-info" || name == "signal-type" || name == "stage1" || name == "stage2" || name == "stage3" || name == "stage4" || name == "terminable" || name == "switchable" || name == "tsg1p25" || name == "tsg2p5" || name == "vcat-capable" || name == "lcas-capable")
        return true;
    return false;
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::BandwidthInfo()
    :
    type{YType::enumeration, "type"}
        ,
    fixed(std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed>())
    , flex(std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex>())
{
    fixed->parent = this;
    flex->parent = this;

    yang_name = "bandwidth-info"; yang_parent_name = "odu-capability"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::~BandwidthInfo()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (fixed !=  nullptr && fixed->has_data())
	|| (flex !=  nullptr && flex->has_data());
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (fixed !=  nullptr && fixed->has_operation())
	|| (flex !=  nullptr && flex->has_operation());
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fixed")
    {
        if(fixed == nullptr)
        {
            fixed = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed>();
        }
        return fixed;
    }

    if(child_yang_name == "flex")
    {
        if(flex == nullptr)
        {
            flex = std::make_shared<MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex>();
        }
        return flex;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_children() const
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

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed" || name == "flex" || name == "type")
        return true;
    return false;
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::Fixed()
    :
    maximum_od_us{YType::uint8, "maximum-od-us"},
    unreserved_od_us{YType::uint8, "unreserved-od-us"}
{

    yang_name = "fixed"; yang_parent_name = "bandwidth-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::~Fixed()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_data() const
{
    if (is_presence_container) return true;
    return maximum_od_us.is_set
	|| unreserved_od_us.is_set;
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_od_us.yfilter)
	|| ydk::is_set(unreserved_od_us.yfilter);
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_od_us.is_set || is_set(maximum_od_us.yfilter)) leaf_name_data.push_back(maximum_od_us.get_name_leafdata());
    if (unreserved_od_us.is_set || is_set(unreserved_od_us.yfilter)) leaf_name_data.push_back(unreserved_od_us.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-od-us" || name == "unreserved-od-us")
        return true;
    return false;
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::Flex()
    :
    max_bandwidth{YType::uint32, "max-bandwidth"},
    unreserved_bandwidth{YType::uint32, "unreserved-bandwidth"},
    max_lsp_bandwidth{YType::uint32, "max-lsp-bandwidth"}
{

    yang_name = "flex"; yang_parent_name = "bandwidth-info"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::~Flex()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_data() const
{
    if (is_presence_container) return true;
    return max_bandwidth.is_set
	|| unreserved_bandwidth.is_set
	|| max_lsp_bandwidth.is_set;
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_bandwidth.yfilter)
	|| ydk::is_set(unreserved_bandwidth.yfilter)
	|| ydk::is_set(max_lsp_bandwidth.yfilter);
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_bandwidth.is_set || is_set(max_bandwidth.yfilter)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (unreserved_bandwidth.is_set || is_set(unreserved_bandwidth.yfilter)) leaf_name_data.push_back(unreserved_bandwidth.get_name_leafdata());
    if (max_lsp_bandwidth.is_set || is_set(max_lsp_bandwidth.yfilter)) leaf_name_data.push_back(max_lsp_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-bandwidth" || name == "unreserved-bandwidth" || name == "max-lsp-bandwidth")
        return true;
    return false;
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::MinMaxDelay::MinMaxDelay()
    :
    anomalous_bit{YType::boolean, "anomalous-bit"},
    minimum_delay{YType::uint32, "minimum-delay"},
    maximum_delay{YType::uint32, "maximum-delay"}
{

    yang_name = "min-max-delay"; yang_parent_name = "topology-node-link"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::MinMaxDelay::~MinMaxDelay()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::MinMaxDelay::has_data() const
{
    if (is_presence_container) return true;
    return anomalous_bit.is_set
	|| minimum_delay.is_set
	|| maximum_delay.is_set;
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::MinMaxDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(anomalous_bit.yfilter)
	|| ydk::is_set(minimum_delay.yfilter)
	|| ydk::is_set(maximum_delay.yfilter);
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::MinMaxDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-max-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::MinMaxDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anomalous_bit.is_set || is_set(anomalous_bit.yfilter)) leaf_name_data.push_back(anomalous_bit.get_name_leafdata());
    if (minimum_delay.is_set || is_set(minimum_delay.yfilter)) leaf_name_data.push_back(minimum_delay.get_name_leafdata());
    if (maximum_delay.is_set || is_set(maximum_delay.yfilter)) leaf_name_data.push_back(maximum_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::MinMaxDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::MinMaxDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::MinMaxDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "anomalous-bit")
    {
        anomalous_bit = value;
        anomalous_bit.value_namespace = name_space;
        anomalous_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-delay")
    {
        minimum_delay = value;
        minimum_delay.value_namespace = name_space;
        minimum_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-delay")
    {
        maximum_delay = value;
        maximum_delay.value_namespace = name_space;
        maximum_delay.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::MinMaxDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "anomalous-bit")
    {
        anomalous_bit.yfilter = yfilter;
    }
    if(value_path == "minimum-delay")
    {
        minimum_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-delay")
    {
        maximum_delay.yfilter = yfilter;
    }
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::MinMaxDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anomalous-bit" || name == "minimum-delay" || name == "maximum-delay")
        return true;
    return false;
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::Loss::Loss()
    :
    anomalous_bit{YType::boolean, "anomalous-bit"},
    loss_value{YType::uint32, "loss-value"}
{

    yang_name = "loss"; yang_parent_name = "topology-node-link"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::Loss::~Loss()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::Loss::has_data() const
{
    if (is_presence_container) return true;
    return anomalous_bit.is_set
	|| loss_value.is_set;
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::Loss::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(anomalous_bit.yfilter)
	|| ydk::is_set(loss_value.yfilter);
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::Loss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::Loss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anomalous_bit.is_set || is_set(anomalous_bit.yfilter)) leaf_name_data.push_back(anomalous_bit.get_name_leafdata());
    if (loss_value.is_set || is_set(loss_value.yfilter)) leaf_name_data.push_back(loss_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::Loss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::Loss::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::Loss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "anomalous-bit")
    {
        anomalous_bit = value;
        anomalous_bit.value_namespace = name_space;
        anomalous_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loss-value")
    {
        loss_value = value;
        loss_value.value_namespace = name_space;
        loss_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::Loss::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "anomalous-bit")
    {
        anomalous_bit.yfilter = yfilter;
    }
    if(value_path == "loss-value")
    {
        loss_value.yfilter = yfilter;
    }
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::Loss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anomalous-bit" || name == "loss-value")
        return true;
    return false;
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit::TopologyLinkExtendedAffinityBit()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "topology-link-extended-affinity-bit"; yang_parent_name = "topology-node-link"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit::~TopologyLinkExtendedAffinityBit()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-link-extended-affinity-bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::TopologyLinkExtendedAffinityBit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "topology-node-link"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::has_data() const
{
    if (is_presence_container) return true;
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::AdjacencySid()
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

MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::~AdjacencySid()
{
}

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::has_data() const
{
    if (is_presence_container) return true;
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

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::has_operation() const
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

std::string MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid" || name == "link-type" || name == "local-addr" || name == "remote-addr" || name == "nbr-node-igpid" || name == "nbr-node-te-router-id" || name == "flag-f" || name == "flag-b" || name == "flag-v" || name == "flag-l" || name == "flag-s")
        return true;
    return false;
}

MplsTe::AnnounceTunnelsInfo::AnnounceTunnelsInfo()
    :
    autoroute_announce_table(std::make_shared<MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable>())
    , all_autoroute_table(std::make_shared<MplsTe::AnnounceTunnelsInfo::AllAutorouteTable>())
{
    autoroute_announce_table->parent = this;
    all_autoroute_table->parent = this;

    yang_name = "announce-tunnels-info"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AnnounceTunnelsInfo::~AnnounceTunnelsInfo()
{
}

bool MplsTe::AnnounceTunnelsInfo::has_data() const
{
    if (is_presence_container) return true;
    return (autoroute_announce_table !=  nullptr && autoroute_announce_table->has_data())
	|| (all_autoroute_table !=  nullptr && all_autoroute_table->has_data());
}

bool MplsTe::AnnounceTunnelsInfo::has_operation() const
{
    return is_set(yfilter)
	|| (autoroute_announce_table !=  nullptr && autoroute_announce_table->has_operation())
	|| (all_autoroute_table !=  nullptr && all_autoroute_table->has_operation());
}

std::string MplsTe::AnnounceTunnelsInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AnnounceTunnelsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce-tunnels-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AnnounceTunnelsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AnnounceTunnelsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoroute-announce-table")
    {
        if(autoroute_announce_table == nullptr)
        {
            autoroute_announce_table = std::make_shared<MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable>();
        }
        return autoroute_announce_table;
    }

    if(child_yang_name == "all-autoroute-table")
    {
        if(all_autoroute_table == nullptr)
        {
            all_autoroute_table = std::make_shared<MplsTe::AnnounceTunnelsInfo::AllAutorouteTable>();
        }
        return all_autoroute_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AnnounceTunnelsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(autoroute_announce_table != nullptr)
    {
        children["autoroute-announce-table"] = autoroute_announce_table;
    }

    if(all_autoroute_table != nullptr)
    {
        children["all-autoroute-table"] = all_autoroute_table;
    }

    return children;
}

void MplsTe::AnnounceTunnelsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::AnnounceTunnelsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::AnnounceTunnelsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autoroute-announce-table" || name == "all-autoroute-table")
        return true;
    return false;
}

MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AutorouteAnnounceTable()
    :
    announce_dest(this, {"destination_address", "protocol", "area", "igp_id"})
{

    yang_name = "autoroute-announce-table"; yang_parent_name = "announce-tunnels-info"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::~AutorouteAnnounceTable()
{
}

bool MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<announce_dest.len(); index++)
    {
        if(announce_dest[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::has_operation() const
{
    for (std::size_t index=0; index<announce_dest.len(); index++)
    {
        if(announce_dest[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/announce-tunnels-info/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute-announce-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "announce-dest")
    {
        auto c = std::make_shared<MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest>();
        c->parent = this;
        announce_dest.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : announce_dest.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announce-dest")
        return true;
    return false;
}

MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::AnnounceDest()
    :
    destination_address{YType::str, "destination-address"},
    protocol{YType::enumeration, "protocol"},
    area{YType::uint32, "area"},
    igp_id{YType::str, "igp-id"},
    igp_type{YType::enumeration, "igp-type"},
    igp_instance{YType::str, "igp-instance"},
    igp_area{YType::uint32, "igp-area"},
    destination{YType::str, "destination"},
    announced_tunnels_count{YType::uint16, "announced-tunnels-count"},
    autorouted_tunnels_count{YType::uint16, "autorouted-tunnels-count"},
    forwarding_adjacency_tunnels_count{YType::uint16, "forwarding-adjacency-tunnels-count"},
    area_format{YType::enumeration, "area-format"}
        ,
    total_tunnel(this, {})
{

    yang_name = "announce-dest"; yang_parent_name = "autoroute-announce-table"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::~AnnounceDest()
{
}

bool MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<total_tunnel.len(); index++)
    {
        if(total_tunnel[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| protocol.is_set
	|| area.is_set
	|| igp_id.is_set
	|| igp_type.is_set
	|| igp_instance.is_set
	|| igp_area.is_set
	|| destination.is_set
	|| announced_tunnels_count.is_set
	|| autorouted_tunnels_count.is_set
	|| forwarding_adjacency_tunnels_count.is_set
	|| area_format.is_set;
}

bool MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::has_operation() const
{
    for (std::size_t index=0; index<total_tunnel.len(); index++)
    {
        if(total_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(igp_instance.yfilter)
	|| ydk::is_set(igp_area.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(announced_tunnels_count.yfilter)
	|| ydk::is_set(autorouted_tunnels_count.yfilter)
	|| ydk::is_set(forwarding_adjacency_tunnels_count.yfilter)
	|| ydk::is_set(area_format.yfilter);
}

std::string MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/announce-tunnels-info/autoroute-announce-table/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce-dest";
    ADD_KEY_TOKEN(destination_address, "destination-address");
    ADD_KEY_TOKEN(protocol, "protocol");
    ADD_KEY_TOKEN(area, "area");
    ADD_KEY_TOKEN(igp_id, "igp-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.yfilter)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (igp_area.is_set || is_set(igp_area.yfilter)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (announced_tunnels_count.is_set || is_set(announced_tunnels_count.yfilter)) leaf_name_data.push_back(announced_tunnels_count.get_name_leafdata());
    if (autorouted_tunnels_count.is_set || is_set(autorouted_tunnels_count.yfilter)) leaf_name_data.push_back(autorouted_tunnels_count.get_name_leafdata());
    if (forwarding_adjacency_tunnels_count.is_set || is_set(forwarding_adjacency_tunnels_count.yfilter)) leaf_name_data.push_back(forwarding_adjacency_tunnels_count.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "total-tunnel")
    {
        auto c = std::make_shared<MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel>();
        c->parent = this;
        total_tunnel.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : total_tunnel.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
        igp_instance.value_namespace = name_space;
        igp_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area")
    {
        igp_area = value;
        igp_area.value_namespace = name_space;
        igp_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announced-tunnels-count")
    {
        announced_tunnels_count = value;
        announced_tunnels_count.value_namespace = name_space;
        announced_tunnels_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorouted-tunnels-count")
    {
        autorouted_tunnels_count = value;
        autorouted_tunnels_count.value_namespace = name_space;
        autorouted_tunnels_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-adjacency-tunnels-count")
    {
        forwarding_adjacency_tunnels_count = value;
        forwarding_adjacency_tunnels_count.value_namespace = name_space;
        forwarding_adjacency_tunnels_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "igp-instance")
    {
        igp_instance.yfilter = yfilter;
    }
    if(value_path == "igp-area")
    {
        igp_area.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "announced-tunnels-count")
    {
        announced_tunnels_count.yfilter = yfilter;
    }
    if(value_path == "autorouted-tunnels-count")
    {
        autorouted_tunnels_count.yfilter = yfilter;
    }
    if(value_path == "forwarding-adjacency-tunnels-count")
    {
        forwarding_adjacency_tunnels_count.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
}

bool MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-tunnel" || name == "destination-address" || name == "protocol" || name == "area" || name == "igp-id" || name == "igp-type" || name == "igp-instance" || name == "igp-area" || name == "destination" || name == "announced-tunnels-count" || name == "autorouted-tunnels-count" || name == "forwarding-adjacency-tunnels-count" || name == "area-format")
        return true;
    return false;
}

MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::TotalTunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_sig_name{YType::str, "tunnel-sig-name"},
    tunnel_loadshare{YType::uint32, "tunnel-loadshare"},
    announce_type{YType::enumeration, "announce-type"},
    next_hop_address{YType::str, "next-hop-address"},
    mode{YType::enumeration, "mode"},
    igp_metric{YType::int32, "igp-metric"},
    hold_time{YType::uint32, "hold-time"},
    area_format{YType::enumeration, "area-format"},
    is_auto_mesh_aa{YType::boolean, "is-auto-mesh-aa"},
    is_sr{YType::boolean, "is-sr"},
    is_sr_strict{YType::boolean, "is-sr-strict"},
    mesh_group_idaa{YType::uint32, "mesh-group-idaa"},
    is_exclude_segment_routing{YType::boolean, "is-exclude-segment-routing"}
        ,
    ig_ps(this, {})
{

    yang_name = "total-tunnel"; yang_parent_name = "announce-dest"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::~TotalTunnel()
{
}

bool MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ig_ps.len(); index++)
    {
        if(ig_ps[index]->has_data())
            return true;
    }
    return tunnel_name.is_set
	|| tunnel_sig_name.is_set
	|| tunnel_loadshare.is_set
	|| announce_type.is_set
	|| next_hop_address.is_set
	|| mode.is_set
	|| igp_metric.is_set
	|| hold_time.is_set
	|| area_format.is_set
	|| is_auto_mesh_aa.is_set
	|| is_sr.is_set
	|| is_sr_strict.is_set
	|| mesh_group_idaa.is_set
	|| is_exclude_segment_routing.is_set;
}

bool MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::has_operation() const
{
    for (std::size_t index=0; index<ig_ps.len(); index++)
    {
        if(ig_ps[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_sig_name.yfilter)
	|| ydk::is_set(tunnel_loadshare.yfilter)
	|| ydk::is_set(announce_type.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(is_auto_mesh_aa.yfilter)
	|| ydk::is_set(is_sr.yfilter)
	|| ydk::is_set(is_sr_strict.yfilter)
	|| ydk::is_set(mesh_group_idaa.yfilter)
	|| ydk::is_set(is_exclude_segment_routing.yfilter);
}

std::string MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_sig_name.is_set || is_set(tunnel_sig_name.yfilter)) leaf_name_data.push_back(tunnel_sig_name.get_name_leafdata());
    if (tunnel_loadshare.is_set || is_set(tunnel_loadshare.yfilter)) leaf_name_data.push_back(tunnel_loadshare.get_name_leafdata());
    if (announce_type.is_set || is_set(announce_type.yfilter)) leaf_name_data.push_back(announce_type.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (is_auto_mesh_aa.is_set || is_set(is_auto_mesh_aa.yfilter)) leaf_name_data.push_back(is_auto_mesh_aa.get_name_leafdata());
    if (is_sr.is_set || is_set(is_sr.yfilter)) leaf_name_data.push_back(is_sr.get_name_leafdata());
    if (is_sr_strict.is_set || is_set(is_sr_strict.yfilter)) leaf_name_data.push_back(is_sr_strict.get_name_leafdata());
    if (mesh_group_idaa.is_set || is_set(mesh_group_idaa.yfilter)) leaf_name_data.push_back(mesh_group_idaa.get_name_leafdata());
    if (is_exclude_segment_routing.is_set || is_set(is_exclude_segment_routing.yfilter)) leaf_name_data.push_back(is_exclude_segment_routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ig-ps")
    {
        auto c = std::make_shared<MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs>();
        c->parent = this;
        ig_ps.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ig_ps.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name = value;
        tunnel_sig_name.value_namespace = name_space;
        tunnel_sig_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-loadshare")
    {
        tunnel_loadshare = value;
        tunnel_loadshare.value_namespace = name_space;
        tunnel_loadshare.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-type")
    {
        announce_type = value;
        announce_type.value_namespace = name_space;
        announce_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-auto-mesh-aa")
    {
        is_auto_mesh_aa = value;
        is_auto_mesh_aa.value_namespace = name_space;
        is_auto_mesh_aa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr")
    {
        is_sr = value;
        is_sr.value_namespace = name_space;
        is_sr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-strict")
    {
        is_sr_strict = value;
        is_sr_strict.value_namespace = name_space;
        is_sr_strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group-idaa")
    {
        mesh_group_idaa = value;
        mesh_group_idaa.value_namespace = name_space;
        mesh_group_idaa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-exclude-segment-routing")
    {
        is_exclude_segment_routing = value;
        is_exclude_segment_routing.value_namespace = name_space;
        is_exclude_segment_routing.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-loadshare")
    {
        tunnel_loadshare.yfilter = yfilter;
    }
    if(value_path == "announce-type")
    {
        announce_type.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "is-auto-mesh-aa")
    {
        is_auto_mesh_aa.yfilter = yfilter;
    }
    if(value_path == "is-sr")
    {
        is_sr.yfilter = yfilter;
    }
    if(value_path == "is-sr-strict")
    {
        is_sr_strict.yfilter = yfilter;
    }
    if(value_path == "mesh-group-idaa")
    {
        mesh_group_idaa.yfilter = yfilter;
    }
    if(value_path == "is-exclude-segment-routing")
    {
        is_exclude_segment_routing.yfilter = yfilter;
    }
}

bool MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ig-ps" || name == "tunnel-name" || name == "tunnel-sig-name" || name == "tunnel-loadshare" || name == "announce-type" || name == "next-hop-address" || name == "mode" || name == "igp-metric" || name == "hold-time" || name == "area-format" || name == "is-auto-mesh-aa" || name == "is-sr" || name == "is-sr-strict" || name == "mesh-group-idaa" || name == "is-exclude-segment-routing")
        return true;
    return false;
}

MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::IgPs()
    :
    igp_area_id{YType::str, "igp-area-id"},
    afi{YType::enumeration, "afi"}
{

    yang_name = "ig-ps"; yang_parent_name = "total-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::~IgPs()
{
}

bool MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::has_data() const
{
    if (is_presence_container) return true;
    return igp_area_id.is_set
	|| afi.is_set;
}

bool MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_area_id.yfilter)
	|| ydk::is_set(afi.yfilter);
}

std::string MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ig-ps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_area_id.is_set || is_set(igp_area_id.yfilter)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
        igp_area_id.value_namespace = name_space;
        igp_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-area-id")
    {
        igp_area_id.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
}

bool MplsTe::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-area-id" || name == "afi")
        return true;
    return false;
}

MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AllAutorouteTable()
    :
    announce_dest(this, {"destination_address", "protocol", "area", "igp_id"})
{

    yang_name = "all-autoroute-table"; yang_parent_name = "announce-tunnels-info"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::~AllAutorouteTable()
{
}

bool MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<announce_dest.len(); index++)
    {
        if(announce_dest[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::has_operation() const
{
    for (std::size_t index=0; index<announce_dest.len(); index++)
    {
        if(announce_dest[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/announce-tunnels-info/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-autoroute-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "announce-dest")
    {
        auto c = std::make_shared<MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest>();
        c->parent = this;
        announce_dest.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : announce_dest.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "announce-dest")
        return true;
    return false;
}

MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::AnnounceDest()
    :
    destination_address{YType::str, "destination-address"},
    protocol{YType::enumeration, "protocol"},
    area{YType::uint32, "area"},
    igp_id{YType::str, "igp-id"},
    igp_type{YType::enumeration, "igp-type"},
    igp_instance{YType::str, "igp-instance"},
    igp_area{YType::uint32, "igp-area"},
    destination{YType::str, "destination"},
    announced_tunnels_count{YType::uint16, "announced-tunnels-count"},
    autorouted_tunnels_count{YType::uint16, "autorouted-tunnels-count"},
    forwarding_adjacency_tunnels_count{YType::uint16, "forwarding-adjacency-tunnels-count"},
    area_format{YType::enumeration, "area-format"}
        ,
    total_tunnel(this, {})
{

    yang_name = "announce-dest"; yang_parent_name = "all-autoroute-table"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::~AnnounceDest()
{
}

bool MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<total_tunnel.len(); index++)
    {
        if(total_tunnel[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| protocol.is_set
	|| area.is_set
	|| igp_id.is_set
	|| igp_type.is_set
	|| igp_instance.is_set
	|| igp_area.is_set
	|| destination.is_set
	|| announced_tunnels_count.is_set
	|| autorouted_tunnels_count.is_set
	|| forwarding_adjacency_tunnels_count.is_set
	|| area_format.is_set;
}

bool MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::has_operation() const
{
    for (std::size_t index=0; index<total_tunnel.len(); index++)
    {
        if(total_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(igp_instance.yfilter)
	|| ydk::is_set(igp_area.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(announced_tunnels_count.yfilter)
	|| ydk::is_set(autorouted_tunnels_count.yfilter)
	|| ydk::is_set(forwarding_adjacency_tunnels_count.yfilter)
	|| ydk::is_set(area_format.yfilter);
}

std::string MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/announce-tunnels-info/all-autoroute-table/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce-dest";
    ADD_KEY_TOKEN(destination_address, "destination-address");
    ADD_KEY_TOKEN(protocol, "protocol");
    ADD_KEY_TOKEN(area, "area");
    ADD_KEY_TOKEN(igp_id, "igp-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.yfilter)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (igp_area.is_set || is_set(igp_area.yfilter)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (announced_tunnels_count.is_set || is_set(announced_tunnels_count.yfilter)) leaf_name_data.push_back(announced_tunnels_count.get_name_leafdata());
    if (autorouted_tunnels_count.is_set || is_set(autorouted_tunnels_count.yfilter)) leaf_name_data.push_back(autorouted_tunnels_count.get_name_leafdata());
    if (forwarding_adjacency_tunnels_count.is_set || is_set(forwarding_adjacency_tunnels_count.yfilter)) leaf_name_data.push_back(forwarding_adjacency_tunnels_count.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "total-tunnel")
    {
        auto c = std::make_shared<MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel>();
        c->parent = this;
        total_tunnel.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : total_tunnel.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
        igp_instance.value_namespace = name_space;
        igp_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area")
    {
        igp_area = value;
        igp_area.value_namespace = name_space;
        igp_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announced-tunnels-count")
    {
        announced_tunnels_count = value;
        announced_tunnels_count.value_namespace = name_space;
        announced_tunnels_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "autorouted-tunnels-count")
    {
        autorouted_tunnels_count = value;
        autorouted_tunnels_count.value_namespace = name_space;
        autorouted_tunnels_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-adjacency-tunnels-count")
    {
        forwarding_adjacency_tunnels_count = value;
        forwarding_adjacency_tunnels_count.value_namespace = name_space;
        forwarding_adjacency_tunnels_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "igp-instance")
    {
        igp_instance.yfilter = yfilter;
    }
    if(value_path == "igp-area")
    {
        igp_area.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "announced-tunnels-count")
    {
        announced_tunnels_count.yfilter = yfilter;
    }
    if(value_path == "autorouted-tunnels-count")
    {
        autorouted_tunnels_count.yfilter = yfilter;
    }
    if(value_path == "forwarding-adjacency-tunnels-count")
    {
        forwarding_adjacency_tunnels_count.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
}

bool MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-tunnel" || name == "destination-address" || name == "protocol" || name == "area" || name == "igp-id" || name == "igp-type" || name == "igp-instance" || name == "igp-area" || name == "destination" || name == "announced-tunnels-count" || name == "autorouted-tunnels-count" || name == "forwarding-adjacency-tunnels-count" || name == "area-format")
        return true;
    return false;
}

MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::TotalTunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_sig_name{YType::str, "tunnel-sig-name"},
    tunnel_loadshare{YType::uint32, "tunnel-loadshare"},
    announce_type{YType::enumeration, "announce-type"},
    next_hop_address{YType::str, "next-hop-address"},
    mode{YType::enumeration, "mode"},
    igp_metric{YType::int32, "igp-metric"},
    hold_time{YType::uint32, "hold-time"},
    area_format{YType::enumeration, "area-format"},
    is_auto_mesh_aa{YType::boolean, "is-auto-mesh-aa"},
    is_sr{YType::boolean, "is-sr"},
    is_sr_strict{YType::boolean, "is-sr-strict"},
    mesh_group_idaa{YType::uint32, "mesh-group-idaa"},
    is_exclude_segment_routing{YType::boolean, "is-exclude-segment-routing"}
        ,
    ig_ps(this, {})
{

    yang_name = "total-tunnel"; yang_parent_name = "announce-dest"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::~TotalTunnel()
{
}

bool MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ig_ps.len(); index++)
    {
        if(ig_ps[index]->has_data())
            return true;
    }
    return tunnel_name.is_set
	|| tunnel_sig_name.is_set
	|| tunnel_loadshare.is_set
	|| announce_type.is_set
	|| next_hop_address.is_set
	|| mode.is_set
	|| igp_metric.is_set
	|| hold_time.is_set
	|| area_format.is_set
	|| is_auto_mesh_aa.is_set
	|| is_sr.is_set
	|| is_sr_strict.is_set
	|| mesh_group_idaa.is_set
	|| is_exclude_segment_routing.is_set;
}

bool MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::has_operation() const
{
    for (std::size_t index=0; index<ig_ps.len(); index++)
    {
        if(ig_ps[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_sig_name.yfilter)
	|| ydk::is_set(tunnel_loadshare.yfilter)
	|| ydk::is_set(announce_type.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(is_auto_mesh_aa.yfilter)
	|| ydk::is_set(is_sr.yfilter)
	|| ydk::is_set(is_sr_strict.yfilter)
	|| ydk::is_set(mesh_group_idaa.yfilter)
	|| ydk::is_set(is_exclude_segment_routing.yfilter);
}

std::string MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_sig_name.is_set || is_set(tunnel_sig_name.yfilter)) leaf_name_data.push_back(tunnel_sig_name.get_name_leafdata());
    if (tunnel_loadshare.is_set || is_set(tunnel_loadshare.yfilter)) leaf_name_data.push_back(tunnel_loadshare.get_name_leafdata());
    if (announce_type.is_set || is_set(announce_type.yfilter)) leaf_name_data.push_back(announce_type.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (is_auto_mesh_aa.is_set || is_set(is_auto_mesh_aa.yfilter)) leaf_name_data.push_back(is_auto_mesh_aa.get_name_leafdata());
    if (is_sr.is_set || is_set(is_sr.yfilter)) leaf_name_data.push_back(is_sr.get_name_leafdata());
    if (is_sr_strict.is_set || is_set(is_sr_strict.yfilter)) leaf_name_data.push_back(is_sr_strict.get_name_leafdata());
    if (mesh_group_idaa.is_set || is_set(mesh_group_idaa.yfilter)) leaf_name_data.push_back(mesh_group_idaa.get_name_leafdata());
    if (is_exclude_segment_routing.is_set || is_set(is_exclude_segment_routing.yfilter)) leaf_name_data.push_back(is_exclude_segment_routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ig-ps")
    {
        auto c = std::make_shared<MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs>();
        c->parent = this;
        ig_ps.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ig_ps.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name = value;
        tunnel_sig_name.value_namespace = name_space;
        tunnel_sig_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-loadshare")
    {
        tunnel_loadshare = value;
        tunnel_loadshare.value_namespace = name_space;
        tunnel_loadshare.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-type")
    {
        announce_type = value;
        announce_type.value_namespace = name_space;
        announce_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-auto-mesh-aa")
    {
        is_auto_mesh_aa = value;
        is_auto_mesh_aa.value_namespace = name_space;
        is_auto_mesh_aa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr")
    {
        is_sr = value;
        is_sr.value_namespace = name_space;
        is_sr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-sr-strict")
    {
        is_sr_strict = value;
        is_sr_strict.value_namespace = name_space;
        is_sr_strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group-idaa")
    {
        mesh_group_idaa = value;
        mesh_group_idaa.value_namespace = name_space;
        mesh_group_idaa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-exclude-segment-routing")
    {
        is_exclude_segment_routing = value;
        is_exclude_segment_routing.value_namespace = name_space;
        is_exclude_segment_routing.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-loadshare")
    {
        tunnel_loadshare.yfilter = yfilter;
    }
    if(value_path == "announce-type")
    {
        announce_type.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "is-auto-mesh-aa")
    {
        is_auto_mesh_aa.yfilter = yfilter;
    }
    if(value_path == "is-sr")
    {
        is_sr.yfilter = yfilter;
    }
    if(value_path == "is-sr-strict")
    {
        is_sr_strict.yfilter = yfilter;
    }
    if(value_path == "mesh-group-idaa")
    {
        mesh_group_idaa.yfilter = yfilter;
    }
    if(value_path == "is-exclude-segment-routing")
    {
        is_exclude_segment_routing.yfilter = yfilter;
    }
}

bool MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ig-ps" || name == "tunnel-name" || name == "tunnel-sig-name" || name == "tunnel-loadshare" || name == "announce-type" || name == "next-hop-address" || name == "mode" || name == "igp-metric" || name == "hold-time" || name == "area-format" || name == "is-auto-mesh-aa" || name == "is-sr" || name == "is-sr-strict" || name == "mesh-group-idaa" || name == "is-exclude-segment-routing")
        return true;
    return false;
}

MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::IgPs()
    :
    igp_area_id{YType::str, "igp-area-id"},
    afi{YType::enumeration, "afi"}
{

    yang_name = "ig-ps"; yang_parent_name = "total-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::~IgPs()
{
}

bool MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::has_data() const
{
    if (is_presence_container) return true;
    return igp_area_id.is_set
	|| afi.is_set;
}

bool MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_area_id.yfilter)
	|| ydk::is_set(afi.yfilter);
}

std::string MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ig-ps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_area_id.is_set || is_set(igp_area_id.yfilter)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
        igp_area_id.value_namespace = name_space;
        igp_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-area-id")
    {
        igp_area_id.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
}

bool MplsTe::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-area-id" || name == "afi")
        return true;
    return false;
}

MplsTe::CollaboratorTimers::CollaboratorTimers()
    :
    p2mp_timer(this, {})
{

    yang_name = "collaborator-timers"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::CollaboratorTimers::~CollaboratorTimers()
{
}

bool MplsTe::CollaboratorTimers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<p2mp_timer.len(); index++)
    {
        if(p2mp_timer[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::CollaboratorTimers::has_operation() const
{
    for (std::size_t index=0; index<p2mp_timer.len(); index++)
    {
        if(p2mp_timer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::CollaboratorTimers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::CollaboratorTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collaborator-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::CollaboratorTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::CollaboratorTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2mp-timer")
    {
        auto c = std::make_shared<MplsTe::CollaboratorTimers::P2mpTimer>();
        c->parent = this;
        p2mp_timer.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::CollaboratorTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : p2mp_timer.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::CollaboratorTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::CollaboratorTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::CollaboratorTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2mp-timer")
        return true;
    return false;
}

MplsTe::CollaboratorTimers::P2mpTimer::P2mpTimer()
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

MplsTe::CollaboratorTimers::P2mpTimer::~P2mpTimer()
{
}

bool MplsTe::CollaboratorTimers::P2mpTimer::has_data() const
{
    if (is_presence_container) return true;
    return timer_type.is_set
	|| timer_name.is_set
	|| start_time.is_set
	|| expiry_time.is_set
	|| stop_time.is_set
	|| duration.is_set
	|| is_running.is_set;
}

bool MplsTe::CollaboratorTimers::P2mpTimer::has_operation() const
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

std::string MplsTe::CollaboratorTimers::P2mpTimer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/collaborator-timers/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::CollaboratorTimers::P2mpTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::CollaboratorTimers::P2mpTimer::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTe::CollaboratorTimers::P2mpTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::CollaboratorTimers::P2mpTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::CollaboratorTimers::P2mpTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::CollaboratorTimers::P2mpTimer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::CollaboratorTimers::P2mpTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer-type" || name == "timer-name" || name == "start-time" || name == "expiry-time" || name == "stop-time" || name == "duration" || name == "is-running")
        return true;
    return false;
}

MplsTe::AutoTunnel::AutoTunnel()
    :
    pcc(std::make_shared<MplsTe::AutoTunnel::Pcc>())
    , mesh(std::make_shared<MplsTe::AutoTunnel::Mesh>())
    , backup(std::make_shared<MplsTe::AutoTunnel::Backup>())
{
    pcc->parent = this;
    mesh->parent = this;
    backup->parent = this;

    yang_name = "auto-tunnel"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::~AutoTunnel()
{
}

bool MplsTe::AutoTunnel::has_data() const
{
    if (is_presence_container) return true;
    return (pcc !=  nullptr && pcc->has_data())
	|| (mesh !=  nullptr && mesh->has_data())
	|| (backup !=  nullptr && backup->has_data());
}

bool MplsTe::AutoTunnel::has_operation() const
{
    return is_set(yfilter)
	|| (pcc !=  nullptr && pcc->has_operation())
	|| (mesh !=  nullptr && mesh->has_operation())
	|| (backup !=  nullptr && backup->has_operation());
}

std::string MplsTe::AutoTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pcc")
    {
        if(pcc == nullptr)
        {
            pcc = std::make_shared<MplsTe::AutoTunnel::Pcc>();
        }
        return pcc;
    }

    if(child_yang_name == "mesh")
    {
        if(mesh == nullptr)
        {
            mesh = std::make_shared<MplsTe::AutoTunnel::Mesh>();
        }
        return mesh;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<MplsTe::AutoTunnel::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pcc != nullptr)
    {
        children["pcc"] = pcc;
    }

    if(mesh != nullptr)
    {
        children["mesh"] = mesh;
    }

    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void MplsTe::AutoTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::AutoTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::AutoTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcc" || name == "mesh" || name == "backup")
        return true;
    return false;
}

MplsTe::AutoTunnel::Pcc::Pcc()
    :
    summary(std::make_shared<MplsTe::AutoTunnel::Pcc::Summary>())
{
    summary->parent = this;

    yang_name = "pcc"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Pcc::~Pcc()
{
}

bool MplsTe::AutoTunnel::Pcc::has_data() const
{
    if (is_presence_container) return true;
    return (summary !=  nullptr && summary->has_data());
}

bool MplsTe::AutoTunnel::Pcc::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsTe::AutoTunnel::Pcc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Pcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Pcc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Pcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTe::AutoTunnel::Pcc::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Pcc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void MplsTe::AutoTunnel::Pcc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::AutoTunnel::Pcc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::AutoTunnel::Pcc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary")
        return true;
    return false;
}

MplsTe::AutoTunnel::Pcc::Summary::Summary()
    :
    pcc_auto_tunnel{YType::uint32, "pcc-auto-tunnel"},
    up_pcc_auto_tunnels{YType::uint32, "up-pcc-auto-tunnels"},
    down_pcc_auto_tunnels{YType::uint32, "down-pcc-auto-tunnels"}
{

    yang_name = "summary"; yang_parent_name = "pcc"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Pcc::Summary::~Summary()
{
}

bool MplsTe::AutoTunnel::Pcc::Summary::has_data() const
{
    if (is_presence_container) return true;
    return pcc_auto_tunnel.is_set
	|| up_pcc_auto_tunnels.is_set
	|| down_pcc_auto_tunnels.is_set;
}

bool MplsTe::AutoTunnel::Pcc::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcc_auto_tunnel.yfilter)
	|| ydk::is_set(up_pcc_auto_tunnels.yfilter)
	|| ydk::is_set(down_pcc_auto_tunnels.yfilter);
}

std::string MplsTe::AutoTunnel::Pcc::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/pcc/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Pcc::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Pcc::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcc_auto_tunnel.is_set || is_set(pcc_auto_tunnel.yfilter)) leaf_name_data.push_back(pcc_auto_tunnel.get_name_leafdata());
    if (up_pcc_auto_tunnels.is_set || is_set(up_pcc_auto_tunnels.yfilter)) leaf_name_data.push_back(up_pcc_auto_tunnels.get_name_leafdata());
    if (down_pcc_auto_tunnels.is_set || is_set(down_pcc_auto_tunnels.yfilter)) leaf_name_data.push_back(down_pcc_auto_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Pcc::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Pcc::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AutoTunnel::Pcc::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "down-pcc-auto-tunnels")
    {
        down_pcc_auto_tunnels = value;
        down_pcc_auto_tunnels.value_namespace = name_space;
        down_pcc_auto_tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AutoTunnel::Pcc::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcc-auto-tunnel")
    {
        pcc_auto_tunnel.yfilter = yfilter;
    }
    if(value_path == "up-pcc-auto-tunnels")
    {
        up_pcc_auto_tunnels.yfilter = yfilter;
    }
    if(value_path == "down-pcc-auto-tunnels")
    {
        down_pcc_auto_tunnels.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnel::Pcc::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcc-auto-tunnel" || name == "up-pcc-auto-tunnels" || name == "down-pcc-auto-tunnels")
        return true;
    return false;
}

MplsTe::AutoTunnel::Mesh::Mesh()
    :
    mesh_groups(std::make_shared<MplsTe::AutoTunnel::Mesh::MeshGroups>())
    , statistics(std::make_shared<MplsTe::AutoTunnel::Mesh::Statistics>())
    , summary(std::make_shared<MplsTe::AutoTunnel::Mesh::Summary>())
    , config(std::make_shared<MplsTe::AutoTunnel::Mesh::Config>())
    , one_hop(std::make_shared<MplsTe::AutoTunnel::Mesh::OneHop>())
{
    mesh_groups->parent = this;
    statistics->parent = this;
    summary->parent = this;
    config->parent = this;
    one_hop->parent = this;

    yang_name = "mesh"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Mesh::~Mesh()
{
}

bool MplsTe::AutoTunnel::Mesh::has_data() const
{
    if (is_presence_container) return true;
    return (mesh_groups !=  nullptr && mesh_groups->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (config !=  nullptr && config->has_data())
	|| (one_hop !=  nullptr && one_hop->has_data());
}

bool MplsTe::AutoTunnel::Mesh::has_operation() const
{
    return is_set(yfilter)
	|| (mesh_groups !=  nullptr && mesh_groups->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (config !=  nullptr && config->has_operation())
	|| (one_hop !=  nullptr && one_hop->has_operation());
}

std::string MplsTe::AutoTunnel::Mesh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Mesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Mesh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mesh-groups")
    {
        if(mesh_groups == nullptr)
        {
            mesh_groups = std::make_shared<MplsTe::AutoTunnel::Mesh::MeshGroups>();
        }
        return mesh_groups;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::AutoTunnel::Mesh::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTe::AutoTunnel::Mesh::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<MplsTe::AutoTunnel::Mesh::Config>();
        }
        return config;
    }

    if(child_yang_name == "one-hop")
    {
        if(one_hop == nullptr)
        {
            one_hop = std::make_shared<MplsTe::AutoTunnel::Mesh::OneHop>();
        }
        return one_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Mesh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mesh_groups != nullptr)
    {
        children["mesh-groups"] = mesh_groups;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(one_hop != nullptr)
    {
        children["one-hop"] = one_hop;
    }

    return children;
}

void MplsTe::AutoTunnel::Mesh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::AutoTunnel::Mesh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::AutoTunnel::Mesh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mesh-groups" || name == "statistics" || name == "summary" || name == "config" || name == "one-hop")
        return true;
    return false;
}

MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroups()
    :
    mesh_group(this, {"mesh_group_id"})
{

    yang_name = "mesh-groups"; yang_parent_name = "mesh"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Mesh::MeshGroups::~MeshGroups()
{
}

bool MplsTe::AutoTunnel::Mesh::MeshGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mesh_group.len(); index++)
    {
        if(mesh_group[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::AutoTunnel::Mesh::MeshGroups::has_operation() const
{
    for (std::size_t index=0; index<mesh_group.len(); index++)
    {
        if(mesh_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::AutoTunnel::Mesh::MeshGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/mesh/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Mesh::MeshGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Mesh::MeshGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::MeshGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mesh-group")
    {
        auto c = std::make_shared<MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup>();
        c->parent = this;
        mesh_group.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Mesh::MeshGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mesh_group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AutoTunnel::Mesh::MeshGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::AutoTunnel::Mesh::MeshGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::AutoTunnel::Mesh::MeshGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mesh-group")
        return true;
    return false;
}

MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::MeshGroup()
    :
    mesh_group_id{YType::uint32, "mesh-group-id"},
    mesh_group_id_xr{YType::uint32, "mesh-group-id-xr"},
    is_meshgroup_disabled{YType::boolean, "is-meshgroup-disabled"},
    attribute_set_name{YType::str, "attribute-set-name"},
    is_attribute_set_configured{YType::boolean, "is-attribute-set-configured"},
    is_attribute_set_in_db{YType::boolean, "is-attribute-set-in-db"},
    destination_list_name{YType::str, "destination-list-name"},
    is_destination_list_configured{YType::boolean, "is-destination-list-configured"},
    destination_list_type{YType::enumeration, "destination-list-type"},
    remaining_time{YType::uint32, "remaining-time"},
    auto_mesh_tunnels{YType::uint32, "auto-mesh-tunnels"},
    auto_mesh_total_destinations{YType::uint32, "auto-mesh-total-destinations"},
    up_auto_mesh_tunnels{YType::uint32, "up-auto-mesh-tunnels"},
    down_auto_mesh_tunnels{YType::uint32, "down-auto-mesh-tunnels"},
    frr_auto_mesh_tunnels{YType::uint32, "frr-auto-mesh-tunnels"},
    auto_mesh_group_type{YType::enumeration, "auto-mesh-group-type"}
        ,
    destination(this, {})
{

    yang_name = "mesh-group"; yang_parent_name = "mesh-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::~MeshGroup()
{
}

bool MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<destination.len(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return mesh_group_id.is_set
	|| mesh_group_id_xr.is_set
	|| is_meshgroup_disabled.is_set
	|| attribute_set_name.is_set
	|| is_attribute_set_configured.is_set
	|| is_attribute_set_in_db.is_set
	|| destination_list_name.is_set
	|| is_destination_list_configured.is_set
	|| destination_list_type.is_set
	|| remaining_time.is_set
	|| auto_mesh_tunnels.is_set
	|| auto_mesh_total_destinations.is_set
	|| up_auto_mesh_tunnels.is_set
	|| down_auto_mesh_tunnels.is_set
	|| frr_auto_mesh_tunnels.is_set
	|| auto_mesh_group_type.is_set;
}

bool MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::has_operation() const
{
    for (std::size_t index=0; index<destination.len(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mesh_group_id.yfilter)
	|| ydk::is_set(mesh_group_id_xr.yfilter)
	|| ydk::is_set(is_meshgroup_disabled.yfilter)
	|| ydk::is_set(attribute_set_name.yfilter)
	|| ydk::is_set(is_attribute_set_configured.yfilter)
	|| ydk::is_set(is_attribute_set_in_db.yfilter)
	|| ydk::is_set(destination_list_name.yfilter)
	|| ydk::is_set(is_destination_list_configured.yfilter)
	|| ydk::is_set(destination_list_type.yfilter)
	|| ydk::is_set(remaining_time.yfilter)
	|| ydk::is_set(auto_mesh_tunnels.yfilter)
	|| ydk::is_set(auto_mesh_total_destinations.yfilter)
	|| ydk::is_set(up_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(down_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(frr_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(auto_mesh_group_type.yfilter);
}

std::string MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/mesh/mesh-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group";
    ADD_KEY_TOKEN(mesh_group_id, "mesh-group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mesh_group_id.is_set || is_set(mesh_group_id.yfilter)) leaf_name_data.push_back(mesh_group_id.get_name_leafdata());
    if (mesh_group_id_xr.is_set || is_set(mesh_group_id_xr.yfilter)) leaf_name_data.push_back(mesh_group_id_xr.get_name_leafdata());
    if (is_meshgroup_disabled.is_set || is_set(is_meshgroup_disabled.yfilter)) leaf_name_data.push_back(is_meshgroup_disabled.get_name_leafdata());
    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (is_attribute_set_configured.is_set || is_set(is_attribute_set_configured.yfilter)) leaf_name_data.push_back(is_attribute_set_configured.get_name_leafdata());
    if (is_attribute_set_in_db.is_set || is_set(is_attribute_set_in_db.yfilter)) leaf_name_data.push_back(is_attribute_set_in_db.get_name_leafdata());
    if (destination_list_name.is_set || is_set(destination_list_name.yfilter)) leaf_name_data.push_back(destination_list_name.get_name_leafdata());
    if (is_destination_list_configured.is_set || is_set(is_destination_list_configured.yfilter)) leaf_name_data.push_back(is_destination_list_configured.get_name_leafdata());
    if (destination_list_type.is_set || is_set(destination_list_type.yfilter)) leaf_name_data.push_back(destination_list_type.get_name_leafdata());
    if (remaining_time.is_set || is_set(remaining_time.yfilter)) leaf_name_data.push_back(remaining_time.get_name_leafdata());
    if (auto_mesh_tunnels.is_set || is_set(auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(auto_mesh_tunnels.get_name_leafdata());
    if (auto_mesh_total_destinations.is_set || is_set(auto_mesh_total_destinations.yfilter)) leaf_name_data.push_back(auto_mesh_total_destinations.get_name_leafdata());
    if (up_auto_mesh_tunnels.is_set || is_set(up_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(up_auto_mesh_tunnels.get_name_leafdata());
    if (down_auto_mesh_tunnels.is_set || is_set(down_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(down_auto_mesh_tunnels.get_name_leafdata());
    if (frr_auto_mesh_tunnels.is_set || is_set(frr_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(frr_auto_mesh_tunnels.get_name_leafdata());
    if (auto_mesh_group_type.is_set || is_set(auto_mesh_group_type.yfilter)) leaf_name_data.push_back(auto_mesh_group_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        auto c = std::make_shared<MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination>();
        c->parent = this;
        destination.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : destination.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mesh-group-id")
    {
        mesh_group_id = value;
        mesh_group_id.value_namespace = name_space;
        mesh_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group-id-xr")
    {
        mesh_group_id_xr = value;
        mesh_group_id_xr.value_namespace = name_space;
        mesh_group_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-meshgroup-disabled")
    {
        is_meshgroup_disabled = value;
        is_meshgroup_disabled.value_namespace = name_space;
        is_meshgroup_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "destination-list-name")
    {
        destination_list_name = value;
        destination_list_name.value_namespace = name_space;
        destination_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-destination-list-configured")
    {
        is_destination_list_configured = value;
        is_destination_list_configured.value_namespace = name_space;
        is_destination_list_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-list-type")
    {
        destination_list_type = value;
        destination_list_type.value_namespace = name_space;
        destination_list_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-time")
    {
        remaining_time = value;
        remaining_time.value_namespace = name_space;
        remaining_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-tunnels")
    {
        auto_mesh_tunnels = value;
        auto_mesh_tunnels.value_namespace = name_space;
        auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-total-destinations")
    {
        auto_mesh_total_destinations = value;
        auto_mesh_total_destinations.value_namespace = name_space;
        auto_mesh_total_destinations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-auto-mesh-tunnels")
    {
        up_auto_mesh_tunnels = value;
        up_auto_mesh_tunnels.value_namespace = name_space;
        up_auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "auto-mesh-group-type")
    {
        auto_mesh_group_type = value;
        auto_mesh_group_type.value_namespace = name_space;
        auto_mesh_group_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mesh-group-id")
    {
        mesh_group_id.yfilter = yfilter;
    }
    if(value_path == "mesh-group-id-xr")
    {
        mesh_group_id_xr.yfilter = yfilter;
    }
    if(value_path == "is-meshgroup-disabled")
    {
        is_meshgroup_disabled.yfilter = yfilter;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "is-attribute-set-configured")
    {
        is_attribute_set_configured.yfilter = yfilter;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db.yfilter = yfilter;
    }
    if(value_path == "destination-list-name")
    {
        destination_list_name.yfilter = yfilter;
    }
    if(value_path == "is-destination-list-configured")
    {
        is_destination_list_configured.yfilter = yfilter;
    }
    if(value_path == "destination-list-type")
    {
        destination_list_type.yfilter = yfilter;
    }
    if(value_path == "remaining-time")
    {
        remaining_time.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-tunnels")
    {
        auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-total-destinations")
    {
        auto_mesh_total_destinations.yfilter = yfilter;
    }
    if(value_path == "up-auto-mesh-tunnels")
    {
        up_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "down-auto-mesh-tunnels")
    {
        down_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-group-type")
    {
        auto_mesh_group_type.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "mesh-group-id" || name == "mesh-group-id-xr" || name == "is-meshgroup-disabled" || name == "attribute-set-name" || name == "is-attribute-set-configured" || name == "is-attribute-set-in-db" || name == "destination-list-name" || name == "is-destination-list-configured" || name == "destination-list-type" || name == "remaining-time" || name == "auto-mesh-tunnels" || name == "auto-mesh-total-destinations" || name == "up-auto-mesh-tunnels" || name == "down-auto-mesh-tunnels" || name == "frr-auto-mesh-tunnels" || name == "auto-mesh-group-type")
        return true;
    return false;
}

MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::Destination()
    :
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint16, "tunnel-id"},
    operational_status{YType::enumeration, "operational-status"},
    remaining_time{YType::uint32, "remaining-time"}
{

    yang_name = "destination"; yang_parent_name = "mesh-group"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::~Destination()
{
}

bool MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set
	|| tunnel_id.is_set
	|| operational_status.is_set
	|| remaining_time.is_set;
}

bool MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(operational_status.yfilter)
	|| ydk::is_set(remaining_time.yfilter);
}

std::string MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (operational_status.is_set || is_set(operational_status.yfilter)) leaf_name_data.push_back(operational_status.get_name_leafdata());
    if (remaining_time.is_set || is_set(remaining_time.yfilter)) leaf_name_data.push_back(remaining_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
}

void MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "operational-status")
    {
        operational_status.yfilter = yfilter;
    }
    if(value_path == "remaining-time")
    {
        remaining_time.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address" || name == "tunnel-id" || name == "operational-status" || name == "remaining-time")
        return true;
    return false;
}

MplsTe::AutoTunnel::Mesh::Statistics::Statistics()
    :
    created{YType::uint32, "created"},
    connected{YType::uint32, "connected"},
    removed_unused{YType::uint32, "removed-unused"},
    removed_in_use{YType::uint32, "removed-in-use"},
    removed_range_exceeded{YType::uint32, "removed-range-exceeded"},
    last_cleared_time{YType::uint32, "last-cleared-time"}
{

    yang_name = "statistics"; yang_parent_name = "mesh"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Mesh::Statistics::~Statistics()
{
}

bool MplsTe::AutoTunnel::Mesh::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return created.is_set
	|| connected.is_set
	|| removed_unused.is_set
	|| removed_in_use.is_set
	|| removed_range_exceeded.is_set
	|| last_cleared_time.is_set;
}

bool MplsTe::AutoTunnel::Mesh::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(created.yfilter)
	|| ydk::is_set(connected.yfilter)
	|| ydk::is_set(removed_unused.yfilter)
	|| ydk::is_set(removed_in_use.yfilter)
	|| ydk::is_set(removed_range_exceeded.yfilter)
	|| ydk::is_set(last_cleared_time.yfilter);
}

std::string MplsTe::AutoTunnel::Mesh::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/mesh/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Mesh::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Mesh::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (created.is_set || is_set(created.yfilter)) leaf_name_data.push_back(created.get_name_leafdata());
    if (connected.is_set || is_set(connected.yfilter)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (removed_unused.is_set || is_set(removed_unused.yfilter)) leaf_name_data.push_back(removed_unused.get_name_leafdata());
    if (removed_in_use.is_set || is_set(removed_in_use.yfilter)) leaf_name_data.push_back(removed_in_use.get_name_leafdata());
    if (removed_range_exceeded.is_set || is_set(removed_range_exceeded.yfilter)) leaf_name_data.push_back(removed_range_exceeded.get_name_leafdata());
    if (last_cleared_time.is_set || is_set(last_cleared_time.yfilter)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Mesh::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AutoTunnel::Mesh::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "created")
    {
        created = value;
        created.value_namespace = name_space;
        created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected")
    {
        connected = value;
        connected.value_namespace = name_space;
        connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removed-unused")
    {
        removed_unused = value;
        removed_unused.value_namespace = name_space;
        removed_unused.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
        last_cleared_time.value_namespace = name_space;
        last_cleared_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AutoTunnel::Mesh::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "created")
    {
        created.yfilter = yfilter;
    }
    if(value_path == "connected")
    {
        connected.yfilter = yfilter;
    }
    if(value_path == "removed-unused")
    {
        removed_unused.yfilter = yfilter;
    }
    if(value_path == "removed-in-use")
    {
        removed_in_use.yfilter = yfilter;
    }
    if(value_path == "removed-range-exceeded")
    {
        removed_range_exceeded.yfilter = yfilter;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnel::Mesh::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "created" || name == "connected" || name == "removed-unused" || name == "removed-in-use" || name == "removed-range-exceeded" || name == "last-cleared-time")
        return true;
    return false;
}

MplsTe::AutoTunnel::Mesh::Summary::Summary()
    :
    auto_mesh_tunnels{YType::uint32, "auto-mesh-tunnels"},
    up_auto_mesh_tunnels{YType::uint32, "up-auto-mesh-tunnels"},
    down_auto_mesh_tunnels{YType::uint32, "down-auto-mesh-tunnels"},
    frr_auto_mesh_tunnels{YType::uint32, "frr-auto-mesh-tunnels"},
    auto_mesh_groups{YType::uint32, "auto-mesh-groups"},
    auto_mesh_destinations{YType::uint32, "auto-mesh-destinations"}
{

    yang_name = "summary"; yang_parent_name = "mesh"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Mesh::Summary::~Summary()
{
}

bool MplsTe::AutoTunnel::Mesh::Summary::has_data() const
{
    if (is_presence_container) return true;
    return auto_mesh_tunnels.is_set
	|| up_auto_mesh_tunnels.is_set
	|| down_auto_mesh_tunnels.is_set
	|| frr_auto_mesh_tunnels.is_set
	|| auto_mesh_groups.is_set
	|| auto_mesh_destinations.is_set;
}

bool MplsTe::AutoTunnel::Mesh::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_mesh_tunnels.yfilter)
	|| ydk::is_set(up_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(down_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(frr_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(auto_mesh_groups.yfilter)
	|| ydk::is_set(auto_mesh_destinations.yfilter);
}

std::string MplsTe::AutoTunnel::Mesh::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/mesh/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Mesh::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Mesh::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_mesh_tunnels.is_set || is_set(auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(auto_mesh_tunnels.get_name_leafdata());
    if (up_auto_mesh_tunnels.is_set || is_set(up_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(up_auto_mesh_tunnels.get_name_leafdata());
    if (down_auto_mesh_tunnels.is_set || is_set(down_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(down_auto_mesh_tunnels.get_name_leafdata());
    if (frr_auto_mesh_tunnels.is_set || is_set(frr_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(frr_auto_mesh_tunnels.get_name_leafdata());
    if (auto_mesh_groups.is_set || is_set(auto_mesh_groups.yfilter)) leaf_name_data.push_back(auto_mesh_groups.get_name_leafdata());
    if (auto_mesh_destinations.is_set || is_set(auto_mesh_destinations.yfilter)) leaf_name_data.push_back(auto_mesh_destinations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Mesh::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AutoTunnel::Mesh::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-mesh-tunnels")
    {
        auto_mesh_tunnels = value;
        auto_mesh_tunnels.value_namespace = name_space;
        auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-auto-mesh-tunnels")
    {
        up_auto_mesh_tunnels = value;
        up_auto_mesh_tunnels.value_namespace = name_space;
        up_auto_mesh_tunnels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "auto-mesh-groups")
    {
        auto_mesh_groups = value;
        auto_mesh_groups.value_namespace = name_space;
        auto_mesh_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-destinations")
    {
        auto_mesh_destinations = value;
        auto_mesh_destinations.value_namespace = name_space;
        auto_mesh_destinations.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AutoTunnel::Mesh::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-mesh-tunnels")
    {
        auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "up-auto-mesh-tunnels")
    {
        up_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "down-auto-mesh-tunnels")
    {
        down_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-groups")
    {
        auto_mesh_groups.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-destinations")
    {
        auto_mesh_destinations.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnel::Mesh::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-mesh-tunnels" || name == "up-auto-mesh-tunnels" || name == "down-auto-mesh-tunnels" || name == "frr-auto-mesh-tunnels" || name == "auto-mesh-groups" || name == "auto-mesh-destinations")
        return true;
    return false;
}

MplsTe::AutoTunnel::Mesh::Config::Config()
    :
    is_configured{YType::boolean, "is-configured"},
    unused_removal_timeout_configured{YType::uint32, "unused-removal-timeout-configured"},
    min_tunnel_id{YType::uint16, "min-tunnel-id"},
    max_tunnel_id{YType::uint16, "max-tunnel-id"}
{

    yang_name = "config"; yang_parent_name = "mesh"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Mesh::Config::~Config()
{
}

bool MplsTe::AutoTunnel::Mesh::Config::has_data() const
{
    if (is_presence_container) return true;
    return is_configured.is_set
	|| unused_removal_timeout_configured.is_set
	|| min_tunnel_id.is_set
	|| max_tunnel_id.is_set;
}

bool MplsTe::AutoTunnel::Mesh::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_configured.yfilter)
	|| ydk::is_set(unused_removal_timeout_configured.yfilter)
	|| ydk::is_set(min_tunnel_id.yfilter)
	|| ydk::is_set(max_tunnel_id.yfilter);
}

std::string MplsTe::AutoTunnel::Mesh::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/mesh/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Mesh::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Mesh::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_configured.is_set || is_set(is_configured.yfilter)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (unused_removal_timeout_configured.is_set || is_set(unused_removal_timeout_configured.yfilter)) leaf_name_data.push_back(unused_removal_timeout_configured.get_name_leafdata());
    if (min_tunnel_id.is_set || is_set(min_tunnel_id.yfilter)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());
    if (max_tunnel_id.is_set || is_set(max_tunnel_id.yfilter)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Mesh::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AutoTunnel::Mesh::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-configured")
    {
        is_configured = value;
        is_configured.value_namespace = name_space;
        is_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unused-removal-timeout-configured")
    {
        unused_removal_timeout_configured = value;
        unused_removal_timeout_configured.value_namespace = name_space;
        unused_removal_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
        min_tunnel_id.value_namespace = name_space;
        min_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
        max_tunnel_id.value_namespace = name_space;
        max_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AutoTunnel::Mesh::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-configured")
    {
        is_configured.yfilter = yfilter;
    }
    if(value_path == "unused-removal-timeout-configured")
    {
        unused_removal_timeout_configured.yfilter = yfilter;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnel::Mesh::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-configured" || name == "unused-removal-timeout-configured" || name == "min-tunnel-id" || name == "max-tunnel-id")
        return true;
    return false;
}

MplsTe::AutoTunnel::Mesh::OneHop::OneHop()
    :
    interfaces(std::make_shared<MplsTe::AutoTunnel::Mesh::OneHop::Interfaces>())
    , statistics(std::make_shared<MplsTe::AutoTunnel::Mesh::OneHop::Statistics>())
    , summary(std::make_shared<MplsTe::AutoTunnel::Mesh::OneHop::Summary>())
{
    interfaces->parent = this;
    statistics->parent = this;
    summary->parent = this;

    yang_name = "one-hop"; yang_parent_name = "mesh"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Mesh::OneHop::~OneHop()
{
}

bool MplsTe::AutoTunnel::Mesh::OneHop::has_data() const
{
    if (is_presence_container) return true;
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool MplsTe::AutoTunnel::Mesh::OneHop::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsTe::AutoTunnel::Mesh::OneHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/mesh/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Mesh::OneHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Mesh::OneHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::OneHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MplsTe::AutoTunnel::Mesh::OneHop::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::AutoTunnel::Mesh::OneHop::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTe::AutoTunnel::Mesh::OneHop::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Mesh::OneHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void MplsTe::AutoTunnel::Mesh::OneHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::AutoTunnel::Mesh::OneHop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::AutoTunnel::Mesh::OneHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "statistics" || name == "summary")
        return true;
    return false;
}

MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "one-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::~Interfaces()
{
}

bool MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/mesh/one-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface>();
        c->parent = this;
        interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"}
        ,
    tunnel(this, {})
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::~Interface()
{
}

bool MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set;
}

bool MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter);
}

std::string MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/mesh/one-hop/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        auto c = std::make_shared<MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel>();
        c->parent = this;
        tunnel.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tunnel.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel" || name == "interface-name" || name == "interface-name-xr")
        return true;
    return false;
}

MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::Tunnel()
    :
    tunnel_id{YType::uint16, "tunnel-id"},
    destination_address{YType::str, "destination-address"},
    tunnel_lspid{YType::uint16, "tunnel-lspid"},
    mesh_group_id{YType::uint32, "mesh-group-id"},
    tunnel_state{YType::enumeration, "tunnel-state"}
{

    yang_name = "tunnel"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::~Tunnel()
{
}

bool MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id.is_set
	|| destination_address.is_set
	|| tunnel_lspid.is_set
	|| mesh_group_id.is_set
	|| tunnel_state.is_set;
}

bool MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_lspid.yfilter)
	|| ydk::is_set(mesh_group_id.yfilter)
	|| ydk::is_set(tunnel_state.yfilter);
}

std::string MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_lspid.is_set || is_set(tunnel_lspid.yfilter)) leaf_name_data.push_back(tunnel_lspid.get_name_leafdata());
    if (mesh_group_id.is_set || is_set(mesh_group_id.yfilter)) leaf_name_data.push_back(mesh_group_id.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.yfilter)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-lspid")
    {
        tunnel_lspid = value;
        tunnel_lspid.value_namespace = name_space;
        tunnel_lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group-id")
    {
        mesh_group_id = value;
        mesh_group_id.value_namespace = name_space;
        mesh_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
        tunnel_state.value_namespace = name_space;
        tunnel_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-lspid")
    {
        tunnel_lspid.yfilter = yfilter;
    }
    if(value_path == "mesh-group-id")
    {
        mesh_group_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-id" || name == "destination-address" || name == "tunnel-lspid" || name == "mesh-group-id" || name == "tunnel-state")
        return true;
    return false;
}

MplsTe::AutoTunnel::Mesh::OneHop::Statistics::Statistics()
    :
    created{YType::uint32, "created"},
    connected{YType::uint32, "connected"},
    removed_unused{YType::uint32, "removed-unused"},
    removed_in_use{YType::uint32, "removed-in-use"},
    removed_range_exceeded{YType::uint32, "removed-range-exceeded"},
    last_cleared_time{YType::uint32, "last-cleared-time"}
{

    yang_name = "statistics"; yang_parent_name = "one-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Mesh::OneHop::Statistics::~Statistics()
{
}

bool MplsTe::AutoTunnel::Mesh::OneHop::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return created.is_set
	|| connected.is_set
	|| removed_unused.is_set
	|| removed_in_use.is_set
	|| removed_range_exceeded.is_set
	|| last_cleared_time.is_set;
}

bool MplsTe::AutoTunnel::Mesh::OneHop::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(created.yfilter)
	|| ydk::is_set(connected.yfilter)
	|| ydk::is_set(removed_unused.yfilter)
	|| ydk::is_set(removed_in_use.yfilter)
	|| ydk::is_set(removed_range_exceeded.yfilter)
	|| ydk::is_set(last_cleared_time.yfilter);
}

std::string MplsTe::AutoTunnel::Mesh::OneHop::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/mesh/one-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Mesh::OneHop::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Mesh::OneHop::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (created.is_set || is_set(created.yfilter)) leaf_name_data.push_back(created.get_name_leafdata());
    if (connected.is_set || is_set(connected.yfilter)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (removed_unused.is_set || is_set(removed_unused.yfilter)) leaf_name_data.push_back(removed_unused.get_name_leafdata());
    if (removed_in_use.is_set || is_set(removed_in_use.yfilter)) leaf_name_data.push_back(removed_in_use.get_name_leafdata());
    if (removed_range_exceeded.is_set || is_set(removed_range_exceeded.yfilter)) leaf_name_data.push_back(removed_range_exceeded.get_name_leafdata());
    if (last_cleared_time.is_set || is_set(last_cleared_time.yfilter)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::OneHop::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Mesh::OneHop::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AutoTunnel::Mesh::OneHop::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "created")
    {
        created = value;
        created.value_namespace = name_space;
        created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected")
    {
        connected = value;
        connected.value_namespace = name_space;
        connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "removed-unused")
    {
        removed_unused = value;
        removed_unused.value_namespace = name_space;
        removed_unused.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
        last_cleared_time.value_namespace = name_space;
        last_cleared_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AutoTunnel::Mesh::OneHop::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "created")
    {
        created.yfilter = yfilter;
    }
    if(value_path == "connected")
    {
        connected.yfilter = yfilter;
    }
    if(value_path == "removed-unused")
    {
        removed_unused.yfilter = yfilter;
    }
    if(value_path == "removed-in-use")
    {
        removed_in_use.yfilter = yfilter;
    }
    if(value_path == "removed-range-exceeded")
    {
        removed_range_exceeded.yfilter = yfilter;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnel::Mesh::OneHop::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "created" || name == "connected" || name == "removed-unused" || name == "removed-in-use" || name == "removed-range-exceeded" || name == "last-cleared-time")
        return true;
    return false;
}

MplsTe::AutoTunnel::Mesh::OneHop::Summary::Summary()
    :
    auto_mesh_one_hop_tunnels{YType::uint32, "auto-mesh-one-hop-tunnels"},
    up_auto_mesh_one_hop_tunnels{YType::uint32, "up-auto-mesh-one-hop-tunnels"},
    down_auto_mesh_one_hop_tunnels{YType::uint32, "down-auto-mesh-one-hop-tunnels"},
    frr_auto_mesh_tunnels{YType::uint32, "frr-auto-mesh-tunnels"},
    auto_mesh_one_hop_groups{YType::uint32, "auto-mesh-one-hop-groups"},
    auto_mesh_one_hop_destinations{YType::uint32, "auto-mesh-one-hop-destinations"}
{

    yang_name = "summary"; yang_parent_name = "one-hop"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Mesh::OneHop::Summary::~Summary()
{
}

bool MplsTe::AutoTunnel::Mesh::OneHop::Summary::has_data() const
{
    if (is_presence_container) return true;
    return auto_mesh_one_hop_tunnels.is_set
	|| up_auto_mesh_one_hop_tunnels.is_set
	|| down_auto_mesh_one_hop_tunnels.is_set
	|| frr_auto_mesh_tunnels.is_set
	|| auto_mesh_one_hop_groups.is_set
	|| auto_mesh_one_hop_destinations.is_set;
}

bool MplsTe::AutoTunnel::Mesh::OneHop::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_mesh_one_hop_tunnels.yfilter)
	|| ydk::is_set(up_auto_mesh_one_hop_tunnels.yfilter)
	|| ydk::is_set(down_auto_mesh_one_hop_tunnels.yfilter)
	|| ydk::is_set(frr_auto_mesh_tunnels.yfilter)
	|| ydk::is_set(auto_mesh_one_hop_groups.yfilter)
	|| ydk::is_set(auto_mesh_one_hop_destinations.yfilter);
}

std::string MplsTe::AutoTunnel::Mesh::OneHop::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/mesh/one-hop/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Mesh::OneHop::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Mesh::OneHop::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_mesh_one_hop_tunnels.is_set || is_set(auto_mesh_one_hop_tunnels.yfilter)) leaf_name_data.push_back(auto_mesh_one_hop_tunnels.get_name_leafdata());
    if (up_auto_mesh_one_hop_tunnels.is_set || is_set(up_auto_mesh_one_hop_tunnels.yfilter)) leaf_name_data.push_back(up_auto_mesh_one_hop_tunnels.get_name_leafdata());
    if (down_auto_mesh_one_hop_tunnels.is_set || is_set(down_auto_mesh_one_hop_tunnels.yfilter)) leaf_name_data.push_back(down_auto_mesh_one_hop_tunnels.get_name_leafdata());
    if (frr_auto_mesh_tunnels.is_set || is_set(frr_auto_mesh_tunnels.yfilter)) leaf_name_data.push_back(frr_auto_mesh_tunnels.get_name_leafdata());
    if (auto_mesh_one_hop_groups.is_set || is_set(auto_mesh_one_hop_groups.yfilter)) leaf_name_data.push_back(auto_mesh_one_hop_groups.get_name_leafdata());
    if (auto_mesh_one_hop_destinations.is_set || is_set(auto_mesh_one_hop_destinations.yfilter)) leaf_name_data.push_back(auto_mesh_one_hop_destinations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Mesh::OneHop::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Mesh::OneHop::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AutoTunnel::Mesh::OneHop::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-mesh-one-hop-tunnels")
    {
        auto_mesh_one_hop_tunnels = value;
        auto_mesh_one_hop_tunnels.value_namespace = name_space;
        auto_mesh_one_hop_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-auto-mesh-one-hop-tunnels")
    {
        up_auto_mesh_one_hop_tunnels = value;
        up_auto_mesh_one_hop_tunnels.value_namespace = name_space;
        up_auto_mesh_one_hop_tunnels.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "auto-mesh-one-hop-groups")
    {
        auto_mesh_one_hop_groups = value;
        auto_mesh_one_hop_groups.value_namespace = name_space;
        auto_mesh_one_hop_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-mesh-one-hop-destinations")
    {
        auto_mesh_one_hop_destinations = value;
        auto_mesh_one_hop_destinations.value_namespace = name_space;
        auto_mesh_one_hop_destinations.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AutoTunnel::Mesh::OneHop::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-mesh-one-hop-tunnels")
    {
        auto_mesh_one_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "up-auto-mesh-one-hop-tunnels")
    {
        up_auto_mesh_one_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "down-auto-mesh-one-hop-tunnels")
    {
        down_auto_mesh_one_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-one-hop-groups")
    {
        auto_mesh_one_hop_groups.yfilter = yfilter;
    }
    if(value_path == "auto-mesh-one-hop-destinations")
    {
        auto_mesh_one_hop_destinations.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnel::Mesh::OneHop::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-mesh-one-hop-tunnels" || name == "up-auto-mesh-one-hop-tunnels" || name == "down-auto-mesh-one-hop-tunnels" || name == "frr-auto-mesh-tunnels" || name == "auto-mesh-one-hop-groups" || name == "auto-mesh-one-hop-destinations")
        return true;
    return false;
}

MplsTe::AutoTunnel::Backup::Backup()
    :
    tunnels(std::make_shared<MplsTe::AutoTunnel::Backup::Tunnels>())
    , statistics(std::make_shared<MplsTe::AutoTunnel::Backup::Statistics>())
    , summary(std::make_shared<MplsTe::AutoTunnel::Backup::Summary>())
    , config(std::make_shared<MplsTe::AutoTunnel::Backup::Config>())
{
    tunnels->parent = this;
    statistics->parent = this;
    summary->parent = this;
    config->parent = this;

    yang_name = "backup"; yang_parent_name = "auto-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Backup::~Backup()
{
}

bool MplsTe::AutoTunnel::Backup::has_data() const
{
    if (is_presence_container) return true;
    return (tunnels !=  nullptr && tunnels->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (config !=  nullptr && config->has_data());
}

bool MplsTe::AutoTunnel::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (tunnels !=  nullptr && tunnels->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (config !=  nullptr && config->has_operation());
}

std::string MplsTe::AutoTunnel::Backup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<MplsTe::AutoTunnel::Backup::Tunnels>();
        }
        return tunnels;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::AutoTunnel::Backup::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTe::AutoTunnel::Backup::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<MplsTe::AutoTunnel::Backup::Config>();
        }
        return config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tunnels != nullptr)
    {
        children["tunnels"] = tunnels;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(config != nullptr)
    {
        children["config"] = config;
    }

    return children;
}

void MplsTe::AutoTunnel::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::AutoTunnel::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::AutoTunnel::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnels" || name == "statistics" || name == "summary" || name == "config")
        return true;
    return false;
}

MplsTe::AutoTunnel::Backup::Tunnels::Tunnels()
    :
    tunnel(this, {"backup_tunnel_name"})
{

    yang_name = "tunnels"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Backup::Tunnels::~Tunnels()
{
}

bool MplsTe::AutoTunnel::Backup::Tunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::AutoTunnel::Backup::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.len(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::AutoTunnel::Backup::Tunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Backup::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Backup::Tunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Backup::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        auto c = std::make_shared<MplsTe::AutoTunnel::Backup::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Backup::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : tunnel.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::AutoTunnel::Backup::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::AutoTunnel::Backup::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::AutoTunnel::Backup::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel")
        return true;
    return false;
}

MplsTe::AutoTunnel::Backup::Tunnels::Tunnel::Tunnel()
    :
    backup_tunnel_name{YType::str, "backup-tunnel-name"},
    tunnel_name{YType::str, "tunnel-name"},
    operational_status{YType::enumeration, "operational-status"},
    srlg_mode{YType::enumeration, "srlg-mode"},
    atb_protection_type{YType::enumeration, "atb-protection-type"},
    protected_flows{YType::uint32, "protected-flows"},
    protected_interface_name{YType::str, "protected-interface-name"},
    protected_router_id{YType::str, "protected-router-id"}
{

    yang_name = "tunnel"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Backup::Tunnels::Tunnel::~Tunnel()
{
}

bool MplsTe::AutoTunnel::Backup::Tunnels::Tunnel::has_data() const
{
    if (is_presence_container) return true;
    return backup_tunnel_name.is_set
	|| tunnel_name.is_set
	|| operational_status.is_set
	|| srlg_mode.is_set
	|| atb_protection_type.is_set
	|| protected_flows.is_set
	|| protected_interface_name.is_set
	|| protected_router_id.is_set;
}

bool MplsTe::AutoTunnel::Backup::Tunnels::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup_tunnel_name.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(operational_status.yfilter)
	|| ydk::is_set(srlg_mode.yfilter)
	|| ydk::is_set(atb_protection_type.yfilter)
	|| ydk::is_set(protected_flows.yfilter)
	|| ydk::is_set(protected_interface_name.yfilter)
	|| ydk::is_set(protected_router_id.yfilter);
}

std::string MplsTe::AutoTunnel::Backup::Tunnels::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/backup/tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Backup::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    ADD_KEY_TOKEN(backup_tunnel_name, "backup-tunnel-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Backup::Tunnels::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.yfilter)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (operational_status.is_set || is_set(operational_status.yfilter)) leaf_name_data.push_back(operational_status.get_name_leafdata());
    if (srlg_mode.is_set || is_set(srlg_mode.yfilter)) leaf_name_data.push_back(srlg_mode.get_name_leafdata());
    if (atb_protection_type.is_set || is_set(atb_protection_type.yfilter)) leaf_name_data.push_back(atb_protection_type.get_name_leafdata());
    if (protected_flows.is_set || is_set(protected_flows.yfilter)) leaf_name_data.push_back(protected_flows.get_name_leafdata());
    if (protected_interface_name.is_set || is_set(protected_interface_name.yfilter)) leaf_name_data.push_back(protected_interface_name.get_name_leafdata());
    if (protected_router_id.is_set || is_set(protected_router_id.yfilter)) leaf_name_data.push_back(protected_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Backup::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Backup::Tunnels::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AutoTunnel::Backup::Tunnels::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
        backup_tunnel_name.value_namespace = name_space;
        backup_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-status")
    {
        operational_status = value;
        operational_status.value_namespace = name_space;
        operational_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-mode")
    {
        srlg_mode = value;
        srlg_mode.value_namespace = name_space;
        srlg_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atb-protection-type")
    {
        atb_protection_type = value;
        atb_protection_type.value_namespace = name_space;
        atb_protection_type.value_namespace_prefix = name_space_prefix;
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
}

void MplsTe::AutoTunnel::Backup::Tunnels::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "operational-status")
    {
        operational_status.yfilter = yfilter;
    }
    if(value_path == "srlg-mode")
    {
        srlg_mode.yfilter = yfilter;
    }
    if(value_path == "atb-protection-type")
    {
        atb_protection_type.yfilter = yfilter;
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
}

bool MplsTe::AutoTunnel::Backup::Tunnels::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-tunnel-name" || name == "tunnel-name" || name == "operational-status" || name == "srlg-mode" || name == "atb-protection-type" || name == "protected-flows" || name == "protected-interface-name" || name == "protected-router-id")
        return true;
    return false;
}

MplsTe::AutoTunnel::Backup::Statistics::Statistics()
    :
    last_cleared_time{YType::uint32, "last-cleared-time"}
        ,
    created(std::make_shared<MplsTe::AutoTunnel::Backup::Statistics::Created>())
    , connected(std::make_shared<MplsTe::AutoTunnel::Backup::Statistics::Connected>())
    , removed_down(std::make_shared<MplsTe::AutoTunnel::Backup::Statistics::RemovedDown>())
    , removed_unused(std::make_shared<MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused>())
    , removed_in_use(std::make_shared<MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse>())
    , removed_range_exceeded(std::make_shared<MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded>())
{
    created->parent = this;
    connected->parent = this;
    removed_down->parent = this;
    removed_unused->parent = this;
    removed_in_use->parent = this;
    removed_range_exceeded->parent = this;

    yang_name = "statistics"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Backup::Statistics::~Statistics()
{
}

bool MplsTe::AutoTunnel::Backup::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return last_cleared_time.is_set
	|| (created !=  nullptr && created->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (removed_down !=  nullptr && removed_down->has_data())
	|| (removed_unused !=  nullptr && removed_unused->has_data())
	|| (removed_in_use !=  nullptr && removed_in_use->has_data())
	|| (removed_range_exceeded !=  nullptr && removed_range_exceeded->has_data());
}

bool MplsTe::AutoTunnel::Backup::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_cleared_time.yfilter)
	|| (created !=  nullptr && created->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (removed_down !=  nullptr && removed_down->has_operation())
	|| (removed_unused !=  nullptr && removed_unused->has_operation())
	|| (removed_in_use !=  nullptr && removed_in_use->has_operation())
	|| (removed_range_exceeded !=  nullptr && removed_range_exceeded->has_operation());
}

std::string MplsTe::AutoTunnel::Backup::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Backup::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Backup::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_time.is_set || is_set(last_cleared_time.yfilter)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Backup::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "created")
    {
        if(created == nullptr)
        {
            created = std::make_shared<MplsTe::AutoTunnel::Backup::Statistics::Created>();
        }
        return created;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<MplsTe::AutoTunnel::Backup::Statistics::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "removed-down")
    {
        if(removed_down == nullptr)
        {
            removed_down = std::make_shared<MplsTe::AutoTunnel::Backup::Statistics::RemovedDown>();
        }
        return removed_down;
    }

    if(child_yang_name == "removed-unused")
    {
        if(removed_unused == nullptr)
        {
            removed_unused = std::make_shared<MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused>();
        }
        return removed_unused;
    }

    if(child_yang_name == "removed-in-use")
    {
        if(removed_in_use == nullptr)
        {
            removed_in_use = std::make_shared<MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse>();
        }
        return removed_in_use;
    }

    if(child_yang_name == "removed-range-exceeded")
    {
        if(removed_range_exceeded == nullptr)
        {
            removed_range_exceeded = std::make_shared<MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded>();
        }
        return removed_range_exceeded;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Backup::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(created != nullptr)
    {
        children["created"] = created;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    if(removed_down != nullptr)
    {
        children["removed-down"] = removed_down;
    }

    if(removed_unused != nullptr)
    {
        children["removed-unused"] = removed_unused;
    }

    if(removed_in_use != nullptr)
    {
        children["removed-in-use"] = removed_in_use;
    }

    if(removed_range_exceeded != nullptr)
    {
        children["removed-range-exceeded"] = removed_range_exceeded;
    }

    return children;
}

void MplsTe::AutoTunnel::Backup::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
        last_cleared_time.value_namespace = name_space;
        last_cleared_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AutoTunnel::Backup::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-cleared-time")
    {
        last_cleared_time.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnel::Backup::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "created" || name == "connected" || name == "removed-down" || name == "removed-unused" || name == "removed-in-use" || name == "removed-range-exceeded" || name == "last-cleared-time")
        return true;
    return false;
}

MplsTe::AutoTunnel::Backup::Statistics::Created::Created()
    :
    total_tunnels{YType::uint32, "total-tunnels"},
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"}
{

    yang_name = "created"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Backup::Statistics::Created::~Created()
{
}

bool MplsTe::AutoTunnel::Backup::Statistics::Created::has_data() const
{
    if (is_presence_container) return true;
    return total_tunnels.is_set
	|| next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set;
}

bool MplsTe::AutoTunnel::Backup::Statistics::Created::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_tunnels.yfilter)
	|| ydk::is_set(next_hop_tunnels.yfilter)
	|| ydk::is_set(next_next_hop_tunnels.yfilter);
}

std::string MplsTe::AutoTunnel::Backup::Statistics::Created::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/backup/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Backup::Statistics::Created::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "created";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Backup::Statistics::Created::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());
    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Backup::Statistics::Created::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Backup::Statistics::Created::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AutoTunnel::Backup::Statistics::Created::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::AutoTunnel::Backup::Statistics::Created::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnel::Backup::Statistics::Created::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-tunnels" || name == "next-hop-tunnels" || name == "next-next-hop-tunnels")
        return true;
    return false;
}

MplsTe::AutoTunnel::Backup::Statistics::Connected::Connected()
    :
    total_tunnels{YType::uint32, "total-tunnels"},
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"}
{

    yang_name = "connected"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Backup::Statistics::Connected::~Connected()
{
}

bool MplsTe::AutoTunnel::Backup::Statistics::Connected::has_data() const
{
    if (is_presence_container) return true;
    return total_tunnels.is_set
	|| next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set;
}

bool MplsTe::AutoTunnel::Backup::Statistics::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_tunnels.yfilter)
	|| ydk::is_set(next_hop_tunnels.yfilter)
	|| ydk::is_set(next_next_hop_tunnels.yfilter);
}

std::string MplsTe::AutoTunnel::Backup::Statistics::Connected::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/backup/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Backup::Statistics::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Backup::Statistics::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());
    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Backup::Statistics::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Backup::Statistics::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AutoTunnel::Backup::Statistics::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::AutoTunnel::Backup::Statistics::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnel::Backup::Statistics::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-tunnels" || name == "next-hop-tunnels" || name == "next-next-hop-tunnels")
        return true;
    return false;
}

MplsTe::AutoTunnel::Backup::Statistics::RemovedDown::RemovedDown()
    :
    total_tunnels{YType::uint32, "total-tunnels"},
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"}
{

    yang_name = "removed-down"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Backup::Statistics::RemovedDown::~RemovedDown()
{
}

bool MplsTe::AutoTunnel::Backup::Statistics::RemovedDown::has_data() const
{
    if (is_presence_container) return true;
    return total_tunnels.is_set
	|| next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set;
}

bool MplsTe::AutoTunnel::Backup::Statistics::RemovedDown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_tunnels.yfilter)
	|| ydk::is_set(next_hop_tunnels.yfilter)
	|| ydk::is_set(next_next_hop_tunnels.yfilter);
}

std::string MplsTe::AutoTunnel::Backup::Statistics::RemovedDown::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/backup/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Backup::Statistics::RemovedDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removed-down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Backup::Statistics::RemovedDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());
    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Backup::Statistics::RemovedDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Backup::Statistics::RemovedDown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AutoTunnel::Backup::Statistics::RemovedDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::AutoTunnel::Backup::Statistics::RemovedDown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnel::Backup::Statistics::RemovedDown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-tunnels" || name == "next-hop-tunnels" || name == "next-next-hop-tunnels")
        return true;
    return false;
}

MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused::RemovedUnused()
    :
    total_tunnels{YType::uint32, "total-tunnels"},
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"}
{

    yang_name = "removed-unused"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused::~RemovedUnused()
{
}

bool MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused::has_data() const
{
    if (is_presence_container) return true;
    return total_tunnels.is_set
	|| next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set;
}

bool MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_tunnels.yfilter)
	|| ydk::is_set(next_hop_tunnels.yfilter)
	|| ydk::is_set(next_next_hop_tunnels.yfilter);
}

std::string MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/backup/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removed-unused";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());
    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnel::Backup::Statistics::RemovedUnused::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-tunnels" || name == "next-hop-tunnels" || name == "next-next-hop-tunnels")
        return true;
    return false;
}

MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse::RemovedInUse()
    :
    total_tunnels{YType::uint32, "total-tunnels"},
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"}
{

    yang_name = "removed-in-use"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse::~RemovedInUse()
{
}

bool MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse::has_data() const
{
    if (is_presence_container) return true;
    return total_tunnels.is_set
	|| next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set;
}

bool MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_tunnels.yfilter)
	|| ydk::is_set(next_hop_tunnels.yfilter)
	|| ydk::is_set(next_next_hop_tunnels.yfilter);
}

std::string MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/backup/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removed-in-use";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());
    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnel::Backup::Statistics::RemovedInUse::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-tunnels" || name == "next-hop-tunnels" || name == "next-next-hop-tunnels")
        return true;
    return false;
}

MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::RemovedRangeExceeded()
    :
    total_tunnels{YType::uint32, "total-tunnels"},
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"}
{

    yang_name = "removed-range-exceeded"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::~RemovedRangeExceeded()
{
}

bool MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::has_data() const
{
    if (is_presence_container) return true;
    return total_tunnels.is_set
	|| next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set;
}

bool MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_tunnels.yfilter)
	|| ydk::is_set(next_hop_tunnels.yfilter)
	|| ydk::is_set(next_next_hop_tunnels.yfilter);
}

std::string MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/backup/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removed-range-exceeded";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());
    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.yfilter)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-tunnels" || name == "next-hop-tunnels" || name == "next-next-hop-tunnels")
        return true;
    return false;
}

MplsTe::AutoTunnel::Backup::Summary::Summary()
    :
    autobackups{YType::uint32, "autobackups"},
    up_autobackups{YType::uint32, "up-autobackups"},
    down_autobackups{YType::uint32, "down-autobackups"},
    unused_autobackups{YType::uint32, "unused-autobackups"},
    next_hop_autobackups{YType::uint32, "next-hop-autobackups"},
    next_next_hop_autobackups{YType::uint32, "next-next-hop-autobackups"},
    srlg_strict_autobackups{YType::uint32, "srlg-strict-autobackups"},
    srlg_preferred_autobackups{YType::uint32, "srlg-preferred-autobackups"},
    srlg_weighted_autobackups{YType::uint32, "srlg-weighted-autobackups"},
    next_hop_autobackup_protected_ls_ps{YType::uint32, "next-hop-autobackup-protected-ls-ps"},
    next_next_hop_autobackup_protected_ls_ps{YType::uint32, "next-next-hop-autobackup-protected-ls-ps"},
    next_hop_srlg_autobackup_protected_ls_ps{YType::uint32, "next-hop-srlg-autobackup-protected-ls-ps"},
    next_next_hop_srlg_autobackup_protected_ls_ps{YType::uint32, "next-next-hop-srlg-autobackup-protected-ls-ps"},
    next_hop_autobackup_protected_s2l_families{YType::uint32, "next-hop-autobackup-protected-s2l-families"},
    next_next_hop_autobackup_protected_s2l_families{YType::uint32, "next-next-hop-autobackup-protected-s2l-families"},
    next_hop_srlg_autobackup_protected_s2l_families{YType::uint32, "next-hop-srlg-autobackup-protected-s2l-families"},
    next_next_hop_srlg_autobackup_protected_s2l_families{YType::uint32, "next-next-hop-srlg-autobackup-protected-s2l-families"},
    next_hop_autobackup_protected_s2_ls{YType::uint32, "next-hop-autobackup-protected-s2-ls"},
    next_next_hop_autobackup_protected_s2_ls{YType::uint32, "next-next-hop-autobackup-protected-s2-ls"},
    next_hop_srlg_autobackup_protected_s2_ls{YType::uint32, "next-hop-srlg-autobackup-protected-s2-ls"},
    next_next_hop_srlg_autobackup_protected_s2_ls{YType::uint32, "next-next-hop-srlg-autobackup-protected-s2-ls"}
{

    yang_name = "summary"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Backup::Summary::~Summary()
{
}

bool MplsTe::AutoTunnel::Backup::Summary::has_data() const
{
    if (is_presence_container) return true;
    return autobackups.is_set
	|| up_autobackups.is_set
	|| down_autobackups.is_set
	|| unused_autobackups.is_set
	|| next_hop_autobackups.is_set
	|| next_next_hop_autobackups.is_set
	|| srlg_strict_autobackups.is_set
	|| srlg_preferred_autobackups.is_set
	|| srlg_weighted_autobackups.is_set
	|| next_hop_autobackup_protected_ls_ps.is_set
	|| next_next_hop_autobackup_protected_ls_ps.is_set
	|| next_hop_srlg_autobackup_protected_ls_ps.is_set
	|| next_next_hop_srlg_autobackup_protected_ls_ps.is_set
	|| next_hop_autobackup_protected_s2l_families.is_set
	|| next_next_hop_autobackup_protected_s2l_families.is_set
	|| next_hop_srlg_autobackup_protected_s2l_families.is_set
	|| next_next_hop_srlg_autobackup_protected_s2l_families.is_set
	|| next_hop_autobackup_protected_s2_ls.is_set
	|| next_next_hop_autobackup_protected_s2_ls.is_set
	|| next_hop_srlg_autobackup_protected_s2_ls.is_set
	|| next_next_hop_srlg_autobackup_protected_s2_ls.is_set;
}

bool MplsTe::AutoTunnel::Backup::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autobackups.yfilter)
	|| ydk::is_set(up_autobackups.yfilter)
	|| ydk::is_set(down_autobackups.yfilter)
	|| ydk::is_set(unused_autobackups.yfilter)
	|| ydk::is_set(next_hop_autobackups.yfilter)
	|| ydk::is_set(next_next_hop_autobackups.yfilter)
	|| ydk::is_set(srlg_strict_autobackups.yfilter)
	|| ydk::is_set(srlg_preferred_autobackups.yfilter)
	|| ydk::is_set(srlg_weighted_autobackups.yfilter)
	|| ydk::is_set(next_hop_autobackup_protected_ls_ps.yfilter)
	|| ydk::is_set(next_next_hop_autobackup_protected_ls_ps.yfilter)
	|| ydk::is_set(next_hop_srlg_autobackup_protected_ls_ps.yfilter)
	|| ydk::is_set(next_next_hop_srlg_autobackup_protected_ls_ps.yfilter)
	|| ydk::is_set(next_hop_autobackup_protected_s2l_families.yfilter)
	|| ydk::is_set(next_next_hop_autobackup_protected_s2l_families.yfilter)
	|| ydk::is_set(next_hop_srlg_autobackup_protected_s2l_families.yfilter)
	|| ydk::is_set(next_next_hop_srlg_autobackup_protected_s2l_families.yfilter)
	|| ydk::is_set(next_hop_autobackup_protected_s2_ls.yfilter)
	|| ydk::is_set(next_next_hop_autobackup_protected_s2_ls.yfilter)
	|| ydk::is_set(next_hop_srlg_autobackup_protected_s2_ls.yfilter)
	|| ydk::is_set(next_next_hop_srlg_autobackup_protected_s2_ls.yfilter);
}

std::string MplsTe::AutoTunnel::Backup::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Backup::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Backup::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autobackups.is_set || is_set(autobackups.yfilter)) leaf_name_data.push_back(autobackups.get_name_leafdata());
    if (up_autobackups.is_set || is_set(up_autobackups.yfilter)) leaf_name_data.push_back(up_autobackups.get_name_leafdata());
    if (down_autobackups.is_set || is_set(down_autobackups.yfilter)) leaf_name_data.push_back(down_autobackups.get_name_leafdata());
    if (unused_autobackups.is_set || is_set(unused_autobackups.yfilter)) leaf_name_data.push_back(unused_autobackups.get_name_leafdata());
    if (next_hop_autobackups.is_set || is_set(next_hop_autobackups.yfilter)) leaf_name_data.push_back(next_hop_autobackups.get_name_leafdata());
    if (next_next_hop_autobackups.is_set || is_set(next_next_hop_autobackups.yfilter)) leaf_name_data.push_back(next_next_hop_autobackups.get_name_leafdata());
    if (srlg_strict_autobackups.is_set || is_set(srlg_strict_autobackups.yfilter)) leaf_name_data.push_back(srlg_strict_autobackups.get_name_leafdata());
    if (srlg_preferred_autobackups.is_set || is_set(srlg_preferred_autobackups.yfilter)) leaf_name_data.push_back(srlg_preferred_autobackups.get_name_leafdata());
    if (srlg_weighted_autobackups.is_set || is_set(srlg_weighted_autobackups.yfilter)) leaf_name_data.push_back(srlg_weighted_autobackups.get_name_leafdata());
    if (next_hop_autobackup_protected_ls_ps.is_set || is_set(next_hop_autobackup_protected_ls_ps.yfilter)) leaf_name_data.push_back(next_hop_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_next_hop_autobackup_protected_ls_ps.is_set || is_set(next_next_hop_autobackup_protected_ls_ps.yfilter)) leaf_name_data.push_back(next_next_hop_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_hop_srlg_autobackup_protected_ls_ps.is_set || is_set(next_hop_srlg_autobackup_protected_ls_ps.yfilter)) leaf_name_data.push_back(next_hop_srlg_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_next_hop_srlg_autobackup_protected_ls_ps.is_set || is_set(next_next_hop_srlg_autobackup_protected_ls_ps.yfilter)) leaf_name_data.push_back(next_next_hop_srlg_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_hop_autobackup_protected_s2l_families.is_set || is_set(next_hop_autobackup_protected_s2l_families.yfilter)) leaf_name_data.push_back(next_hop_autobackup_protected_s2l_families.get_name_leafdata());
    if (next_next_hop_autobackup_protected_s2l_families.is_set || is_set(next_next_hop_autobackup_protected_s2l_families.yfilter)) leaf_name_data.push_back(next_next_hop_autobackup_protected_s2l_families.get_name_leafdata());
    if (next_hop_srlg_autobackup_protected_s2l_families.is_set || is_set(next_hop_srlg_autobackup_protected_s2l_families.yfilter)) leaf_name_data.push_back(next_hop_srlg_autobackup_protected_s2l_families.get_name_leafdata());
    if (next_next_hop_srlg_autobackup_protected_s2l_families.is_set || is_set(next_next_hop_srlg_autobackup_protected_s2l_families.yfilter)) leaf_name_data.push_back(next_next_hop_srlg_autobackup_protected_s2l_families.get_name_leafdata());
    if (next_hop_autobackup_protected_s2_ls.is_set || is_set(next_hop_autobackup_protected_s2_ls.yfilter)) leaf_name_data.push_back(next_hop_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_next_hop_autobackup_protected_s2_ls.is_set || is_set(next_next_hop_autobackup_protected_s2_ls.yfilter)) leaf_name_data.push_back(next_next_hop_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_hop_srlg_autobackup_protected_s2_ls.is_set || is_set(next_hop_srlg_autobackup_protected_s2_ls.yfilter)) leaf_name_data.push_back(next_hop_srlg_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_next_hop_srlg_autobackup_protected_s2_ls.is_set || is_set(next_next_hop_srlg_autobackup_protected_s2_ls.yfilter)) leaf_name_data.push_back(next_next_hop_srlg_autobackup_protected_s2_ls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Backup::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Backup::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AutoTunnel::Backup::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autobackups")
    {
        autobackups = value;
        autobackups.value_namespace = name_space;
        autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-autobackups")
    {
        up_autobackups = value;
        up_autobackups.value_namespace = name_space;
        up_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-autobackups")
    {
        down_autobackups = value;
        down_autobackups.value_namespace = name_space;
        down_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unused-autobackups")
    {
        unused_autobackups = value;
        unused_autobackups.value_namespace = name_space;
        unused_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-autobackups")
    {
        next_hop_autobackups = value;
        next_hop_autobackups.value_namespace = name_space;
        next_hop_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-autobackups")
    {
        next_next_hop_autobackups = value;
        next_next_hop_autobackups.value_namespace = name_space;
        next_next_hop_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-strict-autobackups")
    {
        srlg_strict_autobackups = value;
        srlg_strict_autobackups.value_namespace = name_space;
        srlg_strict_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-preferred-autobackups")
    {
        srlg_preferred_autobackups = value;
        srlg_preferred_autobackups.value_namespace = name_space;
        srlg_preferred_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-weighted-autobackups")
    {
        srlg_weighted_autobackups = value;
        srlg_weighted_autobackups.value_namespace = name_space;
        srlg_weighted_autobackups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-autobackup-protected-ls-ps")
    {
        next_hop_autobackup_protected_ls_ps = value;
        next_hop_autobackup_protected_ls_ps.value_namespace = name_space;
        next_hop_autobackup_protected_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-autobackup-protected-ls-ps")
    {
        next_next_hop_autobackup_protected_ls_ps = value;
        next_next_hop_autobackup_protected_ls_ps.value_namespace = name_space;
        next_next_hop_autobackup_protected_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-ls-ps")
    {
        next_hop_srlg_autobackup_protected_ls_ps = value;
        next_hop_srlg_autobackup_protected_ls_ps.value_namespace = name_space;
        next_hop_srlg_autobackup_protected_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-ls-ps")
    {
        next_next_hop_srlg_autobackup_protected_ls_ps = value;
        next_next_hop_srlg_autobackup_protected_ls_ps.value_namespace = name_space;
        next_next_hop_srlg_autobackup_protected_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-autobackup-protected-s2l-families")
    {
        next_hop_autobackup_protected_s2l_families = value;
        next_hop_autobackup_protected_s2l_families.value_namespace = name_space;
        next_hop_autobackup_protected_s2l_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-autobackup-protected-s2l-families")
    {
        next_next_hop_autobackup_protected_s2l_families = value;
        next_next_hop_autobackup_protected_s2l_families.value_namespace = name_space;
        next_next_hop_autobackup_protected_s2l_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-s2l-families")
    {
        next_hop_srlg_autobackup_protected_s2l_families = value;
        next_hop_srlg_autobackup_protected_s2l_families.value_namespace = name_space;
        next_hop_srlg_autobackup_protected_s2l_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-s2l-families")
    {
        next_next_hop_srlg_autobackup_protected_s2l_families = value;
        next_next_hop_srlg_autobackup_protected_s2l_families.value_namespace = name_space;
        next_next_hop_srlg_autobackup_protected_s2l_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-autobackup-protected-s2-ls")
    {
        next_hop_autobackup_protected_s2_ls = value;
        next_hop_autobackup_protected_s2_ls.value_namespace = name_space;
        next_hop_autobackup_protected_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-autobackup-protected-s2-ls")
    {
        next_next_hop_autobackup_protected_s2_ls = value;
        next_next_hop_autobackup_protected_s2_ls.value_namespace = name_space;
        next_next_hop_autobackup_protected_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-s2-ls")
    {
        next_hop_srlg_autobackup_protected_s2_ls = value;
        next_hop_srlg_autobackup_protected_s2_ls.value_namespace = name_space;
        next_hop_srlg_autobackup_protected_s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-s2-ls")
    {
        next_next_hop_srlg_autobackup_protected_s2_ls = value;
        next_next_hop_srlg_autobackup_protected_s2_ls.value_namespace = name_space;
        next_next_hop_srlg_autobackup_protected_s2_ls.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AutoTunnel::Backup::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autobackups")
    {
        autobackups.yfilter = yfilter;
    }
    if(value_path == "up-autobackups")
    {
        up_autobackups.yfilter = yfilter;
    }
    if(value_path == "down-autobackups")
    {
        down_autobackups.yfilter = yfilter;
    }
    if(value_path == "unused-autobackups")
    {
        unused_autobackups.yfilter = yfilter;
    }
    if(value_path == "next-hop-autobackups")
    {
        next_hop_autobackups.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-autobackups")
    {
        next_next_hop_autobackups.yfilter = yfilter;
    }
    if(value_path == "srlg-strict-autobackups")
    {
        srlg_strict_autobackups.yfilter = yfilter;
    }
    if(value_path == "srlg-preferred-autobackups")
    {
        srlg_preferred_autobackups.yfilter = yfilter;
    }
    if(value_path == "srlg-weighted-autobackups")
    {
        srlg_weighted_autobackups.yfilter = yfilter;
    }
    if(value_path == "next-hop-autobackup-protected-ls-ps")
    {
        next_hop_autobackup_protected_ls_ps.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-autobackup-protected-ls-ps")
    {
        next_next_hop_autobackup_protected_ls_ps.yfilter = yfilter;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-ls-ps")
    {
        next_hop_srlg_autobackup_protected_ls_ps.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-ls-ps")
    {
        next_next_hop_srlg_autobackup_protected_ls_ps.yfilter = yfilter;
    }
    if(value_path == "next-hop-autobackup-protected-s2l-families")
    {
        next_hop_autobackup_protected_s2l_families.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-autobackup-protected-s2l-families")
    {
        next_next_hop_autobackup_protected_s2l_families.yfilter = yfilter;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-s2l-families")
    {
        next_hop_srlg_autobackup_protected_s2l_families.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-s2l-families")
    {
        next_next_hop_srlg_autobackup_protected_s2l_families.yfilter = yfilter;
    }
    if(value_path == "next-hop-autobackup-protected-s2-ls")
    {
        next_hop_autobackup_protected_s2_ls.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-autobackup-protected-s2-ls")
    {
        next_next_hop_autobackup_protected_s2_ls.yfilter = yfilter;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-s2-ls")
    {
        next_hop_srlg_autobackup_protected_s2_ls.yfilter = yfilter;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-s2-ls")
    {
        next_next_hop_srlg_autobackup_protected_s2_ls.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnel::Backup::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autobackups" || name == "up-autobackups" || name == "down-autobackups" || name == "unused-autobackups" || name == "next-hop-autobackups" || name == "next-next-hop-autobackups" || name == "srlg-strict-autobackups" || name == "srlg-preferred-autobackups" || name == "srlg-weighted-autobackups" || name == "next-hop-autobackup-protected-ls-ps" || name == "next-next-hop-autobackup-protected-ls-ps" || name == "next-hop-srlg-autobackup-protected-ls-ps" || name == "next-next-hop-srlg-autobackup-protected-ls-ps" || name == "next-hop-autobackup-protected-s2l-families" || name == "next-next-hop-autobackup-protected-s2l-families" || name == "next-hop-srlg-autobackup-protected-s2l-families" || name == "next-next-hop-srlg-autobackup-protected-s2l-families" || name == "next-hop-autobackup-protected-s2-ls" || name == "next-next-hop-autobackup-protected-s2-ls" || name == "next-hop-srlg-autobackup-protected-s2-ls" || name == "next-next-hop-srlg-autobackup-protected-s2-ls")
        return true;
    return false;
}

MplsTe::AutoTunnel::Backup::Config::Config()
    :
    is_configured{YType::boolean, "is-configured"},
    interface_count{YType::uint32, "interface-count"},
    unused_removal_timeout_configured{YType::uint32, "unused-removal-timeout-configured"},
    min_tunnel_id{YType::uint16, "min-tunnel-id"},
    max_tunnel_id{YType::uint16, "max-tunnel-id"}
{

    yang_name = "config"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::AutoTunnel::Backup::Config::~Config()
{
}

bool MplsTe::AutoTunnel::Backup::Config::has_data() const
{
    if (is_presence_container) return true;
    return is_configured.is_set
	|| interface_count.is_set
	|| unused_removal_timeout_configured.is_set
	|| min_tunnel_id.is_set
	|| max_tunnel_id.is_set;
}

bool MplsTe::AutoTunnel::Backup::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_configured.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(unused_removal_timeout_configured.yfilter)
	|| ydk::is_set(min_tunnel_id.yfilter)
	|| ydk::is_set(max_tunnel_id.yfilter);
}

std::string MplsTe::AutoTunnel::Backup::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/auto-tunnel/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::AutoTunnel::Backup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::AutoTunnel::Backup::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_configured.is_set || is_set(is_configured.yfilter)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (unused_removal_timeout_configured.is_set || is_set(unused_removal_timeout_configured.yfilter)) leaf_name_data.push_back(unused_removal_timeout_configured.get_name_leafdata());
    if (min_tunnel_id.is_set || is_set(min_tunnel_id.yfilter)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());
    if (max_tunnel_id.is_set || is_set(max_tunnel_id.yfilter)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::AutoTunnel::Backup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::AutoTunnel::Backup::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::AutoTunnel::Backup::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-configured")
    {
        is_configured = value;
        is_configured.value_namespace = name_space;
        is_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unused-removal-timeout-configured")
    {
        unused_removal_timeout_configured = value;
        unused_removal_timeout_configured.value_namespace = name_space;
        unused_removal_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
        min_tunnel_id.value_namespace = name_space;
        min_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
        max_tunnel_id.value_namespace = name_space;
        max_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::AutoTunnel::Backup::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-configured")
    {
        is_configured.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "unused-removal-timeout-configured")
    {
        unused_removal_timeout_configured.yfilter = yfilter;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id.yfilter = yfilter;
    }
}

bool MplsTe::AutoTunnel::Backup::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-configured" || name == "interface-count" || name == "unused-removal-timeout-configured" || name == "min-tunnel-id" || name == "max-tunnel-id")
        return true;
    return false;
}

MplsTe::SoftPreemption::SoftPreemption()
    :
    statistics(std::make_shared<MplsTe::SoftPreemption::Statistics>())
{
    statistics->parent = this;

    yang_name = "soft-preemption"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::SoftPreemption::~SoftPreemption()
{
}

bool MplsTe::SoftPreemption::has_data() const
{
    if (is_presence_container) return true;
    return (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SoftPreemption::has_operation() const
{
    return is_set(yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SoftPreemption::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SoftPreemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SoftPreemption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SoftPreemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::SoftPreemption::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SoftPreemption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTe::SoftPreemption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::SoftPreemption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::SoftPreemption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics")
        return true;
    return false;
}

MplsTe::SoftPreemption::Statistics::Statistics()
    :
    last_cleared_timestamp{YType::uint32, "last-cleared-timestamp"},
    soft_preemption_events{YType::uint32, "soft-preemption-events"},
    soft_preempted_ls_ps{YType::uint32, "soft-preempted-ls-ps"},
    timed_out_soft_preempted_lsp_ss{YType::uint32, "timed-out-soft-preempted-lsp-ss"},
    torn_down_soft_preempted_ls_ps{YType::uint32, "torn-down-soft-preempted-ls-ps"},
    frr_triggered_soft_preempted_lsp_ss{YType::uint32, "frr-triggered-soft-preempted-lsp-ss"},
    minimum_time_in_soft_preempted_state{YType::uint16, "minimum-time-in-soft-preempted-state"},
    time_in_soft_preempted_state_max{YType::uint16, "time-in-soft-preempted-state-max"},
    time_in_soft_preempted_state_avg{YType::uint16, "time-in-soft-preempted-state-avg"},
    soft_preempted_head_ls_ps{YType::uint32, "soft-preempted-head-ls-ps"},
    reoptimized_soft_preempted_ls_ps{YType::uint32, "reoptimized-soft-preempted-ls-ps"},
    torndown_soft_preempted_ls_ps{YType::uint32, "torndown-soft-preempted-ls-ps"},
    path_protected_switchover_soft_preempted_ls_ps{YType::uint32, "path-protected-switchover-soft-preempted-ls-ps"}
{

    yang_name = "statistics"; yang_parent_name = "soft-preemption"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::SoftPreemption::Statistics::~Statistics()
{
}

bool MplsTe::SoftPreemption::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return last_cleared_timestamp.is_set
	|| soft_preemption_events.is_set
	|| soft_preempted_ls_ps.is_set
	|| timed_out_soft_preempted_lsp_ss.is_set
	|| torn_down_soft_preempted_ls_ps.is_set
	|| frr_triggered_soft_preempted_lsp_ss.is_set
	|| minimum_time_in_soft_preempted_state.is_set
	|| time_in_soft_preempted_state_max.is_set
	|| time_in_soft_preempted_state_avg.is_set
	|| soft_preempted_head_ls_ps.is_set
	|| reoptimized_soft_preempted_ls_ps.is_set
	|| torndown_soft_preempted_ls_ps.is_set
	|| path_protected_switchover_soft_preempted_ls_ps.is_set;
}

bool MplsTe::SoftPreemption::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_cleared_timestamp.yfilter)
	|| ydk::is_set(soft_preemption_events.yfilter)
	|| ydk::is_set(soft_preempted_ls_ps.yfilter)
	|| ydk::is_set(timed_out_soft_preempted_lsp_ss.yfilter)
	|| ydk::is_set(torn_down_soft_preempted_ls_ps.yfilter)
	|| ydk::is_set(frr_triggered_soft_preempted_lsp_ss.yfilter)
	|| ydk::is_set(minimum_time_in_soft_preempted_state.yfilter)
	|| ydk::is_set(time_in_soft_preempted_state_max.yfilter)
	|| ydk::is_set(time_in_soft_preempted_state_avg.yfilter)
	|| ydk::is_set(soft_preempted_head_ls_ps.yfilter)
	|| ydk::is_set(reoptimized_soft_preempted_ls_ps.yfilter)
	|| ydk::is_set(torndown_soft_preempted_ls_ps.yfilter)
	|| ydk::is_set(path_protected_switchover_soft_preempted_ls_ps.yfilter);
}

std::string MplsTe::SoftPreemption::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/soft-preemption/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SoftPreemption::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SoftPreemption::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.yfilter)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());
    if (soft_preemption_events.is_set || is_set(soft_preemption_events.yfilter)) leaf_name_data.push_back(soft_preemption_events.get_name_leafdata());
    if (soft_preempted_ls_ps.is_set || is_set(soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(soft_preempted_ls_ps.get_name_leafdata());
    if (timed_out_soft_preempted_lsp_ss.is_set || is_set(timed_out_soft_preempted_lsp_ss.yfilter)) leaf_name_data.push_back(timed_out_soft_preempted_lsp_ss.get_name_leafdata());
    if (torn_down_soft_preempted_ls_ps.is_set || is_set(torn_down_soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(torn_down_soft_preempted_ls_ps.get_name_leafdata());
    if (frr_triggered_soft_preempted_lsp_ss.is_set || is_set(frr_triggered_soft_preempted_lsp_ss.yfilter)) leaf_name_data.push_back(frr_triggered_soft_preempted_lsp_ss.get_name_leafdata());
    if (minimum_time_in_soft_preempted_state.is_set || is_set(minimum_time_in_soft_preempted_state.yfilter)) leaf_name_data.push_back(minimum_time_in_soft_preempted_state.get_name_leafdata());
    if (time_in_soft_preempted_state_max.is_set || is_set(time_in_soft_preempted_state_max.yfilter)) leaf_name_data.push_back(time_in_soft_preempted_state_max.get_name_leafdata());
    if (time_in_soft_preempted_state_avg.is_set || is_set(time_in_soft_preempted_state_avg.yfilter)) leaf_name_data.push_back(time_in_soft_preempted_state_avg.get_name_leafdata());
    if (soft_preempted_head_ls_ps.is_set || is_set(soft_preempted_head_ls_ps.yfilter)) leaf_name_data.push_back(soft_preempted_head_ls_ps.get_name_leafdata());
    if (reoptimized_soft_preempted_ls_ps.is_set || is_set(reoptimized_soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(reoptimized_soft_preempted_ls_ps.get_name_leafdata());
    if (torndown_soft_preempted_ls_ps.is_set || is_set(torndown_soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(torndown_soft_preempted_ls_ps.get_name_leafdata());
    if (path_protected_switchover_soft_preempted_ls_ps.is_set || is_set(path_protected_switchover_soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(path_protected_switchover_soft_preempted_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SoftPreemption::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SoftPreemption::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::SoftPreemption::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
        last_cleared_timestamp.value_namespace = name_space;
        last_cleared_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-events")
    {
        soft_preemption_events = value;
        soft_preemption_events.value_namespace = name_space;
        soft_preemption_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-ls-ps")
    {
        soft_preempted_ls_ps = value;
        soft_preempted_ls_ps.value_namespace = name_space;
        soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timed-out-soft-preempted-lsp-ss")
    {
        timed_out_soft_preempted_lsp_ss = value;
        timed_out_soft_preempted_lsp_ss.value_namespace = name_space;
        timed_out_soft_preempted_lsp_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "torn-down-soft-preempted-ls-ps")
    {
        torn_down_soft_preempted_ls_ps = value;
        torn_down_soft_preempted_ls_ps.value_namespace = name_space;
        torn_down_soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-triggered-soft-preempted-lsp-ss")
    {
        frr_triggered_soft_preempted_lsp_ss = value;
        frr_triggered_soft_preempted_lsp_ss.value_namespace = name_space;
        frr_triggered_soft_preempted_lsp_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time-in-soft-preempted-state")
    {
        minimum_time_in_soft_preempted_state = value;
        minimum_time_in_soft_preempted_state.value_namespace = name_space;
        minimum_time_in_soft_preempted_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-soft-preempted-state-max")
    {
        time_in_soft_preempted_state_max = value;
        time_in_soft_preempted_state_max.value_namespace = name_space;
        time_in_soft_preempted_state_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-soft-preempted-state-avg")
    {
        time_in_soft_preempted_state_avg = value;
        time_in_soft_preempted_state_avg.value_namespace = name_space;
        time_in_soft_preempted_state_avg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-head-ls-ps")
    {
        soft_preempted_head_ls_ps = value;
        soft_preempted_head_ls_ps.value_namespace = name_space;
        soft_preempted_head_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-soft-preempted-ls-ps")
    {
        reoptimized_soft_preempted_ls_ps = value;
        reoptimized_soft_preempted_ls_ps.value_namespace = name_space;
        reoptimized_soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "torndown-soft-preempted-ls-ps")
    {
        torndown_soft_preempted_ls_ps = value;
        torndown_soft_preempted_ls_ps.value_namespace = name_space;
        torndown_soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protected-switchover-soft-preempted-ls-ps")
    {
        path_protected_switchover_soft_preempted_ls_ps = value;
        path_protected_switchover_soft_preempted_ls_ps.value_namespace = name_space;
        path_protected_switchover_soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SoftPreemption::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-events")
    {
        soft_preemption_events.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-ls-ps")
    {
        soft_preempted_ls_ps.yfilter = yfilter;
    }
    if(value_path == "timed-out-soft-preempted-lsp-ss")
    {
        timed_out_soft_preempted_lsp_ss.yfilter = yfilter;
    }
    if(value_path == "torn-down-soft-preempted-ls-ps")
    {
        torn_down_soft_preempted_ls_ps.yfilter = yfilter;
    }
    if(value_path == "frr-triggered-soft-preempted-lsp-ss")
    {
        frr_triggered_soft_preempted_lsp_ss.yfilter = yfilter;
    }
    if(value_path == "minimum-time-in-soft-preempted-state")
    {
        minimum_time_in_soft_preempted_state.yfilter = yfilter;
    }
    if(value_path == "time-in-soft-preempted-state-max")
    {
        time_in_soft_preempted_state_max.yfilter = yfilter;
    }
    if(value_path == "time-in-soft-preempted-state-avg")
    {
        time_in_soft_preempted_state_avg.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-head-ls-ps")
    {
        soft_preempted_head_ls_ps.yfilter = yfilter;
    }
    if(value_path == "reoptimized-soft-preempted-ls-ps")
    {
        reoptimized_soft_preempted_ls_ps.yfilter = yfilter;
    }
    if(value_path == "torndown-soft-preempted-ls-ps")
    {
        torndown_soft_preempted_ls_ps.yfilter = yfilter;
    }
    if(value_path == "path-protected-switchover-soft-preempted-ls-ps")
    {
        path_protected_switchover_soft_preempted_ls_ps.yfilter = yfilter;
    }
}

bool MplsTe::SoftPreemption::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-cleared-timestamp" || name == "soft-preemption-events" || name == "soft-preempted-ls-ps" || name == "timed-out-soft-preempted-lsp-ss" || name == "torn-down-soft-preempted-ls-ps" || name == "frr-triggered-soft-preempted-lsp-ss" || name == "minimum-time-in-soft-preempted-state" || name == "time-in-soft-preempted-state-max" || name == "time-in-soft-preempted-state-avg" || name == "soft-preempted-head-ls-ps" || name == "reoptimized-soft-preempted-ls-ps" || name == "torndown-soft-preempted-ls-ps" || name == "path-protected-switchover-soft-preempted-ls-ps")
        return true;
    return false;
}

MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestinations()
    :
    forwarding_adjacency_destination(this, {"destination_address"})
{

    yang_name = "forwarding-adjacency-destinations"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::ForwardingAdjacencyDestinations::~ForwardingAdjacencyDestinations()
{
}

bool MplsTe::ForwardingAdjacencyDestinations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<forwarding_adjacency_destination.len(); index++)
    {
        if(forwarding_adjacency_destination[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::ForwardingAdjacencyDestinations::has_operation() const
{
    for (std::size_t index=0; index<forwarding_adjacency_destination.len(); index++)
    {
        if(forwarding_adjacency_destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::ForwardingAdjacencyDestinations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::ForwardingAdjacencyDestinations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-adjacency-destinations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::ForwardingAdjacencyDestinations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::ForwardingAdjacencyDestinations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-adjacency-destination")
    {
        auto c = std::make_shared<MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination>();
        c->parent = this;
        forwarding_adjacency_destination.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::ForwardingAdjacencyDestinations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : forwarding_adjacency_destination.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::ForwardingAdjacencyDestinations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::ForwardingAdjacencyDestinations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::ForwardingAdjacencyDestinations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-adjacency-destination")
        return true;
    return false;
}

MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardingAdjacencyDestination()
    :
    destination_address{YType::str, "destination-address"},
    adjacencies{YType::uint32, "adjacencies"},
    ipv6_adjacencies{YType::uint32, "ipv6-adjacencies"},
    destination_address_xr{YType::str, "destination-address-xr"}
        ,
    forward_adjacency(this, {})
{

    yang_name = "forwarding-adjacency-destination"; yang_parent_name = "forwarding-adjacency-destinations"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::~ForwardingAdjacencyDestination()
{
}

bool MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<forward_adjacency.len(); index++)
    {
        if(forward_adjacency[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| adjacencies.is_set
	|| ipv6_adjacencies.is_set
	|| destination_address_xr.is_set;
}

bool MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::has_operation() const
{
    for (std::size_t index=0; index<forward_adjacency.len(); index++)
    {
        if(forward_adjacency[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(adjacencies.yfilter)
	|| ydk::is_set(ipv6_adjacencies.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter);
}

std::string MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/forwarding-adjacency-destinations/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-adjacency-destination";
    ADD_KEY_TOKEN(destination_address, "destination-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (adjacencies.is_set || is_set(adjacencies.yfilter)) leaf_name_data.push_back(adjacencies.get_name_leafdata());
    if (ipv6_adjacencies.is_set || is_set(ipv6_adjacencies.yfilter)) leaf_name_data.push_back(ipv6_adjacencies.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-adjacency")
    {
        auto c = std::make_shared<MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency>();
        c->parent = this;
        forward_adjacency.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : forward_adjacency.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv6-adjacencies")
    {
        ipv6_adjacencies = value;
        ipv6_adjacencies.value_namespace = name_space;
        ipv6_adjacencies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "adjacencies")
    {
        adjacencies.yfilter = yfilter;
    }
    if(value_path == "ipv6-adjacencies")
    {
        ipv6_adjacencies.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
}

bool MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-adjacency" || name == "destination-address" || name == "adjacencies" || name == "ipv6-adjacencies" || name == "destination-address-xr")
        return true;
    return false;
}

MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::ForwardAdjacency()
    :
    tunnel_name{YType::str, "tunnel-name"},
    traffic_share{YType::uint32, "traffic-share"},
    hold_time{YType::uint32, "hold-time"},
    is_adjacency_up{YType::boolean, "is-adjacency-up"}
        ,
    ig_ps(this, {})
{

    yang_name = "forward-adjacency"; yang_parent_name = "forwarding-adjacency-destination"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::~ForwardAdjacency()
{
}

bool MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ig_ps.len(); index++)
    {
        if(ig_ps[index]->has_data())
            return true;
    }
    return tunnel_name.is_set
	|| traffic_share.is_set
	|| hold_time.is_set
	|| is_adjacency_up.is_set;
}

bool MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::has_operation() const
{
    for (std::size_t index=0; index<ig_ps.len(); index++)
    {
        if(ig_ps[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(traffic_share.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(is_adjacency_up.yfilter);
}

std::string MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-adjacency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (traffic_share.is_set || is_set(traffic_share.yfilter)) leaf_name_data.push_back(traffic_share.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (is_adjacency_up.is_set || is_set(is_adjacency_up.yfilter)) leaf_name_data.push_back(is_adjacency_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ig-ps")
    {
        auto c = std::make_shared<MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs>();
        c->parent = this;
        ig_ps.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ig_ps.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-share")
    {
        traffic_share = value;
        traffic_share.value_namespace = name_space;
        traffic_share.value_namespace_prefix = name_space_prefix;
    }
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
}

void MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "traffic-share")
    {
        traffic_share.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "is-adjacency-up")
    {
        is_adjacency_up.yfilter = yfilter;
    }
}

bool MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ig-ps" || name == "tunnel-name" || name == "traffic-share" || name == "hold-time" || name == "is-adjacency-up")
        return true;
    return false;
}

MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::IgPs()
    :
    igp_area_id{YType::str, "igp-area-id"},
    afi{YType::enumeration, "afi"}
{

    yang_name = "ig-ps"; yang_parent_name = "forward-adjacency"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::~IgPs()
{
}

bool MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::has_data() const
{
    if (is_presence_container) return true;
    return igp_area_id.is_set
	|| afi.is_set;
}

bool MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_area_id.yfilter)
	|| ydk::is_set(afi.yfilter);
}

std::string MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ig-ps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_area_id.is_set || is_set(igp_area_id.yfilter)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
        igp_area_id.value_namespace = name_space;
        igp_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-area-id")
    {
        igp_area_id.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
}

bool MplsTe::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-area-id" || name == "afi")
        return true;
    return false;
}

MplsTe::IgpAreas::IgpAreas()
    :
    igp_area(this, {"protocol", "process_tag"})
{

    yang_name = "igp-areas"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::IgpAreas::~IgpAreas()
{
}

bool MplsTe::IgpAreas::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<igp_area.len(); index++)
    {
        if(igp_area[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::IgpAreas::has_operation() const
{
    for (std::size_t index=0; index<igp_area.len(); index++)
    {
        if(igp_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::IgpAreas::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::IgpAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::IgpAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::IgpAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-area")
    {
        auto c = std::make_shared<MplsTe::IgpAreas::IgpArea>();
        c->parent = this;
        igp_area.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::IgpAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : igp_area.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::IgpAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::IgpAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::IgpAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-area")
        return true;
    return false;
}

MplsTe::IgpAreas::IgpArea::IgpArea()
    :
    protocol{YType::enumeration, "protocol"},
    process_tag{YType::str, "process-tag"},
    igp_type{YType::enumeration, "igp-type"},
    instance_name{YType::str, "instance-name"},
    igp_system_id{YType::str, "igp-system-id"},
    configured_te_router_id{YType::str, "configured-te-router-id"},
    global_router_id{YType::str, "global-router-id"},
    globall_router_id_optical{YType::str, "globall-router-id-optical"},
    in_use_te_router_id{YType::str, "in-use-te-router-id"},
    is_connection_up{YType::boolean, "is-connection-up"},
    connection_up_count{YType::uint32, "connection-up-count"},
    connection_down_count{YType::uint32, "connection-down-count"}
        ,
    secondary_router_id(this, {})
    , area(this, {})
{

    yang_name = "igp-area"; yang_parent_name = "igp-areas"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::IgpAreas::IgpArea::~IgpArea()
{
}

bool MplsTe::IgpAreas::IgpArea::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<secondary_router_id.len(); index++)
    {
        if(secondary_router_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<area.len(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    return protocol.is_set
	|| process_tag.is_set
	|| igp_type.is_set
	|| instance_name.is_set
	|| igp_system_id.is_set
	|| configured_te_router_id.is_set
	|| global_router_id.is_set
	|| globall_router_id_optical.is_set
	|| in_use_te_router_id.is_set
	|| is_connection_up.is_set
	|| connection_up_count.is_set
	|| connection_down_count.is_set;
}

bool MplsTe::IgpAreas::IgpArea::has_operation() const
{
    for (std::size_t index=0; index<secondary_router_id.len(); index++)
    {
        if(secondary_router_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<area.len(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(process_tag.yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(igp_system_id.yfilter)
	|| ydk::is_set(configured_te_router_id.yfilter)
	|| ydk::is_set(global_router_id.yfilter)
	|| ydk::is_set(globall_router_id_optical.yfilter)
	|| ydk::is_set(in_use_te_router_id.yfilter)
	|| ydk::is_set(is_connection_up.yfilter)
	|| ydk::is_set(connection_up_count.yfilter)
	|| ydk::is_set(connection_down_count.yfilter);
}

std::string MplsTe::IgpAreas::IgpArea::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/igp-areas/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::IgpAreas::IgpArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-area";
    ADD_KEY_TOKEN(protocol, "protocol");
    ADD_KEY_TOKEN(process_tag, "process-tag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::IgpAreas::IgpArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (process_tag.is_set || is_set(process_tag.yfilter)) leaf_name_data.push_back(process_tag.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (igp_system_id.is_set || is_set(igp_system_id.yfilter)) leaf_name_data.push_back(igp_system_id.get_name_leafdata());
    if (configured_te_router_id.is_set || is_set(configured_te_router_id.yfilter)) leaf_name_data.push_back(configured_te_router_id.get_name_leafdata());
    if (global_router_id.is_set || is_set(global_router_id.yfilter)) leaf_name_data.push_back(global_router_id.get_name_leafdata());
    if (globall_router_id_optical.is_set || is_set(globall_router_id_optical.yfilter)) leaf_name_data.push_back(globall_router_id_optical.get_name_leafdata());
    if (in_use_te_router_id.is_set || is_set(in_use_te_router_id.yfilter)) leaf_name_data.push_back(in_use_te_router_id.get_name_leafdata());
    if (is_connection_up.is_set || is_set(is_connection_up.yfilter)) leaf_name_data.push_back(is_connection_up.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.yfilter)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (connection_down_count.is_set || is_set(connection_down_count.yfilter)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::IgpAreas::IgpArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary-router-id")
    {
        auto c = std::make_shared<MplsTe::IgpAreas::IgpArea::SecondaryRouterId>();
        c->parent = this;
        secondary_router_id.append(c);
        return c;
    }

    if(child_yang_name == "area")
    {
        auto c = std::make_shared<MplsTe::IgpAreas::IgpArea::Area>();
        c->parent = this;
        area.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::IgpAreas::IgpArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : secondary_router_id.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : area.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::IgpAreas::IgpArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-system-id")
    {
        igp_system_id = value;
        igp_system_id.value_namespace = name_space;
        igp_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-te-router-id")
    {
        configured_te_router_id = value;
        configured_te_router_id.value_namespace = name_space;
        configured_te_router_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "in-use-te-router-id")
    {
        in_use_te_router_id = value;
        in_use_te_router_id.value_namespace = name_space;
        in_use_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up = value;
        is_connection_up.value_namespace = name_space;
        is_connection_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count = value;
        connection_up_count.value_namespace = name_space;
        connection_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count = value;
        connection_down_count.value_namespace = name_space;
        connection_down_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::IgpAreas::IgpArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "process-tag")
    {
        process_tag.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "igp-system-id")
    {
        igp_system_id.yfilter = yfilter;
    }
    if(value_path == "configured-te-router-id")
    {
        configured_te_router_id.yfilter = yfilter;
    }
    if(value_path == "global-router-id")
    {
        global_router_id.yfilter = yfilter;
    }
    if(value_path == "globall-router-id-optical")
    {
        globall_router_id_optical.yfilter = yfilter;
    }
    if(value_path == "in-use-te-router-id")
    {
        in_use_te_router_id.yfilter = yfilter;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up.yfilter = yfilter;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count.yfilter = yfilter;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count.yfilter = yfilter;
    }
}

bool MplsTe::IgpAreas::IgpArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-router-id" || name == "area" || name == "protocol" || name == "process-tag" || name == "igp-type" || name == "instance-name" || name == "igp-system-id" || name == "configured-te-router-id" || name == "global-router-id" || name == "globall-router-id-optical" || name == "in-use-te-router-id" || name == "is-connection-up" || name == "connection-up-count" || name == "connection-down-count")
        return true;
    return false;
}

MplsTe::IgpAreas::IgpArea::SecondaryRouterId::SecondaryRouterId()
    :
    entry{YType::str, "entry"}
{

    yang_name = "secondary-router-id"; yang_parent_name = "igp-area"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::IgpAreas::IgpArea::SecondaryRouterId::~SecondaryRouterId()
{
}

bool MplsTe::IgpAreas::IgpArea::SecondaryRouterId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::IgpAreas::IgpArea::SecondaryRouterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::IgpAreas::IgpArea::SecondaryRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::IgpAreas::IgpArea::SecondaryRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::IgpAreas::IgpArea::SecondaryRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::IgpAreas::IgpArea::SecondaryRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::IgpAreas::IgpArea::SecondaryRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::IgpAreas::IgpArea::SecondaryRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::IgpAreas::IgpArea::SecondaryRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::IgpAreas::IgpArea::Area::Area()
    :
    area_index{YType::uint32, "area-index"},
    area_number{YType::uint32, "area-number"},
    area_format{YType::enumeration, "area-format"},
    is_config_ready{YType::boolean, "is-config-ready"}
        ,
    active_data(std::make_shared<MplsTe::IgpAreas::IgpArea::Area::ActiveData>())
{
    active_data->parent = this;

    yang_name = "area"; yang_parent_name = "igp-area"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::IgpAreas::IgpArea::Area::~Area()
{
}

bool MplsTe::IgpAreas::IgpArea::Area::has_data() const
{
    if (is_presence_container) return true;
    return area_index.is_set
	|| area_number.is_set
	|| area_format.is_set
	|| is_config_ready.is_set
	|| (active_data !=  nullptr && active_data->has_data());
}

bool MplsTe::IgpAreas::IgpArea::Area::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_index.yfilter)
	|| ydk::is_set(area_number.yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(is_config_ready.yfilter)
	|| (active_data !=  nullptr && active_data->has_operation());
}

std::string MplsTe::IgpAreas::IgpArea::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::IgpAreas::IgpArea::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_index.is_set || is_set(area_index.yfilter)) leaf_name_data.push_back(area_index.get_name_leafdata());
    if (area_number.is_set || is_set(area_number.yfilter)) leaf_name_data.push_back(area_number.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (is_config_ready.is_set || is_set(is_config_ready.yfilter)) leaf_name_data.push_back(is_config_ready.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::IgpAreas::IgpArea::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-data")
    {
        if(active_data == nullptr)
        {
            active_data = std::make_shared<MplsTe::IgpAreas::IgpArea::Area::ActiveData>();
        }
        return active_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::IgpAreas::IgpArea::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(active_data != nullptr)
    {
        children["active-data"] = active_data;
    }

    return children;
}

void MplsTe::IgpAreas::IgpArea::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-config-ready")
    {
        is_config_ready = value;
        is_config_ready.value_namespace = name_space;
        is_config_ready.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::IgpAreas::IgpArea::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-index")
    {
        area_index.yfilter = yfilter;
    }
    if(value_path == "area-number")
    {
        area_number.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "is-config-ready")
    {
        is_config_ready.yfilter = yfilter;
    }
}

bool MplsTe::IgpAreas::IgpArea::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-data" || name == "area-index" || name == "area-number" || name == "area-format" || name == "is-config-ready")
        return true;
    return false;
}

MplsTe::IgpAreas::IgpArea::Area::ActiveData::ActiveData()
    :
    interfaces_count{YType::uint32, "interfaces-count"},
    link_idt_received{YType::boolean, "link-idt-received"},
    topology_idt_received{YType::boolean, "topology-idt-received"},
    sr_strict{YType::boolean, "sr-strict"},
    p2p_heads_count{YType::uint32, "p2p-heads-count"},
    p2p_autoroute_announced_count{YType::uint32, "p2p-autoroute-announced-count"},
    p2p_forwarding_adjacency_count{YType::uint32, "p2p-forwarding-adjacency-count"},
    p2mp_destination_count{YType::uint32, "p2mp-destination-count"},
    tunnel_loose_hops{YType::uint32, "tunnel-loose-hops"}
        ,
    area_statistics(std::make_shared<MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics>())
{
    area_statistics->parent = this;

    yang_name = "active-data"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::IgpAreas::IgpArea::Area::ActiveData::~ActiveData()
{
}

bool MplsTe::IgpAreas::IgpArea::Area::ActiveData::has_data() const
{
    if (is_presence_container) return true;
    return interfaces_count.is_set
	|| link_idt_received.is_set
	|| topology_idt_received.is_set
	|| sr_strict.is_set
	|| p2p_heads_count.is_set
	|| p2p_autoroute_announced_count.is_set
	|| p2p_forwarding_adjacency_count.is_set
	|| p2mp_destination_count.is_set
	|| tunnel_loose_hops.is_set
	|| (area_statistics !=  nullptr && area_statistics->has_data());
}

bool MplsTe::IgpAreas::IgpArea::Area::ActiveData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interfaces_count.yfilter)
	|| ydk::is_set(link_idt_received.yfilter)
	|| ydk::is_set(topology_idt_received.yfilter)
	|| ydk::is_set(sr_strict.yfilter)
	|| ydk::is_set(p2p_heads_count.yfilter)
	|| ydk::is_set(p2p_autoroute_announced_count.yfilter)
	|| ydk::is_set(p2p_forwarding_adjacency_count.yfilter)
	|| ydk::is_set(p2mp_destination_count.yfilter)
	|| ydk::is_set(tunnel_loose_hops.yfilter)
	|| (area_statistics !=  nullptr && area_statistics->has_operation());
}

std::string MplsTe::IgpAreas::IgpArea::Area::ActiveData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::IgpAreas::IgpArea::Area::ActiveData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interfaces_count.is_set || is_set(interfaces_count.yfilter)) leaf_name_data.push_back(interfaces_count.get_name_leafdata());
    if (link_idt_received.is_set || is_set(link_idt_received.yfilter)) leaf_name_data.push_back(link_idt_received.get_name_leafdata());
    if (topology_idt_received.is_set || is_set(topology_idt_received.yfilter)) leaf_name_data.push_back(topology_idt_received.get_name_leafdata());
    if (sr_strict.is_set || is_set(sr_strict.yfilter)) leaf_name_data.push_back(sr_strict.get_name_leafdata());
    if (p2p_heads_count.is_set || is_set(p2p_heads_count.yfilter)) leaf_name_data.push_back(p2p_heads_count.get_name_leafdata());
    if (p2p_autoroute_announced_count.is_set || is_set(p2p_autoroute_announced_count.yfilter)) leaf_name_data.push_back(p2p_autoroute_announced_count.get_name_leafdata());
    if (p2p_forwarding_adjacency_count.is_set || is_set(p2p_forwarding_adjacency_count.yfilter)) leaf_name_data.push_back(p2p_forwarding_adjacency_count.get_name_leafdata());
    if (p2mp_destination_count.is_set || is_set(p2mp_destination_count.yfilter)) leaf_name_data.push_back(p2mp_destination_count.get_name_leafdata());
    if (tunnel_loose_hops.is_set || is_set(tunnel_loose_hops.yfilter)) leaf_name_data.push_back(tunnel_loose_hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::IgpAreas::IgpArea::Area::ActiveData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-statistics")
    {
        if(area_statistics == nullptr)
        {
            area_statistics = std::make_shared<MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics>();
        }
        return area_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::IgpAreas::IgpArea::Area::ActiveData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(area_statistics != nullptr)
    {
        children["area-statistics"] = area_statistics;
    }

    return children;
}

void MplsTe::IgpAreas::IgpArea::Area::ActiveData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "topology-idt-received")
    {
        topology_idt_received = value;
        topology_idt_received.value_namespace = name_space;
        topology_idt_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-strict")
    {
        sr_strict = value;
        sr_strict.value_namespace = name_space;
        sr_strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-heads-count")
    {
        p2p_heads_count = value;
        p2p_heads_count.value_namespace = name_space;
        p2p_heads_count.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "p2mp-destination-count")
    {
        p2mp_destination_count = value;
        p2mp_destination_count.value_namespace = name_space;
        p2mp_destination_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-loose-hops")
    {
        tunnel_loose_hops = value;
        tunnel_loose_hops.value_namespace = name_space;
        tunnel_loose_hops.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::IgpAreas::IgpArea::Area::ActiveData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interfaces-count")
    {
        interfaces_count.yfilter = yfilter;
    }
    if(value_path == "link-idt-received")
    {
        link_idt_received.yfilter = yfilter;
    }
    if(value_path == "topology-idt-received")
    {
        topology_idt_received.yfilter = yfilter;
    }
    if(value_path == "sr-strict")
    {
        sr_strict.yfilter = yfilter;
    }
    if(value_path == "p2p-heads-count")
    {
        p2p_heads_count.yfilter = yfilter;
    }
    if(value_path == "p2p-autoroute-announced-count")
    {
        p2p_autoroute_announced_count.yfilter = yfilter;
    }
    if(value_path == "p2p-forwarding-adjacency-count")
    {
        p2p_forwarding_adjacency_count.yfilter = yfilter;
    }
    if(value_path == "p2mp-destination-count")
    {
        p2mp_destination_count.yfilter = yfilter;
    }
    if(value_path == "tunnel-loose-hops")
    {
        tunnel_loose_hops.yfilter = yfilter;
    }
}

bool MplsTe::IgpAreas::IgpArea::Area::ActiveData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-statistics" || name == "interfaces-count" || name == "link-idt-received" || name == "topology-idt-received" || name == "sr-strict" || name == "p2p-heads-count" || name == "p2p-autoroute-announced-count" || name == "p2p-forwarding-adjacency-count" || name == "p2mp-destination-count" || name == "tunnel-loose-hops")
        return true;
    return false;
}

MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::AreaStatistics()
    :
    area_adjacency_request_messages{YType::uint32, "area-adjacency-request-messages"},
    area_adjacency_announce_messages{YType::uint32, "area-adjacency-announce-messages"},
    area_flood_messages{YType::uint32, "area-flood-messages"},
    area_lsa_announce_messages{YType::uint32, "area-lsa-announce-messages"},
    area_lsa_fragment_announce_messages{YType::uint32, "area-lsa-fragment-announce-messages"},
    area_lsa_delete_messages{YType::uint32, "area-lsa-delete-messages"},
    area_lsa_fragment_delete_messages{YType::uint32, "area-lsa-fragment-delete-messages"},
    area_tunnel_announce_messages{YType::uint32, "area-tunnel-announce-messages"}
{

    yang_name = "area-statistics"; yang_parent_name = "active-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::~AreaStatistics()
{
}

bool MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::has_data() const
{
    if (is_presence_container) return true;
    return area_adjacency_request_messages.is_set
	|| area_adjacency_announce_messages.is_set
	|| area_flood_messages.is_set
	|| area_lsa_announce_messages.is_set
	|| area_lsa_fragment_announce_messages.is_set
	|| area_lsa_delete_messages.is_set
	|| area_lsa_fragment_delete_messages.is_set
	|| area_tunnel_announce_messages.is_set;
}

bool MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_adjacency_request_messages.yfilter)
	|| ydk::is_set(area_adjacency_announce_messages.yfilter)
	|| ydk::is_set(area_flood_messages.yfilter)
	|| ydk::is_set(area_lsa_announce_messages.yfilter)
	|| ydk::is_set(area_lsa_fragment_announce_messages.yfilter)
	|| ydk::is_set(area_lsa_delete_messages.yfilter)
	|| ydk::is_set(area_lsa_fragment_delete_messages.yfilter)
	|| ydk::is_set(area_tunnel_announce_messages.yfilter);
}

std::string MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_adjacency_request_messages.is_set || is_set(area_adjacency_request_messages.yfilter)) leaf_name_data.push_back(area_adjacency_request_messages.get_name_leafdata());
    if (area_adjacency_announce_messages.is_set || is_set(area_adjacency_announce_messages.yfilter)) leaf_name_data.push_back(area_adjacency_announce_messages.get_name_leafdata());
    if (area_flood_messages.is_set || is_set(area_flood_messages.yfilter)) leaf_name_data.push_back(area_flood_messages.get_name_leafdata());
    if (area_lsa_announce_messages.is_set || is_set(area_lsa_announce_messages.yfilter)) leaf_name_data.push_back(area_lsa_announce_messages.get_name_leafdata());
    if (area_lsa_fragment_announce_messages.is_set || is_set(area_lsa_fragment_announce_messages.yfilter)) leaf_name_data.push_back(area_lsa_fragment_announce_messages.get_name_leafdata());
    if (area_lsa_delete_messages.is_set || is_set(area_lsa_delete_messages.yfilter)) leaf_name_data.push_back(area_lsa_delete_messages.get_name_leafdata());
    if (area_lsa_fragment_delete_messages.is_set || is_set(area_lsa_fragment_delete_messages.yfilter)) leaf_name_data.push_back(area_lsa_fragment_delete_messages.get_name_leafdata());
    if (area_tunnel_announce_messages.is_set || is_set(area_tunnel_announce_messages.yfilter)) leaf_name_data.push_back(area_tunnel_announce_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-adjacency-request-messages")
    {
        area_adjacency_request_messages = value;
        area_adjacency_request_messages.value_namespace = name_space;
        area_adjacency_request_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-adjacency-announce-messages")
    {
        area_adjacency_announce_messages = value;
        area_adjacency_announce_messages.value_namespace = name_space;
        area_adjacency_announce_messages.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "area-lsa-fragment-announce-messages")
    {
        area_lsa_fragment_announce_messages = value;
        area_lsa_fragment_announce_messages.value_namespace = name_space;
        area_lsa_fragment_announce_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-delete-messages")
    {
        area_lsa_delete_messages = value;
        area_lsa_delete_messages.value_namespace = name_space;
        area_lsa_delete_messages.value_namespace_prefix = name_space_prefix;
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

void MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-adjacency-request-messages")
    {
        area_adjacency_request_messages.yfilter = yfilter;
    }
    if(value_path == "area-adjacency-announce-messages")
    {
        area_adjacency_announce_messages.yfilter = yfilter;
    }
    if(value_path == "area-flood-messages")
    {
        area_flood_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-announce-messages")
    {
        area_lsa_announce_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-fragment-announce-messages")
    {
        area_lsa_fragment_announce_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-delete-messages")
    {
        area_lsa_delete_messages.yfilter = yfilter;
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

bool MplsTe::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-adjacency-request-messages" || name == "area-adjacency-announce-messages" || name == "area-flood-messages" || name == "area-lsa-announce-messages" || name == "area-lsa-fragment-announce-messages" || name == "area-lsa-delete-messages" || name == "area-lsa-fragment-delete-messages" || name == "area-tunnel-announce-messages")
        return true;
    return false;
}

MplsTe::WrapProtection::WrapProtection()
    :
    protected_lsps(std::make_shared<MplsTe::WrapProtection::ProtectedLsps>())
{
    protected_lsps->parent = this;

    yang_name = "wrap-protection"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::WrapProtection::~WrapProtection()
{
}

bool MplsTe::WrapProtection::has_data() const
{
    if (is_presence_container) return true;
    return (protected_lsps !=  nullptr && protected_lsps->has_data());
}

bool MplsTe::WrapProtection::has_operation() const
{
    return is_set(yfilter)
	|| (protected_lsps !=  nullptr && protected_lsps->has_operation());
}

std::string MplsTe::WrapProtection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::WrapProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wrap-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::WrapProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::WrapProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protected-lsps")
    {
        if(protected_lsps == nullptr)
        {
            protected_lsps = std::make_shared<MplsTe::WrapProtection::ProtectedLsps>();
        }
        return protected_lsps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::WrapProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(protected_lsps != nullptr)
    {
        children["protected-lsps"] = protected_lsps;
    }

    return children;
}

void MplsTe::WrapProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::WrapProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::WrapProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-lsps")
        return true;
    return false;
}

MplsTe::WrapProtection::ProtectedLsps::ProtectedLsps()
    :
    protected_lsp(this, {"source_address", "destination_address", "tunnel_id", "extended_tunnel_id", "lsp_id", "sub_group_id", "sub_group_originator", "p2mp_id", "session_type"})
{

    yang_name = "protected-lsps"; yang_parent_name = "wrap-protection"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::WrapProtection::ProtectedLsps::~ProtectedLsps()
{
}

bool MplsTe::WrapProtection::ProtectedLsps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protected_lsp.len(); index++)
    {
        if(protected_lsp[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::WrapProtection::ProtectedLsps::has_operation() const
{
    for (std::size_t index=0; index<protected_lsp.len(); index++)
    {
        if(protected_lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::WrapProtection::ProtectedLsps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/wrap-protection/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::WrapProtection::ProtectedLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::WrapProtection::ProtectedLsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::WrapProtection::ProtectedLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protected-lsp")
    {
        auto c = std::make_shared<MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp>();
        c->parent = this;
        protected_lsp.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::WrapProtection::ProtectedLsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : protected_lsp.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::WrapProtection::ProtectedLsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::WrapProtection::ProtectedLsps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::WrapProtection::ProtectedLsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-lsp")
        return true;
    return false;
}

MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp::ProtectedLsp()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint32, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsp_id{YType::uint32, "lsp-id"},
    sub_group_id{YType::uint32, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"},
    p2mp_id{YType::uint32, "p2mp-id"},
    session_type{YType::enumeration, "session-type"},
    source_address_xr{YType::str, "source-address-xr"},
    destination_address_xr{YType::str, "destination-address-xr"},
    tunnel_id_xr{YType::uint16, "tunnel-id-xr"},
    extended_tunnel_id_xr{YType::str, "extended-tunnel-id-xr"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_instance{YType::uint32, "tunnel-instance"},
    lsp_wrap_protection_enable{YType::boolean, "lsp-wrap-protection-enable"},
    lsp_wrap_protection_label{YType::uint32, "lsp-wrap-protection-label"},
    reverse_egress_interface{YType::str, "reverse-egress-interface"},
    reverse_lsp_label{YType::uint32, "reverse-lsp-label"},
    lsp_wrap_protection_state{YType::enumeration, "lsp-wrap-protection-state"},
    sub_group_original_id{YType::str, "sub-group-original-id"},
    sub_group_id_xr{YType::uint16, "sub-group-id-xr"},
    p2mp_id_xr{YType::uint32, "p2mp-id-xr"}
{

    yang_name = "protected-lsp"; yang_parent_name = "protected-lsps"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp::~ProtectedLsp()
{
}

bool MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| destination_address.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| lsp_id.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| p2mp_id.is_set
	|| session_type.is_set
	|| source_address_xr.is_set
	|| destination_address_xr.is_set
	|| tunnel_id_xr.is_set
	|| extended_tunnel_id_xr.is_set
	|| tunnel_name.is_set
	|| tunnel_instance.is_set
	|| lsp_wrap_protection_enable.is_set
	|| lsp_wrap_protection_label.is_set
	|| reverse_egress_interface.is_set
	|| reverse_lsp_label.is_set
	|| lsp_wrap_protection_state.is_set
	|| sub_group_original_id.is_set
	|| sub_group_id_xr.is_set
	|| p2mp_id_xr.is_set;
}

bool MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp::has_operation() const
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
	|| ydk::is_set(source_address_xr.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(tunnel_id_xr.yfilter)
	|| ydk::is_set(extended_tunnel_id_xr.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_instance.yfilter)
	|| ydk::is_set(lsp_wrap_protection_enable.yfilter)
	|| ydk::is_set(lsp_wrap_protection_label.yfilter)
	|| ydk::is_set(reverse_egress_interface.yfilter)
	|| ydk::is_set(reverse_lsp_label.yfilter)
	|| ydk::is_set(lsp_wrap_protection_state.yfilter)
	|| ydk::is_set(sub_group_original_id.yfilter)
	|| ydk::is_set(sub_group_id_xr.yfilter)
	|| ydk::is_set(p2mp_id_xr.yfilter);
}

std::string MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/wrap-protection/protected-lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-lsp";
    ADD_KEY_TOKEN(source_address, "source-address");
    ADD_KEY_TOKEN(destination_address, "destination-address");
    ADD_KEY_TOKEN(tunnel_id, "tunnel-id");
    ADD_KEY_TOKEN(extended_tunnel_id, "extended-tunnel-id");
    ADD_KEY_TOKEN(lsp_id, "lsp-id");
    ADD_KEY_TOKEN(sub_group_id, "sub-group-id");
    ADD_KEY_TOKEN(sub_group_originator, "sub-group-originator");
    ADD_KEY_TOKEN(p2mp_id, "p2mp-id");
    ADD_KEY_TOKEN(session_type, "session-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp::get_name_leaf_data() const
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
    if (source_address_xr.is_set || is_set(source_address_xr.yfilter)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.yfilter)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());
    if (extended_tunnel_id_xr.is_set || is_set(extended_tunnel_id_xr.yfilter)) leaf_name_data.push_back(extended_tunnel_id_xr.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_instance.is_set || is_set(tunnel_instance.yfilter)) leaf_name_data.push_back(tunnel_instance.get_name_leafdata());
    if (lsp_wrap_protection_enable.is_set || is_set(lsp_wrap_protection_enable.yfilter)) leaf_name_data.push_back(lsp_wrap_protection_enable.get_name_leafdata());
    if (lsp_wrap_protection_label.is_set || is_set(lsp_wrap_protection_label.yfilter)) leaf_name_data.push_back(lsp_wrap_protection_label.get_name_leafdata());
    if (reverse_egress_interface.is_set || is_set(reverse_egress_interface.yfilter)) leaf_name_data.push_back(reverse_egress_interface.get_name_leafdata());
    if (reverse_lsp_label.is_set || is_set(reverse_lsp_label.yfilter)) leaf_name_data.push_back(reverse_lsp_label.get_name_leafdata());
    if (lsp_wrap_protection_state.is_set || is_set(lsp_wrap_protection_state.yfilter)) leaf_name_data.push_back(lsp_wrap_protection_state.get_name_leafdata());
    if (sub_group_original_id.is_set || is_set(sub_group_original_id.yfilter)) leaf_name_data.push_back(sub_group_original_id.get_name_leafdata());
    if (sub_group_id_xr.is_set || is_set(sub_group_id_xr.yfilter)) leaf_name_data.push_back(sub_group_id_xr.get_name_leafdata());
    if (p2mp_id_xr.is_set || is_set(p2mp_id_xr.yfilter)) leaf_name_data.push_back(p2mp_id_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
        source_address_xr.value_namespace = name_space;
        source_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
        tunnel_id_xr.value_namespace = name_space;
        tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id-xr")
    {
        extended_tunnel_id_xr = value;
        extended_tunnel_id_xr.value_namespace = name_space;
        extended_tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance = value;
        tunnel_instance.value_namespace = name_space;
        tunnel_instance.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "sub-group-original-id")
    {
        sub_group_original_id = value;
        sub_group_original_id.value_namespace = name_space;
        sub_group_original_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id-xr")
    {
        sub_group_id_xr = value;
        sub_group_id_xr.value_namespace = name_space;
        sub_group_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id-xr")
    {
        p2mp_id_xr = value;
        p2mp_id_xr.value_namespace = name_space;
        p2mp_id_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "source-address-xr")
    {
        source_address_xr.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id-xr")
    {
        extended_tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance.yfilter = yfilter;
    }
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
    if(value_path == "sub-group-original-id")
    {
        sub_group_original_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-id-xr")
    {
        sub_group_id_xr.yfilter = yfilter;
    }
    if(value_path == "p2mp-id-xr")
    {
        p2mp_id_xr.yfilter = yfilter;
    }
}

bool MplsTe::WrapProtection::ProtectedLsps::ProtectedLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "tunnel-id" || name == "extended-tunnel-id" || name == "lsp-id" || name == "sub-group-id" || name == "sub-group-originator" || name == "p2mp-id" || name == "session-type" || name == "source-address-xr" || name == "destination-address-xr" || name == "tunnel-id-xr" || name == "extended-tunnel-id-xr" || name == "tunnel-name" || name == "tunnel-instance" || name == "lsp-wrap-protection-enable" || name == "lsp-wrap-protection-label" || name == "reverse-egress-interface" || name == "reverse-lsp-label" || name == "lsp-wrap-protection-state" || name == "sub-group-original-id" || name == "sub-group-id-xr" || name == "p2mp-id-xr")
        return true;
    return false;
}

MplsTe::Topology::Topology()
    :
    global(std::make_shared<MplsTe::Topology::Global>())
    , destination_paths(std::make_shared<MplsTe::Topology::DestinationPaths>())
    , configured_srlgs(std::make_shared<MplsTe::Topology::ConfiguredSrlgs>())
    , srlgs(std::make_shared<MplsTe::Topology::Srlgs>())
    , path_tunnels(std::make_shared<MplsTe::Topology::PathTunnels>())
{
    global->parent = this;
    destination_paths->parent = this;
    configured_srlgs->parent = this;
    srlgs->parent = this;
    path_tunnels->parent = this;

    yang_name = "topology"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::~Topology()
{
}

bool MplsTe::Topology::has_data() const
{
    if (is_presence_container) return true;
    return (global !=  nullptr && global->has_data())
	|| (destination_paths !=  nullptr && destination_paths->has_data())
	|| (configured_srlgs !=  nullptr && configured_srlgs->has_data())
	|| (srlgs !=  nullptr && srlgs->has_data())
	|| (path_tunnels !=  nullptr && path_tunnels->has_data());
}

bool MplsTe::Topology::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (destination_paths !=  nullptr && destination_paths->has_operation())
	|| (configured_srlgs !=  nullptr && configured_srlgs->has_operation())
	|| (srlgs !=  nullptr && srlgs->has_operation())
	|| (path_tunnels !=  nullptr && path_tunnels->has_operation());
}

std::string MplsTe::Topology::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsTe::Topology::Global>();
        }
        return global;
    }

    if(child_yang_name == "destination-paths")
    {
        if(destination_paths == nullptr)
        {
            destination_paths = std::make_shared<MplsTe::Topology::DestinationPaths>();
        }
        return destination_paths;
    }

    if(child_yang_name == "configured-srlgs")
    {
        if(configured_srlgs == nullptr)
        {
            configured_srlgs = std::make_shared<MplsTe::Topology::ConfiguredSrlgs>();
        }
        return configured_srlgs;
    }

    if(child_yang_name == "srlgs")
    {
        if(srlgs == nullptr)
        {
            srlgs = std::make_shared<MplsTe::Topology::Srlgs>();
        }
        return srlgs;
    }

    if(child_yang_name == "path-tunnels")
    {
        if(path_tunnels == nullptr)
        {
            path_tunnels = std::make_shared<MplsTe::Topology::PathTunnels>();
        }
        return path_tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(destination_paths != nullptr)
    {
        children["destination-paths"] = destination_paths;
    }

    if(configured_srlgs != nullptr)
    {
        children["configured-srlgs"] = configured_srlgs;
    }

    if(srlgs != nullptr)
    {
        children["srlgs"] = srlgs;
    }

    if(path_tunnels != nullptr)
    {
        children["path-tunnels"] = path_tunnels;
    }

    return children;
}

void MplsTe::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "destination-paths" || name == "configured-srlgs" || name == "srlgs" || name == "path-tunnels")
        return true;
    return false;
}

MplsTe::Topology::Global::Global()
    :
    hold_down_interval{YType::uint32, "hold-down-interval"},
    link_add_remove_count{YType::uint32, "link-add-remove-count"},
    local_model_id{YType::uint32, "local-model-id"}
        ,
    areas(this, {})
{

    yang_name = "global"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::Global::~Global()
{
}

bool MplsTe::Topology::Global::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<areas.len(); index++)
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
    for (std::size_t index=0; index<areas.len(); index++)
    {
        if(areas[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(hold_down_interval.yfilter)
	|| ydk::is_set(link_add_remove_count.yfilter)
	|| ydk::is_set(local_model_id.yfilter);
}

std::string MplsTe::Topology::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_down_interval.is_set || is_set(hold_down_interval.yfilter)) leaf_name_data.push_back(hold_down_interval.get_name_leafdata());
    if (link_add_remove_count.is_set || is_set(link_add_remove_count.yfilter)) leaf_name_data.push_back(link_add_remove_count.get_name_leafdata());
    if (local_model_id.is_set || is_set(local_model_id.yfilter)) leaf_name_data.push_back(local_model_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "areas")
    {
        auto c = std::make_shared<MplsTe::Topology::Global::Areas>();
        c->parent = this;
        areas.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : areas.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Topology::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-down-interval")
    {
        hold_down_interval = value;
        hold_down_interval.value_namespace = name_space;
        hold_down_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-add-remove-count")
    {
        link_add_remove_count = value;
        link_add_remove_count.value_namespace = name_space;
        link_add_remove_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-model-id")
    {
        local_model_id = value;
        local_model_id.value_namespace = name_space;
        local_model_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-down-interval")
    {
        hold_down_interval.yfilter = yfilter;
    }
    if(value_path == "link-add-remove-count")
    {
        link_add_remove_count.yfilter = yfilter;
    }
    if(value_path == "local-model-id")
    {
        local_model_id.yfilter = yfilter;
    }
}

bool MplsTe::Topology::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "areas" || name == "hold-down-interval" || name == "link-add-remove-count" || name == "local-model-id")
        return true;
    return false;
}

MplsTe::Topology::Global::Areas::Areas()
    :
    protocol{YType::enumeration, "protocol"},
    node_id{YType::str, "node-id"},
    area_id{YType::str, "area-id"}
        ,
    local_sid_and_srbg(std::make_shared<MplsTe::Topology::Global::Areas::LocalSidAndSrbg>())
{
    local_sid_and_srbg->parent = this;

    yang_name = "areas"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::Global::Areas::~Areas()
{
}

bool MplsTe::Topology::Global::Areas::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| node_id.is_set
	|| area_id.is_set
	|| (local_sid_and_srbg !=  nullptr && local_sid_and_srbg->has_data());
}

bool MplsTe::Topology::Global::Areas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| (local_sid_and_srbg !=  nullptr && local_sid_and_srbg->has_operation());
}

std::string MplsTe::Topology::Global::Areas::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/global/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::Global::Areas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::Global::Areas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::Global::Areas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-sid-and-srbg")
    {
        if(local_sid_and_srbg == nullptr)
        {
            local_sid_and_srbg = std::make_shared<MplsTe::Topology::Global::Areas::LocalSidAndSrbg>();
        }
        return local_sid_and_srbg;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::Global::Areas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(local_sid_and_srbg != nullptr)
    {
        children["local-sid-and-srbg"] = local_sid_and_srbg;
    }

    return children;
}

void MplsTe::Topology::Global::Areas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::Global::Areas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
}

bool MplsTe::Topology::Global::Areas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-sid-and-srbg" || name == "protocol" || name == "node-id" || name == "area-id")
        return true;
    return false;
}

MplsTe::Topology::Global::Areas::LocalSidAndSrbg::LocalSidAndSrbg()
    :
    segment_id{YType::uint32, "segment-id"},
    segment_id_local_absolute_value{YType::uint32, "segment-id-local-absolute-value"},
    srgb_start{YType::uint32, "srgb-start"},
    srgb_size{YType::uint32, "srgb-size"}
{

    yang_name = "local-sid-and-srbg"; yang_parent_name = "areas"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::Global::Areas::LocalSidAndSrbg::~LocalSidAndSrbg()
{
}

bool MplsTe::Topology::Global::Areas::LocalSidAndSrbg::has_data() const
{
    if (is_presence_container) return true;
    return segment_id.is_set
	|| segment_id_local_absolute_value.is_set
	|| srgb_start.is_set
	|| srgb_size.is_set;
}

bool MplsTe::Topology::Global::Areas::LocalSidAndSrbg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_id.yfilter)
	|| ydk::is_set(segment_id_local_absolute_value.yfilter)
	|| ydk::is_set(srgb_start.yfilter)
	|| ydk::is_set(srgb_size.yfilter);
}

std::string MplsTe::Topology::Global::Areas::LocalSidAndSrbg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/global/areas/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::Global::Areas::LocalSidAndSrbg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-sid-and-srbg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::Global::Areas::LocalSidAndSrbg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_id.is_set || is_set(segment_id.yfilter)) leaf_name_data.push_back(segment_id.get_name_leafdata());
    if (segment_id_local_absolute_value.is_set || is_set(segment_id_local_absolute_value.yfilter)) leaf_name_data.push_back(segment_id_local_absolute_value.get_name_leafdata());
    if (srgb_start.is_set || is_set(srgb_start.yfilter)) leaf_name_data.push_back(srgb_start.get_name_leafdata());
    if (srgb_size.is_set || is_set(srgb_size.yfilter)) leaf_name_data.push_back(srgb_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::Global::Areas::LocalSidAndSrbg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::Global::Areas::LocalSidAndSrbg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Topology::Global::Areas::LocalSidAndSrbg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Topology::Global::Areas::LocalSidAndSrbg::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Topology::Global::Areas::LocalSidAndSrbg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-id" || name == "segment-id-local-absolute-value" || name == "srgb-start" || name == "srgb-size")
        return true;
    return false;
}

MplsTe::Topology::DestinationPaths::DestinationPaths()
    :
    destination_path(this, {})
{

    yang_name = "destination-paths"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::DestinationPaths::~DestinationPaths()
{
}

bool MplsTe::Topology::DestinationPaths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<destination_path.len(); index++)
    {
        if(destination_path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Topology::DestinationPaths::has_operation() const
{
    for (std::size_t index=0; index<destination_path.len(); index++)
    {
        if(destination_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Topology::DestinationPaths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::DestinationPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::DestinationPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::DestinationPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-path")
    {
        auto c = std::make_shared<MplsTe::Topology::DestinationPaths::DestinationPath>();
        c->parent = this;
        destination_path.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::DestinationPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : destination_path.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Topology::DestinationPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Topology::DestinationPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Topology::DestinationPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-path")
        return true;
    return false;
}

MplsTe::Topology::DestinationPaths::DestinationPath::DestinationPath()
    :
    destination_address{YType::str, "destination-address"},
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"},
    setup_priority{YType::uint32, "setup-priority"},
    hold_priority{YType::uint32, "hold-priority"},
    bandwidth{YType::uint32, "bandwidth"},
    igp_type{YType::enumeration, "igp-type"},
    igp_instance{YType::str, "igp-instance"},
    igp_area{YType::uint32, "igp-area"},
    hop_limit{YType::uint32, "hop-limit"},
    exclude_srlg_ip_address{YType::str, "exclude-srlg-ip-address"},
    path_type{YType::enumeration, "path-type"},
    path_id{YType::uint32, "path-id"},
    path_name{YType::str, "path-name"},
    cost_limit{YType::uint32, "cost-limit"},
    metric_type{YType::enumeration, "metric-type"},
    delay_limit{YType::uint32, "delay-limit"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"},
    destination_address_xr{YType::str, "destination-address-xr"},
    is_partial_path{YType::boolean, "is-partial-path"},
    is_full_path{YType::boolean, "is-full-path"},
    is_topology_checked{YType::boolean, "is-topology-checked"},
    is_segment_routing_db_checked{YType::boolean, "is-segment-routing-db-checked"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    bandwidth_type{YType::uint64, "bandwidth-type"},
    mininum_bandwidth{YType::uint64, "mininum-bandwidth"},
    accumulated_admin_weight{YType::uint64, "accumulated-admin-weight"},
    setup_priority_xr{YType::uint32, "setup-priority-xr"},
    hold_priority_xr{YType::uint32, "hold-priority-xr"},
    node_hop_count{YType::uint8, "node-hop-count"},
    exclude_srlg_address{YType::str, "exclude-srlg-address"}
        ,
    affinity(std::make_shared<MplsTe::Topology::DestinationPaths::DestinationPath::Affinity>())
    , hop(this, {})
    , shared_risk_link_group(this, {})
    , sr_segment(this, {})
{
    affinity->parent = this;

    yang_name = "destination-path"; yang_parent_name = "destination-paths"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::DestinationPaths::DestinationPath::~DestinationPath()
{
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hop.len(); index++)
    {
        if(hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.len(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_segment.len(); index++)
    {
        if(sr_segment[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| affinity_bits.is_set
	|| affinity_mask.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| bandwidth.is_set
	|| igp_type.is_set
	|| igp_instance.is_set
	|| igp_area.is_set
	|| hop_limit.is_set
	|| exclude_srlg_ip_address.is_set
	|| path_type.is_set
	|| path_id.is_set
	|| path_name.is_set
	|| cost_limit.is_set
	|| metric_type.is_set
	|| delay_limit.is_set
	|| tunnel_id_xr.is_set
	|| destination_address_xr.is_set
	|| is_partial_path.is_set
	|| is_full_path.is_set
	|| is_topology_checked.is_set
	|| is_segment_routing_db_checked.is_set
	|| requested_bandwidth.is_set
	|| bandwidth_type.is_set
	|| mininum_bandwidth.is_set
	|| accumulated_admin_weight.is_set
	|| setup_priority_xr.is_set
	|| hold_priority_xr.is_set
	|| node_hop_count.is_set
	|| exclude_srlg_address.is_set
	|| (affinity !=  nullptr && affinity->has_data());
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::has_operation() const
{
    for (std::size_t index=0; index<hop.len(); index++)
    {
        if(hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.len(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_segment.len(); index++)
    {
        if(sr_segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(igp_instance.yfilter)
	|| ydk::is_set(igp_area.yfilter)
	|| ydk::is_set(hop_limit.yfilter)
	|| ydk::is_set(exclude_srlg_ip_address.yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_name.yfilter)
	|| ydk::is_set(cost_limit.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(delay_limit.yfilter)
	|| ydk::is_set(tunnel_id_xr.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(is_partial_path.yfilter)
	|| ydk::is_set(is_full_path.yfilter)
	|| ydk::is_set(is_topology_checked.yfilter)
	|| ydk::is_set(is_segment_routing_db_checked.yfilter)
	|| ydk::is_set(requested_bandwidth.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(mininum_bandwidth.yfilter)
	|| ydk::is_set(accumulated_admin_weight.yfilter)
	|| ydk::is_set(setup_priority_xr.yfilter)
	|| ydk::is_set(hold_priority_xr.yfilter)
	|| ydk::is_set(node_hop_count.yfilter)
	|| ydk::is_set(exclude_srlg_address.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/destination-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::DestinationPaths::DestinationPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.yfilter)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (igp_area.is_set || is_set(igp_area.yfilter)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (hop_limit.is_set || is_set(hop_limit.yfilter)) leaf_name_data.push_back(hop_limit.get_name_leafdata());
    if (exclude_srlg_ip_address.is_set || is_set(exclude_srlg_ip_address.yfilter)) leaf_name_data.push_back(exclude_srlg_ip_address.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_name.is_set || is_set(path_name.yfilter)) leaf_name_data.push_back(path_name.get_name_leafdata());
    if (cost_limit.is_set || is_set(cost_limit.yfilter)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (delay_limit.is_set || is_set(delay_limit.yfilter)) leaf_name_data.push_back(delay_limit.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.yfilter)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (is_partial_path.is_set || is_set(is_partial_path.yfilter)) leaf_name_data.push_back(is_partial_path.get_name_leafdata());
    if (is_full_path.is_set || is_set(is_full_path.yfilter)) leaf_name_data.push_back(is_full_path.get_name_leafdata());
    if (is_topology_checked.is_set || is_set(is_topology_checked.yfilter)) leaf_name_data.push_back(is_topology_checked.get_name_leafdata());
    if (is_segment_routing_db_checked.is_set || is_set(is_segment_routing_db_checked.yfilter)) leaf_name_data.push_back(is_segment_routing_db_checked.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.yfilter)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (mininum_bandwidth.is_set || is_set(mininum_bandwidth.yfilter)) leaf_name_data.push_back(mininum_bandwidth.get_name_leafdata());
    if (accumulated_admin_weight.is_set || is_set(accumulated_admin_weight.yfilter)) leaf_name_data.push_back(accumulated_admin_weight.get_name_leafdata());
    if (setup_priority_xr.is_set || is_set(setup_priority_xr.yfilter)) leaf_name_data.push_back(setup_priority_xr.get_name_leafdata());
    if (hold_priority_xr.is_set || is_set(hold_priority_xr.yfilter)) leaf_name_data.push_back(hold_priority_xr.get_name_leafdata());
    if (node_hop_count.is_set || is_set(node_hop_count.yfilter)) leaf_name_data.push_back(node_hop_count.get_name_leafdata());
    if (exclude_srlg_address.is_set || is_set(exclude_srlg_address.yfilter)) leaf_name_data.push_back(exclude_srlg_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::DestinationPaths::DestinationPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::Topology::DestinationPaths::DestinationPath::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "hop")
    {
        auto c = std::make_shared<MplsTe::Topology::DestinationPaths::DestinationPath::Hop>();
        c->parent = this;
        hop.append(c);
        return c;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        auto c = std::make_shared<MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.append(c);
        return c;
    }

    if(child_yang_name == "sr-segment")
    {
        auto c = std::make_shared<MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment>();
        c->parent = this;
        sr_segment.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::DestinationPaths::DestinationPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    count = 0;
    for (auto c : hop.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : shared_risk_link_group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : sr_segment.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Topology::DestinationPaths::DestinationPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
        igp_instance.value_namespace = name_space;
        igp_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area")
    {
        igp_area = value;
        igp_area.value_namespace = name_space;
        igp_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-limit")
    {
        hop_limit = value;
        hop_limit.value_namespace = name_space;
        hop_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-srlg-ip-address")
    {
        exclude_srlg_ip_address = value;
        exclude_srlg_ip_address.value_namespace = name_space;
        exclude_srlg_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-name")
    {
        path_name = value;
        path_name.value_namespace = name_space;
        path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-limit")
    {
        cost_limit = value;
        cost_limit.value_namespace = name_space;
        cost_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-limit")
    {
        delay_limit = value;
        delay_limit.value_namespace = name_space;
        delay_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
        tunnel_id_xr.value_namespace = name_space;
        tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partial-path")
    {
        is_partial_path = value;
        is_partial_path.value_namespace = name_space;
        is_partial_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-full-path")
    {
        is_full_path = value;
        is_full_path.value_namespace = name_space;
        is_full_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-topology-checked")
    {
        is_topology_checked = value;
        is_topology_checked.value_namespace = name_space;
        is_topology_checked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-segment-routing-db-checked")
    {
        is_segment_routing_db_checked = value;
        is_segment_routing_db_checked.value_namespace = name_space;
        is_segment_routing_db_checked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
        requested_bandwidth.value_namespace = name_space;
        requested_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mininum-bandwidth")
    {
        mininum_bandwidth = value;
        mininum_bandwidth.value_namespace = name_space;
        mininum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accumulated-admin-weight")
    {
        accumulated_admin_weight = value;
        accumulated_admin_weight.value_namespace = name_space;
        accumulated_admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority-xr")
    {
        setup_priority_xr = value;
        setup_priority_xr.value_namespace = name_space;
        setup_priority_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority-xr")
    {
        hold_priority_xr = value;
        hold_priority_xr.value_namespace = name_space;
        hold_priority_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count = value;
        node_hop_count.value_namespace = name_space;
        node_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-srlg-address")
    {
        exclude_srlg_address = value;
        exclude_srlg_address.value_namespace = name_space;
        exclude_srlg_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::DestinationPaths::DestinationPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "igp-instance")
    {
        igp_instance.yfilter = yfilter;
    }
    if(value_path == "igp-area")
    {
        igp_area.yfilter = yfilter;
    }
    if(value_path == "hop-limit")
    {
        hop_limit.yfilter = yfilter;
    }
    if(value_path == "exclude-srlg-ip-address")
    {
        exclude_srlg_ip_address.yfilter = yfilter;
    }
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-name")
    {
        path_name.yfilter = yfilter;
    }
    if(value_path == "cost-limit")
    {
        cost_limit.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "delay-limit")
    {
        delay_limit.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "is-partial-path")
    {
        is_partial_path.yfilter = yfilter;
    }
    if(value_path == "is-full-path")
    {
        is_full_path.yfilter = yfilter;
    }
    if(value_path == "is-topology-checked")
    {
        is_topology_checked.yfilter = yfilter;
    }
    if(value_path == "is-segment-routing-db-checked")
    {
        is_segment_routing_db_checked.yfilter = yfilter;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "mininum-bandwidth")
    {
        mininum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "accumulated-admin-weight")
    {
        accumulated_admin_weight.yfilter = yfilter;
    }
    if(value_path == "setup-priority-xr")
    {
        setup_priority_xr.yfilter = yfilter;
    }
    if(value_path == "hold-priority-xr")
    {
        hold_priority_xr.yfilter = yfilter;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count.yfilter = yfilter;
    }
    if(value_path == "exclude-srlg-address")
    {
        exclude_srlg_address.yfilter = yfilter;
    }
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "hop" || name == "shared-risk-link-group" || name == "sr-segment" || name == "destination-address" || name == "affinity-bits" || name == "affinity-mask" || name == "setup-priority" || name == "hold-priority" || name == "bandwidth" || name == "igp-type" || name == "igp-instance" || name == "igp-area" || name == "hop-limit" || name == "exclude-srlg-ip-address" || name == "path-type" || name == "path-id" || name == "path-name" || name == "cost-limit" || name == "metric-type" || name == "delay-limit" || name == "tunnel-id-xr" || name == "destination-address-xr" || name == "is-partial-path" || name == "is-full-path" || name == "is-topology-checked" || name == "is-segment-routing-db-checked" || name == "requested-bandwidth" || name == "bandwidth-type" || name == "mininum-bandwidth" || name == "accumulated-admin-weight" || name == "setup-priority-xr" || name == "hold-priority-xr" || name == "node-hop-count" || name == "exclude-srlg-address")
        return true;
    return false;
}

MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "destination-path"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::~Affinity()
{
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/destination-paths/destination-path/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto c = std::make_shared<MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : named_affinity.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/destination-paths/destination-path/affinity/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto c = std::make_shared<MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.append(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto c = std::make_shared<MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : constraint_extended_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : extended_forward_ref_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/destination-paths/destination-path/affinity/named-affinity/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/destination-paths/destination-path/affinity/named-affinity/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::Topology::DestinationPaths::DestinationPath::Hop::Hop()
    :
    entry{YType::str, "entry"}
{

    yang_name = "hop"; yang_parent_name = "destination-path"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::DestinationPaths::DestinationPath::Hop::~Hop()
{
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Hop::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Hop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::Hop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/destination-paths/destination-path/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::DestinationPaths::DestinationPath::Hop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::DestinationPaths::DestinationPath::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::DestinationPaths::DestinationPath::Hop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Topology::DestinationPaths::DestinationPath::Hop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::DestinationPaths::DestinationPath::Hop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::Hop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "destination-path"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::has_data() const
{
    if (is_presence_container) return true;
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/destination-paths/destination-path/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::SrSegment()
    :
    sid_type{YType::enumeration, "sid-type"},
    has_ip_addresses{YType::boolean, "has-ip-addresses"},
    local_addr{YType::str, "local-addr"},
    remote_addr{YType::str, "remote-addr"},
    has_mpls_label{YType::boolean, "has-mpls-label"},
    mpls_label_value{YType::uint32, "mpls-label-value"},
    has_entropy_label{YType::boolean, "has-entropy-label"}
{

    yang_name = "sr-segment"; yang_parent_name = "destination-path"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::~SrSegment()
{
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| has_ip_addresses.is_set
	|| local_addr.is_set
	|| remote_addr.is_set
	|| has_mpls_label.is_set
	|| mpls_label_value.is_set
	|| has_entropy_label.is_set;
}

bool MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::has_operation() const
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

std::string MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/destination-paths/destination-path/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Topology::DestinationPaths::DestinationPath::SrSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-type" || name == "has-ip-addresses" || name == "local-addr" || name == "remote-addr" || name == "has-mpls-label" || name == "mpls-label-value" || name == "has-entropy-label")
        return true;
    return false;
}

MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlgs()
    :
    configured_srlg(this, {"srlg_number"})
{

    yang_name = "configured-srlgs"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::ConfiguredSrlgs::~ConfiguredSrlgs()
{
}

bool MplsTe::Topology::ConfiguredSrlgs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<configured_srlg.len(); index++)
    {
        if(configured_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Topology::ConfiguredSrlgs::has_operation() const
{
    for (std::size_t index=0; index<configured_srlg.len(); index++)
    {
        if(configured_srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Topology::ConfiguredSrlgs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::ConfiguredSrlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::ConfiguredSrlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::ConfiguredSrlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configured-srlg")
    {
        auto c = std::make_shared<MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg>();
        c->parent = this;
        configured_srlg.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::ConfiguredSrlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : configured_srlg.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Topology::ConfiguredSrlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Topology::ConfiguredSrlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Topology::ConfiguredSrlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-srlg")
        return true;
    return false;
}

MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::ConfiguredSrlg()
    :
    srlg_number{YType::uint32, "srlg-number"},
    srlg_number_xr{YType::uint32, "srlg-number-xr"},
    srlg_name{YType::str, "srlg-name"},
    admin_weight{YType::uint32, "admin-weight"},
    is_admin_weight_configured{YType::boolean, "is-admin-weight-configured"}
        ,
    srlg_link(this, {})
{

    yang_name = "configured-srlg"; yang_parent_name = "configured-srlgs"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::~ConfiguredSrlg()
{
}

bool MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlg_link.len(); index++)
    {
        if(srlg_link[index]->has_data())
            return true;
    }
    return srlg_number.is_set
	|| srlg_number_xr.is_set
	|| srlg_name.is_set
	|| admin_weight.is_set
	|| is_admin_weight_configured.is_set;
}

bool MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::has_operation() const
{
    for (std::size_t index=0; index<srlg_link.len(); index++)
    {
        if(srlg_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(srlg_number.yfilter)
	|| ydk::is_set(srlg_number_xr.yfilter)
	|| ydk::is_set(srlg_name.yfilter)
	|| ydk::is_set(admin_weight.yfilter)
	|| ydk::is_set(is_admin_weight_configured.yfilter);
}

std::string MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/configured-srlgs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-srlg";
    ADD_KEY_TOKEN(srlg_number, "srlg-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_number.is_set || is_set(srlg_number.yfilter)) leaf_name_data.push_back(srlg_number.get_name_leafdata());
    if (srlg_number_xr.is_set || is_set(srlg_number_xr.yfilter)) leaf_name_data.push_back(srlg_number_xr.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (is_admin_weight_configured.is_set || is_set(is_admin_weight_configured.yfilter)) leaf_name_data.push_back(is_admin_weight_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-link")
    {
        auto c = std::make_shared<MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink>();
        c->parent = this;
        srlg_link.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : srlg_link.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-number")
    {
        srlg_number = value;
        srlg_number.value_namespace = name_space;
        srlg_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-number-xr")
    {
        srlg_number_xr = value;
        srlg_number_xr.value_namespace = name_space;
        srlg_number_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-admin-weight-configured")
    {
        is_admin_weight_configured = value;
        is_admin_weight_configured.value_namespace = name_space;
        is_admin_weight_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-number")
    {
        srlg_number.yfilter = yfilter;
    }
    if(value_path == "srlg-number-xr")
    {
        srlg_number_xr.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
    if(value_path == "is-admin-weight-configured")
    {
        is_admin_weight_configured.yfilter = yfilter;
    }
}

bool MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-link" || name == "srlg-number" || name == "srlg-number-xr" || name == "srlg-name" || name == "admin-weight" || name == "is-admin-weight-configured")
        return true;
    return false;
}

MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::SrlgLink()
    :
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"}
{

    yang_name = "srlg-link"; yang_parent_name = "configured-srlg"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::~SrlgLink()
{
}

bool MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::has_data() const
{
    if (is_presence_container) return true;
    return local_address.is_set
	|| remote_address.is_set;
}

bool MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter);
}

std::string MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool MplsTe::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-address" || name == "remote-address")
        return true;
    return false;
}

MplsTe::Topology::Srlgs::Srlgs()
    :
    srlg(this, {"srlg_number"})
{

    yang_name = "srlgs"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::Srlgs::~Srlgs()
{
}

bool MplsTe::Topology::Srlgs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlg.len(); index++)
    {
        if(srlg[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Topology::Srlgs::has_operation() const
{
    for (std::size_t index=0; index<srlg.len(); index++)
    {
        if(srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Topology::Srlgs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::Srlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::Srlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::Srlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg")
    {
        auto c = std::make_shared<MplsTe::Topology::Srlgs::Srlg>();
        c->parent = this;
        srlg.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::Srlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : srlg.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Topology::Srlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Topology::Srlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Topology::Srlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg")
        return true;
    return false;
}

MplsTe::Topology::Srlgs::Srlg::Srlg()
    :
    srlg_number{YType::uint32, "srlg-number"},
    srlg_name{YType::str, "srlg-name"},
    admin_weight{YType::uint32, "admin-weight"}
        ,
    srlg_areas(this, {})
{

    yang_name = "srlg"; yang_parent_name = "srlgs"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::Srlgs::Srlg::~Srlg()
{
}

bool MplsTe::Topology::Srlgs::Srlg::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlg_areas.len(); index++)
    {
        if(srlg_areas[index]->has_data())
            return true;
    }
    return srlg_number.is_set
	|| srlg_name.is_set
	|| admin_weight.is_set;
}

bool MplsTe::Topology::Srlgs::Srlg::has_operation() const
{
    for (std::size_t index=0; index<srlg_areas.len(); index++)
    {
        if(srlg_areas[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(srlg_number.yfilter)
	|| ydk::is_set(srlg_name.yfilter)
	|| ydk::is_set(admin_weight.yfilter);
}

std::string MplsTe::Topology::Srlgs::Srlg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/srlgs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::Srlgs::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg";
    ADD_KEY_TOKEN(srlg_number, "srlg-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::Srlgs::Srlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_number.is_set || is_set(srlg_number.yfilter)) leaf_name_data.push_back(srlg_number.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.yfilter)) leaf_name_data.push_back(admin_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::Srlgs::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-areas")
    {
        auto c = std::make_shared<MplsTe::Topology::Srlgs::Srlg::SrlgAreas>();
        c->parent = this;
        srlg_areas.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::Srlgs::Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : srlg_areas.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Topology::Srlgs::Srlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-number")
    {
        srlg_number = value;
        srlg_number.value_namespace = name_space;
        srlg_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
        admin_weight.value_namespace = name_space;
        admin_weight.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::Srlgs::Srlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-number")
    {
        srlg_number.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
    if(value_path == "admin-weight")
    {
        admin_weight.yfilter = yfilter;
    }
}

bool MplsTe::Topology::Srlgs::Srlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-areas" || name == "srlg-number" || name == "srlg-name" || name == "admin-weight")
        return true;
    return false;
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgAreas()
    :
    igp_type{YType::enumeration, "igp-type"},
    igp_instance{YType::str, "igp-instance"},
    igp_area{YType::uint32, "igp-area"},
    igp_area_format{YType::enumeration, "igp-area-format"}
        ,
    srlg_link(this, {})
{

    yang_name = "srlg-areas"; yang_parent_name = "srlg"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::~SrlgAreas()
{
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srlg_link.len(); index++)
    {
        if(srlg_link[index]->has_data())
            return true;
    }
    return igp_type.is_set
	|| igp_instance.is_set
	|| igp_area.is_set
	|| igp_area_format.is_set;
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::has_operation() const
{
    for (std::size_t index=0; index<srlg_link.len(); index++)
    {
        if(srlg_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(igp_instance.yfilter)
	|| ydk::is_set(igp_area.yfilter)
	|| ydk::is_set(igp_area_format.yfilter);
}

std::string MplsTe::Topology::Srlgs::Srlg::SrlgAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::Srlgs::Srlg::SrlgAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.yfilter)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (igp_area.is_set || is_set(igp_area.yfilter)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_area_format.is_set || is_set(igp_area_format.yfilter)) leaf_name_data.push_back(igp_area_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-link")
    {
        auto c = std::make_shared<MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink>();
        c->parent = this;
        srlg_link.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : srlg_link.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
        igp_instance.value_namespace = name_space;
        igp_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area")
    {
        igp_area = value;
        igp_area.value_namespace = name_space;
        igp_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-area-format")
    {
        igp_area_format = value;
        igp_area_format.value_namespace = name_space;
        igp_area_format.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "igp-instance")
    {
        igp_instance.yfilter = yfilter;
    }
    if(value_path == "igp-area")
    {
        igp_area.yfilter = yfilter;
    }
    if(value_path == "igp-area-format")
    {
        igp_area_format.yfilter = yfilter;
    }
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-link" || name == "igp-type" || name == "igp-instance" || name == "igp-area" || name == "igp-area-format")
        return true;
    return false;
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::SrlgLink()
    :
    link_address{YType::str, "link-address"},
    te_router_id{YType::str, "te-router-id"}
        ,
    link_address_generic(std::make_shared<MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric>())
{
    link_address_generic->parent = this;

    yang_name = "srlg-link"; yang_parent_name = "srlg-areas"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::~SrlgLink()
{
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::has_data() const
{
    if (is_presence_container) return true;
    return link_address.is_set
	|| te_router_id.is_set
	|| (link_address_generic !=  nullptr && link_address_generic->has_data());
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_address.yfilter)
	|| ydk::is_set(te_router_id.yfilter)
	|| (link_address_generic !=  nullptr && link_address_generic->has_operation());
}

std::string MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_address.is_set || is_set(link_address.yfilter)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (te_router_id.is_set || is_set(te_router_id.yfilter)) leaf_name_data.push_back(te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-address-generic")
    {
        if(link_address_generic == nullptr)
        {
            link_address_generic = std::make_shared<MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric>();
        }
        return link_address_generic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(link_address_generic != nullptr)
    {
        children["link-address-generic"] = link_address_generic;
    }

    return children;
}

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-address")
    {
        link_address = value;
        link_address.value_namespace = name_space;
        link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-router-id")
    {
        te_router_id = value;
        te_router_id.value_namespace = name_space;
        te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-address")
    {
        link_address.yfilter = yfilter;
    }
    if(value_path == "te-router-id")
    {
        te_router_id.yfilter = yfilter;
    }
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-address-generic" || name == "link-address" || name == "te-router-id")
        return true;
    return false;
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::LinkAddressGeneric()
    :
    te_addr(std::make_shared<MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr>())
{
    te_addr->parent = this;

    yang_name = "link-address-generic"; yang_parent_name = "srlg-link"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::~LinkAddressGeneric()
{
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::has_data() const
{
    if (is_presence_container) return true;
    return (te_addr !=  nullptr && te_addr->has_data());
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::has_operation() const
{
    return is_set(yfilter)
	|| (te_addr !=  nullptr && te_addr->has_operation());
}

std::string MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-address-generic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-addr")
    {
        if(te_addr == nullptr)
        {
            te_addr = std::make_shared<MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr>();
        }
        return te_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(te_addr != nullptr)
    {
        children["te-addr"] = te_addr;
    }

    return children;
}

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-addr")
        return true;
    return false;
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::TeAddr()
    :
    type{YType::enumeration, "type"},
    ipv4_address{YType::str, "ipv4-address"}
        ,
    ipv4_unnumbered_address(std::make_shared<MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress>())
{
    ipv4_unnumbered_address->parent = this;

    yang_name = "te-addr"; yang_parent_name = "link-address-generic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::~TeAddr()
{
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4_address.is_set
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_data());
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_operation());
}

std::string MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unnumbered-address")
    {
        if(ipv4_unnumbered_address == nullptr)
        {
            ipv4_unnumbered_address = std::make_shared<MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress>();
        }
        return ipv4_unnumbered_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4_unnumbered_address != nullptr)
    {
        children["ipv4-unnumbered-address"] = ipv4_unnumbered_address;
    }

    return children;
}

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unnumbered-address" || name == "type" || name == "ipv4-address")
        return true;
    return false;
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::Ipv4UnnumberedAddress()
    :
    router_id{YType::str, "router-id"},
    interface_index{YType::uint32, "interface-index"}
{

    yang_name = "ipv4-unnumbered-address"; yang_parent_name = "te-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::~Ipv4UnnumberedAddress()
{
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| interface_index.is_set;
}

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(interface_index.yfilter);
}

std::string MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unnumbered-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "interface-index")
        return true;
    return false;
}

MplsTe::Topology::PathTunnels::PathTunnels()
    :
    path_tunnel(this, {})
{

    yang_name = "path-tunnels"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::PathTunnels::~PathTunnels()
{
}

bool MplsTe::Topology::PathTunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_tunnel.len(); index++)
    {
        if(path_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::Topology::PathTunnels::has_operation() const
{
    for (std::size_t index=0; index<path_tunnel.len(); index++)
    {
        if(path_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::Topology::PathTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::PathTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::PathTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::PathTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-tunnel")
    {
        auto c = std::make_shared<MplsTe::Topology::PathTunnels::PathTunnel>();
        c->parent = this;
        path_tunnel.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::PathTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : path_tunnel.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Topology::PathTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::Topology::PathTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::Topology::PathTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-tunnel")
        return true;
    return false;
}

MplsTe::Topology::PathTunnels::PathTunnel::PathTunnel()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"},
    destination_address_xr{YType::str, "destination-address-xr"},
    is_partial_path{YType::boolean, "is-partial-path"},
    is_full_path{YType::boolean, "is-full-path"},
    is_topology_checked{YType::boolean, "is-topology-checked"},
    is_segment_routing_db_checked{YType::boolean, "is-segment-routing-db-checked"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    bandwidth_type{YType::uint64, "bandwidth-type"},
    mininum_bandwidth{YType::uint64, "mininum-bandwidth"},
    accumulated_admin_weight{YType::uint64, "accumulated-admin-weight"},
    setup_priority_xr{YType::uint32, "setup-priority-xr"},
    hold_priority_xr{YType::uint32, "hold-priority-xr"},
    node_hop_count{YType::uint8, "node-hop-count"},
    exclude_srlg_address{YType::str, "exclude-srlg-address"}
        ,
    affinity(std::make_shared<MplsTe::Topology::PathTunnels::PathTunnel::Affinity>())
    , hop(this, {})
    , shared_risk_link_group(this, {})
    , sr_segment(this, {})
{
    affinity->parent = this;

    yang_name = "path-tunnel"; yang_parent_name = "path-tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::PathTunnels::PathTunnel::~PathTunnel()
{
}

bool MplsTe::Topology::PathTunnels::PathTunnel::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hop.len(); index++)
    {
        if(hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.len(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_segment.len(); index++)
    {
        if(sr_segment[index]->has_data())
            return true;
    }
    return tunnel_id.is_set
	|| tunnel_name.is_set
	|| tunnel_id_xr.is_set
	|| destination_address_xr.is_set
	|| is_partial_path.is_set
	|| is_full_path.is_set
	|| is_topology_checked.is_set
	|| is_segment_routing_db_checked.is_set
	|| requested_bandwidth.is_set
	|| bandwidth_type.is_set
	|| mininum_bandwidth.is_set
	|| accumulated_admin_weight.is_set
	|| setup_priority_xr.is_set
	|| hold_priority_xr.is_set
	|| node_hop_count.is_set
	|| exclude_srlg_address.is_set
	|| (affinity !=  nullptr && affinity->has_data());
}

bool MplsTe::Topology::PathTunnels::PathTunnel::has_operation() const
{
    for (std::size_t index=0; index<hop.len(); index++)
    {
        if(hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.len(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_segment.len(); index++)
    {
        if(sr_segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_id_xr.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(is_partial_path.yfilter)
	|| ydk::is_set(is_full_path.yfilter)
	|| ydk::is_set(is_topology_checked.yfilter)
	|| ydk::is_set(is_segment_routing_db_checked.yfilter)
	|| ydk::is_set(requested_bandwidth.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(mininum_bandwidth.yfilter)
	|| ydk::is_set(accumulated_admin_weight.yfilter)
	|| ydk::is_set(setup_priority_xr.yfilter)
	|| ydk::is_set(hold_priority_xr.yfilter)
	|| ydk::is_set(node_hop_count.yfilter)
	|| ydk::is_set(exclude_srlg_address.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/path-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::PathTunnels::PathTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.yfilter)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (is_partial_path.is_set || is_set(is_partial_path.yfilter)) leaf_name_data.push_back(is_partial_path.get_name_leafdata());
    if (is_full_path.is_set || is_set(is_full_path.yfilter)) leaf_name_data.push_back(is_full_path.get_name_leafdata());
    if (is_topology_checked.is_set || is_set(is_topology_checked.yfilter)) leaf_name_data.push_back(is_topology_checked.get_name_leafdata());
    if (is_segment_routing_db_checked.is_set || is_set(is_segment_routing_db_checked.yfilter)) leaf_name_data.push_back(is_segment_routing_db_checked.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.yfilter)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (mininum_bandwidth.is_set || is_set(mininum_bandwidth.yfilter)) leaf_name_data.push_back(mininum_bandwidth.get_name_leafdata());
    if (accumulated_admin_weight.is_set || is_set(accumulated_admin_weight.yfilter)) leaf_name_data.push_back(accumulated_admin_weight.get_name_leafdata());
    if (setup_priority_xr.is_set || is_set(setup_priority_xr.yfilter)) leaf_name_data.push_back(setup_priority_xr.get_name_leafdata());
    if (hold_priority_xr.is_set || is_set(hold_priority_xr.yfilter)) leaf_name_data.push_back(hold_priority_xr.get_name_leafdata());
    if (node_hop_count.is_set || is_set(node_hop_count.yfilter)) leaf_name_data.push_back(node_hop_count.get_name_leafdata());
    if (exclude_srlg_address.is_set || is_set(exclude_srlg_address.yfilter)) leaf_name_data.push_back(exclude_srlg_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::PathTunnels::PathTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTe::Topology::PathTunnels::PathTunnel::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "hop")
    {
        auto c = std::make_shared<MplsTe::Topology::PathTunnels::PathTunnel::Hop>();
        c->parent = this;
        hop.append(c);
        return c;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        auto c = std::make_shared<MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.append(c);
        return c;
    }

    if(child_yang_name == "sr-segment")
    {
        auto c = std::make_shared<MplsTe::Topology::PathTunnels::PathTunnel::SrSegment>();
        c->parent = this;
        sr_segment.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::PathTunnels::PathTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    count = 0;
    for (auto c : hop.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : shared_risk_link_group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : sr_segment.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Topology::PathTunnels::PathTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
        tunnel_id_xr.value_namespace = name_space;
        tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partial-path")
    {
        is_partial_path = value;
        is_partial_path.value_namespace = name_space;
        is_partial_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-full-path")
    {
        is_full_path = value;
        is_full_path.value_namespace = name_space;
        is_full_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-topology-checked")
    {
        is_topology_checked = value;
        is_topology_checked.value_namespace = name_space;
        is_topology_checked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-segment-routing-db-checked")
    {
        is_segment_routing_db_checked = value;
        is_segment_routing_db_checked.value_namespace = name_space;
        is_segment_routing_db_checked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
        requested_bandwidth.value_namespace = name_space;
        requested_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mininum-bandwidth")
    {
        mininum_bandwidth = value;
        mininum_bandwidth.value_namespace = name_space;
        mininum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accumulated-admin-weight")
    {
        accumulated_admin_weight = value;
        accumulated_admin_weight.value_namespace = name_space;
        accumulated_admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority-xr")
    {
        setup_priority_xr = value;
        setup_priority_xr.value_namespace = name_space;
        setup_priority_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority-xr")
    {
        hold_priority_xr = value;
        hold_priority_xr.value_namespace = name_space;
        hold_priority_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count = value;
        node_hop_count.value_namespace = name_space;
        node_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-srlg-address")
    {
        exclude_srlg_address = value;
        exclude_srlg_address.value_namespace = name_space;
        exclude_srlg_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::PathTunnels::PathTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "is-partial-path")
    {
        is_partial_path.yfilter = yfilter;
    }
    if(value_path == "is-full-path")
    {
        is_full_path.yfilter = yfilter;
    }
    if(value_path == "is-topology-checked")
    {
        is_topology_checked.yfilter = yfilter;
    }
    if(value_path == "is-segment-routing-db-checked")
    {
        is_segment_routing_db_checked.yfilter = yfilter;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "mininum-bandwidth")
    {
        mininum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "accumulated-admin-weight")
    {
        accumulated_admin_weight.yfilter = yfilter;
    }
    if(value_path == "setup-priority-xr")
    {
        setup_priority_xr.yfilter = yfilter;
    }
    if(value_path == "hold-priority-xr")
    {
        hold_priority_xr.yfilter = yfilter;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count.yfilter = yfilter;
    }
    if(value_path == "exclude-srlg-address")
    {
        exclude_srlg_address.yfilter = yfilter;
    }
}

bool MplsTe::Topology::PathTunnels::PathTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "hop" || name == "shared-risk-link-group" || name == "sr-segment" || name == "tunnel-id" || name == "tunnel-name" || name == "tunnel-id-xr" || name == "destination-address-xr" || name == "is-partial-path" || name == "is-full-path" || name == "is-topology-checked" || name == "is-segment-routing-db-checked" || name == "requested-bandwidth" || name == "bandwidth-type" || name == "mininum-bandwidth" || name == "accumulated-admin-weight" || name == "setup-priority-xr" || name == "hold-priority-xr" || name == "node-hop-count" || name == "exclude-srlg-address")
        return true;
    return false;
}

MplsTe::Topology::PathTunnels::PathTunnel::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "path-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::PathTunnels::PathTunnel::Affinity::~Affinity()
{
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::Affinity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/path-tunnels/path-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::PathTunnels::PathTunnel::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::PathTunnels::PathTunnel::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto c = std::make_shared<MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::PathTunnels::PathTunnel::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : named_affinity.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Topology::PathTunnels::PathTunnel::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Topology::PathTunnels::PathTunnel::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/path-tunnels/path-tunnel/affinity/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto c = std::make_shared<MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue>();
        c->parent = this;
        constraint_extended_value.append(c);
        return c;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto c = std::make_shared<MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        c->parent = this;
        extended_forward_ref_value.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : constraint_extended_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : extended_forward_ref_value.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/path-tunnels/path-tunnel/affinity/named-affinity/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/path-tunnels/path-tunnel/affinity/named-affinity/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::Topology::PathTunnels::PathTunnel::Hop::Hop()
    :
    entry{YType::str, "entry"}
{

    yang_name = "hop"; yang_parent_name = "path-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::PathTunnels::PathTunnel::Hop::~Hop()
{
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Hop::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Hop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::Hop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/path-tunnels/path-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::PathTunnels::PathTunnel::Hop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::PathTunnels::PathTunnel::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::PathTunnels::PathTunnel::Hop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Topology::PathTunnels::PathTunnel::Hop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::Topology::PathTunnels::PathTunnel::Hop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTe::Topology::PathTunnels::PathTunnel::Hop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "path-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::has_data() const
{
    if (is_presence_container) return true;
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/path-tunnels/path-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::SrSegment()
    :
    sid_type{YType::enumeration, "sid-type"},
    has_ip_addresses{YType::boolean, "has-ip-addresses"},
    local_addr{YType::str, "local-addr"},
    remote_addr{YType::str, "remote-addr"},
    has_mpls_label{YType::boolean, "has-mpls-label"},
    mpls_label_value{YType::uint32, "mpls-label-value"},
    has_entropy_label{YType::boolean, "has-entropy-label"}
{

    yang_name = "sr-segment"; yang_parent_name = "path-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::~SrSegment()
{
}

bool MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| has_ip_addresses.is_set
	|| local_addr.is_set
	|| remote_addr.is_set
	|| has_mpls_label.is_set
	|| mpls_label_value.is_set
	|| has_entropy_label.is_set;
}

bool MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::has_operation() const
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

std::string MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/topology/path-tunnels/path-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::get_name_leaf_data() const
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

std::shared_ptr<Entity> MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MplsTe::Topology::PathTunnels::PathTunnel::SrSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-type" || name == "has-ip-addresses" || name == "local-addr" || name == "remote-addr" || name == "has-mpls-label" || name == "mpls-label-value" || name == "has-entropy-label")
        return true;
    return false;
}

MplsTe::SignallingCounters::SignallingCounters()
    :
    issu(std::make_shared<MplsTe::SignallingCounters::Issu>())
    , fsm_unexpected_event_stats(std::make_shared<MplsTe::SignallingCounters::FsmUnexpectedEventStats>())
    , head_signalling_counters(std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters>())
    , remote_signalling_counters(std::make_shared<MplsTe::SignallingCounters::RemoteSignallingCounters>())
    , signallings(std::make_shared<MplsTe::SignallingCounters::Signallings>())
    , signalling_summary(std::make_shared<MplsTe::SignallingCounters::SignallingSummary>())
{
    issu->parent = this;
    fsm_unexpected_event_stats->parent = this;
    head_signalling_counters->parent = this;
    remote_signalling_counters->parent = this;
    signallings->parent = this;
    signalling_summary->parent = this;

    yang_name = "signalling-counters"; yang_parent_name = "mpls-te"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::SignallingCounters::~SignallingCounters()
{
}

bool MplsTe::SignallingCounters::has_data() const
{
    if (is_presence_container) return true;
    return (issu !=  nullptr && issu->has_data())
	|| (fsm_unexpected_event_stats !=  nullptr && fsm_unexpected_event_stats->has_data())
	|| (head_signalling_counters !=  nullptr && head_signalling_counters->has_data())
	|| (remote_signalling_counters !=  nullptr && remote_signalling_counters->has_data())
	|| (signallings !=  nullptr && signallings->has_data())
	|| (signalling_summary !=  nullptr && signalling_summary->has_data());
}

bool MplsTe::SignallingCounters::has_operation() const
{
    return is_set(yfilter)
	|| (issu !=  nullptr && issu->has_operation())
	|| (fsm_unexpected_event_stats !=  nullptr && fsm_unexpected_event_stats->has_operation())
	|| (head_signalling_counters !=  nullptr && head_signalling_counters->has_operation())
	|| (remote_signalling_counters !=  nullptr && remote_signalling_counters->has_operation())
	|| (signallings !=  nullptr && signallings->has_operation())
	|| (signalling_summary !=  nullptr && signalling_summary->has_operation());
}

std::string MplsTe::SignallingCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "issu")
    {
        if(issu == nullptr)
        {
            issu = std::make_shared<MplsTe::SignallingCounters::Issu>();
        }
        return issu;
    }

    if(child_yang_name == "fsm-unexpected-event-stats")
    {
        if(fsm_unexpected_event_stats == nullptr)
        {
            fsm_unexpected_event_stats = std::make_shared<MplsTe::SignallingCounters::FsmUnexpectedEventStats>();
        }
        return fsm_unexpected_event_stats;
    }

    if(child_yang_name == "head-signalling-counters")
    {
        if(head_signalling_counters == nullptr)
        {
            head_signalling_counters = std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters>();
        }
        return head_signalling_counters;
    }

    if(child_yang_name == "remote-signalling-counters")
    {
        if(remote_signalling_counters == nullptr)
        {
            remote_signalling_counters = std::make_shared<MplsTe::SignallingCounters::RemoteSignallingCounters>();
        }
        return remote_signalling_counters;
    }

    if(child_yang_name == "signallings")
    {
        if(signallings == nullptr)
        {
            signallings = std::make_shared<MplsTe::SignallingCounters::Signallings>();
        }
        return signallings;
    }

    if(child_yang_name == "signalling-summary")
    {
        if(signalling_summary == nullptr)
        {
            signalling_summary = std::make_shared<MplsTe::SignallingCounters::SignallingSummary>();
        }
        return signalling_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(issu != nullptr)
    {
        children["issu"] = issu;
    }

    if(fsm_unexpected_event_stats != nullptr)
    {
        children["fsm-unexpected-event-stats"] = fsm_unexpected_event_stats;
    }

    if(head_signalling_counters != nullptr)
    {
        children["head-signalling-counters"] = head_signalling_counters;
    }

    if(remote_signalling_counters != nullptr)
    {
        children["remote-signalling-counters"] = remote_signalling_counters;
    }

    if(signallings != nullptr)
    {
        children["signallings"] = signallings;
    }

    if(signalling_summary != nullptr)
    {
        children["signalling-summary"] = signalling_summary;
    }

    return children;
}

void MplsTe::SignallingCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::SignallingCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::SignallingCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "issu" || name == "fsm-unexpected-event-stats" || name == "head-signalling-counters" || name == "remote-signalling-counters" || name == "signallings" || name == "signalling-summary")
        return true;
    return false;
}

MplsTe::SignallingCounters::Issu::Issu()
    :
    last_cleared_timestamp{YType::uint32, "last-cleared-timestamp"},
    role{YType::enumeration, "role"},
    last_idt_states{YType::uint32, "last-idt-states"},
    total_states{YType::uint32, "total-states"},
    total_deletions{YType::uint32, "total-deletions"},
    total_nac_ks{YType::uint64, "total-nac-ks"},
    total_id_ts{YType::uint32, "total-id-ts"}
{

    yang_name = "issu"; yang_parent_name = "signalling-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::SignallingCounters::Issu::~Issu()
{
}

bool MplsTe::SignallingCounters::Issu::has_data() const
{
    if (is_presence_container) return true;
    return last_cleared_timestamp.is_set
	|| role.is_set
	|| last_idt_states.is_set
	|| total_states.is_set
	|| total_deletions.is_set
	|| total_nac_ks.is_set
	|| total_id_ts.is_set;
}

bool MplsTe::SignallingCounters::Issu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_cleared_timestamp.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(last_idt_states.yfilter)
	|| ydk::is_set(total_states.yfilter)
	|| ydk::is_set(total_deletions.yfilter)
	|| ydk::is_set(total_nac_ks.yfilter)
	|| ydk::is_set(total_id_ts.yfilter);
}

std::string MplsTe::SignallingCounters::Issu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Issu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.yfilter)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (last_idt_states.is_set || is_set(last_idt_states.yfilter)) leaf_name_data.push_back(last_idt_states.get_name_leafdata());
    if (total_states.is_set || is_set(total_states.yfilter)) leaf_name_data.push_back(total_states.get_name_leafdata());
    if (total_deletions.is_set || is_set(total_deletions.yfilter)) leaf_name_data.push_back(total_deletions.get_name_leafdata());
    if (total_nac_ks.is_set || is_set(total_nac_ks.yfilter)) leaf_name_data.push_back(total_nac_ks.get_name_leafdata());
    if (total_id_ts.is_set || is_set(total_id_ts.yfilter)) leaf_name_data.push_back(total_id_ts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Issu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::SignallingCounters::Issu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
        last_cleared_timestamp.value_namespace = name_space;
        last_cleared_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-idt-states")
    {
        last_idt_states = value;
        last_idt_states.value_namespace = name_space;
        last_idt_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-states")
    {
        total_states = value;
        total_states.value_namespace = name_space;
        total_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-deletions")
    {
        total_deletions = value;
        total_deletions.value_namespace = name_space;
        total_deletions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-nac-ks")
    {
        total_nac_ks = value;
        total_nac_ks.value_namespace = name_space;
        total_nac_ks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-id-ts")
    {
        total_id_ts = value;
        total_id_ts.value_namespace = name_space;
        total_id_ts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Issu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "last-idt-states")
    {
        last_idt_states.yfilter = yfilter;
    }
    if(value_path == "total-states")
    {
        total_states.yfilter = yfilter;
    }
    if(value_path == "total-deletions")
    {
        total_deletions.yfilter = yfilter;
    }
    if(value_path == "total-nac-ks")
    {
        total_nac_ks.yfilter = yfilter;
    }
    if(value_path == "total-id-ts")
    {
        total_id_ts.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Issu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-cleared-timestamp" || name == "role" || name == "last-idt-states" || name == "total-states" || name == "total-deletions" || name == "total-nac-ks" || name == "total-id-ts")
        return true;
    return false;
}

MplsTe::SignallingCounters::FsmUnexpectedEventStats::FsmUnexpectedEventStats()
    :
    last_cleared_time{YType::uint32, "last-cleared-time"},
    unexpected_event_num{YType::uint32, "unexpected-event-num"}
        ,
    head_fsm_events(std::make_shared<MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents>())
    , mid_fsm_events(std::make_shared<MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents>())
    , tail_fsm_events(std::make_shared<MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents>())
{
    head_fsm_events->parent = this;
    mid_fsm_events->parent = this;
    tail_fsm_events->parent = this;

    yang_name = "fsm-unexpected-event-stats"; yang_parent_name = "signalling-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::SignallingCounters::FsmUnexpectedEventStats::~FsmUnexpectedEventStats()
{
}

bool MplsTe::SignallingCounters::FsmUnexpectedEventStats::has_data() const
{
    if (is_presence_container) return true;
    return last_cleared_time.is_set
	|| unexpected_event_num.is_set
	|| (head_fsm_events !=  nullptr && head_fsm_events->has_data())
	|| (mid_fsm_events !=  nullptr && mid_fsm_events->has_data())
	|| (tail_fsm_events !=  nullptr && tail_fsm_events->has_data());
}

bool MplsTe::SignallingCounters::FsmUnexpectedEventStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_cleared_time.yfilter)
	|| ydk::is_set(unexpected_event_num.yfilter)
	|| (head_fsm_events !=  nullptr && head_fsm_events->has_operation())
	|| (mid_fsm_events !=  nullptr && mid_fsm_events->has_operation())
	|| (tail_fsm_events !=  nullptr && tail_fsm_events->has_operation());
}

std::string MplsTe::SignallingCounters::FsmUnexpectedEventStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::FsmUnexpectedEventStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsm-unexpected-event-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::FsmUnexpectedEventStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_time.is_set || is_set(last_cleared_time.yfilter)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());
    if (unexpected_event_num.is_set || is_set(unexpected_event_num.yfilter)) leaf_name_data.push_back(unexpected_event_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::FsmUnexpectedEventStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head-fsm-events")
    {
        if(head_fsm_events == nullptr)
        {
            head_fsm_events = std::make_shared<MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents>();
        }
        return head_fsm_events;
    }

    if(child_yang_name == "mid-fsm-events")
    {
        if(mid_fsm_events == nullptr)
        {
            mid_fsm_events = std::make_shared<MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents>();
        }
        return mid_fsm_events;
    }

    if(child_yang_name == "tail-fsm-events")
    {
        if(tail_fsm_events == nullptr)
        {
            tail_fsm_events = std::make_shared<MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents>();
        }
        return tail_fsm_events;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::FsmUnexpectedEventStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(head_fsm_events != nullptr)
    {
        children["head-fsm-events"] = head_fsm_events;
    }

    if(mid_fsm_events != nullptr)
    {
        children["mid-fsm-events"] = mid_fsm_events;
    }

    if(tail_fsm_events != nullptr)
    {
        children["tail-fsm-events"] = tail_fsm_events;
    }

    return children;
}

void MplsTe::SignallingCounters::FsmUnexpectedEventStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
        last_cleared_time.value_namespace = name_space;
        last_cleared_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-event-num")
    {
        unexpected_event_num = value;
        unexpected_event_num.value_namespace = name_space;
        unexpected_event_num.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::FsmUnexpectedEventStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-cleared-time")
    {
        last_cleared_time.yfilter = yfilter;
    }
    if(value_path == "unexpected-event-num")
    {
        unexpected_event_num.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::FsmUnexpectedEventStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head-fsm-events" || name == "mid-fsm-events" || name == "tail-fsm-events" || name == "last-cleared-time" || name == "unexpected-event-num")
        return true;
    return false;
}

MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::HeadFsmEvents()
    :
    te_s2l_fsm_stats_array(this, {})
{

    yang_name = "head-fsm-events"; yang_parent_name = "fsm-unexpected-event-stats"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::~HeadFsmEvents()
{
}

bool MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<te_s2l_fsm_stats_array.len(); index++)
    {
        if(te_s2l_fsm_stats_array[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::has_operation() const
{
    for (std::size_t index=0; index<te_s2l_fsm_stats_array.len(); index++)
    {
        if(te_s2l_fsm_stats_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/fsm-unexpected-event-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-fsm-events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-s2l-fsm-stats-array")
    {
        auto c = std::make_shared<MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray>();
        c->parent = this;
        te_s2l_fsm_stats_array.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : te_s2l_fsm_stats_array.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-s2l-fsm-stats-array")
        return true;
    return false;
}

MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray::TeS2lFsmStatsArray()
    :
    te_s2l_fsm_event_array{YType::uint32, "te-s2l-fsm-event-array"}
{

    yang_name = "te-s2l-fsm-stats-array"; yang_parent_name = "head-fsm-events"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray::~TeS2lFsmStatsArray()
{
}

bool MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : te_s2l_fsm_event_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray::has_operation() const
{
    for (auto const & leaf : te_s2l_fsm_event_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(te_s2l_fsm_event_array.yfilter);
}

std::string MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/fsm-unexpected-event-stats/head-fsm-events/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-s2l-fsm-stats-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto te_s2l_fsm_event_array_name_datas = te_s2l_fsm_event_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), te_s2l_fsm_event_array_name_datas.begin(), te_s2l_fsm_event_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-s2l-fsm-event-array")
    {
        te_s2l_fsm_event_array.append(value);
    }
}

void MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-s2l-fsm-event-array")
    {
        te_s2l_fsm_event_array.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-s2l-fsm-event-array")
        return true;
    return false;
}

MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::MidFsmEvents()
    :
    te_s2l_fsm_stats_array(this, {})
{

    yang_name = "mid-fsm-events"; yang_parent_name = "fsm-unexpected-event-stats"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::~MidFsmEvents()
{
}

bool MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<te_s2l_fsm_stats_array.len(); index++)
    {
        if(te_s2l_fsm_stats_array[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::has_operation() const
{
    for (std::size_t index=0; index<te_s2l_fsm_stats_array.len(); index++)
    {
        if(te_s2l_fsm_stats_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/fsm-unexpected-event-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mid-fsm-events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-s2l-fsm-stats-array")
    {
        auto c = std::make_shared<MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray>();
        c->parent = this;
        te_s2l_fsm_stats_array.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : te_s2l_fsm_stats_array.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-s2l-fsm-stats-array")
        return true;
    return false;
}

MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray::TeS2lFsmStatsArray()
    :
    te_s2l_fsm_event_array{YType::uint32, "te-s2l-fsm-event-array"}
{

    yang_name = "te-s2l-fsm-stats-array"; yang_parent_name = "mid-fsm-events"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray::~TeS2lFsmStatsArray()
{
}

bool MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : te_s2l_fsm_event_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray::has_operation() const
{
    for (auto const & leaf : te_s2l_fsm_event_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(te_s2l_fsm_event_array.yfilter);
}

std::string MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/fsm-unexpected-event-stats/mid-fsm-events/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-s2l-fsm-stats-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto te_s2l_fsm_event_array_name_datas = te_s2l_fsm_event_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), te_s2l_fsm_event_array_name_datas.begin(), te_s2l_fsm_event_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-s2l-fsm-event-array")
    {
        te_s2l_fsm_event_array.append(value);
    }
}

void MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-s2l-fsm-event-array")
    {
        te_s2l_fsm_event_array.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-s2l-fsm-event-array")
        return true;
    return false;
}

MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TailFsmEvents()
    :
    te_s2l_fsm_stats_array(this, {})
{

    yang_name = "tail-fsm-events"; yang_parent_name = "fsm-unexpected-event-stats"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::~TailFsmEvents()
{
}

bool MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<te_s2l_fsm_stats_array.len(); index++)
    {
        if(te_s2l_fsm_stats_array[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::has_operation() const
{
    for (std::size_t index=0; index<te_s2l_fsm_stats_array.len(); index++)
    {
        if(te_s2l_fsm_stats_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/fsm-unexpected-event-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tail-fsm-events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-s2l-fsm-stats-array")
    {
        auto c = std::make_shared<MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray>();
        c->parent = this;
        te_s2l_fsm_stats_array.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : te_s2l_fsm_stats_array.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-s2l-fsm-stats-array")
        return true;
    return false;
}

MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray::TeS2lFsmStatsArray()
    :
    te_s2l_fsm_event_array{YType::uint32, "te-s2l-fsm-event-array"}
{

    yang_name = "te-s2l-fsm-stats-array"; yang_parent_name = "tail-fsm-events"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray::~TeS2lFsmStatsArray()
{
}

bool MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : te_s2l_fsm_event_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray::has_operation() const
{
    for (auto const & leaf : te_s2l_fsm_event_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(te_s2l_fsm_event_array.yfilter);
}

std::string MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/fsm-unexpected-event-stats/tail-fsm-events/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-s2l-fsm-stats-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto te_s2l_fsm_event_array_name_datas = te_s2l_fsm_event_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), te_s2l_fsm_event_array_name_datas.begin(), te_s2l_fsm_event_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-s2l-fsm-event-array")
    {
        te_s2l_fsm_event_array.append(value);
    }
}

void MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-s2l-fsm-event-array")
    {
        te_s2l_fsm_event_array.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-s2l-fsm-event-array")
        return true;
    return false;
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounters()
    :
    head_signalling_counter(this, {"ctype", "tunnel_id"})
{

    yang_name = "head-signalling-counters"; yang_parent_name = "signalling-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::SignallingCounters::HeadSignallingCounters::~HeadSignallingCounters()
{
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<head_signalling_counter.len(); index++)
    {
        if(head_signalling_counter[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::has_operation() const
{
    for (std::size_t index=0; index<head_signalling_counter.len(); index++)
    {
        if(head_signalling_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-signalling-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::HeadSignallingCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadSignallingCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head-signalling-counter")
    {
        auto c = std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter>();
        c->parent = this;
        head_signalling_counter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::HeadSignallingCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : head_signalling_counter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::SignallingCounters::HeadSignallingCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::SignallingCounters::HeadSignallingCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head-signalling-counter")
        return true;
    return false;
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::HeadSignallingCounter()
    :
    ctype{YType::enumeration, "ctype"},
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_sig_name{YType::str, "tunnel-sig-name"},
    lsp_id{YType::uint16, "lsp-id"}
        ,
    statistics(std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics>())
    , destination_statistic(this, {})
{
    statistics->parent = this;

    yang_name = "head-signalling-counter"; yang_parent_name = "head-signalling-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::~HeadSignallingCounter()
{
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<destination_statistic.len(); index++)
    {
        if(destination_statistic[index]->has_data())
            return true;
    }
    return ctype.is_set
	|| tunnel_id.is_set
	|| tunnel_name.is_set
	|| tunnel_sig_name.is_set
	|| lsp_id.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::has_operation() const
{
    for (std::size_t index=0; index<destination_statistic.len(); index++)
    {
        if(destination_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_sig_name.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/head-signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-signalling-counter";
    ADD_KEY_TOKEN(ctype, "ctype");
    ADD_KEY_TOKEN(tunnel_id, "tunnel-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_sig_name.is_set || is_set(tunnel_sig_name.yfilter)) leaf_name_data.push_back(tunnel_sig_name.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "destination-statistic")
    {
        auto c = std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic>();
        c->parent = this;
        destination_statistic.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    count = 0;
    for (auto c : destination_statistic.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name = value;
        tunnel_sig_name.value_namespace = name_space;
        tunnel_sig_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "destination-statistic" || name == "ctype" || name == "tunnel-id" || name == "tunnel-name" || name == "tunnel-sig-name" || name == "lsp-id")
        return true;
    return false;
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "head-signalling-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::DestinationStatistic()
    :
    destination_address{YType::str, "destination-address"}
        ,
    statistics(std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics>())
    , s2l_statistic(this, {})
{
    statistics->parent = this;

    yang_name = "destination-statistic"; yang_parent_name = "head-signalling-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::~DestinationStatistic()
{
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<s2l_statistic.len(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.len(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "s2l-statistic")
    {
        auto c = std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic>();
        c->parent = this;
        s2l_statistic.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    count = 0;
    for (auto c : s2l_statistic.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "s2l-statistic" || name == "destination-address")
        return true;
    return false;
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "destination-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::S2lStatistic()
    :
    sub_group_originator{YType::str, "sub-group-originator"},
    sub_group_id{YType::uint16, "sub-group-id"},
    destination_address{YType::str, "destination-address"}
        ,
    statistics(std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "s2l-statistic"; yang_parent_name = "destination-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::~S2lStatistic()
{
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::has_data() const
{
    if (is_presence_container) return true;
    return sub_group_originator.is_set
	|| sub_group_id.is_set
	|| destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "sub-group-originator" || name == "sub-group-id" || name == "destination-address")
        return true;
    return false;
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "s2l-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounters()
    :
    remote_signalling_counter(this, {"ctype", "tunnel_id", "extended_tunnel_id", "p2mp_id", "lsp_id", "source_address", "destination_address", "sub_group_originator", "sub_group_id"})
{

    yang_name = "remote-signalling-counters"; yang_parent_name = "signalling-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::SignallingCounters::RemoteSignallingCounters::~RemoteSignallingCounters()
{
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_signalling_counter.len(); index++)
    {
        if(remote_signalling_counter[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::has_operation() const
{
    for (std::size_t index=0; index<remote_signalling_counter.len(); index++)
    {
        if(remote_signalling_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::SignallingCounters::RemoteSignallingCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::RemoteSignallingCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-signalling-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::RemoteSignallingCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::RemoteSignallingCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-signalling-counter")
    {
        auto c = std::make_shared<MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter>();
        c->parent = this;
        remote_signalling_counter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::RemoteSignallingCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : remote_signalling_counter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::SignallingCounters::RemoteSignallingCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::SignallingCounters::RemoteSignallingCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-signalling-counter")
        return true;
    return false;
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::RemoteSignallingCounter()
    :
    ctype{YType::enumeration, "ctype"},
    tunnel_id{YType::uint32, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    lsp_id{YType::uint32, "lsp-id"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    sub_group_originator{YType::str, "sub-group-originator"},
    sub_group_id{YType::uint32, "sub-group-id"},
    tunnel_name{YType::str, "tunnel-name"}
        ,
    statistics(std::make_shared<MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics>())
    , s2l_statistic(this, {})
{
    statistics->parent = this;

    yang_name = "remote-signalling-counter"; yang_parent_name = "remote-signalling-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::~RemoteSignallingCounter()
{
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<s2l_statistic.len(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return ctype.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| lsp_id.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| sub_group_originator.is_set
	|| sub_group_id.is_set
	|| tunnel_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.len(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/remote-signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-signalling-counter";
    ADD_KEY_TOKEN(ctype, "ctype");
    ADD_KEY_TOKEN(tunnel_id, "tunnel-id");
    ADD_KEY_TOKEN(extended_tunnel_id, "extended-tunnel-id");
    ADD_KEY_TOKEN(p2mp_id, "p2mp-id");
    ADD_KEY_TOKEN(lsp_id, "lsp-id");
    ADD_KEY_TOKEN(source_address, "source-address");
    ADD_KEY_TOKEN(destination_address, "destination-address");
    ADD_KEY_TOKEN(sub_group_originator, "sub-group-originator");
    ADD_KEY_TOKEN(sub_group_id, "sub-group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "s2l-statistic")
    {
        auto c = std::make_shared<MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic>();
        c->parent = this;
        s2l_statistic.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    count = 0;
    for (auto c : s2l_statistic.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
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
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "s2l-statistic" || name == "ctype" || name == "tunnel-id" || name == "extended-tunnel-id" || name == "p2mp-id" || name == "lsp-id" || name == "source-address" || name == "destination-address" || name == "sub-group-originator" || name == "sub-group-id" || name == "tunnel-name")
        return true;
    return false;
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "remote-signalling-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::S2lStatistic()
    :
    sub_group_originator{YType::str, "sub-group-originator"},
    sub_group_id{YType::uint16, "sub-group-id"},
    destination_address{YType::str, "destination-address"}
        ,
    statistics(std::make_shared<MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "s2l-statistic"; yang_parent_name = "remote-signalling-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::~S2lStatistic()
{
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::has_data() const
{
    if (is_presence_container) return true;
    return sub_group_originator.is_set
	|| sub_group_id.is_set
	|| destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "sub-group-originator" || name == "sub-group-id" || name == "destination-address")
        return true;
    return false;
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "s2l-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signallings()
    :
    signalling(this, {"ctype", "tunnel_id", "extended_tunnel_id", "p2mp_id", "lsp_id", "source_address", "destination_address", "sub_group_originator", "sub_group_id"})
{

    yang_name = "signallings"; yang_parent_name = "signalling-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::SignallingCounters::Signallings::~Signallings()
{
}

bool MplsTe::SignallingCounters::Signallings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<signalling.len(); index++)
    {
        if(signalling[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTe::SignallingCounters::Signallings::has_operation() const
{
    for (std::size_t index=0; index<signalling.len(); index++)
    {
        if(signalling[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTe::SignallingCounters::Signallings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::Signallings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signallings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signalling")
    {
        auto c = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling>();
        c->parent = this;
        signalling.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : signalling.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::SignallingCounters::Signallings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTe::SignallingCounters::Signallings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTe::SignallingCounters::Signallings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signalling")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signalling::Signalling()
    :
    ctype{YType::enumeration, "ctype"},
    tunnel_id{YType::uint32, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    lsp_id{YType::uint32, "lsp-id"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    sub_group_originator{YType::str, "sub-group-originator"},
    sub_group_id{YType::uint32, "sub-group-id"}
        ,
    te_signalling_filter_data(std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData>())
{
    te_signalling_filter_data->parent = this;

    yang_name = "signalling"; yang_parent_name = "signallings"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTe::SignallingCounters::Signallings::Signalling::~Signalling()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::has_data() const
{
    if (is_presence_container) return true;
    return ctype.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| lsp_id.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| sub_group_originator.is_set
	|| sub_group_id.is_set
	|| (te_signalling_filter_data !=  nullptr && te_signalling_filter_data->has_data());
}

bool MplsTe::SignallingCounters::Signallings::Signalling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| (te_signalling_filter_data !=  nullptr && te_signalling_filter_data->has_operation());
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te/signalling-counters/signallings/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling";
    ADD_KEY_TOKEN(ctype, "ctype");
    ADD_KEY_TOKEN(tunnel_id, "tunnel-id");
    ADD_KEY_TOKEN(extended_tunnel_id, "extended-tunnel-id");
    ADD_KEY_TOKEN(p2mp_id, "p2mp-id");
    ADD_KEY_TOKEN(lsp_id, "lsp-id");
    ADD_KEY_TOKEN(source_address, "source-address");
    ADD_KEY_TOKEN(destination_address, "destination-address");
    ADD_KEY_TOKEN(sub_group_originator, "sub-group-originator");
    ADD_KEY_TOKEN(sub_group_id, "sub-group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::Signalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-signalling-filter-data")
    {
        if(te_signalling_filter_data == nullptr)
        {
            te_signalling_filter_data = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData>();
        }
        return te_signalling_filter_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::Signalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(te_signalling_filter_data != nullptr)
    {
        children["te-signalling-filter-data"] = te_signalling_filter_data;
    }

    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Signallings::Signalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
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
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Signallings::Signalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-signalling-filter-data" || name == "ctype" || name == "tunnel-id" || name == "extended-tunnel-id" || name == "p2mp-id" || name == "lsp-id" || name == "source-address" || name == "destination-address" || name == "sub-group-originator" || name == "sub-group-id")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterData()
    :
    statistics_filter{YType::enumeration, "statistics-filter"}
        ,
    te_signalling_filter_vif(std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif>())
    , te_signalling_filter_lsp(std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp>())
{
    te_signalling_filter_vif->parent = this;
    te_signalling_filter_lsp->parent = this;

    yang_name = "te-signalling-filter-data"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::~TeSignallingFilterData()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::has_data() const
{
    if (is_presence_container) return true;
    return statistics_filter.is_set
	|| (te_signalling_filter_vif !=  nullptr && te_signalling_filter_vif->has_data())
	|| (te_signalling_filter_lsp !=  nullptr && te_signalling_filter_lsp->has_data());
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(statistics_filter.yfilter)
	|| (te_signalling_filter_vif !=  nullptr && te_signalling_filter_vif->has_operation())
	|| (te_signalling_filter_lsp !=  nullptr && te_signalling_filter_lsp->has_operation());
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-signalling-filter-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (statistics_filter.is_set || is_set(statistics_filter.yfilter)) leaf_name_data.push_back(statistics_filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-signalling-filter-vif")
    {
        if(te_signalling_filter_vif == nullptr)
        {
            te_signalling_filter_vif = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif>();
        }
        return te_signalling_filter_vif;
    }

    if(child_yang_name == "te-signalling-filter-lsp")
    {
        if(te_signalling_filter_lsp == nullptr)
        {
            te_signalling_filter_lsp = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp>();
        }
        return te_signalling_filter_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(te_signalling_filter_vif != nullptr)
    {
        children["te-signalling-filter-vif"] = te_signalling_filter_vif;
    }

    if(te_signalling_filter_lsp != nullptr)
    {
        children["te-signalling-filter-lsp"] = te_signalling_filter_lsp;
    }

    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "statistics-filter")
    {
        statistics_filter = value;
        statistics_filter.value_namespace = name_space;
        statistics_filter.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "statistics-filter")
    {
        statistics_filter.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-signalling-filter-vif" || name == "te-signalling-filter-lsp" || name == "statistics-filter")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::TeSignallingFilterVif()
    :
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_sig_name{YType::str, "tunnel-sig-name"},
    lsp_id{YType::uint16, "lsp-id"}
        ,
    statistics(std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics>())
    , destination_statistic(this, {})
{
    statistics->parent = this;

    yang_name = "te-signalling-filter-vif"; yang_parent_name = "te-signalling-filter-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::~TeSignallingFilterVif()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<destination_statistic.len(); index++)
    {
        if(destination_statistic[index]->has_data())
            return true;
    }
    return tunnel_name.is_set
	|| tunnel_sig_name.is_set
	|| lsp_id.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::has_operation() const
{
    for (std::size_t index=0; index<destination_statistic.len(); index++)
    {
        if(destination_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_sig_name.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-signalling-filter-vif";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_sig_name.is_set || is_set(tunnel_sig_name.yfilter)) leaf_name_data.push_back(tunnel_sig_name.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "destination-statistic")
    {
        auto c = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic>();
        c->parent = this;
        destination_statistic.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    count = 0;
    for (auto c : destination_statistic.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name = value;
        tunnel_sig_name.value_namespace = name_space;
        tunnel_sig_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "destination-statistic" || name == "tunnel-name" || name == "tunnel-sig-name" || name == "lsp-id")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "te-signalling-filter-vif"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::DestinationStatistic()
    :
    destination_address{YType::str, "destination-address"}
        ,
    statistics(std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics>())
    , s2l_statistic(this, {})
{
    statistics->parent = this;

    yang_name = "destination-statistic"; yang_parent_name = "te-signalling-filter-vif"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::~DestinationStatistic()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<s2l_statistic.len(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.len(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "s2l-statistic")
    {
        auto c = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic>();
        c->parent = this;
        s2l_statistic.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    count = 0;
    for (auto c : s2l_statistic.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "s2l-statistic" || name == "destination-address")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "destination-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::S2lStatistic()
    :
    sub_group_originator{YType::str, "sub-group-originator"},
    sub_group_id{YType::uint16, "sub-group-id"},
    destination_address{YType::str, "destination-address"}
        ,
    statistics(std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "s2l-statistic"; yang_parent_name = "destination-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::~S2lStatistic()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::has_data() const
{
    if (is_presence_container) return true;
    return sub_group_originator.is_set
	|| sub_group_id.is_set
	|| destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "sub-group-originator" || name == "sub-group-id" || name == "destination-address")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "s2l-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::TeSignallingFilterLsp()
    :
    tunnel_name{YType::str, "tunnel-name"}
        ,
    statistics(std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics>())
    , s2l_statistic(this, {})
{
    statistics->parent = this;

    yang_name = "te-signalling-filter-lsp"; yang_parent_name = "te-signalling-filter-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::~TeSignallingFilterLsp()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<s2l_statistic.len(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return tunnel_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.len(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-signalling-filter-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "s2l-statistic")
    {
        auto c = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic>();
        c->parent = this;
        s2l_statistic.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    count = 0;
    for (auto c : s2l_statistic.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "s2l-statistic" || name == "tunnel-name")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "te-signalling-filter-lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::~Statistics()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::S2lStatistic()
    :
    sub_group_originator{YType::str, "sub-group-originator"},
    sub_group_id{YType::uint16, "sub-group-id"},
    destination_address{YType::str, "destination-address"}
        ,
    statistics(std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "s2l-statistic"; yang_parent_name = "te-signalling-filter-lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::~S2lStatistic()
{
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::has_data() const
{
    if (is_presence_container) return true;
    return sub_group_originator.is_set
	|| sub_group_id.is_set
	|| destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool MplsTe::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "sub-group-originator" || name == "sub-group-id" || name == "destination-address")
        return true;
    return false;
}


}
}

