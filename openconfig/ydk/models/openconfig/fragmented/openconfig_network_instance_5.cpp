
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_network_instance_5.hpp"
#include "openconfig_network_instance_6.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_network_instance {

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::ExpenseMetric()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State>())
{
    state->parent = this;

    yang_name = "expense-metric"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::~ExpenseMetric()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expense-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "expense-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ExpenseMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::ErrorMetric()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State>())
{
    state->parent = this;

    yang_name = "error-metric"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::~ErrorMetric()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "error-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsReachability::Neighbors::Neighbors_::ErrorMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Ipv4InternalReachability()
    :
    prefixes(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes>())
{
    prefixes->parent = this;

    yang_name = "ipv4-internal-reachability"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::~Ipv4InternalReachability()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::has_data() const
{
    if (is_presence_container) return true;
    return (prefixes !=  nullptr && prefixes->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::has_operation() const
{
    return is_set(yfilter)
	|| (prefixes !=  nullptr && prefixes->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-internal-reachability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        if(prefixes == nullptr)
        {
            prefixes = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes>();
        }
        return prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefixes != nullptr)
    {
        _children["prefixes"] = prefixes;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes()
    :
    prefixes(this, {"prefix"})
{

    yang_name = "prefixes"; yang_parent_name = "ipv4-internal-reachability"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::~Prefixes()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_>();
        ent_->parent = this;
        prefixes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefixes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::Prefixes_()
    :
    prefix{YType::str, "prefix"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State>())
    , default_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric>())
    , delay_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric>())
    , expense_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric>())
    , error_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric>())
{
    state->parent = this;
    default_metric->parent = this;
    delay_metric->parent = this;
    expense_metric->parent = this;
    error_metric->parent = this;

    yang_name = "prefixes"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::~Prefixes_()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| (state !=  nullptr && state->has_data())
	|| (default_metric !=  nullptr && default_metric->has_data())
	|| (delay_metric !=  nullptr && delay_metric->has_data())
	|| (expense_metric !=  nullptr && expense_metric->has_data())
	|| (error_metric !=  nullptr && error_metric->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (default_metric !=  nullptr && default_metric->has_operation())
	|| (delay_metric !=  nullptr && delay_metric->has_operation())
	|| (expense_metric !=  nullptr && expense_metric->has_operation())
	|| (error_metric !=  nullptr && error_metric->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State>();
        }
        return state;
    }

    if(child_yang_name == "default-metric")
    {
        if(default_metric == nullptr)
        {
            default_metric = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric>();
        }
        return default_metric;
    }

    if(child_yang_name == "delay-metric")
    {
        if(delay_metric == nullptr)
        {
            delay_metric = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric>();
        }
        return delay_metric;
    }

    if(child_yang_name == "expense-metric")
    {
        if(expense_metric == nullptr)
        {
            expense_metric = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric>();
        }
        return expense_metric;
    }

    if(child_yang_name == "error-metric")
    {
        if(error_metric == nullptr)
        {
            error_metric = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric>();
        }
        return error_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(default_metric != nullptr)
    {
        _children["default-metric"] = default_metric;
    }

    if(delay_metric != nullptr)
    {
        _children["delay-metric"] = delay_metric;
    }

    if(expense_metric != nullptr)
    {
        _children["expense-metric"] = expense_metric;
    }

    if(error_metric != nullptr)
    {
        _children["error-metric"] = error_metric;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "default-metric" || name == "delay-metric" || name == "expense-metric" || name == "error-metric" || name == "prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State::State()
    :
    up_down{YType::boolean, "up-down"},
    prefix{YType::str, "prefix"}
{

    yang_name = "state"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State::has_data() const
{
    if (is_presence_container) return true;
    return up_down.is_set
	|| prefix.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up_down.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up_down.is_set || is_set(up_down.yfilter)) leaf_name_data.push_back(up_down.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up-down")
    {
        up_down = value;
        up_down.value_namespace = name_space;
        up_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up-down")
    {
        up_down.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-down" || name == "prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::DefaultMetric()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State>())
{
    state->parent = this;

    yang_name = "default-metric"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::~DefaultMetric()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State::State()
    :
    flags{YType::enumeration, "flags"},
    default_metric{YType::uint8, "default-metric"}
{

    yang_name = "state"; yang_parent_name = "default-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| default_metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(default_metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "default-metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::DelayMetric()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State>())
{
    state->parent = this;

    yang_name = "delay-metric"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::~DelayMetric()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "delay-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DelayMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::ExpenseMetric()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State>())
{
    state->parent = this;

    yang_name = "expense-metric"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::~ExpenseMetric()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expense-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "expense-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::ErrorMetric()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State>())
{
    state->parent = this;

    yang_name = "error-metric"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::~ErrorMetric()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "error-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::ErrorMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Ipv4ExternalReachability()
    :
    prefixes(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes>())
{
    prefixes->parent = this;

    yang_name = "ipv4-external-reachability"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::~Ipv4ExternalReachability()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::has_data() const
{
    if (is_presence_container) return true;
    return (prefixes !=  nullptr && prefixes->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::has_operation() const
{
    return is_set(yfilter)
	|| (prefixes !=  nullptr && prefixes->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-external-reachability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        if(prefixes == nullptr)
        {
            prefixes = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes>();
        }
        return prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefixes != nullptr)
    {
        _children["prefixes"] = prefixes;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes()
    :
    prefixes(this, {"prefix"})
{

    yang_name = "prefixes"; yang_parent_name = "ipv4-external-reachability"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::~Prefixes()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_>();
        ent_->parent = this;
        prefixes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefixes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::Prefixes_()
    :
    prefix{YType::str, "prefix"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State>())
    , default_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric>())
    , delay_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric>())
    , expense_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric>())
    , error_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric>())
{
    state->parent = this;
    default_metric->parent = this;
    delay_metric->parent = this;
    expense_metric->parent = this;
    error_metric->parent = this;

    yang_name = "prefixes"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::~Prefixes_()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| (state !=  nullptr && state->has_data())
	|| (default_metric !=  nullptr && default_metric->has_data())
	|| (delay_metric !=  nullptr && delay_metric->has_data())
	|| (expense_metric !=  nullptr && expense_metric->has_data())
	|| (error_metric !=  nullptr && error_metric->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (default_metric !=  nullptr && default_metric->has_operation())
	|| (delay_metric !=  nullptr && delay_metric->has_operation())
	|| (expense_metric !=  nullptr && expense_metric->has_operation())
	|| (error_metric !=  nullptr && error_metric->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State>();
        }
        return state;
    }

    if(child_yang_name == "default-metric")
    {
        if(default_metric == nullptr)
        {
            default_metric = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric>();
        }
        return default_metric;
    }

    if(child_yang_name == "delay-metric")
    {
        if(delay_metric == nullptr)
        {
            delay_metric = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric>();
        }
        return delay_metric;
    }

    if(child_yang_name == "expense-metric")
    {
        if(expense_metric == nullptr)
        {
            expense_metric = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric>();
        }
        return expense_metric;
    }

    if(child_yang_name == "error-metric")
    {
        if(error_metric == nullptr)
        {
            error_metric = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric>();
        }
        return error_metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(default_metric != nullptr)
    {
        _children["default-metric"] = default_metric;
    }

    if(delay_metric != nullptr)
    {
        _children["delay-metric"] = delay_metric;
    }

    if(expense_metric != nullptr)
    {
        _children["expense-metric"] = expense_metric;
    }

    if(error_metric != nullptr)
    {
        _children["error-metric"] = error_metric;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "default-metric" || name == "delay-metric" || name == "expense-metric" || name == "error-metric" || name == "prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State::State()
    :
    up_down{YType::boolean, "up-down"},
    prefix{YType::str, "prefix"}
{

    yang_name = "state"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State::has_data() const
{
    if (is_presence_container) return true;
    return up_down.is_set
	|| prefix.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up_down.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up_down.is_set || is_set(up_down.yfilter)) leaf_name_data.push_back(up_down.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up-down")
    {
        up_down = value;
        up_down.value_namespace = name_space;
        up_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up-down")
    {
        up_down.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-down" || name == "prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::DefaultMetric()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State>())
{
    state->parent = this;

    yang_name = "default-metric"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::~DefaultMetric()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State::State()
    :
    flags{YType::enumeration, "flags"},
    default_metric{YType::uint8, "default-metric"}
{

    yang_name = "state"; yang_parent_name = "default-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| default_metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(default_metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "default-metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::DelayMetric()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State>())
{
    state->parent = this;

    yang_name = "delay-metric"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::~DelayMetric()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "delay-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DelayMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::ExpenseMetric()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State>())
{
    state->parent = this;

    yang_name = "expense-metric"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::~ExpenseMetric()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expense-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "expense-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ExpenseMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::ErrorMetric()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State>())
{
    state->parent = this;

    yang_name = "error-metric"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::~ErrorMetric()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State::State()
    :
    metric{YType::uint8, "metric"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "error-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::ErrorMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "flags")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::Authentication()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State>())
{
    state->parent = this;

    yang_name = "authentication"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::~Authentication()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::State()
    :
    crypto_type{YType::enumeration, "crypto-type"},
    authentication_key{YType::str, "authentication-key"}
{

    yang_name = "state"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::has_data() const
{
    if (is_presence_container) return true;
    return crypto_type.is_set
	|| authentication_key.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(crypto_type.yfilter)
	|| ydk::is_set(authentication_key.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (crypto_type.is_set || is_set(crypto_type.yfilter)) leaf_name_data.push_back(crypto_type.get_name_leafdata());
    if (authentication_key.is_set || is_set(authentication_key.yfilter)) leaf_name_data.push_back(authentication_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "crypto-type")
    {
        crypto_type = value;
        crypto_type.value_namespace = name_space;
        crypto_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-key")
    {
        authentication_key = value;
        authentication_key.value_namespace = name_space;
        authentication_key.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "crypto-type")
    {
        crypto_type.yfilter = yfilter;
    }
    if(value_path == "authentication-key")
    {
        authentication_key.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crypto-type" || name == "authentication-key")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::ExtendedIsReachability()
    :
    neighbors(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors>())
{
    neighbors->parent = this;

    yang_name = "extended-is-reachability"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::~ExtendedIsReachability()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::has_data() const
{
    if (is_presence_container) return true;
    return (neighbors !=  nullptr && neighbors->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::has_operation() const
{
    return is_set(yfilter)
	|| (neighbors !=  nullptr && neighbors->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-is-reachability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors>();
        }
        return neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(neighbors != nullptr)
    {
        _children["neighbors"] = neighbors;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors()
    :
    neighbors(this, {"system_id"})
{

    yang_name = "neighbors"; yang_parent_name = "extended-is-reachability"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::~Neighbors()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbors.len(); index++)
    {
        if(neighbors[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbors.len(); index++)
    {
        if(neighbors[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_>();
        ent_->parent = this;
        neighbors.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbors.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Neighbors_()
    :
    system_id{YType::str, "system-id"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State>())
    , subtlvs(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs>())
    , undefined_subtlvs(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs>())
{
    state->parent = this;
    subtlvs->parent = this;
    undefined_subtlvs->parent = this;

    yang_name = "neighbors"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::~Neighbors_()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| (state !=  nullptr && state->has_data())
	|| (subtlvs !=  nullptr && subtlvs->has_data())
	|| (undefined_subtlvs !=  nullptr && undefined_subtlvs->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (subtlvs !=  nullptr && subtlvs->has_operation())
	|| (undefined_subtlvs !=  nullptr && undefined_subtlvs->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    ADD_KEY_TOKEN(system_id, "system-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State>();
        }
        return state;
    }

    if(child_yang_name == "subtlvs")
    {
        if(subtlvs == nullptr)
        {
            subtlvs = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs>();
        }
        return subtlvs;
    }

    if(child_yang_name == "undefined-subtlvs")
    {
        if(undefined_subtlvs == nullptr)
        {
            undefined_subtlvs = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs>();
        }
        return undefined_subtlvs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(subtlvs != nullptr)
    {
        _children["subtlvs"] = subtlvs;
    }

    if(undefined_subtlvs != nullptr)
    {
        _children["undefined-subtlvs"] = undefined_subtlvs;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "subtlvs" || name == "undefined-subtlvs" || name == "system-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State::State()
    :
    system_id{YType::str, "system-id"},
    metric{YType::uint32, "metric"}
{

    yang_name = "state"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlvs()
    :
    subtlv(this, {"type"})
{

    yang_name = "subtlvs"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::~Subtlvs()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subtlv.len(); index++)
    {
        if(subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::has_operation() const
{
    for (std::size_t index=0; index<subtlv.len(); index++)
    {
        if(subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subtlv")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv>();
        ent_->parent = this;
        subtlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : subtlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subtlv")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Subtlv()
    :
    type{YType::identityref, "type"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State>())
    , admin_group(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup>())
    , ipv4_interface_address(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress>())
    , ipv4_neighbor_address(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress>())
    , max_link_bandwidth(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth>())
    , max_reservable_link_bandwidth(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth>())
    , unreserved_bandwidth(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth>())
    , ipv6_interface_address(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress>())
    , ipv6_neighbor_address(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress>())
    , extended_admin_group(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup>())
    , te_default_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric>())
    , link_attributes(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes>())
    , link_protection_type(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType>())
    , bandwidth_constraints(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints>())
    , unconstrained_lsp(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp>())
    , adjacency_sids(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids>())
    , lan_adjacency_sids(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids>())
    , link_delay(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay>())
    , min_max_link_delay(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay>())
    , link_delay_variation(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation>())
    , link_loss(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss>())
    , residual_bandwidth(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth>())
    , available_bandwidth(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth>())
    , utilized_bandwidth(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth>())
{
    state->parent = this;
    admin_group->parent = this;
    ipv4_interface_address->parent = this;
    ipv4_neighbor_address->parent = this;
    max_link_bandwidth->parent = this;
    max_reservable_link_bandwidth->parent = this;
    unreserved_bandwidth->parent = this;
    ipv6_interface_address->parent = this;
    ipv6_neighbor_address->parent = this;
    extended_admin_group->parent = this;
    te_default_metric->parent = this;
    link_attributes->parent = this;
    link_protection_type->parent = this;
    bandwidth_constraints->parent = this;
    unconstrained_lsp->parent = this;
    adjacency_sids->parent = this;
    lan_adjacency_sids->parent = this;
    link_delay->parent = this;
    min_max_link_delay->parent = this;
    link_delay_variation->parent = this;
    link_loss->parent = this;
    residual_bandwidth->parent = this;
    available_bandwidth->parent = this;
    utilized_bandwidth->parent = this;

    yang_name = "subtlv"; yang_parent_name = "subtlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::~Subtlv()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (state !=  nullptr && state->has_data())
	|| (admin_group !=  nullptr && admin_group->has_data())
	|| (ipv4_interface_address !=  nullptr && ipv4_interface_address->has_data())
	|| (ipv4_neighbor_address !=  nullptr && ipv4_neighbor_address->has_data())
	|| (max_link_bandwidth !=  nullptr && max_link_bandwidth->has_data())
	|| (max_reservable_link_bandwidth !=  nullptr && max_reservable_link_bandwidth->has_data())
	|| (unreserved_bandwidth !=  nullptr && unreserved_bandwidth->has_data())
	|| (ipv6_interface_address !=  nullptr && ipv6_interface_address->has_data())
	|| (ipv6_neighbor_address !=  nullptr && ipv6_neighbor_address->has_data())
	|| (extended_admin_group !=  nullptr && extended_admin_group->has_data())
	|| (te_default_metric !=  nullptr && te_default_metric->has_data())
	|| (link_attributes !=  nullptr && link_attributes->has_data())
	|| (link_protection_type !=  nullptr && link_protection_type->has_data())
	|| (bandwidth_constraints !=  nullptr && bandwidth_constraints->has_data())
	|| (unconstrained_lsp !=  nullptr && unconstrained_lsp->has_data())
	|| (adjacency_sids !=  nullptr && adjacency_sids->has_data())
	|| (lan_adjacency_sids !=  nullptr && lan_adjacency_sids->has_data())
	|| (link_delay !=  nullptr && link_delay->has_data())
	|| (min_max_link_delay !=  nullptr && min_max_link_delay->has_data())
	|| (link_delay_variation !=  nullptr && link_delay_variation->has_data())
	|| (link_loss !=  nullptr && link_loss->has_data())
	|| (residual_bandwidth !=  nullptr && residual_bandwidth->has_data())
	|| (available_bandwidth !=  nullptr && available_bandwidth->has_data())
	|| (utilized_bandwidth !=  nullptr && utilized_bandwidth->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (admin_group !=  nullptr && admin_group->has_operation())
	|| (ipv4_interface_address !=  nullptr && ipv4_interface_address->has_operation())
	|| (ipv4_neighbor_address !=  nullptr && ipv4_neighbor_address->has_operation())
	|| (max_link_bandwidth !=  nullptr && max_link_bandwidth->has_operation())
	|| (max_reservable_link_bandwidth !=  nullptr && max_reservable_link_bandwidth->has_operation())
	|| (unreserved_bandwidth !=  nullptr && unreserved_bandwidth->has_operation())
	|| (ipv6_interface_address !=  nullptr && ipv6_interface_address->has_operation())
	|| (ipv6_neighbor_address !=  nullptr && ipv6_neighbor_address->has_operation())
	|| (extended_admin_group !=  nullptr && extended_admin_group->has_operation())
	|| (te_default_metric !=  nullptr && te_default_metric->has_operation())
	|| (link_attributes !=  nullptr && link_attributes->has_operation())
	|| (link_protection_type !=  nullptr && link_protection_type->has_operation())
	|| (bandwidth_constraints !=  nullptr && bandwidth_constraints->has_operation())
	|| (unconstrained_lsp !=  nullptr && unconstrained_lsp->has_operation())
	|| (adjacency_sids !=  nullptr && adjacency_sids->has_operation())
	|| (lan_adjacency_sids !=  nullptr && lan_adjacency_sids->has_operation())
	|| (link_delay !=  nullptr && link_delay->has_operation())
	|| (min_max_link_delay !=  nullptr && min_max_link_delay->has_operation())
	|| (link_delay_variation !=  nullptr && link_delay_variation->has_operation())
	|| (link_loss !=  nullptr && link_loss->has_operation())
	|| (residual_bandwidth !=  nullptr && residual_bandwidth->has_operation())
	|| (available_bandwidth !=  nullptr && available_bandwidth->has_operation())
	|| (utilized_bandwidth !=  nullptr && utilized_bandwidth->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State>();
        }
        return state;
    }

    if(child_yang_name == "admin-group")
    {
        if(admin_group == nullptr)
        {
            admin_group = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup>();
        }
        return admin_group;
    }

    if(child_yang_name == "ipv4-interface-address")
    {
        if(ipv4_interface_address == nullptr)
        {
            ipv4_interface_address = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress>();
        }
        return ipv4_interface_address;
    }

    if(child_yang_name == "ipv4-neighbor-address")
    {
        if(ipv4_neighbor_address == nullptr)
        {
            ipv4_neighbor_address = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress>();
        }
        return ipv4_neighbor_address;
    }

    if(child_yang_name == "max-link-bandwidth")
    {
        if(max_link_bandwidth == nullptr)
        {
            max_link_bandwidth = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth>();
        }
        return max_link_bandwidth;
    }

    if(child_yang_name == "max-reservable-link-bandwidth")
    {
        if(max_reservable_link_bandwidth == nullptr)
        {
            max_reservable_link_bandwidth = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth>();
        }
        return max_reservable_link_bandwidth;
    }

    if(child_yang_name == "unreserved-bandwidth")
    {
        if(unreserved_bandwidth == nullptr)
        {
            unreserved_bandwidth = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth>();
        }
        return unreserved_bandwidth;
    }

    if(child_yang_name == "ipv6-interface-address")
    {
        if(ipv6_interface_address == nullptr)
        {
            ipv6_interface_address = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress>();
        }
        return ipv6_interface_address;
    }

    if(child_yang_name == "ipv6-neighbor-address")
    {
        if(ipv6_neighbor_address == nullptr)
        {
            ipv6_neighbor_address = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress>();
        }
        return ipv6_neighbor_address;
    }

    if(child_yang_name == "extended-admin-group")
    {
        if(extended_admin_group == nullptr)
        {
            extended_admin_group = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup>();
        }
        return extended_admin_group;
    }

    if(child_yang_name == "te-default-metric")
    {
        if(te_default_metric == nullptr)
        {
            te_default_metric = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric>();
        }
        return te_default_metric;
    }

    if(child_yang_name == "link-attributes")
    {
        if(link_attributes == nullptr)
        {
            link_attributes = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes>();
        }
        return link_attributes;
    }

    if(child_yang_name == "link-protection-type")
    {
        if(link_protection_type == nullptr)
        {
            link_protection_type = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType>();
        }
        return link_protection_type;
    }

    if(child_yang_name == "bandwidth-constraints")
    {
        if(bandwidth_constraints == nullptr)
        {
            bandwidth_constraints = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints>();
        }
        return bandwidth_constraints;
    }

    if(child_yang_name == "unconstrained-lsp")
    {
        if(unconstrained_lsp == nullptr)
        {
            unconstrained_lsp = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp>();
        }
        return unconstrained_lsp;
    }

    if(child_yang_name == "adjacency-sids")
    {
        if(adjacency_sids == nullptr)
        {
            adjacency_sids = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids>();
        }
        return adjacency_sids;
    }

    if(child_yang_name == "lan-adjacency-sids")
    {
        if(lan_adjacency_sids == nullptr)
        {
            lan_adjacency_sids = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids>();
        }
        return lan_adjacency_sids;
    }

    if(child_yang_name == "link-delay")
    {
        if(link_delay == nullptr)
        {
            link_delay = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay>();
        }
        return link_delay;
    }

    if(child_yang_name == "min-max-link-delay")
    {
        if(min_max_link_delay == nullptr)
        {
            min_max_link_delay = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay>();
        }
        return min_max_link_delay;
    }

    if(child_yang_name == "link-delay-variation")
    {
        if(link_delay_variation == nullptr)
        {
            link_delay_variation = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation>();
        }
        return link_delay_variation;
    }

    if(child_yang_name == "link-loss")
    {
        if(link_loss == nullptr)
        {
            link_loss = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss>();
        }
        return link_loss;
    }

    if(child_yang_name == "residual-bandwidth")
    {
        if(residual_bandwidth == nullptr)
        {
            residual_bandwidth = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth>();
        }
        return residual_bandwidth;
    }

    if(child_yang_name == "available-bandwidth")
    {
        if(available_bandwidth == nullptr)
        {
            available_bandwidth = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth>();
        }
        return available_bandwidth;
    }

    if(child_yang_name == "utilized-bandwidth")
    {
        if(utilized_bandwidth == nullptr)
        {
            utilized_bandwidth = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth>();
        }
        return utilized_bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(admin_group != nullptr)
    {
        _children["admin-group"] = admin_group;
    }

    if(ipv4_interface_address != nullptr)
    {
        _children["ipv4-interface-address"] = ipv4_interface_address;
    }

    if(ipv4_neighbor_address != nullptr)
    {
        _children["ipv4-neighbor-address"] = ipv4_neighbor_address;
    }

    if(max_link_bandwidth != nullptr)
    {
        _children["max-link-bandwidth"] = max_link_bandwidth;
    }

    if(max_reservable_link_bandwidth != nullptr)
    {
        _children["max-reservable-link-bandwidth"] = max_reservable_link_bandwidth;
    }

    if(unreserved_bandwidth != nullptr)
    {
        _children["unreserved-bandwidth"] = unreserved_bandwidth;
    }

    if(ipv6_interface_address != nullptr)
    {
        _children["ipv6-interface-address"] = ipv6_interface_address;
    }

    if(ipv6_neighbor_address != nullptr)
    {
        _children["ipv6-neighbor-address"] = ipv6_neighbor_address;
    }

    if(extended_admin_group != nullptr)
    {
        _children["extended-admin-group"] = extended_admin_group;
    }

    if(te_default_metric != nullptr)
    {
        _children["te-default-metric"] = te_default_metric;
    }

    if(link_attributes != nullptr)
    {
        _children["link-attributes"] = link_attributes;
    }

    if(link_protection_type != nullptr)
    {
        _children["link-protection-type"] = link_protection_type;
    }

    if(bandwidth_constraints != nullptr)
    {
        _children["bandwidth-constraints"] = bandwidth_constraints;
    }

    if(unconstrained_lsp != nullptr)
    {
        _children["unconstrained-lsp"] = unconstrained_lsp;
    }

    if(adjacency_sids != nullptr)
    {
        _children["adjacency-sids"] = adjacency_sids;
    }

    if(lan_adjacency_sids != nullptr)
    {
        _children["lan-adjacency-sids"] = lan_adjacency_sids;
    }

    if(link_delay != nullptr)
    {
        _children["link-delay"] = link_delay;
    }

    if(min_max_link_delay != nullptr)
    {
        _children["min-max-link-delay"] = min_max_link_delay;
    }

    if(link_delay_variation != nullptr)
    {
        _children["link-delay-variation"] = link_delay_variation;
    }

    if(link_loss != nullptr)
    {
        _children["link-loss"] = link_loss;
    }

    if(residual_bandwidth != nullptr)
    {
        _children["residual-bandwidth"] = residual_bandwidth;
    }

    if(available_bandwidth != nullptr)
    {
        _children["available-bandwidth"] = available_bandwidth;
    }

    if(utilized_bandwidth != nullptr)
    {
        _children["utilized-bandwidth"] = utilized_bandwidth;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "admin-group" || name == "ipv4-interface-address" || name == "ipv4-neighbor-address" || name == "max-link-bandwidth" || name == "max-reservable-link-bandwidth" || name == "unreserved-bandwidth" || name == "ipv6-interface-address" || name == "ipv6-neighbor-address" || name == "extended-admin-group" || name == "te-default-metric" || name == "link-attributes" || name == "link-protection-type" || name == "bandwidth-constraints" || name == "unconstrained-lsp" || name == "adjacency-sids" || name == "lan-adjacency-sids" || name == "link-delay" || name == "min-max-link-delay" || name == "link-delay-variation" || name == "link-loss" || name == "residual-bandwidth" || name == "available-bandwidth" || name == "utilized-bandwidth" || name == "type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State::State()
    :
    type{YType::identityref, "type"}
{

    yang_name = "state"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::AdminGroup()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State>())
{
    state->parent = this;

    yang_name = "admin-group"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::~AdminGroup()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admin-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State::State()
    :
    admin_group{YType::uint32, "admin-group"}
{

    yang_name = "state"; yang_parent_name = "admin-group"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : admin_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State::has_operation() const
{
    for (auto const & leaf : admin_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admin_group.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto admin_group_name_datas = admin_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), admin_group_name_datas.begin(), admin_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin-group")
    {
        admin_group.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin-group")
    {
        admin_group.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdminGroup::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin-group")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::Ipv4InterfaceAddress()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State>())
{
    state->parent = this;

    yang_name = "ipv4-interface-address"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::~Ipv4InterfaceAddress()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-interface-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State::State()
    :
    ipv4_interface_address{YType::str, "ipv4-interface-address"}
{

    yang_name = "state"; yang_parent_name = "ipv4-interface-address"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ipv4_interface_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State::has_operation() const
{
    for (auto const & leaf : ipv4_interface_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4_interface_address.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv4_interface_address_name_datas = ipv4_interface_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_interface_address_name_datas.begin(), ipv4_interface_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-interface-address")
    {
        ipv4_interface_address.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-interface-address")
    {
        ipv4_interface_address.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4InterfaceAddress::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-interface-address")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::Ipv4NeighborAddress()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State>())
{
    state->parent = this;

    yang_name = "ipv4-neighbor-address"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::~Ipv4NeighborAddress()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State::State()
    :
    ipv4_neighbor_address{YType::str, "ipv4-neighbor-address"}
{

    yang_name = "state"; yang_parent_name = "ipv4-neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ipv4_neighbor_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State::has_operation() const
{
    for (auto const & leaf : ipv4_neighbor_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4_neighbor_address.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv4_neighbor_address_name_datas = ipv4_neighbor_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_neighbor_address_name_datas.begin(), ipv4_neighbor_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-neighbor-address")
    {
        ipv4_neighbor_address.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-neighbor-address")
    {
        ipv4_neighbor_address.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv4NeighborAddress::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-neighbor-address")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::MaxLinkBandwidth()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State>())
{
    state->parent = this;

    yang_name = "max-link-bandwidth"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::~MaxLinkBandwidth()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-link-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State::State()
    :
    max_link_bandwidth{YType::str, "max-link-bandwidth"}
{

    yang_name = "state"; yang_parent_name = "max-link-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State::has_data() const
{
    if (is_presence_container) return true;
    return max_link_bandwidth.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_link_bandwidth.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_link_bandwidth.is_set || is_set(max_link_bandwidth.yfilter)) leaf_name_data.push_back(max_link_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-link-bandwidth")
    {
        max_link_bandwidth = value;
        max_link_bandwidth.value_namespace = name_space;
        max_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-link-bandwidth")
    {
        max_link_bandwidth.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxLinkBandwidth::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-link-bandwidth")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::MaxReservableLinkBandwidth()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State>())
{
    state->parent = this;

    yang_name = "max-reservable-link-bandwidth"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::~MaxReservableLinkBandwidth()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-reservable-link-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State::State()
    :
    max_reservable_link_bandwidth{YType::str, "max-reservable-link-bandwidth"}
{

    yang_name = "state"; yang_parent_name = "max-reservable-link-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State::has_data() const
{
    if (is_presence_container) return true;
    return max_reservable_link_bandwidth.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_reservable_link_bandwidth.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_reservable_link_bandwidth.is_set || is_set(max_reservable_link_bandwidth.yfilter)) leaf_name_data.push_back(max_reservable_link_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-reservable-link-bandwidth")
    {
        max_reservable_link_bandwidth = value;
        max_reservable_link_bandwidth.value_namespace = name_space;
        max_reservable_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-reservable-link-bandwidth")
    {
        max_reservable_link_bandwidth.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MaxReservableLinkBandwidth::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-reservable-link-bandwidth")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::UnreservedBandwidth()
    :
    setup_priority(this, {"priority"})
{

    yang_name = "unreserved-bandwidth"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::~UnreservedBandwidth()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<setup_priority.len(); index++)
    {
        if(setup_priority[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::has_operation() const
{
    for (std::size_t index=0; index<setup_priority.len(); index++)
    {
        if(setup_priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreserved-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "setup-priority")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority>();
        ent_->parent = this;
        setup_priority.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : setup_priority.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-priority")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::SetupPriority()
    :
    priority{YType::str, "priority"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State>())
{
    state->parent = this;

    yang_name = "setup-priority"; yang_parent_name = "unreserved-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::~SetupPriority()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setup-priority";
    ADD_KEY_TOKEN(priority, "priority");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "priority")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State::State()
    :
    priority{YType::uint8, "priority"},
    unreserved_bandwidth{YType::str, "unreserved-bandwidth"}
{

    yang_name = "state"; yang_parent_name = "setup-priority"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| unreserved_bandwidth.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(unreserved_bandwidth.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (unreserved_bandwidth.is_set || is_set(unreserved_bandwidth.yfilter)) leaf_name_data.push_back(unreserved_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth = value;
        unreserved_bandwidth.value_namespace = name_space;
        unreserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnreservedBandwidth::SetupPriority::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "unreserved-bandwidth")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::Ipv6InterfaceAddress()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State>())
{
    state->parent = this;

    yang_name = "ipv6-interface-address"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::~Ipv6InterfaceAddress()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-interface-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State::State()
    :
    ipv6_interface_address{YType::str, "ipv6-interface-address"}
{

    yang_name = "state"; yang_parent_name = "ipv6-interface-address"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ipv6_interface_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State::has_operation() const
{
    for (auto const & leaf : ipv6_interface_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv6_interface_address.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv6_interface_address_name_datas = ipv6_interface_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_interface_address_name_datas.begin(), ipv6_interface_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-interface-address")
    {
        ipv6_interface_address.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-interface-address")
    {
        ipv6_interface_address.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6InterfaceAddress::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-interface-address")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::Ipv6NeighborAddress()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State>())
{
    state->parent = this;

    yang_name = "ipv6-neighbor-address"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::~Ipv6NeighborAddress()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State::State()
    :
    ipv6_neighbor_address{YType::str, "ipv6-neighbor-address"}
{

    yang_name = "state"; yang_parent_name = "ipv6-neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ipv6_neighbor_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State::has_operation() const
{
    for (auto const & leaf : ipv6_neighbor_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv6_neighbor_address.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv6_neighbor_address_name_datas = ipv6_neighbor_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_neighbor_address_name_datas.begin(), ipv6_neighbor_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-neighbor-address")
    {
        ipv6_neighbor_address.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-neighbor-address")
    {
        ipv6_neighbor_address.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::Ipv6NeighborAddress::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-neighbor-address")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::ExtendedAdminGroup()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State>())
{
    state->parent = this;

    yang_name = "extended-admin-group"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::~ExtendedAdminGroup()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-admin-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State::State()
    :
    extended_admin_group{YType::uint32, "extended-admin-group"}
{

    yang_name = "state"; yang_parent_name = "extended-admin-group"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : extended_admin_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State::has_operation() const
{
    for (auto const & leaf : extended_admin_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(extended_admin_group.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto extended_admin_group_name_datas = extended_admin_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_admin_group_name_datas.begin(), extended_admin_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-admin-group")
    {
        extended_admin_group.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-admin-group")
    {
        extended_admin_group.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ExtendedAdminGroup::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-admin-group")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::TeDefaultMetric()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::State>())
{
    state->parent = this;

    yang_name = "te-default-metric"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::~TeDefaultMetric()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-default-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::State::State()
    :
    te_default_metric{YType::uint32, "te-default-metric"}
{

    yang_name = "state"; yang_parent_name = "te-default-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::State::has_data() const
{
    if (is_presence_container) return true;
    return te_default_metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_default_metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_default_metric.is_set || is_set(te_default_metric.yfilter)) leaf_name_data.push_back(te_default_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-default-metric")
    {
        te_default_metric = value;
        te_default_metric.value_namespace = name_space;
        te_default_metric.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-default-metric")
    {
        te_default_metric.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::TeDefaultMetric::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-default-metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::LinkAttributes()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::State>())
{
    state->parent = this;

    yang_name = "link-attributes"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::~LinkAttributes()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::State::State()
    :
    local_protection{YType::enumeration, "local-protection"}
{

    yang_name = "state"; yang_parent_name = "link-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : local_protection.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::State::has_operation() const
{
    for (auto const & leaf : local_protection.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_protection.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto local_protection_name_datas = local_protection.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_protection_name_datas.begin(), local_protection_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-protection")
    {
        local_protection.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-protection")
    {
        local_protection.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-protection")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::LinkProtectionType()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::State>())
{
    state->parent = this;

    yang_name = "link-protection-type"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::~LinkProtectionType()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-protection-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::State::State()
    :
    link_protection_type{YType::enumeration, "link-protection-type"}
{

    yang_name = "state"; yang_parent_name = "link-protection-type"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : link_protection_type.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::State::has_operation() const
{
    for (auto const & leaf : link_protection_type.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(link_protection_type.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto link_protection_type_name_datas = link_protection_type.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), link_protection_type_name_datas.begin(), link_protection_type_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-protection-type")
    {
        link_protection_type.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-protection-type")
    {
        link_protection_type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-protection-type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraints()
    :
    bandwidth_constraint(this, {"model_id"})
{

    yang_name = "bandwidth-constraints"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::~BandwidthConstraints()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bandwidth_constraint.len(); index++)
    {
        if(bandwidth_constraint[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_constraint.len(); index++)
    {
        if(bandwidth_constraint[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-constraints";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-constraint")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint>();
        ent_->parent = this;
        bandwidth_constraint.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bandwidth_constraint.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-constraint")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::BandwidthConstraint()
    :
    model_id{YType::str, "model-id"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::State>())
    , constraints(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints>())
{
    state->parent = this;
    constraints->parent = this;

    yang_name = "bandwidth-constraint"; yang_parent_name = "bandwidth-constraints"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::~BandwidthConstraint()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::has_data() const
{
    if (is_presence_container) return true;
    return model_id.is_set
	|| (state !=  nullptr && state->has_data())
	|| (constraints !=  nullptr && constraints->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(model_id.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (constraints !=  nullptr && constraints->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-constraint";
    ADD_KEY_TOKEN(model_id, "model-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (model_id.is_set || is_set(model_id.yfilter)) leaf_name_data.push_back(model_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::State>();
        }
        return state;
    }

    if(child_yang_name == "constraints")
    {
        if(constraints == nullptr)
        {
            constraints = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints>();
        }
        return constraints;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(constraints != nullptr)
    {
        _children["constraints"] = constraints;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "model-id")
    {
        model_id = value;
        model_id.value_namespace = name_space;
        model_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "model-id")
    {
        model_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "constraints" || name == "model-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::State::State()
    :
    model_id{YType::uint8, "model-id"}
{

    yang_name = "state"; yang_parent_name = "bandwidth-constraint"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::State::has_data() const
{
    if (is_presence_container) return true;
    return model_id.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(model_id.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (model_id.is_set || is_set(model_id.yfilter)) leaf_name_data.push_back(model_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "model-id")
    {
        model_id = value;
        model_id.value_namespace = name_space;
        model_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "model-id")
    {
        model_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "model-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraints()
    :
    constraint(this, {"constraint_id"})
{

    yang_name = "constraints"; yang_parent_name = "bandwidth-constraint"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::~Constraints()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint.len(); index++)
    {
        if(constraint[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::has_operation() const
{
    for (std::size_t index=0; index<constraint.len(); index++)
    {
        if(constraint[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraints";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint>();
        ent_->parent = this;
        constraint.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : constraint.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::Constraint()
    :
    constraint_id{YType::str, "constraint-id"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State>())
{
    state->parent = this;

    yang_name = "constraint"; yang_parent_name = "constraints"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::~Constraint()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::has_data() const
{
    if (is_presence_container) return true;
    return constraint_id.is_set
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(constraint_id.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint";
    ADD_KEY_TOKEN(constraint_id, "constraint-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_id.is_set || is_set(constraint_id.yfilter)) leaf_name_data.push_back(constraint_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-id")
    {
        constraint_id = value;
        constraint_id.value_namespace = name_space;
        constraint_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-id")
    {
        constraint_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "constraint-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State::State()
    :
    constraint_id{YType::uint32, "constraint-id"},
    bandwidth{YType::str, "bandwidth"}
{

    yang_name = "state"; yang_parent_name = "constraint"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State::has_data() const
{
    if (is_presence_container) return true;
    return constraint_id.is_set
	|| bandwidth.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(constraint_id.yfilter)
	|| ydk::is_set(bandwidth.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_id.is_set || is_set(constraint_id.yfilter)) leaf_name_data.push_back(constraint_id.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-id")
    {
        constraint_id = value;
        constraint_id.value_namespace = name_space;
        constraint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-id")
    {
        constraint_id.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::BandwidthConstraints::BandwidthConstraint::Constraints::Constraint::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-id" || name == "bandwidth")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp::UnconstrainedLsp()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp::State>())
{
    state->parent = this;

    yang_name = "unconstrained-lsp"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp::~UnconstrainedLsp()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unconstrained-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp::State::State()
    :
    type{YType::identityref, "type"},
    unconstrained_lsp{YType::uint16, "unconstrained-lsp"}
{

    yang_name = "state"; yang_parent_name = "unconstrained-lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| unconstrained_lsp.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(unconstrained_lsp.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (unconstrained_lsp.is_set || is_set(unconstrained_lsp.yfilter)) leaf_name_data.push_back(unconstrained_lsp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unconstrained-lsp")
    {
        unconstrained_lsp = value;
        unconstrained_lsp.value_namespace = name_space;
        unconstrained_lsp.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "unconstrained-lsp")
    {
        unconstrained_lsp.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UnconstrainedLsp::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "unconstrained-lsp")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySids()
    :
    adjacency_sid(this, {"value_"})
{

    yang_name = "adjacency-sids"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::~AdjacencySids()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjacency_sid.len(); index++)
    {
        if(adjacency_sid[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::has_operation() const
{
    for (std::size_t index=0; index<adjacency_sid.len(); index++)
    {
        if(adjacency_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-sid")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid>();
        ent_->parent = this;
        adjacency_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : adjacency_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-sid")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::AdjacencySid()
    :
    value_{YType::str, "value"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::State>())
{
    state->parent = this;

    yang_name = "adjacency-sid"; yang_parent_name = "adjacency-sids"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::~AdjacencySid()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "value")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::State::State()
    :
    value_{YType::uint32, "value"},
    flags{YType::enumeration, "flags"},
    weight{YType::uint8, "weight"}
{

    yang_name = "state"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return value_.is_set
	|| weight.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "flags" || name == "weight")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySids()
    :
    lan_adjacency_sid(this, {"value_"})
{

    yang_name = "lan-adjacency-sids"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::~LanAdjacencySids()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lan_adjacency_sid.len(); index++)
    {
        if(lan_adjacency_sid[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::has_operation() const
{
    for (std::size_t index=0; index<lan_adjacency_sid.len(); index++)
    {
        if(lan_adjacency_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lan-adjacency-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lan-adjacency-sid")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid>();
        ent_->parent = this;
        lan_adjacency_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lan_adjacency_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lan-adjacency-sid")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::LanAdjacencySid()
    :
    value_{YType::str, "value"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::State>())
{
    state->parent = this;

    yang_name = "lan-adjacency-sid"; yang_parent_name = "lan-adjacency-sids"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::~LanAdjacencySid()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lan-adjacency-sid";
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "value")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::State::State()
    :
    value_{YType::uint32, "value"},
    flags{YType::enumeration, "flags"},
    weight{YType::uint8, "weight"},
    neighbor_id{YType::str, "neighbor-id"}
{

    yang_name = "state"; yang_parent_name = "lan-adjacency-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return value_.is_set
	|| weight.is_set
	|| neighbor_id.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(neighbor_id.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "flags" || name == "weight" || name == "neighbor-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay::LinkDelay()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay::State>())
{
    state->parent = this;

    yang_name = "link-delay"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay::~LinkDelay()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay::State::State()
    :
    a_bit{YType::boolean, "a-bit"},
    delay{YType::uint32, "delay"}
{

    yang_name = "state"; yang_parent_name = "link-delay"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay::State::has_data() const
{
    if (is_presence_container) return true;
    return a_bit.is_set
	|| delay.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(a_bit.yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a_bit.is_set || is_set(a_bit.yfilter)) leaf_name_data.push_back(a_bit.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a-bit")
    {
        a_bit = value;
        a_bit.value_namespace = name_space;
        a_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a-bit")
    {
        a_bit.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelay::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "a-bit" || name == "delay")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay::MinMaxLinkDelay()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay::State>())
{
    state->parent = this;

    yang_name = "min-max-link-delay"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay::~MinMaxLinkDelay()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-max-link-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay::State::State()
    :
    a_bit{YType::boolean, "a-bit"},
    min_delay{YType::uint32, "min-delay"},
    max_delay{YType::uint32, "max-delay"}
{

    yang_name = "state"; yang_parent_name = "min-max-link-delay"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay::State::has_data() const
{
    if (is_presence_container) return true;
    return a_bit.is_set
	|| min_delay.is_set
	|| max_delay.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(a_bit.yfilter)
	|| ydk::is_set(min_delay.yfilter)
	|| ydk::is_set(max_delay.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a_bit.is_set || is_set(a_bit.yfilter)) leaf_name_data.push_back(a_bit.get_name_leafdata());
    if (min_delay.is_set || is_set(min_delay.yfilter)) leaf_name_data.push_back(min_delay.get_name_leafdata());
    if (max_delay.is_set || is_set(max_delay.yfilter)) leaf_name_data.push_back(max_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a-bit")
    {
        a_bit = value;
        a_bit.value_namespace = name_space;
        a_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-delay")
    {
        min_delay = value;
        min_delay.value_namespace = name_space;
        min_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-delay")
    {
        max_delay = value;
        max_delay.value_namespace = name_space;
        max_delay.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a-bit")
    {
        a_bit.yfilter = yfilter;
    }
    if(value_path == "min-delay")
    {
        min_delay.yfilter = yfilter;
    }
    if(value_path == "max-delay")
    {
        max_delay.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::MinMaxLinkDelay::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "a-bit" || name == "min-delay" || name == "max-delay")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation::LinkDelayVariation()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation::State>())
{
    state->parent = this;

    yang_name = "link-delay-variation"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation::~LinkDelayVariation()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-delay-variation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation::State::State()
    :
    delay{YType::uint32, "delay"}
{

    yang_name = "state"; yang_parent_name = "link-delay-variation"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation::State::has_data() const
{
    if (is_presence_container) return true;
    return delay.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkDelayVariation::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss::LinkLoss()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss::State>())
{
    state->parent = this;

    yang_name = "link-loss"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss::~LinkLoss()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-loss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss::State::State()
    :
    a_bit{YType::boolean, "a-bit"},
    link_loss{YType::uint32, "link-loss"}
{

    yang_name = "state"; yang_parent_name = "link-loss"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss::State::has_data() const
{
    if (is_presence_container) return true;
    return a_bit.is_set
	|| link_loss.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(a_bit.yfilter)
	|| ydk::is_set(link_loss.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a_bit.is_set || is_set(a_bit.yfilter)) leaf_name_data.push_back(a_bit.get_name_leafdata());
    if (link_loss.is_set || is_set(link_loss.yfilter)) leaf_name_data.push_back(link_loss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a-bit")
    {
        a_bit = value;
        a_bit.value_namespace = name_space;
        a_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-loss")
    {
        link_loss = value;
        link_loss.value_namespace = name_space;
        link_loss.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a-bit")
    {
        a_bit.yfilter = yfilter;
    }
    if(value_path == "link-loss")
    {
        link_loss.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkLoss::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "a-bit" || name == "link-loss")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth::ResidualBandwidth()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth::State>())
{
    state->parent = this;

    yang_name = "residual-bandwidth"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth::~ResidualBandwidth()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "residual-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth::State::State()
    :
    residual_bandwidth{YType::str, "residual-bandwidth"}
{

    yang_name = "state"; yang_parent_name = "residual-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth::State::has_data() const
{
    if (is_presence_container) return true;
    return residual_bandwidth.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(residual_bandwidth.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (residual_bandwidth.is_set || is_set(residual_bandwidth.yfilter)) leaf_name_data.push_back(residual_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "residual-bandwidth")
    {
        residual_bandwidth = value;
        residual_bandwidth.value_namespace = name_space;
        residual_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "residual-bandwidth")
    {
        residual_bandwidth.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::ResidualBandwidth::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "residual-bandwidth")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth::AvailableBandwidth()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth::State>())
{
    state->parent = this;

    yang_name = "available-bandwidth"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth::~AvailableBandwidth()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "available-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth::State::State()
    :
    type{YType::identityref, "type"},
    available_bandwidth{YType::str, "available-bandwidth"}
{

    yang_name = "state"; yang_parent_name = "available-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| available_bandwidth.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AvailableBandwidth::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "available-bandwidth")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth::UtilizedBandwidth()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth::State>())
{
    state->parent = this;

    yang_name = "utilized-bandwidth"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth::~UtilizedBandwidth()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utilized-bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth::State::State()
    :
    type{YType::identityref, "type"},
    utilized_bandwidth{YType::str, "utilized-bandwidth"}
{

    yang_name = "state"; yang_parent_name = "utilized-bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| utilized_bandwidth.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(utilized_bandwidth.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (utilized_bandwidth.is_set || is_set(utilized_bandwidth.yfilter)) leaf_name_data.push_back(utilized_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utilized-bandwidth")
    {
        utilized_bandwidth = value;
        utilized_bandwidth.value_namespace = name_space;
        utilized_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "utilized-bandwidth")
    {
        utilized_bandwidth.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::UtilizedBandwidth::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "utilized-bandwidth")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlvs()
    :
    undefined_subtlv(this, {"type"})
{

    yang_name = "undefined-subtlvs"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::~UndefinedSubtlvs()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<undefined_subtlv.len(); index++)
    {
        if(undefined_subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::has_operation() const
{
    for (std::size_t index=0; index<undefined_subtlv.len(); index++)
    {
        if(undefined_subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "undefined-subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "undefined-subtlv")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv>();
        ent_->parent = this;
        undefined_subtlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : undefined_subtlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "undefined-subtlv")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv::UndefinedSubtlv()
    :
    type{YType::str, "type"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv::State>())
{
    state->parent = this;

    yang_name = "undefined-subtlv"; yang_parent_name = "undefined-subtlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv::~UndefinedSubtlv()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "undefined-subtlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv::State::State()
    :
    type{YType::uint8, "type"},
    length{YType::uint8, "length"},
    value_{YType::str, "value"}
{

    yang_name = "state"; yang_parent_name = "undefined-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| length.is_set
	|| value_.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::UndefinedSubtlvs::UndefinedSubtlv::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "length" || name == "value")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::ExtendedIpv4Reachability()
    :
    prefixes(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes>())
{
    prefixes->parent = this;

    yang_name = "extended-ipv4-reachability"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::~ExtendedIpv4Reachability()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::has_data() const
{
    if (is_presence_container) return true;
    return (prefixes !=  nullptr && prefixes->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::has_operation() const
{
    return is_set(yfilter)
	|| (prefixes !=  nullptr && prefixes->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-ipv4-reachability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        if(prefixes == nullptr)
        {
            prefixes = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes>();
        }
        return prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefixes != nullptr)
    {
        _children["prefixes"] = prefixes;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefixes()
    :
    prefix(this, {"prefix"})
{

    yang_name = "prefixes"; yang_parent_name = "extended-ipv4-reachability"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::~Prefixes()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix.len(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<prefix.len(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix>();
        ent_->parent = this;
        prefix.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Prefix()
    :
    prefix{YType::str, "prefix"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::State>())
    , subtlvs(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs>())
    , undefined_subtlvs(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs>())
{
    state->parent = this;
    subtlvs->parent = this;
    undefined_subtlvs->parent = this;

    yang_name = "prefix"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::~Prefix()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| (state !=  nullptr && state->has_data())
	|| (subtlvs !=  nullptr && subtlvs->has_data())
	|| (undefined_subtlvs !=  nullptr && undefined_subtlvs->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (subtlvs !=  nullptr && subtlvs->has_operation())
	|| (undefined_subtlvs !=  nullptr && undefined_subtlvs->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::State>();
        }
        return state;
    }

    if(child_yang_name == "subtlvs")
    {
        if(subtlvs == nullptr)
        {
            subtlvs = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs>();
        }
        return subtlvs;
    }

    if(child_yang_name == "undefined-subtlvs")
    {
        if(undefined_subtlvs == nullptr)
        {
            undefined_subtlvs = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs>();
        }
        return undefined_subtlvs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(subtlvs != nullptr)
    {
        _children["subtlvs"] = subtlvs;
    }

    if(undefined_subtlvs != nullptr)
    {
        _children["undefined-subtlvs"] = undefined_subtlvs;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "subtlvs" || name == "undefined-subtlvs" || name == "prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::State::State()
    :
    up_down{YType::boolean, "up-down"},
    s_bit{YType::boolean, "s-bit"},
    prefix{YType::str, "prefix"},
    metric{YType::uint32, "metric"}
{

    yang_name = "state"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::State::has_data() const
{
    if (is_presence_container) return true;
    return up_down.is_set
	|| s_bit.is_set
	|| prefix.is_set
	|| metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up_down.yfilter)
	|| ydk::is_set(s_bit.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up_down.is_set || is_set(up_down.yfilter)) leaf_name_data.push_back(up_down.get_name_leafdata());
    if (s_bit.is_set || is_set(s_bit.yfilter)) leaf_name_data.push_back(s_bit.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up-down")
    {
        up_down = value;
        up_down.value_namespace = name_space;
        up_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s-bit")
    {
        s_bit = value;
        s_bit.value_namespace = name_space;
        s_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up-down")
    {
        up_down.yfilter = yfilter;
    }
    if(value_path == "s-bit")
    {
        s_bit.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-down" || name == "s-bit" || name == "prefix" || name == "metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlvs()
    :
    subtlv(this, {"type"})
{

    yang_name = "subtlvs"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::~Subtlvs()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subtlv.len(); index++)
    {
        if(subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::has_operation() const
{
    for (std::size_t index=0; index<subtlv.len(); index++)
    {
        if(subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subtlv")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv>();
        ent_->parent = this;
        subtlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : subtlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subtlv")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Subtlv()
    :
    type{YType::identityref, "type"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::State>())
    , tag(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag>())
    , tag64(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64>())
    , flags(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags>())
    , ipv4_source_router_id(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId>())
    , ipv6_source_router_id(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId>())
    , prefix_sids(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids>())
{
    state->parent = this;
    tag->parent = this;
    tag64->parent = this;
    flags->parent = this;
    ipv4_source_router_id->parent = this;
    ipv6_source_router_id->parent = this;
    prefix_sids->parent = this;

    yang_name = "subtlv"; yang_parent_name = "subtlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::~Subtlv()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (state !=  nullptr && state->has_data())
	|| (tag !=  nullptr && tag->has_data())
	|| (tag64 !=  nullptr && tag64->has_data())
	|| (flags !=  nullptr && flags->has_data())
	|| (ipv4_source_router_id !=  nullptr && ipv4_source_router_id->has_data())
	|| (ipv6_source_router_id !=  nullptr && ipv6_source_router_id->has_data())
	|| (prefix_sids !=  nullptr && prefix_sids->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (tag !=  nullptr && tag->has_operation())
	|| (tag64 !=  nullptr && tag64->has_operation())
	|| (flags !=  nullptr && flags->has_operation())
	|| (ipv4_source_router_id !=  nullptr && ipv4_source_router_id->has_operation())
	|| (ipv6_source_router_id !=  nullptr && ipv6_source_router_id->has_operation())
	|| (prefix_sids !=  nullptr && prefix_sids->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::State>();
        }
        return state;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag>();
        }
        return tag;
    }

    if(child_yang_name == "tag64")
    {
        if(tag64 == nullptr)
        {
            tag64 = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64>();
        }
        return tag64;
    }

    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags>();
        }
        return flags;
    }

    if(child_yang_name == "ipv4-source-router-id")
    {
        if(ipv4_source_router_id == nullptr)
        {
            ipv4_source_router_id = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId>();
        }
        return ipv4_source_router_id;
    }

    if(child_yang_name == "ipv6-source-router-id")
    {
        if(ipv6_source_router_id == nullptr)
        {
            ipv6_source_router_id = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId>();
        }
        return ipv6_source_router_id;
    }

    if(child_yang_name == "prefix-sids")
    {
        if(prefix_sids == nullptr)
        {
            prefix_sids = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids>();
        }
        return prefix_sids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(tag != nullptr)
    {
        _children["tag"] = tag;
    }

    if(tag64 != nullptr)
    {
        _children["tag64"] = tag64;
    }

    if(flags != nullptr)
    {
        _children["flags"] = flags;
    }

    if(ipv4_source_router_id != nullptr)
    {
        _children["ipv4-source-router-id"] = ipv4_source_router_id;
    }

    if(ipv6_source_router_id != nullptr)
    {
        _children["ipv6-source-router-id"] = ipv6_source_router_id;
    }

    if(prefix_sids != nullptr)
    {
        _children["prefix-sids"] = prefix_sids;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "tag" || name == "tag64" || name == "flags" || name == "ipv4-source-router-id" || name == "ipv6-source-router-id" || name == "prefix-sids" || name == "type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::State::State()
    :
    type{YType::identityref, "type"}
{

    yang_name = "state"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::Tag()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::State>())
{
    state->parent = this;

    yang_name = "tag"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::~Tag()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::State::State()
    :
    tag32{YType::uint32, "tag32"}
{

    yang_name = "state"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : tag32.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::State::has_operation() const
{
    for (auto const & leaf : tag32.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tag32.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto tag32_name_datas = tag32.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag32_name_datas.begin(), tag32_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag32")
    {
        tag32.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag32")
    {
        tag32.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag32")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::Tag64()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::State>())
{
    state->parent = this;

    yang_name = "tag64"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::~Tag64()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag64";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::State::State()
    :
    tag64{YType::uint64, "tag64"}
{

    yang_name = "state"; yang_parent_name = "tag64"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : tag64.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::State::has_operation() const
{
    for (auto const & leaf : tag64.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tag64.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto tag64_name_datas = tag64.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag64_name_datas.begin(), tag64_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag64")
    {
        tag64.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag64")
    {
        tag64.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Tag64::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag64")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::Flags()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State>())
{
    state->parent = this;

    yang_name = "flags"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::~Flags()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State::State()
    :
    type{YType::identityref, "type"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "flags"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return type.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "flags")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::Ipv4SourceRouterId()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::State>())
{
    state->parent = this;

    yang_name = "ipv4-source-router-id"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::~Ipv4SourceRouterId()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-source-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::State::State()
    :
    type{YType::identityref, "type"},
    ipv4_source_router_id{YType::str, "ipv4-source-router-id"}
{

    yang_name = "state"; yang_parent_name = "ipv4-source-router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4_source_router_id.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4_source_router_id.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4_source_router_id.is_set || is_set(ipv4_source_router_id.yfilter)) leaf_name_data.push_back(ipv4_source_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-source-router-id")
    {
        ipv4_source_router_id = value;
        ipv4_source_router_id.value_namespace = name_space;
        ipv4_source_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4-source-router-id")
    {
        ipv4_source_router_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv4SourceRouterId::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "ipv4-source-router-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::Ipv6SourceRouterId()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::State>())
{
    state->parent = this;

    yang_name = "ipv6-source-router-id"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::~Ipv6SourceRouterId()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-source-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::State::State()
    :
    type{YType::identityref, "type"},
    ipv6_source_router_id{YType::str, "ipv6-source-router-id"}
{

    yang_name = "state"; yang_parent_name = "ipv6-source-router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv6_source_router_id.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv6_source_router_id.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv6_source_router_id.is_set || is_set(ipv6_source_router_id.yfilter)) leaf_name_data.push_back(ipv6_source_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-source-router-id")
    {
        ipv6_source_router_id = value;
        ipv6_source_router_id.value_namespace = name_space;
        ipv6_source_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv6-source-router-id")
    {
        ipv6_source_router_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Ipv6SourceRouterId::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "ipv6-source-router-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSids()
    :
    prefix_sid(this, {"value_"})
{

    yang_name = "prefix-sids"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::~PrefixSids()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_sid.len(); index++)
    {
        if(prefix_sid[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::has_operation() const
{
    for (std::size_t index=0; index<prefix_sid.len(); index++)
    {
        if(prefix_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid>();
        ent_->parent = this;
        prefix_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::PrefixSid()
    :
    value_{YType::str, "value"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State>())
{
    state->parent = this;

    yang_name = "prefix-sid"; yang_parent_name = "prefix-sids"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::~PrefixSid()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid";
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "value")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::State()
    :
    value_{YType::uint32, "value"},
    flags{YType::enumeration, "flags"},
    algorithm{YType::uint8, "algorithm"}
{

    yang_name = "state"; yang_parent_name = "prefix-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return value_.is_set
	|| algorithm.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(algorithm.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "flags" || name == "algorithm")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlvs()
    :
    undefined_subtlv(this, {"type"})
{

    yang_name = "undefined-subtlvs"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::~UndefinedSubtlvs()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<undefined_subtlv.len(); index++)
    {
        if(undefined_subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::has_operation() const
{
    for (std::size_t index=0; index<undefined_subtlv.len(); index++)
    {
        if(undefined_subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "undefined-subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "undefined-subtlv")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv>();
        ent_->parent = this;
        undefined_subtlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : undefined_subtlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "undefined-subtlv")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::UndefinedSubtlv()
    :
    type{YType::str, "type"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::State>())
{
    state->parent = this;

    yang_name = "undefined-subtlv"; yang_parent_name = "undefined-subtlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::~UndefinedSubtlv()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "undefined-subtlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::State::State()
    :
    type{YType::uint8, "type"},
    length{YType::uint8, "length"},
    value_{YType::str, "value"}
{

    yang_name = "state"; yang_parent_name = "undefined-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| length.is_set
	|| value_.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::UndefinedSubtlvs::UndefinedSubtlv::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "length" || name == "value")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Ipv6Reachability()
    :
    prefixes(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes>())
{
    prefixes->parent = this;

    yang_name = "ipv6-reachability"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::~Ipv6Reachability()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::has_data() const
{
    if (is_presence_container) return true;
    return (prefixes !=  nullptr && prefixes->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::has_operation() const
{
    return is_set(yfilter)
	|| (prefixes !=  nullptr && prefixes->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-reachability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        if(prefixes == nullptr)
        {
            prefixes = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes>();
        }
        return prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefixes != nullptr)
    {
        _children["prefixes"] = prefixes;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes()
    :
    prefixes(this, {"prefix"})
{

    yang_name = "prefixes"; yang_parent_name = "ipv6-reachability"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::~Prefixes()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<prefixes.len(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_>();
        ent_->parent = this;
        prefixes.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefixes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Prefixes_()
    :
    prefix{YType::str, "prefix"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::State>())
    , subtlvs(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs>())
    , undefined_subtlvs(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs>())
{
    state->parent = this;
    subtlvs->parent = this;
    undefined_subtlvs->parent = this;

    yang_name = "prefixes"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::~Prefixes_()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| (state !=  nullptr && state->has_data())
	|| (subtlvs !=  nullptr && subtlvs->has_data())
	|| (undefined_subtlvs !=  nullptr && undefined_subtlvs->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (subtlvs !=  nullptr && subtlvs->has_operation())
	|| (undefined_subtlvs !=  nullptr && undefined_subtlvs->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::State>();
        }
        return state;
    }

    if(child_yang_name == "subtlvs")
    {
        if(subtlvs == nullptr)
        {
            subtlvs = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs>();
        }
        return subtlvs;
    }

    if(child_yang_name == "undefined-subtlvs")
    {
        if(undefined_subtlvs == nullptr)
        {
            undefined_subtlvs = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs>();
        }
        return undefined_subtlvs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(subtlvs != nullptr)
    {
        _children["subtlvs"] = subtlvs;
    }

    if(undefined_subtlvs != nullptr)
    {
        _children["undefined-subtlvs"] = undefined_subtlvs;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "subtlvs" || name == "undefined-subtlvs" || name == "prefix")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::State::State()
    :
    up_down{YType::boolean, "up-down"},
    s_bit{YType::boolean, "s-bit"},
    prefix{YType::str, "prefix"},
    metric{YType::uint32, "metric"}
{

    yang_name = "state"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::State::has_data() const
{
    if (is_presence_container) return true;
    return up_down.is_set
	|| s_bit.is_set
	|| prefix.is_set
	|| metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(up_down.yfilter)
	|| ydk::is_set(s_bit.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (up_down.is_set || is_set(up_down.yfilter)) leaf_name_data.push_back(up_down.get_name_leafdata());
    if (s_bit.is_set || is_set(s_bit.yfilter)) leaf_name_data.push_back(s_bit.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "up-down")
    {
        up_down = value;
        up_down.value_namespace = name_space;
        up_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s-bit")
    {
        s_bit = value;
        s_bit.value_namespace = name_space;
        s_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "up-down")
    {
        up_down.yfilter = yfilter;
    }
    if(value_path == "s-bit")
    {
        s_bit.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-down" || name == "s-bit" || name == "prefix" || name == "metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlvs()
    :
    subtlv(this, {"type"})
{

    yang_name = "subtlvs"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::~Subtlvs()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subtlv.len(); index++)
    {
        if(subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::has_operation() const
{
    for (std::size_t index=0; index<subtlv.len(); index++)
    {
        if(subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subtlv")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv>();
        ent_->parent = this;
        subtlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : subtlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subtlv")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Subtlv()
    :
    type{YType::identityref, "type"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::State>())
    , tag(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag>())
    , tag64(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64>())
    , flags(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags>())
    , ipv4_source_router_id(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId>())
    , ipv6_source_router_id(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId>())
    , prefix_sids(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids>())
{
    state->parent = this;
    tag->parent = this;
    tag64->parent = this;
    flags->parent = this;
    ipv4_source_router_id->parent = this;
    ipv6_source_router_id->parent = this;
    prefix_sids->parent = this;

    yang_name = "subtlv"; yang_parent_name = "subtlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::~Subtlv()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (state !=  nullptr && state->has_data())
	|| (tag !=  nullptr && tag->has_data())
	|| (tag64 !=  nullptr && tag64->has_data())
	|| (flags !=  nullptr && flags->has_data())
	|| (ipv4_source_router_id !=  nullptr && ipv4_source_router_id->has_data())
	|| (ipv6_source_router_id !=  nullptr && ipv6_source_router_id->has_data())
	|| (prefix_sids !=  nullptr && prefix_sids->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (tag !=  nullptr && tag->has_operation())
	|| (tag64 !=  nullptr && tag64->has_operation())
	|| (flags !=  nullptr && flags->has_operation())
	|| (ipv4_source_router_id !=  nullptr && ipv4_source_router_id->has_operation())
	|| (ipv6_source_router_id !=  nullptr && ipv6_source_router_id->has_operation())
	|| (prefix_sids !=  nullptr && prefix_sids->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::State>();
        }
        return state;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag>();
        }
        return tag;
    }

    if(child_yang_name == "tag64")
    {
        if(tag64 == nullptr)
        {
            tag64 = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64>();
        }
        return tag64;
    }

    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags>();
        }
        return flags;
    }

    if(child_yang_name == "ipv4-source-router-id")
    {
        if(ipv4_source_router_id == nullptr)
        {
            ipv4_source_router_id = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId>();
        }
        return ipv4_source_router_id;
    }

    if(child_yang_name == "ipv6-source-router-id")
    {
        if(ipv6_source_router_id == nullptr)
        {
            ipv6_source_router_id = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId>();
        }
        return ipv6_source_router_id;
    }

    if(child_yang_name == "prefix-sids")
    {
        if(prefix_sids == nullptr)
        {
            prefix_sids = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids>();
        }
        return prefix_sids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(tag != nullptr)
    {
        _children["tag"] = tag;
    }

    if(tag64 != nullptr)
    {
        _children["tag64"] = tag64;
    }

    if(flags != nullptr)
    {
        _children["flags"] = flags;
    }

    if(ipv4_source_router_id != nullptr)
    {
        _children["ipv4-source-router-id"] = ipv4_source_router_id;
    }

    if(ipv6_source_router_id != nullptr)
    {
        _children["ipv6-source-router-id"] = ipv6_source_router_id;
    }

    if(prefix_sids != nullptr)
    {
        _children["prefix-sids"] = prefix_sids;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "tag" || name == "tag64" || name == "flags" || name == "ipv4-source-router-id" || name == "ipv6-source-router-id" || name == "prefix-sids" || name == "type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::State::State()
    :
    type{YType::identityref, "type"}
{

    yang_name = "state"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag::Tag()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag::State>())
{
    state->parent = this;

    yang_name = "tag"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag::~Tag()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag::State::State()
    :
    tag32{YType::uint32, "tag32"}
{

    yang_name = "state"; yang_parent_name = "tag"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : tag32.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag::State::has_operation() const
{
    for (auto const & leaf : tag32.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tag32.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto tag32_name_datas = tag32.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag32_name_datas.begin(), tag32_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag32")
    {
        tag32.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag32")
    {
        tag32.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag32")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64::Tag64()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64::State>())
{
    state->parent = this;

    yang_name = "tag64"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64::~Tag64()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag64";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64::State::State()
    :
    tag64{YType::uint64, "tag64"}
{

    yang_name = "state"; yang_parent_name = "tag64"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : tag64.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64::State::has_operation() const
{
    for (auto const & leaf : tag64.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tag64.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto tag64_name_datas = tag64.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), tag64_name_datas.begin(), tag64_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag64")
    {
        tag64.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag64")
    {
        tag64.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Tag64::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag64")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::Flags()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::State>())
{
    state->parent = this;

    yang_name = "flags"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::~Flags()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::State::State()
    :
    type{YType::identityref, "type"},
    flags{YType::enumeration, "flags"}
{

    yang_name = "state"; yang_parent_name = "flags"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return type.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "flags")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId::Ipv4SourceRouterId()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId::State>())
{
    state->parent = this;

    yang_name = "ipv4-source-router-id"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId::~Ipv4SourceRouterId()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-source-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId::State::State()
    :
    type{YType::identityref, "type"},
    ipv4_source_router_id{YType::str, "ipv4-source-router-id"}
{

    yang_name = "state"; yang_parent_name = "ipv4-source-router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv4_source_router_id.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv4_source_router_id.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv4_source_router_id.is_set || is_set(ipv4_source_router_id.yfilter)) leaf_name_data.push_back(ipv4_source_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-source-router-id")
    {
        ipv4_source_router_id = value;
        ipv4_source_router_id.value_namespace = name_space;
        ipv4_source_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv4-source-router-id")
    {
        ipv4_source_router_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv4SourceRouterId::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "ipv4-source-router-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId::Ipv6SourceRouterId()
    :
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId::State>())
{
    state->parent = this;

    yang_name = "ipv6-source-router-id"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId::~Ipv6SourceRouterId()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId::has_data() const
{
    if (is_presence_container) return true;
    return (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId::has_operation() const
{
    return is_set(yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-source-router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId::State::State()
    :
    type{YType::identityref, "type"},
    ipv6_source_router_id{YType::str, "ipv6-source-router-id"}
{

    yang_name = "state"; yang_parent_name = "ipv6-source-router-id"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| ipv6_source_router_id.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(ipv6_source_router_id.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (ipv6_source_router_id.is_set || is_set(ipv6_source_router_id.yfilter)) leaf_name_data.push_back(ipv6_source_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-source-router-id")
    {
        ipv6_source_router_id = value;
        ipv6_source_router_id.value_namespace = name_space;
        ipv6_source_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "ipv6-source-router-id")
    {
        ipv6_source_router_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Ipv6SourceRouterId::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "ipv6-source-router-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSids()
    :
    prefix_sid(this, {"value_"})
{

    yang_name = "prefix-sids"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::~PrefixSids()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_sid.len(); index++)
    {
        if(prefix_sid[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::has_operation() const
{
    for (std::size_t index=0; index<prefix_sid.len(); index++)
    {
        if(prefix_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid>();
        ent_->parent = this;
        prefix_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::PrefixSid()
    :
    value_{YType::str, "value"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::State>())
{
    state->parent = this;

    yang_name = "prefix-sid"; yang_parent_name = "prefix-sids"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::~PrefixSid()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid";
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "value")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::State()
    :
    value_{YType::uint32, "value"},
    flags{YType::enumeration, "flags"},
    algorithm{YType::uint8, "algorithm"}
{

    yang_name = "state"; yang_parent_name = "prefix-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : flags.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return value_.is_set
	|| algorithm.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::has_operation() const
{
    for (auto const & leaf : flags.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(algorithm.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    auto flags_name_datas = flags.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flags_name_datas.begin(), flags_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags.append(value);
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "flags" || name == "algorithm")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlvs()
    :
    undefined_subtlv(this, {"type"})
{

    yang_name = "undefined-subtlvs"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::~UndefinedSubtlvs()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<undefined_subtlv.len(); index++)
    {
        if(undefined_subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::has_operation() const
{
    for (std::size_t index=0; index<undefined_subtlv.len(); index++)
    {
        if(undefined_subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "undefined-subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "undefined-subtlv")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv>();
        ent_->parent = this;
        undefined_subtlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : undefined_subtlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "undefined-subtlv")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv::UndefinedSubtlv()
    :
    type{YType::str, "type"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv::State>())
{
    state->parent = this;

    yang_name = "undefined-subtlv"; yang_parent_name = "undefined-subtlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv::~UndefinedSubtlv()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "undefined-subtlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv::State::State()
    :
    type{YType::uint8, "type"},
    length{YType::uint8, "length"},
    value_{YType::str, "value"}
{

    yang_name = "state"; yang_parent_name = "undefined-subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| length.is_set
	|| value_.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::UndefinedSubtlvs::UndefinedSubtlv::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "length" || name == "value")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::MultiTopology()
    :
    topologies(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies>())
{
    topologies->parent = this;

    yang_name = "multi-topology"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::~MultiTopology()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::has_data() const
{
    if (is_presence_container) return true;
    return (topologies !=  nullptr && topologies->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::has_operation() const
{
    return is_set(yfilter)
	|| (topologies !=  nullptr && topologies->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topologies")
    {
        if(topologies == nullptr)
        {
            topologies = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies>();
        }
        return topologies;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(topologies != nullptr)
    {
        _children["topologies"] = topologies;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topologies")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topologies()
    :
    topology(this, {"mt_id"})
{

    yang_name = "topologies"; yang_parent_name = "multi-topology"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::~Topologies()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<topology.len(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::has_operation() const
{
    for (std::size_t index=0; index<topology.len(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology>();
        ent_->parent = this;
        topology.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : topology.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::Topology()
    :
    mt_id{YType::str, "mt-id"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::State>())
{
    state->parent = this;

    yang_name = "topology"; yang_parent_name = "topologies"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::~Topology()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| (state !=  nullptr && state->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| (state !=  nullptr && state->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    ADD_KEY_TOKEN(mt_id, "mt-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::State>();
        }
        return state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "mt-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::State::State()
    :
    mt_id{YType::uint16, "mt-id"},
    attributes{YType::enumeration, "attributes"}
{

    yang_name = "state"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::State::has_data() const
{
    if (is_presence_container) return true;
    return mt_id.is_set
	|| attributes.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mt_id.yfilter)
	|| ydk::is_set(attributes.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mt_id.is_set || is_set(mt_id.yfilter)) leaf_name_data.push_back(mt_id.get_name_leafdata());
    if (attributes.is_set || is_set(attributes.yfilter)) leaf_name_data.push_back(attributes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mt-id")
    {
        mt_id = value;
        mt_id.value_namespace = name_space;
        mt_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attributes")
    {
        attributes = value;
        attributes.value_namespace = name_space;
        attributes.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mt-id")
    {
        mt_id.yfilter = yfilter;
    }
    if(value_path == "attributes")
    {
        attributes.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mt-id" || name == "attributes")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::IsisNeighborAttribute()
    :
    neighbors(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors>())
{
    neighbors->parent = this;

    yang_name = "isis-neighbor-attribute"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::~IsisNeighborAttribute()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::has_data() const
{
    if (is_presence_container) return true;
    return (neighbors !=  nullptr && neighbors->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::has_operation() const
{
    return is_set(yfilter)
	|| (neighbors !=  nullptr && neighbors->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-neighbor-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors>();
        }
        return neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(neighbors != nullptr)
    {
        _children["neighbors"] = neighbors;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbors()
    :
    neighbor(this, {"system_id"})
{

    yang_name = "neighbors"; yang_parent_name = "isis-neighbor-attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::~Neighbors()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Neighbor()
    :
    system_id{YType::str, "system-id"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::State>())
    , subtlvs(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs>())
    , undefined_subtlvs(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::UndefinedSubtlvs>())
{
    state->parent = this;
    subtlvs->parent = this;
    undefined_subtlvs->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::~Neighbor()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| (state !=  nullptr && state->has_data())
	|| (subtlvs !=  nullptr && subtlvs->has_data())
	|| (undefined_subtlvs !=  nullptr && undefined_subtlvs->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (subtlvs !=  nullptr && subtlvs->has_operation())
	|| (undefined_subtlvs !=  nullptr && undefined_subtlvs->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(system_id, "system-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::State>();
        }
        return state;
    }

    if(child_yang_name == "subtlvs")
    {
        if(subtlvs == nullptr)
        {
            subtlvs = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs>();
        }
        return subtlvs;
    }

    if(child_yang_name == "undefined-subtlvs")
    {
        if(undefined_subtlvs == nullptr)
        {
            undefined_subtlvs = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::UndefinedSubtlvs>();
        }
        return undefined_subtlvs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(subtlvs != nullptr)
    {
        _children["subtlvs"] = subtlvs;
    }

    if(undefined_subtlvs != nullptr)
    {
        _children["undefined-subtlvs"] = undefined_subtlvs;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "subtlvs" || name == "undefined-subtlvs" || name == "system-id")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::State::State()
    :
    system_id{YType::str, "system-id"},
    metric{YType::uint32, "metric"}
{

    yang_name = "state"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::State::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| metric.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "metric")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlvs()
    :
    subtlv(this, {"type"})
{

    yang_name = "subtlvs"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::~Subtlvs()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subtlv.len(); index++)
    {
        if(subtlv[index]->has_data())
            return true;
    }
    return false;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::has_operation() const
{
    for (std::size_t index=0; index<subtlv.len(); index++)
    {
        if(subtlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlvs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subtlv")
    {
        auto ent_ = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv>();
        ent_->parent = this;
        subtlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : subtlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subtlv")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::Subtlv()
    :
    type{YType::identityref, "type"}
        ,
    state(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::State>())
    , admin_group(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::AdminGroup>())
    , ipv4_interface_address(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::Ipv4InterfaceAddress>())
    , ipv4_neighbor_address(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::Ipv4NeighborAddress>())
    , max_link_bandwidth(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::MaxLinkBandwidth>())
    , max_reservable_link_bandwidth(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::MaxReservableLinkBandwidth>())
    , unreserved_bandwidth(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::UnreservedBandwidth>())
    , ipv6_interface_address(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::Ipv6InterfaceAddress>())
    , ipv6_neighbor_address(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::Ipv6NeighborAddress>())
    , extended_admin_group(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::ExtendedAdminGroup>())
    , te_default_metric(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::TeDefaultMetric>())
    , link_attributes(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkAttributes>())
    , link_protection_type(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkProtectionType>())
    , bandwidth_constraints(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::BandwidthConstraints>())
    , unconstrained_lsp(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::UnconstrainedLsp>())
    , adjacency_sids(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::AdjacencySids>())
    , lan_adjacency_sids(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LanAdjacencySids>())
    , link_delay(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkDelay>())
    , min_max_link_delay(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::MinMaxLinkDelay>())
    , link_delay_variation(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkDelayVariation>())
    , link_loss(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkLoss>())
    , residual_bandwidth(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::ResidualBandwidth>())
    , available_bandwidth(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::AvailableBandwidth>())
    , utilized_bandwidth(std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::UtilizedBandwidth>())
{
    state->parent = this;
    admin_group->parent = this;
    ipv4_interface_address->parent = this;
    ipv4_neighbor_address->parent = this;
    max_link_bandwidth->parent = this;
    max_reservable_link_bandwidth->parent = this;
    unreserved_bandwidth->parent = this;
    ipv6_interface_address->parent = this;
    ipv6_neighbor_address->parent = this;
    extended_admin_group->parent = this;
    te_default_metric->parent = this;
    link_attributes->parent = this;
    link_protection_type->parent = this;
    bandwidth_constraints->parent = this;
    unconstrained_lsp->parent = this;
    adjacency_sids->parent = this;
    lan_adjacency_sids->parent = this;
    link_delay->parent = this;
    min_max_link_delay->parent = this;
    link_delay_variation->parent = this;
    link_loss->parent = this;
    residual_bandwidth->parent = this;
    available_bandwidth->parent = this;
    utilized_bandwidth->parent = this;

    yang_name = "subtlv"; yang_parent_name = "subtlvs"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::~Subtlv()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (state !=  nullptr && state->has_data())
	|| (admin_group !=  nullptr && admin_group->has_data())
	|| (ipv4_interface_address !=  nullptr && ipv4_interface_address->has_data())
	|| (ipv4_neighbor_address !=  nullptr && ipv4_neighbor_address->has_data())
	|| (max_link_bandwidth !=  nullptr && max_link_bandwidth->has_data())
	|| (max_reservable_link_bandwidth !=  nullptr && max_reservable_link_bandwidth->has_data())
	|| (unreserved_bandwidth !=  nullptr && unreserved_bandwidth->has_data())
	|| (ipv6_interface_address !=  nullptr && ipv6_interface_address->has_data())
	|| (ipv6_neighbor_address !=  nullptr && ipv6_neighbor_address->has_data())
	|| (extended_admin_group !=  nullptr && extended_admin_group->has_data())
	|| (te_default_metric !=  nullptr && te_default_metric->has_data())
	|| (link_attributes !=  nullptr && link_attributes->has_data())
	|| (link_protection_type !=  nullptr && link_protection_type->has_data())
	|| (bandwidth_constraints !=  nullptr && bandwidth_constraints->has_data())
	|| (unconstrained_lsp !=  nullptr && unconstrained_lsp->has_data())
	|| (adjacency_sids !=  nullptr && adjacency_sids->has_data())
	|| (lan_adjacency_sids !=  nullptr && lan_adjacency_sids->has_data())
	|| (link_delay !=  nullptr && link_delay->has_data())
	|| (min_max_link_delay !=  nullptr && min_max_link_delay->has_data())
	|| (link_delay_variation !=  nullptr && link_delay_variation->has_data())
	|| (link_loss !=  nullptr && link_loss->has_data())
	|| (residual_bandwidth !=  nullptr && residual_bandwidth->has_data())
	|| (available_bandwidth !=  nullptr && available_bandwidth->has_data())
	|| (utilized_bandwidth !=  nullptr && utilized_bandwidth->has_data());
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (state !=  nullptr && state->has_operation())
	|| (admin_group !=  nullptr && admin_group->has_operation())
	|| (ipv4_interface_address !=  nullptr && ipv4_interface_address->has_operation())
	|| (ipv4_neighbor_address !=  nullptr && ipv4_neighbor_address->has_operation())
	|| (max_link_bandwidth !=  nullptr && max_link_bandwidth->has_operation())
	|| (max_reservable_link_bandwidth !=  nullptr && max_reservable_link_bandwidth->has_operation())
	|| (unreserved_bandwidth !=  nullptr && unreserved_bandwidth->has_operation())
	|| (ipv6_interface_address !=  nullptr && ipv6_interface_address->has_operation())
	|| (ipv6_neighbor_address !=  nullptr && ipv6_neighbor_address->has_operation())
	|| (extended_admin_group !=  nullptr && extended_admin_group->has_operation())
	|| (te_default_metric !=  nullptr && te_default_metric->has_operation())
	|| (link_attributes !=  nullptr && link_attributes->has_operation())
	|| (link_protection_type !=  nullptr && link_protection_type->has_operation())
	|| (bandwidth_constraints !=  nullptr && bandwidth_constraints->has_operation())
	|| (unconstrained_lsp !=  nullptr && unconstrained_lsp->has_operation())
	|| (adjacency_sids !=  nullptr && adjacency_sids->has_operation())
	|| (lan_adjacency_sids !=  nullptr && lan_adjacency_sids->has_operation())
	|| (link_delay !=  nullptr && link_delay->has_operation())
	|| (min_max_link_delay !=  nullptr && min_max_link_delay->has_operation())
	|| (link_delay_variation !=  nullptr && link_delay_variation->has_operation())
	|| (link_loss !=  nullptr && link_loss->has_operation())
	|| (residual_bandwidth !=  nullptr && residual_bandwidth->has_operation())
	|| (available_bandwidth !=  nullptr && available_bandwidth->has_operation())
	|| (utilized_bandwidth !=  nullptr && utilized_bandwidth->has_operation());
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subtlv";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state")
    {
        if(state == nullptr)
        {
            state = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::State>();
        }
        return state;
    }

    if(child_yang_name == "admin-group")
    {
        if(admin_group == nullptr)
        {
            admin_group = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::AdminGroup>();
        }
        return admin_group;
    }

    if(child_yang_name == "ipv4-interface-address")
    {
        if(ipv4_interface_address == nullptr)
        {
            ipv4_interface_address = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::Ipv4InterfaceAddress>();
        }
        return ipv4_interface_address;
    }

    if(child_yang_name == "ipv4-neighbor-address")
    {
        if(ipv4_neighbor_address == nullptr)
        {
            ipv4_neighbor_address = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::Ipv4NeighborAddress>();
        }
        return ipv4_neighbor_address;
    }

    if(child_yang_name == "max-link-bandwidth")
    {
        if(max_link_bandwidth == nullptr)
        {
            max_link_bandwidth = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::MaxLinkBandwidth>();
        }
        return max_link_bandwidth;
    }

    if(child_yang_name == "max-reservable-link-bandwidth")
    {
        if(max_reservable_link_bandwidth == nullptr)
        {
            max_reservable_link_bandwidth = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::MaxReservableLinkBandwidth>();
        }
        return max_reservable_link_bandwidth;
    }

    if(child_yang_name == "unreserved-bandwidth")
    {
        if(unreserved_bandwidth == nullptr)
        {
            unreserved_bandwidth = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::UnreservedBandwidth>();
        }
        return unreserved_bandwidth;
    }

    if(child_yang_name == "ipv6-interface-address")
    {
        if(ipv6_interface_address == nullptr)
        {
            ipv6_interface_address = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::Ipv6InterfaceAddress>();
        }
        return ipv6_interface_address;
    }

    if(child_yang_name == "ipv6-neighbor-address")
    {
        if(ipv6_neighbor_address == nullptr)
        {
            ipv6_neighbor_address = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::Ipv6NeighborAddress>();
        }
        return ipv6_neighbor_address;
    }

    if(child_yang_name == "extended-admin-group")
    {
        if(extended_admin_group == nullptr)
        {
            extended_admin_group = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::ExtendedAdminGroup>();
        }
        return extended_admin_group;
    }

    if(child_yang_name == "te-default-metric")
    {
        if(te_default_metric == nullptr)
        {
            te_default_metric = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::TeDefaultMetric>();
        }
        return te_default_metric;
    }

    if(child_yang_name == "link-attributes")
    {
        if(link_attributes == nullptr)
        {
            link_attributes = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkAttributes>();
        }
        return link_attributes;
    }

    if(child_yang_name == "link-protection-type")
    {
        if(link_protection_type == nullptr)
        {
            link_protection_type = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkProtectionType>();
        }
        return link_protection_type;
    }

    if(child_yang_name == "bandwidth-constraints")
    {
        if(bandwidth_constraints == nullptr)
        {
            bandwidth_constraints = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::BandwidthConstraints>();
        }
        return bandwidth_constraints;
    }

    if(child_yang_name == "unconstrained-lsp")
    {
        if(unconstrained_lsp == nullptr)
        {
            unconstrained_lsp = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::UnconstrainedLsp>();
        }
        return unconstrained_lsp;
    }

    if(child_yang_name == "adjacency-sids")
    {
        if(adjacency_sids == nullptr)
        {
            adjacency_sids = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::AdjacencySids>();
        }
        return adjacency_sids;
    }

    if(child_yang_name == "lan-adjacency-sids")
    {
        if(lan_adjacency_sids == nullptr)
        {
            lan_adjacency_sids = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LanAdjacencySids>();
        }
        return lan_adjacency_sids;
    }

    if(child_yang_name == "link-delay")
    {
        if(link_delay == nullptr)
        {
            link_delay = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkDelay>();
        }
        return link_delay;
    }

    if(child_yang_name == "min-max-link-delay")
    {
        if(min_max_link_delay == nullptr)
        {
            min_max_link_delay = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::MinMaxLinkDelay>();
        }
        return min_max_link_delay;
    }

    if(child_yang_name == "link-delay-variation")
    {
        if(link_delay_variation == nullptr)
        {
            link_delay_variation = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkDelayVariation>();
        }
        return link_delay_variation;
    }

    if(child_yang_name == "link-loss")
    {
        if(link_loss == nullptr)
        {
            link_loss = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::LinkLoss>();
        }
        return link_loss;
    }

    if(child_yang_name == "residual-bandwidth")
    {
        if(residual_bandwidth == nullptr)
        {
            residual_bandwidth = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::ResidualBandwidth>();
        }
        return residual_bandwidth;
    }

    if(child_yang_name == "available-bandwidth")
    {
        if(available_bandwidth == nullptr)
        {
            available_bandwidth = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::AvailableBandwidth>();
        }
        return available_bandwidth;
    }

    if(child_yang_name == "utilized-bandwidth")
    {
        if(utilized_bandwidth == nullptr)
        {
            utilized_bandwidth = std::make_shared<NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::UtilizedBandwidth>();
        }
        return utilized_bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state != nullptr)
    {
        _children["state"] = state;
    }

    if(admin_group != nullptr)
    {
        _children["admin-group"] = admin_group;
    }

    if(ipv4_interface_address != nullptr)
    {
        _children["ipv4-interface-address"] = ipv4_interface_address;
    }

    if(ipv4_neighbor_address != nullptr)
    {
        _children["ipv4-neighbor-address"] = ipv4_neighbor_address;
    }

    if(max_link_bandwidth != nullptr)
    {
        _children["max-link-bandwidth"] = max_link_bandwidth;
    }

    if(max_reservable_link_bandwidth != nullptr)
    {
        _children["max-reservable-link-bandwidth"] = max_reservable_link_bandwidth;
    }

    if(unreserved_bandwidth != nullptr)
    {
        _children["unreserved-bandwidth"] = unreserved_bandwidth;
    }

    if(ipv6_interface_address != nullptr)
    {
        _children["ipv6-interface-address"] = ipv6_interface_address;
    }

    if(ipv6_neighbor_address != nullptr)
    {
        _children["ipv6-neighbor-address"] = ipv6_neighbor_address;
    }

    if(extended_admin_group != nullptr)
    {
        _children["extended-admin-group"] = extended_admin_group;
    }

    if(te_default_metric != nullptr)
    {
        _children["te-default-metric"] = te_default_metric;
    }

    if(link_attributes != nullptr)
    {
        _children["link-attributes"] = link_attributes;
    }

    if(link_protection_type != nullptr)
    {
        _children["link-protection-type"] = link_protection_type;
    }

    if(bandwidth_constraints != nullptr)
    {
        _children["bandwidth-constraints"] = bandwidth_constraints;
    }

    if(unconstrained_lsp != nullptr)
    {
        _children["unconstrained-lsp"] = unconstrained_lsp;
    }

    if(adjacency_sids != nullptr)
    {
        _children["adjacency-sids"] = adjacency_sids;
    }

    if(lan_adjacency_sids != nullptr)
    {
        _children["lan-adjacency-sids"] = lan_adjacency_sids;
    }

    if(link_delay != nullptr)
    {
        _children["link-delay"] = link_delay;
    }

    if(min_max_link_delay != nullptr)
    {
        _children["min-max-link-delay"] = min_max_link_delay;
    }

    if(link_delay_variation != nullptr)
    {
        _children["link-delay-variation"] = link_delay_variation;
    }

    if(link_loss != nullptr)
    {
        _children["link-loss"] = link_loss;
    }

    if(residual_bandwidth != nullptr)
    {
        _children["residual-bandwidth"] = residual_bandwidth;
    }

    if(available_bandwidth != nullptr)
    {
        _children["available-bandwidth"] = available_bandwidth;
    }

    if(utilized_bandwidth != nullptr)
    {
        _children["utilized-bandwidth"] = utilized_bandwidth;
    }

    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "admin-group" || name == "ipv4-interface-address" || name == "ipv4-neighbor-address" || name == "max-link-bandwidth" || name == "max-reservable-link-bandwidth" || name == "unreserved-bandwidth" || name == "ipv6-interface-address" || name == "ipv6-neighbor-address" || name == "extended-admin-group" || name == "te-default-metric" || name == "link-attributes" || name == "link-protection-type" || name == "bandwidth-constraints" || name == "unconstrained-lsp" || name == "adjacency-sids" || name == "lan-adjacency-sids" || name == "link-delay" || name == "min-max-link-delay" || name == "link-delay-variation" || name == "link-loss" || name == "residual-bandwidth" || name == "available-bandwidth" || name == "utilized-bandwidth" || name == "type")
        return true;
    return false;
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::State::State()
    :
    type{YType::identityref, "type"}
{

    yang_name = "state"; yang_parent_name = "subtlv"; is_top_level_class = false; has_list_ancestor = true; 
}

NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::State::~State()
{
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::State::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set;
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::State::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::State::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::State::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::State::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::State::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::State::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::State::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::IsisNeighborAttribute::Neighbors::Neighbor::Subtlvs::Subtlv::State::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4InternalReachability::Prefixes::Prefixes_::DefaultMetric::State::Flags::INTERNAL {0, "INTERNAL"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv4ExternalReachability::Prefixes::Prefixes_::DefaultMetric::State::Flags::INTERNAL {0, "INTERNAL"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::CryptoType::HMAC_MD5 {0, "HMAC_MD5"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Authentication::State::CryptoType::CLEARTEXT {1, "CLEARTEXT"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::State::LocalProtection::LOCAL_PROTECTION {0, "LOCAL_PROTECTION"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkAttributes::State::LocalProtection::LINK_EXCLUDED {1, "LINK_EXCLUDED"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::State::LinkProtectionType_::EXTRA_TRAFFIC {0, "EXTRA_TRAFFIC"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::State::LinkProtectionType_::UNPROTECTED {1, "UNPROTECTED"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::State::LinkProtectionType_::SHARED {2, "SHARED"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::State::LinkProtectionType_::ONE_ONE {3, "ONE_ONE"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::State::LinkProtectionType_::PLUS_ONE {4, "PLUS_ONE"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LinkProtectionType::State::LinkProtectionType_::ENHANCED {5, "ENHANCED"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::State::Flags::ADDRESS_FAMILY {0, "ADDRESS_FAMILY"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::State::Flags::BACKUP {1, "BACKUP"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::State::Flags::VALUE {2, "VALUE"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::State::Flags::LOCAL {3, "LOCAL"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::AdjacencySids::AdjacencySid::State::Flags::SET {4, "SET"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::State::Flags::ADDRESS_FAMILY {0, "ADDRESS_FAMILY"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::State::Flags::BACKUP {1, "BACKUP"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::State::Flags::VALUE {2, "VALUE"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::State::Flags::LOCAL {3, "LOCAL"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIsReachability::Neighbors::Neighbors_::Subtlvs::Subtlv::LanAdjacencySids::LanAdjacencySid::State::Flags::SET {4, "SET"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State::Flags_::EXTERNAL_FLAG {0, "EXTERNAL_FLAG"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State::Flags_::READVERTISEMENT_FLAG {1, "READVERTISEMENT_FLAG"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::Flags::State::Flags_::NODE_FLAG {2, "NODE_FLAG"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::Flags::READVERTISEMENT {0, "READVERTISEMENT"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::Flags::NODE {1, "NODE"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::Flags::PHP {2, "PHP"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::Flags::EXPLICIT_NULL {3, "EXPLICIT_NULL"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::Flags::VALUE {4, "VALUE"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::ExtendedIpv4Reachability::Prefixes::Prefix::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::Flags::LOCAL {5, "LOCAL"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::State::Flags_::EXTERNAL_FLAG {0, "EXTERNAL_FLAG"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::State::Flags_::READVERTISEMENT_FLAG {1, "READVERTISEMENT_FLAG"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::Flags::State::Flags_::NODE_FLAG {2, "NODE_FLAG"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::Flags::READVERTISEMENT {0, "READVERTISEMENT"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::Flags::NODE {1, "NODE"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::Flags::PHP {2, "PHP"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::Flags::EXPLICIT_NULL {3, "EXPLICIT_NULL"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::Flags::VALUE {4, "VALUE"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::Ipv6Reachability::Prefixes::Prefixes_::Subtlvs::Subtlv::PrefixSids::PrefixSid::State::Flags::LOCAL {5, "LOCAL"};

const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::State::Attributes::OVERLOAD {0, "OVERLOAD"};
const Enum::YLeaf NetworkInstances::NetworkInstance::Protocols::Protocol::Isis::Levels::Level::LinkStateDatabase::Lsp::Tlvs::Tlv::MultiTopology::Topologies::Topology::State::Attributes::ATTACHED {1, "ATTACHED"};


}
}

